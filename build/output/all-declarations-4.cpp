#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-4.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionAST::GALGAS_syncInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_syncInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_syncInstructionBranchListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionAST::GALGAS_syncInstructionAST (const cPtr_syncInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionAST::getter_mBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionAST * p = (const cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    result = p->mProperty_mBranchList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST cPtr_syncInstructionAST::getter_mBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranchList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_syncInstructionAST::getter_mEndOf_5F_on_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionAST * p = (const cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    result = p->mProperty_mEndOf_5F_on_5F_instruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_syncInstructionAST::getter_mEndOf_5F_on_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_on_5F_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @syncInstructionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_syncInstructionAST::cPtr_syncInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                                                  const GALGAS_location & in_mEndOf_5F_on_5F_instruction
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mBranchList (in_mBranchList),
mProperty_mEndOf_5F_on_5F_instruction (in_mEndOf_5F_on_5F_instruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_syncInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncInstructionAST (mProperty_mInstructionLocation, mProperty_mBranchList, mProperty_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @syncInstructionAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionAST ("syncInstructionAST",
                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_syncInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_syncInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_guardedCommandIR_booleanGuard::cEnumAssociatedValues_guardedCommandIR_booleanGuard (const GALGAS_bool & inAssociatedValue0,
                                                                                                          const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                                          const GALGAS_objectIR & inAssociatedValue2
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_guardedCommandIR_booleanGuard::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_guardedCommandIR_sync::cEnumAssociatedValues_guardedCommandIR_sync (const GALGAS_bool & inAssociatedValue0,
                                                                                          const GALGAS_string & inAssociatedValue1,
                                                                                          const GALGAS_instructionListIR & inAssociatedValue2,
                                                                                          const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_guardedCommandIR_sync::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_guardedCommandIR_sync::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandIR_sync * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandIR_sync *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_guardedCommandIR_boolAndSync::cEnumAssociatedValues_guardedCommandIR_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                                                        const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                                        const GALGAS_objectIR & inAssociatedValue2,
                                                                                                        const GALGAS_string & inAssociatedValue3,
                                                                                                        const GALGAS_instructionListIR & inAssociatedValue4,
                                                                                                        const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue5
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4),
mAssociatedValue5 (inAssociatedValue5) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_guardedCommandIR_boolAndSync::description (C_String & ioString,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIR::GALGAS_guardedCommandIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::constructor_sync (const GALGAS_bool & inAssociatedValue0,
                                                                   const GALGAS_string & inAssociatedValue1,
                                                                   const GALGAS_instructionListIR & inAssociatedValue2,
                                                                   const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_sync ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandIR_sync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::constructor_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                          const GALGAS_instructionListIR & inAssociatedValue1,
                                                                          const GALGAS_objectIR & inAssociatedValue2,
                                                                          const GALGAS_string & inAssociatedValue3,
                                                                          const GALGAS_instructionListIR & inAssociatedValue4,
                                                                          const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue5
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid () && inAssociatedValue5.isValid ()) {
    result.mEnum = kEnum_boolAndSync ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandIR_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIR::method_sync (GALGAS_bool & outAssociatedValue0,
                                           GALGAS_string & outAssociatedValue1,
                                           GALGAS_instructionListIR & outAssociatedValue2,
                                           GALGAS_procCallEffectiveParameterListIR & outAssociatedValue3,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_sync) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @guardedCommandIR sync invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandIR_sync * ptr = (const cEnumAssociatedValues_guardedCommandIR_sync *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIR::method_boolAndSync (GALGAS_bool & outAssociatedValue0,
                                                  GALGAS_instructionListIR & outAssociatedValue1,
                                                  GALGAS_objectIR & outAssociatedValue2,
                                                  GALGAS_string & outAssociatedValue3,
                                                  GALGAS_instructionListIR & outAssociatedValue4,
                                                  GALGAS_procCallEffectiveParameterListIR & outAssociatedValue5,
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
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_guardedCommandIR [4] = {
  "(not built)",
  "booleanGuard",
  "sync",
  "boolAndSync"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardedCommandIR::getter_isBooleanGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_booleanGuard == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardedCommandIR::getter_isSync (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sync == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardedCommandIR::getter_isBoolAndSync (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolAndSync == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @guardedCommandIR: " << gEnumNameArrayFor_guardedCommandIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @guardedCommandIR type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardedCommandIR ("guardedCommandIR",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardedCommandIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardedCommandIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@syncInstructionBranchListIR' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_syncInstructionBranchListIR::cCollectionElement_syncInstructionBranchListIR (const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                                                                const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionGenerationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_syncInstructionBranchListIR::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_syncInstructionBranchListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchListIR (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionGenerationList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_syncInstructionBranchListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syncInstructionBranchListIR * operand = (cCollectionElement_syncInstructionBranchListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syncInstructionBranchListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListIR::GALGAS_syncInstructionBranchListIR (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListIR::GALGAS_syncInstructionBranchListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListIR  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListIR::plusAssign_operation (const GALGAS_syncInstructionBranchListIR inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_syncInstructionBranchListIR::cEnumerator_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListIR_2D_element cEnumerator_syncInstructionBranchListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIR cEnumerator_syncInstructionBranchListIR::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cEnumerator_syncInstructionBranchListIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject.mProperty_mInstructionGenerationList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @syncInstructionBranchListIR type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchListIR ("syncInstructionBranchListIR",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_syncInstructionBranchListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@guardedCommandIRList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_guardedCommandIRList : public cCollectionElement {
  public : GALGAS_guardedCommandIRList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_guardedCommandIRList (const GALGAS_guardedCommandIR & in_mGuardedCommand
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_guardedCommandIRList::cCollectionElement_guardedCommandIRList (const GALGAS_guardedCommandIR & in_mGuardedCommand
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_guardedCommandIRList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_guardedCommandIRList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guardedCommandIRList (mObject.mProperty_mGuardedCommand COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_guardedCommandIRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardedCommand" ":" ;
  mObject.mProperty_mGuardedCommand.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_guardedCommandIRList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guardedCommandIRList * operand = (cCollectionElement_guardedCommandIRList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guardedCommandIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIRList::GALGAS_guardedCommandIRList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIRList::GALGAS_guardedCommandIRList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guardedCommandIRList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::constructor_listWithValue (const GALGAS_guardedCommandIR & inOperand0
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIRList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_guardedCommandIRList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_guardedCommandIRList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_guardedCommandIR & in_mGuardedCommand
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_guardedCommandIRList * p = NULL ;
  macroMyNew (p, cCollectionElement_guardedCommandIRList (in_mGuardedCommand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIRList::addAssign_operation (const GALGAS_guardedCommandIR & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guardedCommandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIRList::setter_insertAtIndex (const GALGAS_guardedCommandIR inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guardedCommandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIRList::setter_removeAtIndex (GALGAS_guardedCommandIR & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
      outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIRList::setter_popFirst (GALGAS_guardedCommandIR & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIRList::setter_popLast (GALGAS_guardedCommandIR & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIRList::method_first (GALGAS_guardedCommandIR & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIRList::method_last (GALGAS_guardedCommandIR & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::add_operation (const GALGAS_guardedCommandIRList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result = GALGAS_guardedCommandIRList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result = GALGAS_guardedCommandIRList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result = GALGAS_guardedCommandIRList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardedCommandIRList::plusAssign_operation (const GALGAS_guardedCommandIRList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIR GALGAS_guardedCommandIRList::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  GALGAS_guardedCommandIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_guardedCommandIRList::cEnumerator_guardedCommandIRList (const GALGAS_guardedCommandIRList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIRList_2D_element cEnumerator_guardedCommandIRList::current (LOCATION_ARGS) const {
  const cCollectionElement_guardedCommandIRList * p = (const cCollectionElement_guardedCommandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIR cEnumerator_guardedCommandIRList::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_guardedCommandIRList * p = (const cCollectionElement_guardedCommandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
  return p->mObject.mProperty_mGuardedCommand ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @guardedCommandIRList type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardedCommandIRList ("guardedCommandIRList",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardedCommandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIRList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardedCommandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandIRList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIRList result ;
  const GALGAS_guardedCommandIRList * p = (const GALGAS_guardedCommandIRList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardedCommandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_syncInstructionIR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_syncInstructionBranchListIR::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (const cPtr_syncInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::constructor_new (const GALGAS_location & inAttribute_mSelectInstructionLocation,
                                                                    const GALGAS_syncInstructionBranchListIR & inAttribute_mOnInstructionBranchListIR
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR result ;
  if (inAttribute_mSelectInstructionLocation.isValid () && inAttribute_mOnInstructionBranchListIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncInstructionIR (inAttribute_mSelectInstructionLocation, inAttribute_mOnInstructionBranchListIR COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_syncInstructionIR::getter_mSelectInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionIR * p = (const cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    result = p->mProperty_mSelectInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_syncInstructionIR::getter_mSelectInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionIR::getter_mOnInstructionBranchListIR (UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionIR * p = (const cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    result = p->mProperty_mOnInstructionBranchListIR ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListIR cPtr_syncInstructionIR::getter_mOnInstructionBranchListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOnInstructionBranchListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @syncInstructionIR class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_syncInstructionIR::cPtr_syncInstructionIR (const GALGAS_location & in_mSelectInstructionLocation,
                                                const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mSelectInstructionLocation (in_mSelectInstructionLocation),
mProperty_mOnInstructionBranchListIR (in_mOnInstructionBranchListIR) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_syncInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncInstructionIR (mProperty_mSelectInstructionLocation, mProperty_mOnInstructionBranchListIR COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @syncInstructionIR type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionIR ("syncInstructionIR",
                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_syncInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_syncInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (const cPtr_whileInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_whileInstructionAST::getter_m_5F_while_5F_Expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mProperty_m_5F_while_5F_Expression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_whileInstructionAST::getter_m_5F_while_5F_Expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_while_5F_Expression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_whileInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mProperty_mEndOf_5F_test_5F_expression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_whileInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_test_5F_expression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_whileInstructionAST::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mProperty_mWhileInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cPtr_whileInstructionAST::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_whileInstructionAST::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mProperty_mEndOf_5F_while_5F_instruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_whileInstructionAST::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_while_5F_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @whileInstructionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_whileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_whileInstructionAST (mProperty_mInstructionLocation, mProperty_m_5F_while_5F_Expression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mWhileInstructionList, mProperty_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @whileInstructionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_whileInstructionAST ("whileInstructionAST",
                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_whileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_whileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (const cPtr_whileInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_whileInstructionIR::getter_mLabelIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mProperty_mLabelIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_whileInstructionIR::getter_mLabelIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_whileInstructionIR::getter_mTestInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mProperty_mTestInstructionGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_whileInstructionIR::getter_mTestInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTestInstructionGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_whileInstructionIR::getter_m_5F_while_5F_Expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mProperty_m_5F_while_5F_Expression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_whileInstructionIR::getter_m_5F_while_5F_Expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_while_5F_Expression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_whileInstructionIR::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mProperty_mInstructionGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_whileInstructionIR::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @whileInstructionIR class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_whileInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_whileInstructionIR (mProperty_mLabelIndex, mProperty_mTestInstructionGenerationList, mProperty_m_5F_while_5F_Expression, mProperty_mInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @whileInstructionIR type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_whileInstructionIR ("whileInstructionIR",
                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_whileInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_whileInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionOnStringIR::GALGAS_forInstructionOnStringIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionOnStringIR::GALGAS_forInstructionOnStringIR (const cPtr_forInstructionOnStringIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnStringIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_forInstructionOnStringIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_forInstructionOnStringIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionOnStringIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionOnStringIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_forInstructionOnStringIR::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mIteratedObject ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_forInstructionOnStringIR::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_forInstructionOnStringIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mWhileInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_forInstructionOnStringIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_forInstructionOnStringIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mWhileExpressionResult ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_forInstructionOnStringIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpressionResult ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_forInstructionOnStringIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_forInstructionOnStringIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @forInstructionOnStringIR class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_forInstructionOnStringIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionOnStringIR (mProperty_mVarName, mProperty_mLocation, mProperty_mIteratedObject, mProperty_mWhileInstructionList, mProperty_mWhileExpressionResult, mProperty_mDoInstructionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @forInstructionOnStringIR type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionOnStringIR ("forInstructionOnStringIR",
                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forInstructionOnStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnStringIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forInstructionOnStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnStringIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@accessInAssignmentListAST' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_accessInAssignmentListAST::cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentAST & in_mAccess
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAccess) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_accessInAssignmentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_accessInAssignmentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_accessInAssignmentListAST (mObject.mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_accessInAssignmentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccess" ":" ;
  mObject.mProperty_mAccess.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_accessInAssignmentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_accessInAssignmentListAST * operand = (cCollectionElement_accessInAssignmentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_accessInAssignmentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentListAST::GALGAS_accessInAssignmentListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentListAST::GALGAS_accessInAssignmentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_accessInAssignmentListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_accessInAssignmentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_accessInAssignmentAST & in_mAccess
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_accessInAssignmentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_accessInAssignmentListAST (in_mAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_accessInAssignmentListAST::plusAssign_operation (const GALGAS_accessInAssignmentListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_accessInAssignmentListAST::cEnumerator_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentListAST_2D_element cEnumerator_accessInAssignmentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListAST * p = (const cCollectionElement_accessInAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentAST cEnumerator_accessInAssignmentListAST::current_mAccess (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListAST * p = (const cCollectionElement_accessInAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
  return p->mObject.mProperty_mAccess ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @accessInAssignmentListAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessInAssignmentListAST ("accessInAssignmentListAST",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_accessInAssignmentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_accessInAssignmentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_effectiveArgumentPassingModeAST_input::cEnumAssociatedValues_effectiveArgumentPassingModeAST_input (const GALGAS_lstring & inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_input::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_input::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType::cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType (const GALGAS_bool & inAssociatedValue0,
                                                                                                                                          const GALGAS_lstring & inAssociatedValue1,
                                                                                                                                          const GALGAS_lstring & inAssociatedValue2
                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_effectiveArgumentPassingModeAST_output::cEnumAssociatedValues_effectiveArgumentPassingModeAST_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                                            const GALGAS_location & inAssociatedValue1
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_output::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput::cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable::cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable::description (C_String & ioString,
                                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentPassingModeAST::GALGAS_effectiveArgumentPassingModeAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_effectiveArgumentPassingModeAST [6] = {
  "(not built)",
  "input",
  "inputWithType",
  "output",
  "outputInput",
  "outputInputSelfVariable"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isInputWithType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_inputWithType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInput == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isOutputInputSelfVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInputSelfVariable == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentPassingModeAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<enum @effectiveArgumentPassingModeAST: " << gEnumNameArrayFor_effectiveArgumentPassingModeAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @effectiveArgumentPassingModeAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ("effectiveArgumentPassingModeAST",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@procEffectiveParameterList' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_procEffectiveParameterList::cCollectionElement_procEffectiveParameterList (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                              const GALGAS_lstring & in_mSelector,
                                                                                              const GALGAS_PLMType & in_mParameterType
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mSelector, in_mParameterType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_procEffectiveParameterList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_procEffectiveParameterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procEffectiveParameterList (mObject.mProperty_mEffectiveParameterPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mParameterType COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_procEffectiveParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procEffectiveParameterList * operand = (cCollectionElement_procEffectiveParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procEffectiveParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_procEffectiveParameterList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_procEffectiveParameterList::plusAssign_operation (const GALGAS_procEffectiveParameterList inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_procEffectiveParameterList::cEnumerator_procEffectiveParameterList (const GALGAS_procEffectiveParameterList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList_2D_element cEnumerator_procEffectiveParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentPassingModeAST cEnumerator_procEffectiveParameterList::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mEffectiveParameterPassingMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_procEffectiveParameterList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mSelector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_procEffectiveParameterList::current_mParameterType (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mParameterType ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @procEffectiveParameterList type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterList ("procEffectiveParameterList",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_procEffectiveParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterPassingModeIR::GALGAS_procEffectiveParameterPassingModeIR (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::constructor_input (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_input ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::constructor_output (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_output ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_outputInput ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_procEffectiveParameterPassingModeIR [4] = {
  "(not built)",
  "input",
  "output",
  "outputInput"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInput == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_procEffectiveParameterPassingModeIR::description (C_String & ioString,
                                                              const int32_t /* inIndentation */) const {
  ioString << "<enum @procEffectiveParameterPassingModeIR: " << gEnumNameArrayFor_procEffectiveParameterPassingModeIR [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @procEffectiveParameterPassingModeIR type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ("procEffectiveParameterPassingModeIR",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterPassingModeIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_procEffectiveParameterPassingModeIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterPassingModeIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Class for element of '@procCallEffectiveParameterListIR' list                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_procCallEffectiveParameterListIR::cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                                                          const GALGAS_objectIR & in_mParameter
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mParameter) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_procCallEffectiveParameterListIR::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_procCallEffectiveParameterListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procCallEffectiveParameterListIR (mObject.mProperty_mEffectiveParameterPassingMode, mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_procCallEffectiveParameterListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procCallEffectiveParameterListIR * operand = (cCollectionElement_procCallEffectiveParameterListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procCallEffectiveParameterListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_procCallEffectiveParameterListIR  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_procCallEffectiveParameterListIR::plusAssign_operation (const GALGAS_procCallEffectiveParameterListIR inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_procCallEffectiveParameterListIR::cEnumerator_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallEffectiveParameterListIR_2D_element cEnumerator_procCallEffectiveParameterListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterPassingModeIR cEnumerator_procCallEffectiveParameterListIR::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mProperty_mEffectiveParameterPassingMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cEnumerator_procCallEffectiveParameterListIR::current_mParameter (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mProperty_mParameter ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @procCallEffectiveParameterListIR type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ("procCallEffectiveParameterListIR",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_procCallEffectiveParameterListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_procCallEffectiveParameterListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallEffectiveParameterListIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_calleeKindIR::GALGAS_calleeKindIR (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_calleeKindIR GALGAS_calleeKindIR::constructor_function (UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result ;
  result.mEnum = kEnum_function ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_calleeKindIR GALGAS_calleeKindIR::constructor_primitiveFromProcessorUserMode (UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result ;
  result.mEnum = kEnum_primitiveFromProcessorUserMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_calleeKindIR GALGAS_calleeKindIR::constructor_sectionFromProcessorUserMode (UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result ;
  result.mEnum = kEnum_sectionFromProcessorUserMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_calleeKindIR GALGAS_calleeKindIR::constructor_serviceFromProcessorUserMode (UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result ;
  result.mEnum = kEnum_serviceFromProcessorUserMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_calleeKindIR GALGAS_calleeKindIR::constructor_primitiveFromProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result ;
  result.mEnum = kEnum_primitiveFromProcessorPrivilegedMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_calleeKindIR GALGAS_calleeKindIR::constructor_sectionFromProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result ;
  result.mEnum = kEnum_sectionFromProcessorPrivilegedMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_calleeKindIR GALGAS_calleeKindIR::constructor_serviceFromProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result ;
  result.mEnum = kEnum_serviceFromProcessorPrivilegedMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_calleeKindIR [8] = {
  "(not built)",
  "function",
  "primitiveFromProcessorUserMode",
  "sectionFromProcessorUserMode",
  "serviceFromProcessorUserMode",
  "primitiveFromProcessorPrivilegedMode",
  "sectionFromProcessorPrivilegedMode",
  "serviceFromProcessorPrivilegedMode"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_calleeKindIR::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_calleeKindIR::getter_isPrimitiveFromProcessorUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitiveFromProcessorUserMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_calleeKindIR::getter_isSectionFromProcessorUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sectionFromProcessorUserMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_calleeKindIR::getter_isServiceFromProcessorUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_serviceFromProcessorUserMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_calleeKindIR::getter_isPrimitiveFromProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitiveFromProcessorPrivilegedMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_calleeKindIR::getter_isSectionFromProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sectionFromProcessorPrivilegedMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_calleeKindIR::getter_isServiceFromProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_serviceFromProcessorPrivilegedMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_calleeKindIR::description (C_String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @calleeKindIR: " << gEnumNameArrayFor_calleeKindIR [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_calleeKindIR::objectCompare (const GALGAS_calleeKindIR & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @calleeKindIR type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_calleeKindIR ("calleeKindIR",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_calleeKindIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_calleeKindIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_calleeKindIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_calleeKindIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_calleeKindIR GALGAS_calleeKindIR::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_calleeKindIR result ;
  const GALGAS_calleeKindIR * p = (const GALGAS_calleeKindIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_calleeKindIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("calleeKindIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@switchCaseListAST' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_switchCaseListAST : public cCollectionElement {
  public : GALGAS_switchCaseListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_switchCaseListAST (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                 const GALGAS_instructionListAST & in_mCaseInstructionList
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_switchCaseListAST::cCollectionElement_switchCaseListAST (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                                            const GALGAS_instructionListAST & in_mCaseInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifiers, in_mCaseInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_switchCaseListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_switchCaseListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchCaseListAST (mObject.mProperty_mCaseIdentifiers, mObject.mProperty_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_switchCaseListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseIdentifiers" ":" ;
  mObject.mProperty_mCaseIdentifiers.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseInstructionList" ":" ;
  mObject.mProperty_mCaseInstructionList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_switchCaseListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchCaseListAST * operand = (cCollectionElement_switchCaseListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchCaseListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST::GALGAS_switchCaseListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST::GALGAS_switchCaseListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                              const GALGAS_instructionListAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_switchCaseListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchCaseListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                          const GALGAS_instructionListAST & in_mCaseInstructionList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_switchCaseListAST (in_mCaseIdentifiers,
                                                       in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseListAST::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                    const GALGAS_instructionListAST & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseListAST::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                     const GALGAS_instructionListAST inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseListAST::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                     GALGAS_instructionListAST & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
      outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
      outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseListAST::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                                GALGAS_instructionListAST & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseListAST::setter_popLast (GALGAS_lstringlist & outOperand0,
                                               GALGAS_instructionListAST & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseListAST::method_first (GALGAS_lstringlist & outOperand0,
                                             GALGAS_instructionListAST & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseListAST::method_last (GALGAS_lstringlist & outOperand0,
                                            GALGAS_instructionListAST & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::add_operation (const GALGAS_switchCaseListAST & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result = GALGAS_switchCaseListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result = GALGAS_switchCaseListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result = GALGAS_switchCaseListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseListAST::plusAssign_operation (const GALGAS_switchCaseListAST inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_switchCaseListAST::getter_mCaseIdentifiersAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    result = p->mObject.mProperty_mCaseIdentifiers ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_switchCaseListAST::getter_mCaseInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    result = p->mObject.mProperty_mCaseInstructionList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_switchCaseListAST::cEnumerator_switchCaseListAST (const GALGAS_switchCaseListAST & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST_2D_element cEnumerator_switchCaseListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_switchCaseListAST::current_mCaseIdentifiers (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject.mProperty_mCaseIdentifiers ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cEnumerator_switchCaseListAST::current_mCaseInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject.mProperty_mCaseInstructionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @switchCaseListAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchCaseListAST ("switchCaseListAST",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_switchCaseListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_switchCaseListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListAST result ;
  const GALGAS_switchCaseListAST * p = (const GALGAS_switchCaseListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchCaseListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_switchInstructionAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mSwitchExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_switchInstructionAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_switchInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mEndOf_5F_test_5F_expression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_switchInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_test_5F_expression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST GALGAS_switchInstructionAST::getter_mSwitchCaseList (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mSwitchCaseList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListAST cPtr_switchInstructionAST::getter_mSwitchCaseList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchCaseList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_switchInstructionAST::getter_mEndOf_5F_switch_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_switchInstructionAST::getter_mEndOf_5F_switch_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_switch_5F_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @switchInstructionAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_switchInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mSwitchCaseList, mProperty_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @switchInstructionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                             & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@switchCaseListIR' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_switchCaseListIR::cCollectionElement_switchCaseListIR (const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                                                          const GALGAS_instructionListIR & in_mCaseInstructionList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifierIndexes, in_mCaseInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_switchCaseListIR::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_switchCaseListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchCaseListIR (mObject.mProperty_mCaseIdentifierIndexes, mObject.mProperty_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_switchCaseListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchCaseListIR * operand = (cCollectionElement_switchCaseListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchCaseListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListIR::GALGAS_switchCaseListIR (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListIR::GALGAS_switchCaseListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListIR  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseListIR::plusAssign_operation (const GALGAS_switchCaseListIR inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_switchCaseListIR::cEnumerator_switchCaseListIR (const GALGAS_switchCaseListIR & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListIR_2D_element cEnumerator_switchCaseListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uintlist cEnumerator_switchCaseListIR::current_mCaseIdentifierIndexes (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject.mProperty_mCaseIdentifierIndexes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cEnumerator_switchCaseListIR::current_mCaseInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject.mProperty_mCaseInstructionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @switchCaseListIR type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchCaseListIR ("switchCaseListIR",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_switchCaseListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_switchCaseListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseListIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchInstructionIR::GALGAS_switchInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchInstructionIR::GALGAS_switchInstructionIR (const cPtr_switchInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_switchInstructionIR::getter_mLabelIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionIR * p = (const cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    result = p->mProperty_mLabelIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_switchInstructionIR::getter_mLabelIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_switchInstructionIR::getter_mSwitchExpressionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionIR * p = (const cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    result = p->mProperty_mSwitchExpressionGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_switchInstructionIR::getter_mSwitchExpressionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpressionGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_switchInstructionIR::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionIR * p = (const cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    result = p->mProperty_mSwitchExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_switchInstructionIR::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListIR GALGAS_switchInstructionIR::getter_mCaseGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionIR * p = (const cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    result = p->mProperty_mCaseGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseListIR cPtr_switchInstructionIR::getter_mCaseGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @switchInstructionIR class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_switchInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstructionIR (mProperty_mLabelIndex, mProperty_mSwitchExpressionGenerationList, mProperty_mSwitchExpression, mProperty_mCaseGenerationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @switchInstructionIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionIR ("switchInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_switchInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_switchInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_accessInAssignmentAST_property::cEnumAssociatedValues_accessInAssignmentAST_property (const GALGAS_lstring & inAssociatedValue0
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_accessInAssignmentAST_property::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_accessInAssignmentAST_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_accessInAssignmentAST_property * ptr = dynamic_cast<const cEnumAssociatedValues_accessInAssignmentAST_property *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentAST::GALGAS_accessInAssignmentAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_accessInAssignmentAST [3] = {
  "(not built)",
  "property",
  "arrayAccess"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_accessInAssignmentAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_accessInAssignmentAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayAccess == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_accessInAssignmentAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @accessInAssignmentAST: " << gEnumNameArrayFor_accessInAssignmentAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @accessInAssignmentAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessInAssignmentAST ("accessInAssignmentAST",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_accessInAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_accessInAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_registerGroupIndexAST_index::cEnumAssociatedValues_registerGroupIndexAST_index (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                      const GALGAS_location & inAssociatedValue1
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_registerGroupIndexAST_index::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_registerGroupIndexAST_index::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerGroupIndexAST_index * ptr = dynamic_cast<const cEnumAssociatedValues_registerGroupIndexAST_index *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupIndexAST::GALGAS_registerGroupIndexAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupIndexAST GALGAS_registerGroupIndexAST::constructor_noIndex (UNUSED_LOCATION_ARGS) {
  GALGAS_registerGroupIndexAST result ;
  result.mEnum = kEnum_noIndex ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupIndexAST GALGAS_registerGroupIndexAST::constructor_index (const GALGAS_expressionAST & inAssociatedValue0,
                                                                              const GALGAS_location & inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupIndexAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_index ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_registerGroupIndexAST_index (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupIndexAST::method_index (GALGAS_expressionAST & outAssociatedValue0,
                                                 GALGAS_location & outAssociatedValue1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_index) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @registerGroupIndexAST index invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerGroupIndexAST_index * ptr = (const cEnumAssociatedValues_registerGroupIndexAST_index *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_registerGroupIndexAST [3] = {
  "(not built)",
  "noIndex",
  "index"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_registerGroupIndexAST::getter_isNoIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noIndex == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_registerGroupIndexAST::getter_isIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_index == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupIndexAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @registerGroupIndexAST: " << gEnumNameArrayFor_registerGroupIndexAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_registerGroupIndexAST::objectCompare (const GALGAS_registerGroupIndexAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @registerGroupIndexAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerGroupIndexAST ("registerGroupIndexAST",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_registerGroupIndexAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupIndexAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_registerGroupIndexAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupIndexAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupIndexAST GALGAS_registerGroupIndexAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupIndexAST result ;
  const GALGAS_registerGroupIndexAST * p = (const GALGAS_registerGroupIndexAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerGroupIndexAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupIndexAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_registerIndexAST_index::cEnumAssociatedValues_registerIndexAST_index (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                            const GALGAS_location & inAssociatedValue1
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_registerIndexAST_index::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_registerIndexAST_index::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerIndexAST_index * ptr = dynamic_cast<const cEnumAssociatedValues_registerIndexAST_index *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIndexAST::GALGAS_registerIndexAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIndexAST GALGAS_registerIndexAST::constructor_noIndex (UNUSED_LOCATION_ARGS) {
  GALGAS_registerIndexAST result ;
  result.mEnum = kEnum_noIndex ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIndexAST GALGAS_registerIndexAST::constructor_index (const GALGAS_expressionAST & inAssociatedValue0,
                                                                    const GALGAS_location & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerIndexAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_index ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_registerIndexAST_index (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerIndexAST::method_index (GALGAS_expressionAST & outAssociatedValue0,
                                            GALGAS_location & outAssociatedValue1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_index) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @registerIndexAST index invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerIndexAST_index * ptr = (const cEnumAssociatedValues_registerIndexAST_index *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_registerIndexAST [3] = {
  "(not built)",
  "noIndex",
  "index"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_registerIndexAST::getter_isNoIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noIndex == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_registerIndexAST::getter_isIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_index == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerIndexAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @registerIndexAST: " << gEnumNameArrayFor_registerIndexAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_registerIndexAST::objectCompare (const GALGAS_registerIndexAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @registerIndexAST type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIndexAST ("registerIndexAST",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_registerIndexAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIndexAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_registerIndexAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIndexAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIndexAST GALGAS_registerIndexAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerIndexAST result ;
  const GALGAS_registerIndexAST * p = (const GALGAS_registerIndexAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIndexAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIndexAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Extension Getter '@effectiveArgumentPassingModeAST matchingFormalArgument'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_matchingFormalArgument (const GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_effectiveArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
    {
      result_result = GALGAS_string ("\?!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
    {
      result_result = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Abstract extension getter '@abstractDeclarationAST location'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_location> gExtensionGetterTable_abstractDeclarationAST_location ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractDeclarationAST_location inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_location.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractDeclarationAST_location (void) {
  gExtensionGetterTable_abstractDeclarationAST_location.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractDeclarationAST_location (NULL,
                                                            freeExtensionGetter_abstractDeclarationAST_location) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location callExtensionGetter_location (const cPtr_abstractDeclarationAST * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclarationAST_location f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclarationAST_location.count ()) {
      f = gExtensionGetterTable_abstractDeclarationAST_location (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclarationAST_location.count ()) {
           f = gExtensionGetterTable_abstractDeclarationAST_location (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclarationAST_location.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@declarationListAST' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_declarationListAST : public cCollectionElement {
  public : GALGAS_declarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mDeclaration
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mDeclaration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_declarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_declarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_declarationListAST (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_declarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_declarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationListAST * operand = (cCollectionElement_declarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST::GALGAS_declarationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST::GALGAS_declarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::constructor_listWithValue (const GALGAS_abstractDeclarationAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractDeclarationAST & in_mDeclaration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_declarationListAST (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::addAssign_operation (const GALGAS_abstractDeclarationAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_insertAtIndex (const GALGAS_abstractDeclarationAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_removeAtIndex (GALGAS_abstractDeclarationAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_popFirst (GALGAS_abstractDeclarationAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_popLast (GALGAS_abstractDeclarationAST & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::method_first (GALGAS_abstractDeclarationAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::method_last (GALGAS_abstractDeclarationAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::add_operation (const GALGAS_declarationListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::plusAssign_operation (const GALGAS_declarationListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST GALGAS_declarationListAST::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  GALGAS_abstractDeclarationAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_declarationListAST::cEnumerator_declarationListAST (const GALGAS_declarationListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element cEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST cEnumerator_declarationListAST::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject.mProperty_mDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @declarationListAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationListAST ("declarationListAST",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_declarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_declarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  const GALGAS_declarationListAST * p = (const GALGAS_declarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@checkTargetListAST' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_checkTargetListAST : public cCollectionElement {
  public : GALGAS_checkTargetListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_checkTargetListAST (const GALGAS_location & in_mTargetConstructLocation,
                                                  const GALGAS_lstringlist & in_mAcceptedTargetList
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_checkTargetListAST::cCollectionElement_checkTargetListAST (const GALGAS_location & in_mTargetConstructLocation,
                                                                              const GALGAS_lstringlist & in_mAcceptedTargetList
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetConstructLocation, in_mAcceptedTargetList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_checkTargetListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_checkTargetListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_checkTargetListAST (mObject.mProperty_mTargetConstructLocation, mObject.mProperty_mAcceptedTargetList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_checkTargetListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_checkTargetListAST * operand = (cCollectionElement_checkTargetListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_checkTargetListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST::GALGAS_checkTargetListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST::GALGAS_checkTargetListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_checkTargetListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::addAssign_operation (const GALGAS_location & inOperand0,
                                                     const GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                      const GALGAS_lstringlist inOperand1,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                      GALGAS_lstringlist & outOperand1,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::plusAssign_operation (const GALGAS_checkTargetListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_checkTargetListAST::cEnumerator_checkTargetListAST (const GALGAS_checkTargetListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST_2D_element cEnumerator_checkTargetListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_checkTargetListAST::current_mTargetConstructLocation (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mTargetConstructLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_checkTargetListAST::current_mAcceptedTargetList (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mAcceptedTargetList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @checkTargetListAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkTargetListAST ("checkTargetListAST",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_checkTargetListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkTargetListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_checkTargetListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkTargetListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast::GALGAS_ast (void) :
mProperty_mDeclarationListAST (),
mProperty_mExtensionDeclarationListAST (),
mProperty_mExtendStaticArrayDeclarationAST (),
mProperty_mStandAloneFunctionDeclarationListAST (),
mProperty_mRequiredProcListAST (),
mProperty_mExternProcListAST (),
mProperty_mISRDeclarationListAST (),
mProperty_mStandAloneSystemRoutineListAST (),
mProperty_mTargetListAST (),
mProperty_mTaskListAST (),
mProperty_mCheckTargetListAST (),
mProperty_mDriverDeclarationListAST (),
mProperty_mRequiredDriverListAST (),
mProperty_mTypeDeclarationIndex (),
mProperty_mControlRegisterUserAccesMapAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast::~ GALGAS_ast (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast::GALGAS_ast (const GALGAS_declarationListAST & inOperand0,
                        const GALGAS_extensionDeclarationListAST & inOperand1,
                        const GALGAS_extendStaticArrayDeclarationAST & inOperand2,
                        const GALGAS_functionDeclarationListAST & inOperand3,
                        const GALGAS_requiredProcedureDeclarationListAST & inOperand4,
                        const GALGAS_externProcedureDeclarationListAST & inOperand5,
                        const GALGAS_isrDeclarationListAST & inOperand6,
                        const GALGAS_systemRoutineDeclarationListAST & inOperand7,
                        const GALGAS_lstringlist & inOperand8,
                        const GALGAS_taskListAST & inOperand9,
                        const GALGAS_checkTargetListAST & inOperand10,
                        const GALGAS_driverDeclarationListAST & inOperand11,
                        const GALGAS_driverInstanciationListAST & inOperand12,
                        const GALGAS_uint & inOperand13,
                        const GALGAS_controlRegisterUserAccesMapAST & inOperand14) :
mProperty_mDeclarationListAST (inOperand0),
mProperty_mExtensionDeclarationListAST (inOperand1),
mProperty_mExtendStaticArrayDeclarationAST (inOperand2),
mProperty_mStandAloneFunctionDeclarationListAST (inOperand3),
mProperty_mRequiredProcListAST (inOperand4),
mProperty_mExternProcListAST (inOperand5),
mProperty_mISRDeclarationListAST (inOperand6),
mProperty_mStandAloneSystemRoutineListAST (inOperand7),
mProperty_mTargetListAST (inOperand8),
mProperty_mTaskListAST (inOperand9),
mProperty_mCheckTargetListAST (inOperand10),
mProperty_mDriverDeclarationListAST (inOperand11),
mProperty_mRequiredDriverListAST (inOperand12),
mProperty_mTypeDeclarationIndex (inOperand13),
mProperty_mControlRegisterUserAccesMapAST (inOperand14) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast GALGAS_ast::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ast (GALGAS_declarationListAST::constructor_emptyList (HERE),
                     GALGAS_extensionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_extendStaticArrayDeclarationAST::constructor_emptyList (HERE),
                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_externProcedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_isrDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_lstringlist::constructor_emptyList (HERE),
                     GALGAS_taskListAST::constructor_emptyList (HERE),
                     GALGAS_checkTargetListAST::constructor_emptyList (HERE),
                     GALGAS_driverDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_driverInstanciationListAST::constructor_emptyList (HERE),
                     GALGAS_uint::constructor_default (HERE),
                     GALGAS_controlRegisterUserAccesMapAST::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast GALGAS_ast::constructor_new (const GALGAS_declarationListAST & inOperand0,
                                        const GALGAS_extensionDeclarationListAST & inOperand1,
                                        const GALGAS_extendStaticArrayDeclarationAST & inOperand2,
                                        const GALGAS_functionDeclarationListAST & inOperand3,
                                        const GALGAS_requiredProcedureDeclarationListAST & inOperand4,
                                        const GALGAS_externProcedureDeclarationListAST & inOperand5,
                                        const GALGAS_isrDeclarationListAST & inOperand6,
                                        const GALGAS_systemRoutineDeclarationListAST & inOperand7,
                                        const GALGAS_lstringlist & inOperand8,
                                        const GALGAS_taskListAST & inOperand9,
                                        const GALGAS_checkTargetListAST & inOperand10,
                                        const GALGAS_driverDeclarationListAST & inOperand11,
                                        const GALGAS_driverInstanciationListAST & inOperand12,
                                        const GALGAS_uint & inOperand13,
                                        const GALGAS_controlRegisterUserAccesMapAST & inOperand14 
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    result = GALGAS_ast (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_ast::objectCompare (const GALGAS_ast & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclarationListAST.objectCompare (inOperand.mProperty_mDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtensionDeclarationListAST.objectCompare (inOperand.mProperty_mExtensionDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtendStaticArrayDeclarationAST.objectCompare (inOperand.mProperty_mExtendStaticArrayDeclarationAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStandAloneFunctionDeclarationListAST.objectCompare (inOperand.mProperty_mStandAloneFunctionDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredProcListAST.objectCompare (inOperand.mProperty_mRequiredProcListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternProcListAST.objectCompare (inOperand.mProperty_mExternProcListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mISRDeclarationListAST.objectCompare (inOperand.mProperty_mISRDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStandAloneSystemRoutineListAST.objectCompare (inOperand.mProperty_mStandAloneSystemRoutineListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetListAST.objectCompare (inOperand.mProperty_mTargetListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskListAST.objectCompare (inOperand.mProperty_mTaskListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCheckTargetListAST.objectCompare (inOperand.mProperty_mCheckTargetListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverDeclarationListAST.objectCompare (inOperand.mProperty_mDriverDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredDriverListAST.objectCompare (inOperand.mProperty_mRequiredDriverListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeDeclarationIndex.objectCompare (inOperand.mProperty_mTypeDeclarationIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterUserAccesMapAST.objectCompare (inOperand.mProperty_mControlRegisterUserAccesMapAST) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_ast::isValid (void) const {
  return mProperty_mDeclarationListAST.isValid () && mProperty_mExtensionDeclarationListAST.isValid () && mProperty_mExtendStaticArrayDeclarationAST.isValid () && mProperty_mStandAloneFunctionDeclarationListAST.isValid () && mProperty_mRequiredProcListAST.isValid () && mProperty_mExternProcListAST.isValid () && mProperty_mISRDeclarationListAST.isValid () && mProperty_mStandAloneSystemRoutineListAST.isValid () && mProperty_mTargetListAST.isValid () && mProperty_mTaskListAST.isValid () && mProperty_mCheckTargetListAST.isValid () && mProperty_mDriverDeclarationListAST.isValid () && mProperty_mRequiredDriverListAST.isValid () && mProperty_mTypeDeclarationIndex.isValid () && mProperty_mControlRegisterUserAccesMapAST.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ast::drop (void) {
  mProperty_mDeclarationListAST.drop () ;
  mProperty_mExtensionDeclarationListAST.drop () ;
  mProperty_mExtendStaticArrayDeclarationAST.drop () ;
  mProperty_mStandAloneFunctionDeclarationListAST.drop () ;
  mProperty_mRequiredProcListAST.drop () ;
  mProperty_mExternProcListAST.drop () ;
  mProperty_mISRDeclarationListAST.drop () ;
  mProperty_mStandAloneSystemRoutineListAST.drop () ;
  mProperty_mTargetListAST.drop () ;
  mProperty_mTaskListAST.drop () ;
  mProperty_mCheckTargetListAST.drop () ;
  mProperty_mDriverDeclarationListAST.drop () ;
  mProperty_mRequiredDriverListAST.drop () ;
  mProperty_mTypeDeclarationIndex.drop () ;
  mProperty_mControlRegisterUserAccesMapAST.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ast::description (C_String & ioString,
                              const int32_t inIndentation) const {
  ioString << "<struct @ast:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtensionDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtendStaticArrayDeclarationAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStandAloneFunctionDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredProcListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternProcListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mISRDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStandAloneSystemRoutineListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCheckTargetListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredDriverListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeDeclarationIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterUserAccesMapAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_ast::getter_mDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionDeclarationListAST GALGAS_ast::getter_mExtensionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST GALGAS_ast::getter_mExtendStaticArrayDeclarationAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtendStaticArrayDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_ast::getter_mStandAloneFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStandAloneFunctionDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST GALGAS_ast::getter_mRequiredProcListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRequiredProcListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST GALGAS_ast::getter_mExternProcListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternProcListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST GALGAS_ast::getter_mISRDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mISRDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_ast::getter_mStandAloneSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStandAloneSystemRoutineListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_ast::getter_mTargetListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST GALGAS_ast::getter_mTaskListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_ast::getter_mCheckTargetListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCheckTargetListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST GALGAS_ast::getter_mDriverDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST GALGAS_ast::getter_mRequiredDriverListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRequiredDriverListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_ast::getter_mTypeDeclarationIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeDeclarationIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST GALGAS_ast::getter_mControlRegisterUserAccesMapAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterUserAccesMapAST ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                      @ast type                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ast ("ast",
                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ast (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@routineTypedSignature' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                    const GALGAS_lstring & in_mSelector,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_routineTypedSignature::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_routineTypedSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineTypedSignature (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mTypeProxy COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_routineTypedSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineTypedSignature * operand = (cCollectionElement_routineTypedSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineTypedSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature::GALGAS_routineTypedSignature (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature::GALGAS_routineTypedSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineTypedSignature  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::plusAssign_operation (const GALGAS_routineTypedSignature inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_routineTypedSignature::cEnumerator_routineTypedSignature (const GALGAS_routineTypedSignature & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature_2D_element cEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode cEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mTypeProxy ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @routineTypedSignature type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineTypedSignature ("routineTypedSignature",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineTypedSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineTypedSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineTypedSignature (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension Getter '@routineTypedSignature string'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_string (const GALGAS_routineTypedSignature & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("(") ;
  const GALGAS_routineTypedSignature temp_0 = inObject ;
  cEnumerator_routineTypedSignature enumerator_854 (temp_0, kENUMERATION_UP) ;
  while (enumerator_854.hasCurrentObject ()) {
    result_result.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_854.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 17)).add_operation (enumerator_854.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 17)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 17)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 17)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 17)) ;
    enumerator_854.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 19)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension Getter '@routineFormalArgumentListAST routineSignature'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring extensionGetter_routineSignature (const GALGAS_routineFormalArgumentListAST & inObject,
                                                 const GALGAS_location & constinArgument_inRoutineNameLocation,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_key_1991 = GALGAS_string ("(") ;
  const GALGAS_routineFormalArgumentListAST temp_0 = inObject ;
  cEnumerator_routineFormalArgumentListAST enumerator_2052 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2052.hasCurrentObject ()) {
    var_key_1991.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_2052.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 41)).add_operation (enumerator_2052.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 41)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 41)) ;
    enumerator_2052.gotoNextObject () ;
  }
  var_key_1991.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 43)) ;
  result_result = GALGAS_lstring::constructor_new (var_key_1991, constinArgument_inRoutineNameLocation  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension Getter '@effectiveArgumentListAST routineSignature'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring extensionGetter_routineSignature (const GALGAS_effectiveArgumentListAST & inObject,
                                                 const GALGAS_location & constinArgument_inRoutineNameLocation,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_key_2436 = GALGAS_string::makeEmptyString () ;
  var_key_2436.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 51)) ;
  const GALGAS_effectiveArgumentListAST temp_0 = inObject ;
  cEnumerator_effectiveArgumentListAST enumerator_2491 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2491.hasCurrentObject ()) {
    var_key_2436.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_2491.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 53)).add_operation (enumerator_2491.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 53)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 53)) ;
    enumerator_2491.gotoNextObject () ;
  }
  var_key_2436.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 55)) ;
  result_result = GALGAS_lstring::constructor_new (var_key_2436, constinArgument_inRoutineNameLocation  COMMA_SOURCE_FILE ("context-routines.galgas", 56)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension Getter '@routineKind executionMode'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_routineKind_function * extractPtr_3077 = (const cEnumAssociatedValues_routineKind_function *) (temp_0.unsafePointer ()) ;
      const GALGAS_mode extractedValue_mode = extractPtr_3077->mAssociatedValue0 ;
      result_result = extractedValue_mode ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("context-routines.galgas", 73)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("context-routines.galgas", 74)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      result_result = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("context-routines.galgas", 75)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_guardMapForContext::cMapElement_guardMapForContext (const GALGAS_lstring & inKey,
                                                                const GALGAS_bool & in_mIsPublic,
                                                                const GALGAS_routineTypedSignature & in_mSignature
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mSignature (in_mSignature) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_guardMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_guardMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_guardMapForContext (mProperty_lkey, mProperty_mIsPublic, mProperty_mSignature COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext::GALGAS_guardMapForContext (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext::GALGAS_guardMapForContext (const GALGAS_guardMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext & GALGAS_guardMapForContext::operator = (const GALGAS_guardMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_guardMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_guardMapForContext::constructor_mapWithMapToOverride (const GALGAS_guardMapForContext & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_guardMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_guardMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_guardMapForContext_searchKey = "there is no '%K' guard" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_guardMapForContext * GALGAS_guardMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * result = (cMapElement_guardMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_guardMapForContext) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_guardMapForContext::cEnumerator_guardMapForContext (const GALGAS_guardMapForContext & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext_2D_element cEnumerator_guardMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return GALGAS_guardMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_guardMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_guardMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature cEnumerator_guardMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mSignature ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @guardMapForContext type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapForContext ("guardMapForContext",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_routineArgumentSignatureMapForContext::cMapElement_routineArgumentSignatureMapForContext (const GALGAS_lstring & inKey,
                                                                                                      const GALGAS_lstring & in_mRoutineLLVMName,
                                                                                                      const GALGAS_routineDescriptor & in_mDescriptor
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRoutineLLVMName (in_mRoutineLLVMName),
mProperty_mDescriptor (in_mDescriptor) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_routineArgumentSignatureMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineLLVMName.isValid () && mProperty_mDescriptor.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_routineArgumentSignatureMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineArgumentSignatureMapForContext (mProperty_lkey, mProperty_mRoutineLLVMName, mProperty_mDescriptor COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext::GALGAS_routineArgumentSignatureMapForContext (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext::GALGAS_routineArgumentSignatureMapForContext (const GALGAS_routineArgumentSignatureMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext & GALGAS_routineArgumentSignatureMapForContext::operator = (const GALGAS_routineArgumentSignatureMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::constructor_mapWithMapToOverride (const GALGAS_routineArgumentSignatureMapForContext & inMapToOverride
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_routineArgumentSignatureMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_routineArgumentSignatureMapForContext_searchKey = "there is no '%K' routine signature" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_routineArgumentSignatureMapForContext * GALGAS_routineArgumentSignatureMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                     const GALGAS_string & inKey
                                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentSignatureMapForContext * result = (cMapElement_routineArgumentSignatureMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineArgumentSignatureMapForContext) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_routineArgumentSignatureMapForContext::cEnumerator_routineArgumentSignatureMapForContext (const GALGAS_routineArgumentSignatureMapForContext & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext_2D_element cEnumerator_routineArgumentSignatureMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
  return GALGAS_routineArgumentSignatureMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mRoutineLLVMName, p->mProperty_mDescriptor) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_routineArgumentSignatureMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_routineArgumentSignatureMapForContext::current_mRoutineLLVMName (LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
  return p->mProperty_mRoutineLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineDescriptor cEnumerator_routineArgumentSignatureMapForContext::current_mDescriptor (LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
  return p->mProperty_mDescriptor ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @routineArgumentSignatureMapForContext type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext ("routineArgumentSignatureMapForContext",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineArgumentSignatureMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineArgumentSignatureMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineArgumentSignatureMapForContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_flatValuedObjectMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mValuedObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_flatValuedObjectMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_flatValuedObjectMap (mProperty_lkey, mProperty_mObjectState, mProperty_mObjectShouldBeValuedAtEndOfScope, mProperty_mValuedObject COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap::GALGAS_flatValuedObjectMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap::GALGAS_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap & GALGAS_flatValuedObjectMap::operator = (const GALGAS_flatValuedObjectMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::constructor_mapWithMapToOverride (const GALGAS_flatValuedObjectMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_flatValuedObjectMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_flatValuedObjectMap_searchKey = "there is no '%K' entity" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_flatValuedObjectMap * GALGAS_flatValuedObjectMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * result = (cMapElement_flatValuedObjectMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_flatValuedObjectMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_flatValuedObjectMap::cEnumerator_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap_2D_element cEnumerator_flatValuedObjectMap::current (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return GALGAS_flatValuedObjectMap_2D_element (p->mProperty_lkey, p->mProperty_mObjectState, p->mProperty_mObjectShouldBeValuedAtEndOfScope, p->mProperty_mValuedObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_flatValuedObjectMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState cEnumerator_flatValuedObjectMap::current_mObjectState (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mObjectState ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_flatValuedObjectMap::current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject cEnumerator_flatValuedObjectMap::current_mValuedObject (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mValuedObject ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @flatValuedObjectMap type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_flatValuedObjectMap ("flatValuedObjectMap",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_flatValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_flatValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_flatValuedObjectMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Class for element of '@scopeStack' list                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_scopeStack::cCollectionElement_scopeStack (const GALGAS_scopeKind & in_mScopeKind,
                                                              const GALGAS_bool & in_mFirstBranch,
                                                              const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                              const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                              const GALGAS_lstringlist & in_mObjectList
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScopeKind, in_mFirstBranch, in_mInitialStateMap, in_mReferenceStateMap, in_mObjectList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_scopeStack::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_scopeStack::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_scopeStack (mObject.mProperty_mScopeKind, mObject.mProperty_mFirstBranch, mObject.mProperty_mInitialStateMap, mObject.mProperty_mReferenceStateMap, mObject.mProperty_mObjectList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_scopeStack::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_scopeStack * operand = (cCollectionElement_scopeStack *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_scopeStack) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack::GALGAS_scopeStack (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack::GALGAS_scopeStack (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_scopeStack  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::plusAssign_operation (const GALGAS_scopeStack inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_scopeStack::cEnumerator_scopeStack (const GALGAS_scopeStack & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack_2D_element cEnumerator_scopeStack::current (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeKind cEnumerator_scopeStack::current_mScopeKind (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mScopeKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_scopeStack::current_mFirstBranch (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mFirstBranch ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap cEnumerator_scopeStack::current_mInitialStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mInitialStateMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap cEnumerator_scopeStack::current_mReferenceStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mReferenceStateMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_scopeStack::current_mObjectList (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mObjectList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @scopeStack type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scopeStack ("scopeStack",
                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_scopeStack::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_scopeStack::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeStack (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState::GALGAS_valuedObjectState (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_noValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_noValue ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_hasUnreadValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_hasUnreadValue ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_hasReadValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_hasReadValue ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_valuedObjectState [4] = {
  "(not built)",
  "noValue",
  "hasUnreadValue",
  "hasReadValue"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObjectState::getter_isNoValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noValue == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObjectState::getter_isHasUnreadValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasUnreadValue == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObjectState::getter_isHasReadValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasReadValue == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObjectState::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "<enum @valuedObjectState: " << gEnumNameArrayFor_valuedObjectState [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @valuedObjectState type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_valuedObjectState ("valuedObjectState",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_valuedObjectState::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObjectState ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_valuedObjectState::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObjectState (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_driver::cEnumAssociatedValues_valuedObject_driver (const GALGAS_PLMType & inAssociatedValue0,
                                                                                      const GALGAS_bool & inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_driver::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_task::cEnumAssociatedValues_valuedObject_task (const GALGAS_PLMType & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_task::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_valuedObject_task::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_task * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_task *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_registerGroup::cEnumAssociatedValues_valuedObject_registerGroup (const GALGAS_controlRegisterMap & inAssociatedValue0,
                                                                                                    const GALGAS_registerGroupKind & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_registerGroup::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_valuedObject_registerGroup::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_registerGroup * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_registerGroup *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_globalConstant::cEnumAssociatedValues_valuedObject_globalConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_globalConstant::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_valuedObject_globalConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_globalConstant * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_globalConstant *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_localConstant::cEnumAssociatedValues_valuedObject_localConstant (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                                                    const GALGAS_bool & inAssociatedValue2
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_localConstant::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_localVariable::cEnumAssociatedValues_valuedObject_localVariable (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_localVariable::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_globalSyncInstance::cEnumAssociatedValues_valuedObject_globalSyncInstance (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                              const GALGAS_lstring & inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_globalSyncInstance::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject::GALGAS_valuedObject (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_driver (const GALGAS_PLMType & inAssociatedValue0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_task (const GALGAS_PLMType & inAssociatedValue0
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_registerGroup (const GALGAS_controlRegisterMap & inAssociatedValue0,
                                                                    const GALGAS_registerGroupKind & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_registerGroup ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_registerGroup (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_localConstant (const GALGAS_PLMType & inAssociatedValue0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_localVariable (const GALGAS_PLMType & inAssociatedValue0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_globalSyncInstance (const GALGAS_PLMType & inAssociatedValue0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_driver (GALGAS_PLMType & outAssociatedValue0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_task (GALGAS_PLMType & outAssociatedValue0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_registerGroup (GALGAS_controlRegisterMap & outAssociatedValue0,
                                                GALGAS_registerGroupKind & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_registerGroup) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @valuedObject registerGroup invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_registerGroup * ptr = (const cEnumAssociatedValues_valuedObject_registerGroup *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_localConstant (GALGAS_PLMType & outAssociatedValue0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_localVariable (GALGAS_PLMType & outAssociatedValue0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_globalSyncInstance (GALGAS_PLMType & outAssociatedValue0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_valuedObject [8] = {
  "(not built)",
  "driver",
  "task",
  "registerGroup",
  "globalConstant",
  "localConstant",
  "localVariable",
  "globalSyncInstance"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isDriver (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_driver == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isTask (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_task == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isRegisterGroup (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerGroup == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isGlobalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalConstant == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isLocalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localConstant == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isLocalVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localVariable == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isGlobalSyncInstance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalSyncInstance == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "<enum @valuedObject: " << gEnumNameArrayFor_valuedObject [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @valuedObject type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_valuedObject ("valuedObject",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_valuedObject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_valuedObject::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObject (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeKind::GALGAS_scopeKind (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeKind GALGAS_scopeKind::constructor_selectScope (UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  result.mEnum = kEnum_selectScope ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeKind GALGAS_scopeKind::constructor_repeatScope (UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  result.mEnum = kEnum_repeatScope ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_scopeKind [3] = {
  "(not built)",
  "selectScope",
  "repeatScope"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_scopeKind::getter_isSelectScope (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selectScope == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_scopeKind::getter_isRepeatScope (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_repeatScope == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeKind::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @scopeKind: " << gEnumNameArrayFor_scopeKind [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @scopeKind type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scopeKind ("scopeKind",
                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_scopeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_scopeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_referenceStateMap::cMapElement_referenceStateMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_valuedObjectState & in_mState
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mState (in_mState) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_referenceStateMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_referenceStateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_referenceStateMap (mProperty_lkey, mProperty_mState COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_referenceStateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mState" ":" ;
  mProperty_mState.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_referenceStateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_referenceStateMap * operand = (cMapElement_referenceStateMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mState.objectCompare (operand->mProperty_mState) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap::GALGAS_referenceStateMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap::GALGAS_referenceStateMap (const GALGAS_referenceStateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap & GALGAS_referenceStateMap::operator = (const GALGAS_referenceStateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap GALGAS_referenceStateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap GALGAS_referenceStateMap::constructor_mapWithMapToOverride (const GALGAS_referenceStateMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap GALGAS_referenceStateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_referenceStateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_referenceStateMap_searchKey = "INTERNAL ERROR" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_referenceStateMap * GALGAS_referenceStateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * result = (cMapElement_referenceStateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_referenceStateMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_referenceStateMap::cEnumerator_referenceStateMap (const GALGAS_referenceStateMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap_2D_element cEnumerator_referenceStateMap::current (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return GALGAS_referenceStateMap_2D_element (p->mProperty_lkey, p->mProperty_mState) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_referenceStateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState cEnumerator_referenceStateMap::current_mState (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return p->mProperty_mState ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @referenceStateMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_referenceStateMap ("referenceStateMap",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_referenceStateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_referenceStateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension Getter '@valuedObjectState string'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        '@semanticTypePrecedenceGraph' graph                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypePrecedenceGraph::GALGAS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypePrecedenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                         GALGAS_abstractDeclarationAST inArgument_0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypePrecedenceGraph::method_circularities (GALGAS_declarationListAST & outInfoList,
                                                               GALGAS_lstringlist & outKeyList
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GALGAS_declarationListAST & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GALGAS_declarationListAST & outInfoList,
                                                                        GALGAS_lstringlist & outKeyList
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                                 const GALGAS_stringset & inKeysToExclude,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @semanticTypePrecedenceGraph type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@semanticTypePrecedenceGraph noteUINTType'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_noteUINTType (GALGAS_semanticTypePrecedenceGraph & ioObject,
                                   const GALGAS_uint constinArgument_inBitSize,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_typeName_981 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (constinArgument_inBitSize.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 14)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 14)) ;
  {
  ioObject.setter_noteNode (function_llvmTypeNameFromPLMname (var_typeName_981, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 15)) COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 15)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph> gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph (void) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_enterInPrecedenceGraph (NULL,
                                                                          freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Abstract extension getter '@abstractDeclarationAST keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling> gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_keyRepresentationForErrorSignaling (const int32_t inClassIndex,
                                                              enterExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling (void) {
  gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling (NULL,
                                                                                      freeExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@declarationDecorationList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_declarationDecorationList : public cCollectionElement {
  public : GALGAS_declarationDecorationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_declarationDecorationList (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_declarationDecorationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_declarationDecorationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_declarationDecorationList (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_declarationDecorationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_declarationDecorationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationDecorationList * operand = (cCollectionElement_declarationDecorationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationDecorationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList::GALGAS_declarationDecorationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList::GALGAS_declarationDecorationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationDecorationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationDecorationList * p = NULL ;
  macroMyNew (p, cCollectionElement_declarationDecorationList (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::addAssign_operation (const GALGAS_abstractDecoratedDeclaration & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationDecorationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::setter_insertAtIndex (const GALGAS_abstractDecoratedDeclaration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationDecorationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::setter_removeAtIndex (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::plusAssign_operation (const GALGAS_declarationDecorationList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_declarationDecorationList::cEnumerator_declarationDecorationList (const GALGAS_declarationDecorationList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList_2D_element cEnumerator_declarationDecorationList::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationDecorationList * p = (const cCollectionElement_declarationDecorationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDecoratedDeclaration cEnumerator_declarationDecorationList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationDecorationList * p = (const cCollectionElement_declarationDecorationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
  return p->mObject.mProperty_mDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @declarationDecorationList type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationDecorationList ("declarationDecorationList",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_declarationDecorationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationDecorationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_declarationDecorationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationDecorationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_prefixOperatorMap::cMapElement_prefixOperatorMap (const GALGAS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_prefixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_prefixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_prefixOperatorMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_prefixOperatorMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_prefixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_prefixOperatorMap * operand = (cMapElement_prefixOperatorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (const GALGAS_prefixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap & GALGAS_prefixOperatorMap::operator = (const GALGAS_prefixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::constructor_mapWithMapToOverride (const GALGAS_prefixOperatorMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_prefixOperatorMap_searchKey = "prefix operation is not defined for $%K type" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_prefixOperatorMap * GALGAS_prefixOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * result = (cMapElement_prefixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_prefixOperatorMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_prefixOperatorMap::cEnumerator_prefixOperatorMap (const GALGAS_prefixOperatorMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap_2D_element cEnumerator_prefixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return GALGAS_prefixOperatorMap_2D_element (p->mProperty_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_prefixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @prefixOperatorMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorMap ("prefixOperatorMap",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_prefixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_staticStringMap::cMapElement_staticStringMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_staticStringMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_staticStringMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticStringMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_staticStringMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_staticStringMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticStringMap * operand = (cMapElement_staticStringMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap::GALGAS_staticStringMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap::GALGAS_staticStringMap (const GALGAS_staticStringMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap & GALGAS_staticStringMap::operator = (const GALGAS_staticStringMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap GALGAS_staticStringMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap GALGAS_staticStringMap::constructor_mapWithMapToOverride (const GALGAS_staticStringMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap GALGAS_staticStringMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_staticStringMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_staticStringMap_searchKey = "-- internal error --" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_staticStringMap * GALGAS_staticStringMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * result = (cMapElement_staticStringMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticStringMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_staticStringMap::cEnumerator_staticStringMap (const GALGAS_staticStringMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap_2D_element cEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return GALGAS_staticStringMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return p->mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @staticStringMap type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticStringMap ("staticStringMap",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticStringMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticStringMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@globalStructuredConstantList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_globalStructuredConstantList : public cCollectionElement {
  public : GALGAS_globalStructuredConstantList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_globalStructuredConstantList (const GALGAS_PLMType & in_mType,
                                                            const GALGAS_operandIRList & in_mOperandIRList
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GALGAS_PLMType & in_mType,
                                                                                                  const GALGAS_operandIRList & in_mOperandIRList
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mOperandIRList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_globalStructuredConstantList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_globalStructuredConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_globalStructuredConstantList (mObject.mProperty_mType, mObject.mProperty_mOperandIRList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_globalStructuredConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperandIRList" ":" ;
  mObject.mProperty_mOperandIRList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_globalStructuredConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_globalStructuredConstantList * operand = (cCollectionElement_globalStructuredConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_globalStructuredConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList::GALGAS_globalStructuredConstantList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList::GALGAS_globalStructuredConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalStructuredConstantList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::constructor_listWithValue (const GALGAS_PLMType & inOperand0,
                                                                                                    const GALGAS_operandIRList & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalStructuredConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_globalStructuredConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_PLMType & in_mType,
                                                                     const GALGAS_operandIRList & in_mOperandIRList
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = NULL ;
  macroMyNew (p, cCollectionElement_globalStructuredConstantList (in_mType,
                                                                  in_mOperandIRList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::addAssign_operation (const GALGAS_PLMType & inOperand0,
                                                               const GALGAS_operandIRList & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalStructuredConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::setter_insertAtIndex (const GALGAS_PLMType inOperand0,
                                                                const GALGAS_operandIRList inOperand1,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalStructuredConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::setter_removeAtIndex (GALGAS_PLMType & outOperand0,
                                                                GALGAS_operandIRList & outOperand1,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mOperandIRList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::setter_popFirst (GALGAS_PLMType & outOperand0,
                                                           GALGAS_operandIRList & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::setter_popLast (GALGAS_PLMType & outOperand0,
                                                          GALGAS_operandIRList & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::method_first (GALGAS_PLMType & outOperand0,
                                                        GALGAS_operandIRList & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::method_last (GALGAS_PLMType & outOperand0,
                                                       GALGAS_operandIRList & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::add_operation (const GALGAS_globalStructuredConstantList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::plusAssign_operation (const GALGAS_globalStructuredConstantList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_globalStructuredConstantList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_globalStructuredConstantList::getter_mOperandIRListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  GALGAS_operandIRList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    result = p->mObject.mProperty_mOperandIRList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_globalStructuredConstantList::cEnumerator_globalStructuredConstantList (const GALGAS_globalStructuredConstantList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList_2D_element cEnumerator_globalStructuredConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_globalStructuredConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject.mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList cEnumerator_globalStructuredConstantList::current_mOperandIRList (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject.mProperty_mOperandIRList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @globalStructuredConstantList type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalStructuredConstantList ("globalStructuredConstantList",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalStructuredConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalStructuredConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalStructuredConstantList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList result ;
  const GALGAS_globalStructuredConstantList * p = (const GALGAS_globalStructuredConstantList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalStructuredConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_globalConstantMap::cMapElement_globalConstantMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_objectIR & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_globalConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_globalConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalConstantMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_globalConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_globalConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalConstantMap * operand = (cMapElement_globalConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap::GALGAS_globalConstantMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap::GALGAS_globalConstantMap (const GALGAS_globalConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap & GALGAS_globalConstantMap::operator = (const GALGAS_globalConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap GALGAS_globalConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap GALGAS_globalConstantMap::constructor_mapWithMapToOverride (const GALGAS_globalConstantMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap GALGAS_globalConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_globalConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_globalConstantMap_searchKey = "there is no '%K' constant" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_globalConstantMap * GALGAS_globalConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * result = (cMapElement_globalConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalConstantMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_globalConstantMap::cEnumerator_globalConstantMap (const GALGAS_globalConstantMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap_2D_element cEnumerator_globalConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return GALGAS_globalConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_globalConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cEnumerator_globalConstantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return p->mProperty_mValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @globalConstantMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMap ("globalConstantMap",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_availableInterruptMap::cMapElement_availableInterruptMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInterruptionPanicCode (in_mInterruptionPanicCode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_availableInterruptMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_availableInterruptMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_availableInterruptMap (mProperty_lkey, mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_availableInterruptMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptionPanicCode" ":" ;
  mProperty_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_availableInterruptMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_availableInterruptMap * operand = (cMapElement_availableInterruptMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInterruptionPanicCode.objectCompare (operand->mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap::GALGAS_availableInterruptMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap::GALGAS_availableInterruptMap (const GALGAS_availableInterruptMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap & GALGAS_availableInterruptMap::operator = (const GALGAS_availableInterruptMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::constructor_mapWithMapToOverride (const GALGAS_availableInterruptMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_availableInterruptMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_availableInterruptMap_searchKey = "interrupt '%K' is not defined" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_availableInterruptMap * GALGAS_availableInterruptMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * result = (cMapElement_availableInterruptMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_availableInterruptMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_availableInterruptMap::cEnumerator_availableInterruptMap (const GALGAS_availableInterruptMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap_2D_element cEnumerator_availableInterruptMap::current (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return GALGAS_availableInterruptMap_2D_element (p->mProperty_lkey, p->mProperty_mInterruptionPanicCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_availableInterruptMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionPanicCode cEnumerator_availableInterruptMap::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return p->mProperty_mInterruptionPanicCode ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @availableInterruptMap type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_availableInterruptMap ("availableInterruptMap",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_availableInterruptMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_availableInterruptMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_PLMType & in_type,
                                                        const GALGAS_uint & in_index
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_type (in_type),
mProperty_index (in_index) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_index.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_type, mProperty_index COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mProperty_type.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "index" ":" ;
  mProperty_index.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_type.objectCompare (operand->mProperty_type) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_index.objectCompare (operand->mProperty_index) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap (kMapAutomatonNoIssue, "") {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton states                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton state names                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton actions                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton transitions                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton final state issues                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_insertType (GALGAS_lstring inKey,
                                               GALGAS_PLMType inArgument0,
                                               GALGAS_uint inArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "there is no '%K' type" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_PLMType & outArgument0,
                                              GALGAS_uint & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_unifiedTypeMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_index ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_unifiedTypeMap::getter_indexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_index ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_setIndexForKey (GALGAS_uint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_index = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_unifiedTypeMap::current_type (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_type ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_unifiedTypeMap::current_index (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_index ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @unifiedTypeMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Abstract extension method '@abstractDeclarationAST enterInContext'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_enterInContext> gExtensionMethodTable_abstractDeclarationAST_enterInContext ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInContext (const int32_t inClassIndex,
                                          extensionMethodSignature_abstractDeclarationAST_enterInContext inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_enterInContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_enterInContext (void) {
  gExtensionMethodTable_abstractDeclarationAST_enterInContext.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_enterInContext (NULL,
                                                                  freeExtensionMethod_abstractDeclarationAST_enterInContext) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                         const GALGAS_functionDeclarationListAST constin_inProcedureListAST,
                                         GALGAS_semanticContext & io_ioContext,
                                         GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                         GALGAS_subprogramInvocationGraph & io_ioSubprogramInvocationGraph,
                                         GALGAS_staticListInitializationMap & io_ioStaticListValueMap,
                                         GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                         GALGAS_globalVariableIRList & io_ioGlobalVariableIRList,
                                         GALGAS_controlRegisterUserAccesMapAST & io_ioControlRegisterUserAccesMapAST,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_enterInContext f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_enterInContext.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_enterInContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_enterInContext.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_enterInContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_enterInContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inProcedureListAST, io_ioContext, io_ioDecoratedDeclarationList, io_ioSubprogramInvocationGraph, io_ioStaticListValueMap, io_ioStaticEntityMap, io_ioGlobalVariableIRList, io_ioControlRegisterUserAccesMapAST, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes::GALGAS_PLMTypeAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes::GALGAS_PLMTypeAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_none (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes (0) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_all (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes ((uint64_t) 0xF) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_instanciable (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes (((uint64_t) 1) << 0) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_equatable (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes (((uint64_t) 1) << 1) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_copyable (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes (((uint64_t) 1) << 2) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes (((uint64_t) 1) << 3) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_PLMTypeAttributes::objectCompare (const GALGAS_PLMTypeAttributes & inOperand) const {
   typeComparisonResult result = kOperandNotValid ;
   if (mIsValid && inOperand.mIsValid) {
     result = kOperandEqual ;
     if (mFlags < inOperand.mFlags) {
       result = kFirstOperandLowerThanSecond ;
     }else if (mFlags > inOperand.mFlags) {
       result = kFirstOperandGreaterThanSecond ;
     }
   }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_PLMTypeAttributes::isValid (void) const {
  return mIsValid ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_PLMTypeAttributes::drop (void) {
  mIsValid = false ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::operator_or (const GALGAS_PLMTypeAttributes & inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_PLMTypeAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::operator_and (const GALGAS_PLMTypeAttributes & inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_PLMTypeAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::operator_xor (const GALGAS_PLMTypeAttributes & inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_PLMTypeAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::substract_operation (const GALGAS_PLMTypeAttributes & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_PLMTypeAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (mIsValid) {
    result = GALGAS_PLMTypeAttributes (((uint64_t) 0xF) ^ mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_PLMTypeAttributes::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "<boolset @PLMTypeAttributes:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    if ((mFlags & ((uint64_t) 1) << 0) != 0) {
      ioString << " instanciable" ;
    }
    if ((mFlags & ((uint64_t) 1) << 1) != 0) {
      ioString << " equatable" ;
    }
    if ((mFlags & ((uint64_t) 1) << 2) != 0) {
      ioString << " copyable" ;
    }
    if ((mFlags & ((uint64_t) 1) << 3) != 0) {
      ioString << " generateAssignmentRoutine" ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_none (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_all (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == (uint64_t) 0xF) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_instanciable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 0) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_equatable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 1) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_copyable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 2) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_generateAssignmentRoutine (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 3) != 0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @PLMTypeAttributes type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_PLMTypeAttributes ("PLMTypeAttributes",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_PLMTypeAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_PLMTypeAttributes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_PLMTypeAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_PLMTypeAttributes (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_PLMTypeAttributes result ;
  const GALGAS_PLMTypeAttributes * p = (const GALGAS_PLMTypeAttributes *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_PLMTypeAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("PLMTypeAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_propertyMap::cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_bool & in_mIsPublic,
                                                  const GALGAS_propertyAccessKind & in_mAccess
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mAccess (in_mAccess) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mAccess.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mIsPublic, mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_propertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccess" ":" ;
  mProperty_mAccess.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_propertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertyMap * operand = (cMapElement_propertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPublic.objectCompare (operand->mProperty_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccess.objectCompare (operand->mProperty_mAccess) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap::GALGAS_propertyMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap::GALGAS_propertyMap (const GALGAS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap & GALGAS_propertyMap::operator = (const GALGAS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::constructor_mapWithMapToOverride (const GALGAS_propertyMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_bool & inArgument0,
                                              const GALGAS_propertyAccessKind & inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_bool inArgument0,
                                           GALGAS_propertyAccessKind inArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_propertyMap_searchKey = "there is no '%K' property" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_bool & outArgument0,
                                           GALGAS_propertyAccessKind & outArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_propertyMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mAccess ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyMap::getter_mIsPublicForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAccessKind GALGAS_propertyMap::getter_mAccessForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_propertyAccessKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mAccess ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                    GALGAS_string inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mIsPublic = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap::setter_setMAccessForKey (GALGAS_propertyAccessKind inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mAccess = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_propertyMap * GALGAS_propertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_propertyMap::cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GALGAS_propertyMap_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mAccess) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_propertyMap::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAccessKind cEnumerator_propertyMap::current_mAccess (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mAccess ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @propertyMap type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  const GALGAS_propertyMap * p = (const GALGAS_propertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_constructorMap::cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_constructorSignature & in_mSignature,
                                                        const GALGAS_constructorValue & in_mInitValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSignature (in_mSignature),
mProperty_mInitValue (in_mInitValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_constructorMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignature.isValid () && mProperty_mInitValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_constructorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constructorMap (mProperty_lkey, mProperty_mSignature, mProperty_mInitValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap::GALGAS_constructorMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap::GALGAS_constructorMap (const GALGAS_constructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap & GALGAS_constructorMap::operator = (const GALGAS_constructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap GALGAS_constructorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap GALGAS_constructorMap::constructor_mapWithMapToOverride (const GALGAS_constructorMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap GALGAS_constructorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_constructorMap_searchKey = "constructor is not defined" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_constructorMap * GALGAS_constructorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * result = (cMapElement_constructorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constructorMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_constructorMap::cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap_2D_element cEnumerator_constructorMap::current (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return GALGAS_constructorMap_2D_element (p->mProperty_lkey, p->mProperty_mSignature, p->mProperty_mInitValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorSignature cEnumerator_constructorMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mSignature ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorValue cEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mInitValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @constructorMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_constructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_constructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_enumeration::cEnumAssociatedValues_typeKind_enumeration (const GALGAS_uint & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_enumeration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_enumeration::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_enumeration * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_enumeration *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_structure::cEnumAssociatedValues_typeKind_structure (const GALGAS_propertyList & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_structure::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_structure::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_structure * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_structure *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_syncTool::cEnumAssociatedValues_typeKind_syncTool (const GALGAS_propertyList & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_syncTool::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_syncTool::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_syncTool * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_syncTool *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_integer::cEnumAssociatedValues_typeKind_integer (const GALGAS_bigint & inAssociatedValue0,
                                                                                const GALGAS_bigint & inAssociatedValue1,
                                                                                const GALGAS_bool & inAssociatedValue2,
                                                                                const GALGAS_uint & inAssociatedValue3
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_integer::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_integer::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_integer * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_integer *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_opaque::cEnumAssociatedValues_typeKind_opaque (const GALGAS_bigint & inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_opaque::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_opaque::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_opaque * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_opaque *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_arrayType::cEnumAssociatedValues_typeKind_arrayType (const GALGAS_PLMType & inAssociatedValue0,
                                                                                    const GALGAS_bigint & inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_arrayType::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_arrayType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_arrayType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_arrayType *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_dynamicArrayType::cEnumAssociatedValues_typeKind_dynamicArrayType (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                  const GALGAS_bigint & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_dynamicArrayType::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_dynamicArrayType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_dynamicArrayType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_dynamicArrayType *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_function::cEnumAssociatedValues_typeKind_function (const GALGAS_routineDescriptor & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_function::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_function * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_function *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_pointer::cEnumAssociatedValues_typeKind_pointer (const GALGAS_PLMType & inAssociatedValue0
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_pointer::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_pointer::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_pointer * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_pointer *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind::GALGAS_typeKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_void (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_void ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_boolean (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_boolean ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_literalString (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_literalString ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_enumeration (const GALGAS_uint & inAssociatedValue0
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_enumeration ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_enumeration (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_structure (const GALGAS_propertyList & inAssociatedValue0
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_structure ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_structure (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_syncTool (const GALGAS_propertyList & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_syncTool ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_syncTool (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_integer (const GALGAS_bigint & inAssociatedValue0,
                                                      const GALGAS_bigint & inAssociatedValue1,
                                                      const GALGAS_bool & inAssociatedValue2,
                                                      const GALGAS_uint & inAssociatedValue3
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_integer ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_integer (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_staticInteger (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_staticInteger ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_opaque (const GALGAS_bigint & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_opaque ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_opaque (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_arrayType (const GALGAS_PLMType & inAssociatedValue0,
                                                        const GALGAS_bigint & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_arrayType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_dynamicArrayType (const GALGAS_PLMType & inAssociatedValue0,
                                                               const GALGAS_bigint & inAssociatedValue1
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_dynamicArrayType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_dynamicArrayType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_function (const GALGAS_routineDescriptor & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_function (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_pointer (const GALGAS_PLMType & inAssociatedValue0
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_pointer ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_pointer (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_enumeration (GALGAS_uint & outAssociatedValue0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumeration) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind enumeration invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_enumeration * ptr = (const cEnumAssociatedValues_typeKind_enumeration *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_structure (GALGAS_propertyList & outAssociatedValue0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structure) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind structure invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_structure * ptr = (const cEnumAssociatedValues_typeKind_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_syncTool (GALGAS_propertyList & outAssociatedValue0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_syncTool) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind syncTool invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_syncTool * ptr = (const cEnumAssociatedValues_typeKind_syncTool *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_integer (GALGAS_bigint & outAssociatedValue0,
                                      GALGAS_bigint & outAssociatedValue1,
                                      GALGAS_bool & outAssociatedValue2,
                                      GALGAS_uint & outAssociatedValue3,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_integer) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @typeKind integer invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_integer * ptr = (const cEnumAssociatedValues_typeKind_integer *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_opaque (GALGAS_bigint & outAssociatedValue0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_opaque) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind opaque invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_opaque * ptr = (const cEnumAssociatedValues_typeKind_opaque *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_arrayType (GALGAS_PLMType & outAssociatedValue0,
                                        GALGAS_bigint & outAssociatedValue1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind arrayType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_arrayType * ptr = (const cEnumAssociatedValues_typeKind_arrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_dynamicArrayType (GALGAS_PLMType & outAssociatedValue0,
                                               GALGAS_bigint & outAssociatedValue1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_dynamicArrayType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind dynamicArrayType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_dynamicArrayType * ptr = (const cEnumAssociatedValues_typeKind_dynamicArrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_function (GALGAS_routineDescriptor & outAssociatedValue0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_function * ptr = (const cEnumAssociatedValues_typeKind_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_pointer (GALGAS_PLMType & outAssociatedValue0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_pointer) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind pointer invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_pointer * ptr = (const cEnumAssociatedValues_typeKind_pointer *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_typeKind [14] = {
  "(not built)",
  "void",
  "boolean",
  "literalString",
  "enumeration",
  "structure",
  "syncTool",
  "integer",
  "staticInteger",
  "opaque",
  "arrayType",
  "dynamicArrayType",
  "function",
  "pointer"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_void == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolean == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isEnumeration (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumeration == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structure == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isSyncTool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_syncTool == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_integer == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isStaticInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_staticInteger == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isOpaque (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_opaque == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isDynamicArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_dynamicArrayType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isPointer (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_pointer == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @typeKind: " << gEnumNameArrayFor_typeKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_typeKind::objectCompare (const GALGAS_typeKind & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @typeKind type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  const GALGAS_typeKind * p = (const GALGAS_typeKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@arcAssignmentList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arcAssignmentList : public cCollectionElement {
  public : GALGAS_arcAssignmentList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_arcAssignmentList (const GALGAS_string & in_mPropertyName,
                                                 const GALGAS_PLMType & in_mPropertyType,
                                                 const GALGAS_uintlist & in_mPropertyIndexPath
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GALGAS_string & in_mPropertyName,
                                                                            const GALGAS_PLMType & in_mPropertyType,
                                                                            const GALGAS_uintlist & in_mPropertyIndexPath
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arcAssignmentList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arcAssignmentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arcAssignmentList (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType, mObject.mProperty_mPropertyIndexPath COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arcAssignmentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyType" ":" ;
  mObject.mProperty_mPropertyType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyIndexPath" ":" ;
  mObject.mProperty_mPropertyIndexPath.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arcAssignmentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arcAssignmentList * operand = (cCollectionElement_arcAssignmentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arcAssignmentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList::GALGAS_arcAssignmentList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList::GALGAS_arcAssignmentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arcAssignmentList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                              const GALGAS_PLMType & inOperand1,
                                                                              const GALGAS_uintlist & inOperand2
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_arcAssignmentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arcAssignmentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_string & in_mPropertyName,
                                                          const GALGAS_PLMType & in_mPropertyType,
                                                          const GALGAS_uintlist & in_mPropertyIndexPath
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = NULL ;
  macroMyNew (p, cCollectionElement_arcAssignmentList (in_mPropertyName,
                                                       in_mPropertyType,
                                                       in_mPropertyIndexPath COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::addAssign_operation (const GALGAS_string & inOperand0,
                                                    const GALGAS_PLMType & inOperand1,
                                                    const GALGAS_uintlist & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arcAssignmentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                     const GALGAS_PLMType inOperand1,
                                                     const GALGAS_uintlist inOperand2,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arcAssignmentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                     GALGAS_PLMType & outOperand1,
                                                     GALGAS_uintlist & outOperand2,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mPropertyType ;
      outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::setter_popFirst (GALGAS_string & outOperand0,
                                                GALGAS_PLMType & outOperand1,
                                                GALGAS_uintlist & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::setter_popLast (GALGAS_string & outOperand0,
                                               GALGAS_PLMType & outOperand1,
                                               GALGAS_uintlist & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::method_first (GALGAS_string & outOperand0,
                                             GALGAS_PLMType & outOperand1,
                                             GALGAS_uintlist & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::method_last (GALGAS_string & outOperand0,
                                            GALGAS_PLMType & outOperand1,
                                            GALGAS_uintlist & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::add_operation (const GALGAS_arcAssignmentList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::plusAssign_operation (const GALGAS_arcAssignmentList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arcAssignmentList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_arcAssignmentList::getter_mPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uintlist GALGAS_arcAssignmentList::getter_mPropertyIndexPathAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_uintlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyIndexPath ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arcAssignmentList::cEnumerator_arcAssignmentList (const GALGAS_arcAssignmentList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList_2D_element cEnumerator_arcAssignmentList::current (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arcAssignmentList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_arcAssignmentList::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uintlist cEnumerator_arcAssignmentList::current_mPropertyIndexPath (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyIndexPath ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @arcAssignmentList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arcAssignmentList ("arcAssignmentList",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arcAssignmentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arcAssignmentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arcAssignmentList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result ;
  const GALGAS_arcAssignmentList * p = (const GALGAS_arcAssignmentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arcAssignmentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

