#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
// @decoratedISRDeclaration reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedISRDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mISRName.printNonNullClassInstanceProperties ("mISRName") ;
    mProperty_mMode.printNonNullClassInstanceProperties ("mMode") ;
    mProperty_mDriverName.printNonNullClassInstanceProperties ("mDriverName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_decoratedISRDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedISRDeclaration * p = (const cPtr_decoratedISRDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mISRName.objectCompare (p->mProperty_mISRName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMode.objectCompare (p->mProperty_mMode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDriverName.objectCompare (p->mProperty_mDriverName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_decoratedISRDeclaration::objectCompare (const GALGAS_decoratedISRDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration::GALGAS_decoratedISRDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration::GALGAS_decoratedISRDeclaration (const cPtr_decoratedISRDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedISRDeclaration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration GALGAS_decoratedISRDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mISRName,
                                                                                const GALGAS_mode & inAttribute_mMode,
                                                                                const GALGAS_lstring & inAttribute_mDriverName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedISRDeclaration result ;
  if (inAttribute_mISRName.isValid () && inAttribute_mMode.isValid () && inAttribute_mDriverName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedISRDeclaration (inAttribute_mISRName, inAttribute_mMode, inAttribute_mDriverName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedISRDeclaration::setter_setMISRName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mISRName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedISRDeclaration::setter_setMMode (GALGAS_mode inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mMode = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedISRDeclaration::setter_setMDriverName (GALGAS_lstring inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedISRDeclaration::readProperty_mISRName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mISRName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_decoratedISRDeclaration::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_mode () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mMode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedISRDeclaration::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mDriverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedISRDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedISRDeclaration::cPtr_decoratedISRDeclaration (const GALGAS_lstring & in_mISRName,
                                                            const GALGAS_mode & in_mMode,
                                                            const GALGAS_lstring & in_mDriverName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mISRName (in_mISRName),
mProperty_mMode (in_mMode),
mProperty_mDriverName (in_mDriverName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedISRDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclaration ;
}

void cPtr_decoratedISRDeclaration::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@decoratedISRDeclaration:" ;
  mProperty_mISRName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedISRDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedISRDeclaration (mProperty_mISRName, mProperty_mMode, mProperty_mDriverName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @decoratedISRDeclaration generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedISRDeclaration ("decoratedISRDeclaration",
                                                & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedISRDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedISRDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedISRDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration GALGAS_decoratedISRDeclaration::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedISRDeclaration result ;
  const GALGAS_decoratedISRDeclaration * p = (const GALGAS_decoratedISRDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedISRDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedISRDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @guardDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_guardDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mReceiverLLVMBaseTypeName.printNonNullClassInstanceProperties ("mReceiverLLVMBaseTypeName") ;
    mProperty_mGuardName.printNonNullClassInstanceProperties ("mGuardName") ;
    mProperty_mIsPublic.printNonNullClassInstanceProperties ("mIsPublic") ;
    mProperty_mGuardAttributeList.printNonNullClassInstanceProperties ("mGuardAttributeList") ;
    mProperty_mGuardFormalArgumentList.printNonNullClassInstanceProperties ("mGuardFormalArgumentList") ;
    mProperty_mGuardKind.printNonNullClassInstanceProperties ("mGuardKind") ;
    mProperty_mGuardInstructionList.printNonNullClassInstanceProperties ("mGuardInstructionList") ;
    mProperty_mEndOfGuardDeclaration.printNonNullClassInstanceProperties ("mEndOfGuardDeclaration") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_guardDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_guardDeclarationAST * p = (const cPtr_guardDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeName.objectCompare (p->mProperty_mReceiverTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverLLVMBaseTypeName.objectCompare (p->mProperty_mReceiverLLVMBaseTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardName.objectCompare (p->mProperty_mGuardName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsPublic.objectCompare (p->mProperty_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardAttributeList.objectCompare (p->mProperty_mGuardAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardFormalArgumentList.objectCompare (p->mProperty_mGuardFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardKind.objectCompare (p->mProperty_mGuardKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardInstructionList.objectCompare (p->mProperty_mGuardInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfGuardDeclaration.objectCompare (p->mProperty_mEndOfGuardDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_guardDeclarationAST::objectCompare (const GALGAS_guardDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST::GALGAS_guardDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST::GALGAS_guardDeclarationAST (const cPtr_guardDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST GALGAS_guardDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mReceiverTypeName,
                                                                        const GALGAS_string & inAttribute_mReceiverLLVMBaseTypeName,
                                                                        const GALGAS_lstring & inAttribute_mGuardName,
                                                                        const GALGAS_bool & inAttribute_mIsPublic,
                                                                        const GALGAS_lstringlist & inAttribute_mGuardAttributeList,
                                                                        const GALGAS_routineFormalArgumentListAST & inAttribute_mGuardFormalArgumentList,
                                                                        const GALGAS_guardKind & inAttribute_mGuardKind,
                                                                        const GALGAS_instructionListAST & inAttribute_mGuardInstructionList,
                                                                        const GALGAS_location & inAttribute_mEndOfGuardDeclaration
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guardDeclarationAST result ;
  if (inAttribute_mReceiverTypeName.isValid () && inAttribute_mReceiverLLVMBaseTypeName.isValid () && inAttribute_mGuardName.isValid () && inAttribute_mIsPublic.isValid () && inAttribute_mGuardAttributeList.isValid () && inAttribute_mGuardFormalArgumentList.isValid () && inAttribute_mGuardKind.isValid () && inAttribute_mGuardInstructionList.isValid () && inAttribute_mEndOfGuardDeclaration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_guardDeclarationAST (inAttribute_mReceiverTypeName, inAttribute_mReceiverLLVMBaseTypeName, inAttribute_mGuardName, inAttribute_mIsPublic, inAttribute_mGuardAttributeList, inAttribute_mGuardFormalArgumentList, inAttribute_mGuardKind, inAttribute_mGuardInstructionList, inAttribute_mEndOfGuardDeclaration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setter_setMReceiverTypeName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setter_setMReceiverLLVMBaseTypeName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mReceiverLLVMBaseTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setter_setMGuardName (GALGAS_lstring inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setter_setMIsPublic (GALGAS_bool inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mIsPublic = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setter_setMGuardAttributeList (GALGAS_lstringlist inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setter_setMGuardFormalArgumentList (GALGAS_routineFormalArgumentListAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardFormalArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setter_setMGuardKind (GALGAS_guardKind inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setter_setMGuardInstructionList (GALGAS_instructionListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setter_setMEndOfGuardDeclaration (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mEndOfGuardDeclaration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guardDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guardDeclarationAST::readProperty_mReceiverLLVMBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mReceiverLLVMBaseTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guardDeclarationAST::readProperty_mGuardName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardDeclarationAST::readProperty_mIsPublic (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mIsPublic ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_guardDeclarationAST::readProperty_mGuardAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_guardDeclarationAST::readProperty_mGuardFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListAST () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardFormalArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardKind GALGAS_guardDeclarationAST::readProperty_mGuardKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_guardKind () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_guardDeclarationAST::readProperty_mGuardInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_guardDeclarationAST::readProperty_mEndOfGuardDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mEndOfGuardDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @guardDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_guardDeclarationAST::cPtr_guardDeclarationAST (const GALGAS_lstring & in_mReceiverTypeName,
                                                    const GALGAS_string & in_mReceiverLLVMBaseTypeName,
                                                    const GALGAS_lstring & in_mGuardName,
                                                    const GALGAS_bool & in_mIsPublic,
                                                    const GALGAS_lstringlist & in_mGuardAttributeList,
                                                    const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                    const GALGAS_guardKind & in_mGuardKind,
                                                    const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                    const GALGAS_location & in_mEndOfGuardDeclaration
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mReceiverTypeName (in_mReceiverTypeName),
mProperty_mReceiverLLVMBaseTypeName (in_mReceiverLLVMBaseTypeName),
mProperty_mGuardName (in_mGuardName),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mGuardAttributeList (in_mGuardAttributeList),
mProperty_mGuardFormalArgumentList (in_mGuardFormalArgumentList),
mProperty_mGuardKind (in_mGuardKind),
mProperty_mGuardInstructionList (in_mGuardInstructionList),
mProperty_mEndOfGuardDeclaration (in_mEndOfGuardDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_guardDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationAST ;
}

void cPtr_guardDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@guardDeclarationAST:" ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverLLVMBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
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
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_guardDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardDeclarationAST (mProperty_mReceiverTypeName, mProperty_mReceiverLLVMBaseTypeName, mProperty_mGuardName, mProperty_mIsPublic, mProperty_mGuardAttributeList, mProperty_mGuardFormalArgumentList, mProperty_mGuardKind, mProperty_mGuardInstructionList, mProperty_mEndOfGuardDeclaration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @guardDeclarationAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardDeclarationAST ("guardDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST GALGAS_guardDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guardDeclarationAST result ;
  const GALGAS_guardDeclarationAST * p = (const GALGAS_guardDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @decoratedGuardDeclaration reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedGuardDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mGuardName.printNonNullClassInstanceProperties ("mGuardName") ;
    mProperty_mIsPublic.printNonNullClassInstanceProperties ("mIsPublic") ;
    mProperty_mGuardAttributeList.printNonNullClassInstanceProperties ("mGuardAttributeList") ;
    mProperty_mGuardFormalArgumentList.printNonNullClassInstanceProperties ("mGuardFormalArgumentList") ;
    mProperty_mGuardKind.printNonNullClassInstanceProperties ("mGuardKind") ;
    mProperty_mGuardInstructionList.printNonNullClassInstanceProperties ("mGuardInstructionList") ;
    mProperty_mEndOfGuardDeclaration.printNonNullClassInstanceProperties ("mEndOfGuardDeclaration") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_decoratedGuardDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedGuardDeclaration * p = (const cPtr_decoratedGuardDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeName.objectCompare (p->mProperty_mReceiverTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardName.objectCompare (p->mProperty_mGuardName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsPublic.objectCompare (p->mProperty_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardAttributeList.objectCompare (p->mProperty_mGuardAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardFormalArgumentList.objectCompare (p->mProperty_mGuardFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardKind.objectCompare (p->mProperty_mGuardKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardInstructionList.objectCompare (p->mProperty_mGuardInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfGuardDeclaration.objectCompare (p->mProperty_mEndOfGuardDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_decoratedGuardDeclaration::objectCompare (const GALGAS_decoratedGuardDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration::GALGAS_decoratedGuardDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration::GALGAS_decoratedGuardDeclaration (const cPtr_decoratedGuardDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedGuardDeclaration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration GALGAS_decoratedGuardDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mReceiverTypeName,
                                                                                    const GALGAS_lstring & inAttribute_mGuardName,
                                                                                    const GALGAS_bool & inAttribute_mIsPublic,
                                                                                    const GALGAS_lstringlist & inAttribute_mGuardAttributeList,
                                                                                    const GALGAS_routineFormalArgumentListAST & inAttribute_mGuardFormalArgumentList,
                                                                                    const GALGAS_guardKind & inAttribute_mGuardKind,
                                                                                    const GALGAS_instructionListAST & inAttribute_mGuardInstructionList,
                                                                                    const GALGAS_location & inAttribute_mEndOfGuardDeclaration
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedGuardDeclaration result ;
  if (inAttribute_mReceiverTypeName.isValid () && inAttribute_mGuardName.isValid () && inAttribute_mIsPublic.isValid () && inAttribute_mGuardAttributeList.isValid () && inAttribute_mGuardFormalArgumentList.isValid () && inAttribute_mGuardKind.isValid () && inAttribute_mGuardInstructionList.isValid () && inAttribute_mEndOfGuardDeclaration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedGuardDeclaration (inAttribute_mReceiverTypeName, inAttribute_mGuardName, inAttribute_mIsPublic, inAttribute_mGuardAttributeList, inAttribute_mGuardFormalArgumentList, inAttribute_mGuardKind, inAttribute_mGuardInstructionList, inAttribute_mEndOfGuardDeclaration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setter_setMReceiverTypeName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setter_setMGuardName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setter_setMIsPublic (GALGAS_bool inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mIsPublic = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setter_setMGuardAttributeList (GALGAS_lstringlist inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setter_setMGuardFormalArgumentList (GALGAS_routineFormalArgumentListAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardFormalArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setter_setMGuardKind (GALGAS_guardKind inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setter_setMGuardInstructionList (GALGAS_instructionListAST inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setter_setMEndOfGuardDeclaration (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mEndOfGuardDeclaration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedGuardDeclaration::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedGuardDeclaration::readProperty_mGuardName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_decoratedGuardDeclaration::readProperty_mIsPublic (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mIsPublic ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_decoratedGuardDeclaration::readProperty_mGuardAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_decoratedGuardDeclaration::readProperty_mGuardFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListAST () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardFormalArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardKind GALGAS_decoratedGuardDeclaration::readProperty_mGuardKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_guardKind () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_decoratedGuardDeclaration::readProperty_mGuardInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_decoratedGuardDeclaration::readProperty_mEndOfGuardDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mEndOfGuardDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedGuardDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedGuardDeclaration::cPtr_decoratedGuardDeclaration (const GALGAS_lstring & in_mReceiverTypeName,
                                                                const GALGAS_lstring & in_mGuardName,
                                                                const GALGAS_bool & in_mIsPublic,
                                                                const GALGAS_lstringlist & in_mGuardAttributeList,
                                                                const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                const GALGAS_guardKind & in_mGuardKind,
                                                                const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                                const GALGAS_location & in_mEndOfGuardDeclaration
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mReceiverTypeName (in_mReceiverTypeName),
mProperty_mGuardName (in_mGuardName),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mGuardAttributeList (in_mGuardAttributeList),
mProperty_mGuardFormalArgumentList (in_mGuardFormalArgumentList),
mProperty_mGuardKind (in_mGuardKind),
mProperty_mGuardInstructionList (in_mGuardInstructionList),
mProperty_mEndOfGuardDeclaration (in_mEndOfGuardDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedGuardDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;
}

void cPtr_decoratedGuardDeclaration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@decoratedGuardDeclaration:" ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
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
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedGuardDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedGuardDeclaration (mProperty_mReceiverTypeName, mProperty_mGuardName, mProperty_mIsPublic, mProperty_mGuardAttributeList, mProperty_mGuardFormalArgumentList, mProperty_mGuardKind, mProperty_mGuardInstructionList, mProperty_mEndOfGuardDeclaration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @decoratedGuardDeclaration generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedGuardDeclaration ("decoratedGuardDeclaration",
                                                  & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedGuardDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedGuardDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedGuardDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration GALGAS_decoratedGuardDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedGuardDeclaration result ;
  const GALGAS_decoratedGuardDeclaration * p = (const GALGAS_decoratedGuardDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedGuardDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedGuardDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @callInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_callInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mArguments.printNonNullClassInstanceProperties ("mArguments") ;
    mProperty_mEndOfArguments.printNonNullClassInstanceProperties ("mEndOfArguments") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_callInstructionAST::objectCompare (const GALGAS_callInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST::GALGAS_callInstructionAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST::GALGAS_callInstructionAST (const cPtr_callInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_callInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_callInstructionAST::setter_setMArguments (GALGAS_effectiveArgumentListAST inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    p->mProperty_mArguments = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_callInstructionAST::setter_setMEndOfArguments (GALGAS_location inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    p->mProperty_mEndOfArguments = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_callInstructionAST::readProperty_mArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_effectiveArgumentListAST () ;
  }else{
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    return p->mProperty_mArguments ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_callInstructionAST::readProperty_mEndOfArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    return p->mProperty_mEndOfArguments ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @callInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_callInstructionAST::cPtr_callInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                  const GALGAS_location & in_mEndOfArguments
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mArguments (in_mArguments),
mProperty_mEndOfArguments (in_mEndOfArguments) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @callInstructionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_callInstructionAST ("callInstructionAST",
                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_callInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_callInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_callInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_callInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST GALGAS_callInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_callInstructionAST result ;
  const GALGAS_callInstructionAST * p = (const GALGAS_callInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_callInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("callInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @guardUserRoutineIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_guardUserRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mMangledImplementationGuardName.printNonNullClassInstanceProperties ("mMangledImplementationGuardName") ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mGuardKindGenerationIR.printNonNullClassInstanceProperties ("mGuardKindGenerationIR") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_guardUserRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_guardUserRoutineIR * p = (const cPtr_guardUserRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
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
    result = mProperty_mMangledImplementationGuardName.objectCompare (p->mProperty_mMangledImplementationGuardName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (p->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardKindGenerationIR.objectCompare (p->mProperty_mGuardKindGenerationIR) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_guardUserRoutineIR::objectCompare (const GALGAS_guardUserRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR::GALGAS_guardUserRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR::GALGAS_guardUserRoutineIR (const cPtr_guardUserRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardUserRoutineIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR GALGAS_guardUserRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                      const GALGAS_bool & inAttribute_isRequired,
                                                                      const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                      const GALGAS_string & inAttribute_mMangledImplementationGuardName,
                                                                      const GALGAS_routineFormalArgumentListIR & inAttribute_mFormalArgumentListForGeneration,
                                                                      const GALGAS_omnibusType & inAttribute_mReceiverType,
                                                                      const GALGAS_guardKindGenerationIR & inAttribute_mGuardKindGenerationIR
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guardUserRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mMangledImplementationGuardName.isValid () && inAttribute_mFormalArgumentListForGeneration.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mGuardKindGenerationIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_guardUserRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mMangledImplementationGuardName, inAttribute_mFormalArgumentListForGeneration, inAttribute_mReceiverType, inAttribute_mGuardKindGenerationIR COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardUserRoutineIR::setter_setMMangledImplementationGuardName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mMangledImplementationGuardName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardUserRoutineIR::setter_setMFormalArgumentListForGeneration (GALGAS_routineFormalArgumentListIR inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardUserRoutineIR::setter_setMReceiverType (GALGAS_omnibusType inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardUserRoutineIR::setter_setMGuardKindGenerationIR (GALGAS_guardKindGenerationIR inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mGuardKindGenerationIR = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guardUserRoutineIR::readProperty_mMangledImplementationGuardName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mMangledImplementationGuardName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_guardUserRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListIR () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_guardUserRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardKindGenerationIR GALGAS_guardUserRoutineIR::readProperty_mGuardKindGenerationIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_guardKindGenerationIR () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mGuardKindGenerationIR ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @guardUserRoutineIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_guardUserRoutineIR::cPtr_guardUserRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                  const GALGAS_bool & in_isRequired,
                                                  const GALGAS_bool & in_warnsIfUnused,
                                                  const GALGAS_string & in_mMangledImplementationGuardName,
                                                  const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                  const GALGAS_omnibusType & in_mReceiverType,
                                                  const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mMangledImplementationGuardName (in_mMangledImplementationGuardName),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mGuardKindGenerationIR (in_mGuardKindGenerationIR) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_guardUserRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR ;
}

void cPtr_guardUserRoutineIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@guardUserRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMangledImplementationGuardName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardKindGenerationIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_guardUserRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardUserRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mMangledImplementationGuardName, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @guardUserRoutineIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardUserRoutineIR ("guardUserRoutineIR",
                                           & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardUserRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardUserRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardUserRoutineIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR GALGAS_guardUserRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardUserRoutineIR result ;
  const GALGAS_guardUserRoutineIR * p = (const GALGAS_guardUserRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardUserRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardUserRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @guardImplementationRoutineIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_guardImplementationRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mGuardKindGenerationIR.printNonNullClassInstanceProperties ("mGuardKindGenerationIR") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
    mProperty_mInstructionGenerationList.printNonNullClassInstanceProperties ("mInstructionGenerationList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_guardImplementationRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_guardImplementationRoutineIR * p = (const cPtr_guardImplementationRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
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
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (p->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardKindGenerationIR.objectCompare (p->mProperty_mGuardKindGenerationIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (p->mProperty_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionGenerationList.objectCompare (p->mProperty_mInstructionGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_guardImplementationRoutineIR::objectCompare (const GALGAS_guardImplementationRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR::GALGAS_guardImplementationRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR::GALGAS_guardImplementationRoutineIR (const cPtr_guardImplementationRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardImplementationRoutineIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR GALGAS_guardImplementationRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                          const GALGAS_bool & inAttribute_isRequired,
                                                                                          const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                          const GALGAS_routineFormalArgumentListIR & inAttribute_mFormalArgumentListForGeneration,
                                                                                          const GALGAS_omnibusType & inAttribute_mReceiverType,
                                                                                          const GALGAS_guardKindGenerationIR & inAttribute_mGuardKindGenerationIR,
                                                                                          const GALGAS_allocaList & inAttribute_mAllocaList,
                                                                                          const GALGAS_instructionListIR & inAttribute_mInstructionGenerationList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardImplementationRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mFormalArgumentListForGeneration.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mGuardKindGenerationIR.isValid () && inAttribute_mAllocaList.isValid () && inAttribute_mInstructionGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_guardImplementationRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mFormalArgumentListForGeneration, inAttribute_mReceiverType, inAttribute_mGuardKindGenerationIR, inAttribute_mAllocaList, inAttribute_mInstructionGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardImplementationRoutineIR::setter_setMFormalArgumentListForGeneration (GALGAS_routineFormalArgumentListIR inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardImplementationRoutineIR::setter_setMReceiverType (GALGAS_omnibusType inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardImplementationRoutineIR::setter_setMGuardKindGenerationIR (GALGAS_guardKindGenerationIR inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mGuardKindGenerationIR = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardImplementationRoutineIR::setter_setMAllocaList (GALGAS_allocaList inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardImplementationRoutineIR::setter_setMInstructionGenerationList (GALGAS_instructionListIR inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_guardImplementationRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_guardImplementationRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardKindGenerationIR GALGAS_guardImplementationRoutineIR::readProperty_mGuardKindGenerationIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_guardKindGenerationIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mGuardKindGenerationIR ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_guardImplementationRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_allocaList () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_guardImplementationRoutineIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @guardImplementationRoutineIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_guardImplementationRoutineIR::cPtr_guardImplementationRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                      const GALGAS_bool & in_isRequired,
                                                                      const GALGAS_bool & in_warnsIfUnused,
                                                                      const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                      const GALGAS_omnibusType & in_mReceiverType,
                                                                      const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                      const GALGAS_allocaList & in_mAllocaList,
                                                                      const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mGuardKindGenerationIR (in_mGuardKindGenerationIR),
mProperty_mAllocaList (in_mAllocaList),
mProperty_mInstructionGenerationList (in_mInstructionGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_guardImplementationRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;
}

void cPtr_guardImplementationRoutineIR::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@guardImplementationRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardKindGenerationIR.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_guardImplementationRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardImplementationRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR, mProperty_mAllocaList, mProperty_mInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @guardImplementationRoutineIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardImplementationRoutineIR ("guardImplementationRoutineIR",
                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardImplementationRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardImplementationRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardImplementationRoutineIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR GALGAS_guardImplementationRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guardImplementationRoutineIR result ;
  const GALGAS_guardImplementationRoutineIR * p = (const GALGAS_guardImplementationRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardImplementationRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardImplementationRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@effectiveArgumentListAST routineSignature'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring extensionGetter_routineSignature (const GALGAS_effectiveArgumentListAST & inObject,
                                                 const GALGAS_location & constinArgument_inRoutineNameLocation,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_key_8538 = GALGAS_string ("(") ;
  const GALGAS_effectiveArgumentListAST temp_0 = inObject ;
  cEnumerator_effectiveArgumentListAST enumerator_8567 (temp_0, kENUMERATION_UP) ;
  while (enumerator_8567.hasCurrentObject ()) {
    var_key_8538.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_8567.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)).add_operation (enumerator_8567.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)) ;
    enumerator_8567.gotoNextObject () ;
  }
  var_key_8538.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 219)) ;
  result_result = GALGAS_lstring::constructor_new (var_key_8538, constinArgument_inRoutineNameLocation, inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 220)) ;
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList_2D_element::GALGAS_decoratedRegularRoutineList_2D_element (void) :
mProperty_receiverTypeName (),
mProperty_mode (),
mProperty_isRequired (),
mProperty_routineKind (),
mProperty_warnIfUnused (),
mProperty_exportedRoutine (),
mProperty_routineAttributes (),
mProperty_routineMangledLLVMName (),
mProperty_formalArgumentList (),
mProperty_warningOnUnusedArgs (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineDeclaration (),
mProperty_returnTypeName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList_2D_element::~ GALGAS_decoratedRegularRoutineList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList_2D_element::GALGAS_decoratedRegularRoutineList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_mode & inOperand1,
                                                                                              const GALGAS_bool & inOperand2,
                                                                                              const GALGAS_routineKind & inOperand3,
                                                                                              const GALGAS_bool & inOperand4,
                                                                                              const GALGAS_bool & inOperand5,
                                                                                              const GALGAS_routineAttributes & inOperand6,
                                                                                              const GALGAS_lstring & inOperand7,
                                                                                              const GALGAS_routineFormalArgumentListAST & inOperand8,
                                                                                              const GALGAS_bool & inOperand9,
                                                                                              const GALGAS_instructionListAST & inOperand10,
                                                                                              const GALGAS_location & inOperand11,
                                                                                              const GALGAS_lstring & inOperand12) :
mProperty_receiverTypeName (inOperand0),
mProperty_mode (inOperand1),
mProperty_isRequired (inOperand2),
mProperty_routineKind (inOperand3),
mProperty_warnIfUnused (inOperand4),
mProperty_exportedRoutine (inOperand5),
mProperty_routineAttributes (inOperand6),
mProperty_routineMangledLLVMName (inOperand7),
mProperty_formalArgumentList (inOperand8),
mProperty_warningOnUnusedArgs (inOperand9),
mProperty_mInstructionList (inOperand10),
mProperty_mEndOfRoutineDeclaration (inOperand11),
mProperty_returnTypeName (inOperand12) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList_2D_element GALGAS_decoratedRegularRoutineList_2D_element::constructor_new (const GALGAS_lstring & in_receiverTypeName,
                                                                                                              const GALGAS_mode & in_mode,
                                                                                                              const GALGAS_bool & in_isRequired,
                                                                                                              const GALGAS_routineKind & in_routineKind,
                                                                                                              const GALGAS_bool & in_warnIfUnused,
                                                                                                              const GALGAS_bool & in_exportedRoutine,
                                                                                                              const GALGAS_routineAttributes & in_routineAttributes,
                                                                                                              const GALGAS_lstring & in_routineMangledLLVMName,
                                                                                                              const GALGAS_routineFormalArgumentListAST & in_formalArgumentList,
                                                                                                              const GALGAS_bool & in_warningOnUnusedArgs,
                                                                                                              const GALGAS_instructionListAST & in_mInstructionList,
                                                                                                              const GALGAS_location & in_mEndOfRoutineDeclaration,
                                                                                                              const GALGAS_lstring & in_returnTypeName,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedRegularRoutineList_2D_element result ;
  if (in_receiverTypeName.isValid () && in_mode.isValid () && in_isRequired.isValid () && in_routineKind.isValid () && in_warnIfUnused.isValid () && in_exportedRoutine.isValid () && in_routineAttributes.isValid () && in_routineMangledLLVMName.isValid () && in_formalArgumentList.isValid () && in_warningOnUnusedArgs.isValid () && in_mInstructionList.isValid () && in_mEndOfRoutineDeclaration.isValid () && in_returnTypeName.isValid ()) {
    result = GALGAS_decoratedRegularRoutineList_2D_element (in_receiverTypeName, in_mode, in_isRequired, in_routineKind, in_warnIfUnused, in_exportedRoutine, in_routineAttributes, in_routineMangledLLVMName, in_formalArgumentList, in_warningOnUnusedArgs, in_mInstructionList, in_mEndOfRoutineDeclaration, in_returnTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedRegularRoutineList_2D_element::objectCompare (const GALGAS_decoratedRegularRoutineList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_receiverTypeName.objectCompare (inOperand.mProperty_receiverTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mode.objectCompare (inOperand.mProperty_mode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_isRequired.objectCompare (inOperand.mProperty_isRequired) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_routineKind.objectCompare (inOperand.mProperty_routineKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_warnIfUnused.objectCompare (inOperand.mProperty_warnIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_exportedRoutine.objectCompare (inOperand.mProperty_exportedRoutine) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_routineAttributes.objectCompare (inOperand.mProperty_routineAttributes) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_routineMangledLLVMName.objectCompare (inOperand.mProperty_routineMangledLLVMName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_formalArgumentList.objectCompare (inOperand.mProperty_formalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_warningOnUnusedArgs.objectCompare (inOperand.mProperty_warningOnUnusedArgs) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfRoutineDeclaration.objectCompare (inOperand.mProperty_mEndOfRoutineDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_returnTypeName.objectCompare (inOperand.mProperty_returnTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_decoratedRegularRoutineList_2D_element::isValid (void) const {
  return mProperty_receiverTypeName.isValid () && mProperty_mode.isValid () && mProperty_isRequired.isValid () && mProperty_routineKind.isValid () && mProperty_warnIfUnused.isValid () && mProperty_exportedRoutine.isValid () && mProperty_routineAttributes.isValid () && mProperty_routineMangledLLVMName.isValid () && mProperty_formalArgumentList.isValid () && mProperty_warningOnUnusedArgs.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineDeclaration.isValid () && mProperty_returnTypeName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList_2D_element::drop (void) {
  mProperty_receiverTypeName.drop () ;
  mProperty_mode.drop () ;
  mProperty_isRequired.drop () ;
  mProperty_routineKind.drop () ;
  mProperty_warnIfUnused.drop () ;
  mProperty_exportedRoutine.drop () ;
  mProperty_routineAttributes.drop () ;
  mProperty_routineMangledLLVMName.drop () ;
  mProperty_formalArgumentList.drop () ;
  mProperty_warningOnUnusedArgs.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineDeclaration.drop () ;
  mProperty_returnTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @decoratedRegularRoutineList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_receiverTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_isRequired.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_routineKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_warnIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_exportedRoutine.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_routineAttributes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_routineMangledLLVMName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_formalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_warningOnUnusedArgs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_returnTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @decoratedRegularRoutineList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2D_element ("decoratedRegularRoutineList-element",
                                                               nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedRegularRoutineList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedRegularRoutineList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRegularRoutineList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList_2D_element GALGAS_decoratedRegularRoutineList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRegularRoutineList_2D_element result ;
  const GALGAS_decoratedRegularRoutineList_2D_element * p = (const GALGAS_decoratedRegularRoutineList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedRegularRoutineList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRegularRoutineList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @regularRoutineIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_regularRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
    mProperty_mInstructionGenerationList.printNonNullClassInstanceProperties ("mInstructionGenerationList") ;
    mProperty_mExportedFunction.printNonNullClassInstanceProperties ("mExportedFunction") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
    mProperty_mAppendFileAndLineArgumentForPanicLocation.printNonNullClassInstanceProperties ("mAppendFileAndLineArgumentForPanicLocation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_regularRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_regularRoutineIR * p = (const cPtr_regularRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_regularRoutineIR) ;
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
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (p->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (p->mProperty_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionGenerationList.objectCompare (p->mProperty_mInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExportedFunction.objectCompare (p->mProperty_mExportedFunction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (p->mProperty_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAppendFileAndLineArgumentForPanicLocation.objectCompare (p->mProperty_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_regularRoutineIR::objectCompare (const GALGAS_regularRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR::GALGAS_regularRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR::GALGAS_regularRoutineIR (const cPtr_regularRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_regularRoutineIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR GALGAS_regularRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                  const GALGAS_bool & inAttribute_isRequired,
                                                                  const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                  const GALGAS_omnibusType & inAttribute_mReceiverType,
                                                                  const GALGAS_routineFormalArgumentListIR & inAttribute_mFormalArgumentListForGeneration,
                                                                  const GALGAS_allocaList & inAttribute_mAllocaList,
                                                                  const GALGAS_instructionListIR & inAttribute_mInstructionGenerationList,
                                                                  const GALGAS_bool & inAttribute_mExportedFunction,
                                                                  const GALGAS_routineKind & inAttribute_mKind,
                                                                  const GALGAS_omnibusType & inAttribute_mReturnType,
                                                                  const GALGAS_bool & inAttribute_mAppendFileAndLineArgumentForPanicLocation
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_regularRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mFormalArgumentListForGeneration.isValid () && inAttribute_mAllocaList.isValid () && inAttribute_mInstructionGenerationList.isValid () && inAttribute_mExportedFunction.isValid () && inAttribute_mKind.isValid () && inAttribute_mReturnType.isValid () && inAttribute_mAppendFileAndLineArgumentForPanicLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_regularRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mReceiverType, inAttribute_mFormalArgumentListForGeneration, inAttribute_mAllocaList, inAttribute_mInstructionGenerationList, inAttribute_mExportedFunction, inAttribute_mKind, inAttribute_mReturnType, inAttribute_mAppendFileAndLineArgumentForPanicLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setter_setMReceiverType (GALGAS_omnibusType inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setter_setMFormalArgumentListForGeneration (GALGAS_routineFormalArgumentListIR inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setter_setMAllocaList (GALGAS_allocaList inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setter_setMInstructionGenerationList (GALGAS_instructionListIR inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setter_setMExportedFunction (GALGAS_bool inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mExportedFunction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setter_setMKind (GALGAS_routineKind inValue
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setter_setMReturnType (GALGAS_omnibusType inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setter_setMAppendFileAndLineArgumentForPanicLocation (GALGAS_bool inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mAppendFileAndLineArgumentForPanicLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_regularRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_regularRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListIR () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_regularRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_allocaList () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_regularRoutineIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_regularRoutineIR::readProperty_mExportedFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mExportedFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_regularRoutineIR::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineKind () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_regularRoutineIR::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mReturnType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_regularRoutineIR::readProperty_mAppendFileAndLineArgumentForPanicLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @regularRoutineIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_regularRoutineIR::cPtr_regularRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                              const GALGAS_bool & in_isRequired,
                                              const GALGAS_bool & in_warnsIfUnused,
                                              const GALGAS_omnibusType & in_mReceiverType,
                                              const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                              const GALGAS_allocaList & in_mAllocaList,
                                              const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                              const GALGAS_bool & in_mExportedFunction,
                                              const GALGAS_routineKind & in_mKind,
                                              const GALGAS_omnibusType & in_mReturnType,
                                              const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mAllocaList (in_mAllocaList),
mProperty_mInstructionGenerationList (in_mInstructionGenerationList),
mProperty_mExportedFunction (in_mExportedFunction),
mProperty_mKind (in_mKind),
mProperty_mReturnType (in_mReturnType),
mProperty_mAppendFileAndLineArgumentForPanicLocation (in_mAppendFileAndLineArgumentForPanicLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_regularRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

void cPtr_regularRoutineIR::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@regularRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExportedFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_regularRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_regularRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mReceiverType, mProperty_mFormalArgumentListForGeneration, mProperty_mAllocaList, mProperty_mInstructionGenerationList, mProperty_mExportedFunction, mProperty_mKind, mProperty_mReturnType, mProperty_mAppendFileAndLineArgumentForPanicLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @regularRoutineIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularRoutineIR ("regularRoutineIR",
                                         & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_regularRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_regularRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularRoutineIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR GALGAS_regularRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_regularRoutineIR result ;
  const GALGAS_regularRoutineIR * p = (const GALGAS_regularRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_regularRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @panicAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsSetup.printNonNullClassInstanceProperties ("mIsSetup") ;
    mProperty_mPanicInstructionList.printNonNullClassInstanceProperties ("mPanicInstructionList") ;
    mProperty_mEndOfPanicInstructions.printNonNullClassInstanceProperties ("mEndOfPanicInstructions") ;
    mProperty_mPriority.printNonNullClassInstanceProperties ("mPriority") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_panicAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_panicAST * p = (const cPtr_panicAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsSetup.objectCompare (p->mProperty_mIsSetup) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicInstructionList.objectCompare (p->mProperty_mPanicInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfPanicInstructions.objectCompare (p->mProperty_mEndOfPanicInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPriority.objectCompare (p->mProperty_mPriority) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_panicAST::objectCompare (const GALGAS_panicAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicAST::GALGAS_panicAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicAST::GALGAS_panicAST (const cPtr_panicAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicAST GALGAS_panicAST::constructor_new (const GALGAS_bool & inAttribute_mIsSetup,
                                                  const GALGAS_instructionListAST & inAttribute_mPanicInstructionList,
                                                  const GALGAS_location & inAttribute_mEndOfPanicInstructions,
                                                  const GALGAS_lbigint & inAttribute_mPriority
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_panicAST result ;
  if (inAttribute_mIsSetup.isValid () && inAttribute_mPanicInstructionList.isValid () && inAttribute_mEndOfPanicInstructions.isValid () && inAttribute_mPriority.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicAST (inAttribute_mIsSetup, inAttribute_mPanicInstructionList, inAttribute_mEndOfPanicInstructions, inAttribute_mPriority COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_panicAST::setter_setMIsSetup (GALGAS_bool inValue
                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mIsSetup = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_panicAST::setter_setMPanicInstructionList (GALGAS_instructionListAST inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mPanicInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_panicAST::setter_setMEndOfPanicInstructions (GALGAS_location inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mEndOfPanicInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_panicAST::setter_setMPriority (GALGAS_lbigint inValue
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mPriority = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_panicAST::readProperty_mIsSetup (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mIsSetup ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_panicAST::readProperty_mPanicInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mPanicInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_panicAST::readProperty_mEndOfPanicInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mEndOfPanicInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_panicAST::readProperty_mPriority (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mPriority ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @panicAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_panicAST::cPtr_panicAST (const GALGAS_bool & in_mIsSetup,
                              const GALGAS_instructionListAST & in_mPanicInstructionList,
                              const GALGAS_location & in_mEndOfPanicInstructions,
                              const GALGAS_lbigint & in_mPriority
                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mIsSetup (in_mIsSetup),
mProperty_mPanicInstructionList (in_mPanicInstructionList),
mProperty_mEndOfPanicInstructions (in_mEndOfPanicInstructions),
mProperty_mPriority (in_mPriority) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_panicAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

void cPtr_panicAST::description (C_String & ioString,
                                 const int32_t inIndentation) const {
  ioString << "[@panicAST:" ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfPanicInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_panicAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicAST (mProperty_mIsSetup, mProperty_mPanicInstructionList, mProperty_mEndOfPanicInstructions, mProperty_mPriority COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @panicAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicAST ("panicAST",
                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicAST GALGAS_panicAST::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_panicAST result ;
  const GALGAS_panicAST * p = (const GALGAS_panicAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@panicAST noteTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_noteTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_panicAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mPanicInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 53)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (cPtr_panicAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_panicAST) ;
    inObject->method_noteTypesInPrecedenceGraph  (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
// @decoratedPanicRoutine reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedPanicRoutine::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mIsSetup.printNonNullClassInstanceProperties ("mIsSetup") ;
    mProperty_mPriority.printNonNullClassInstanceProperties ("mPriority") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_decoratedPanicRoutine::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsSetup.objectCompare (p->mProperty_mIsSetup) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPriority.objectCompare (p->mProperty_mPriority) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_decoratedPanicRoutine::objectCompare (const GALGAS_decoratedPanicRoutine & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine::GALGAS_decoratedPanicRoutine (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine::GALGAS_decoratedPanicRoutine (const cPtr_decoratedPanicRoutine * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedPanicRoutine) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::constructor_new (const GALGAS_bool & inAttribute_mIsSetup,
                                                                            const GALGAS_lbigint & inAttribute_mPriority
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedPanicRoutine result ;
  if (inAttribute_mIsSetup.isValid () && inAttribute_mPriority.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedPanicRoutine (inAttribute_mIsSetup, inAttribute_mPriority COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedPanicRoutine::setter_setMIsSetup (GALGAS_bool inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    p->mProperty_mIsSetup = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedPanicRoutine::setter_setMPriority (GALGAS_lbigint inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    p->mProperty_mPriority = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_decoratedPanicRoutine::readProperty_mIsSetup (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    return p->mProperty_mIsSetup ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_decoratedPanicRoutine::readProperty_mPriority (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    return p->mProperty_mPriority ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedPanicRoutine class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedPanicRoutine::cPtr_decoratedPanicRoutine (const GALGAS_bool & in_mIsSetup,
                                                        const GALGAS_lbigint & in_mPriority
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mIsSetup (in_mIsSetup),
mProperty_mPriority (in_mPriority) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedPanicRoutine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

void cPtr_decoratedPanicRoutine::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@decoratedPanicRoutine:" ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedPanicRoutine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedPanicRoutine (mProperty_mIsSetup, mProperty_mPriority COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @decoratedPanicRoutine generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedPanicRoutine ("decoratedPanicRoutine",
                                              & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedPanicRoutine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedPanicRoutine::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedPanicRoutine (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedPanicRoutine result ;
  const GALGAS_decoratedPanicRoutine * p = (const GALGAS_decoratedPanicRoutine *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedPanicRoutine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedPanicRoutine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @fileSpecificPanicRoutineIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_fileSpecificPanicRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_inFilePath.printNonNullClassInstanceProperties ("inFilePath") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_fileSpecificPanicRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_fileSpecificPanicRoutineIR * p = (const cPtr_fileSpecificPanicRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_fileSpecificPanicRoutineIR) ;
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
    result = mProperty_inFilePath.objectCompare (p->mProperty_inFilePath) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_fileSpecificPanicRoutineIR::objectCompare (const GALGAS_fileSpecificPanicRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR::GALGAS_fileSpecificPanicRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR::GALGAS_fileSpecificPanicRoutineIR (const cPtr_fileSpecificPanicRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fileSpecificPanicRoutineIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR GALGAS_fileSpecificPanicRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                      const GALGAS_bool & inAttribute_isRequired,
                                                                                      const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                      const GALGAS_string & inAttribute_inFilePath
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_fileSpecificPanicRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_inFilePath.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_fileSpecificPanicRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_inFilePath COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileSpecificPanicRoutineIR::setter_setInFilePath (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_fileSpecificPanicRoutineIR * p = (cPtr_fileSpecificPanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fileSpecificPanicRoutineIR) ;
    p->mProperty_inFilePath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_fileSpecificPanicRoutineIR::readProperty_inFilePath (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_fileSpecificPanicRoutineIR * p = (cPtr_fileSpecificPanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fileSpecificPanicRoutineIR) ;
    return p->mProperty_inFilePath ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @fileSpecificPanicRoutineIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_fileSpecificPanicRoutineIR::cPtr_fileSpecificPanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                  const GALGAS_bool & in_isRequired,
                                                                  const GALGAS_bool & in_warnsIfUnused,
                                                                  const GALGAS_string & in_inFilePath
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_inFilePath (in_inFilePath) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_fileSpecificPanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;
}

void cPtr_fileSpecificPanicRoutineIR::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@fileSpecificPanicRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_inFilePath.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_fileSpecificPanicRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_fileSpecificPanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_inFilePath COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @fileSpecificPanicRoutineIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ("fileSpecificPanicRoutineIR",
                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fileSpecificPanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fileSpecificPanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileSpecificPanicRoutineIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR GALGAS_fileSpecificPanicRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fileSpecificPanicRoutineIR result ;
  const GALGAS_fileSpecificPanicRoutineIR * p = (const GALGAS_fileSpecificPanicRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fileSpecificPanicRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileSpecificPanicRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @universalModePanicRoutineIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_universalModePanicRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_universalModePanicRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_universalModePanicRoutineIR * p = (const cPtr_universalModePanicRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_universalModePanicRoutineIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_universalModePanicRoutineIR::objectCompare (const GALGAS_universalModePanicRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR::GALGAS_universalModePanicRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR::GALGAS_universalModePanicRoutineIR (const cPtr_universalModePanicRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_universalModePanicRoutineIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR GALGAS_universalModePanicRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                        const GALGAS_bool & inAttribute_isRequired,
                                                                                        const GALGAS_bool & inAttribute_warnsIfUnused
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_universalModePanicRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_universalModePanicRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @universalModePanicRoutineIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_universalModePanicRoutineIR::cPtr_universalModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                    const GALGAS_bool & in_isRequired,
                                                                    const GALGAS_bool & in_warnsIfUnused
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_universalModePanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;
}

void cPtr_universalModePanicRoutineIR::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@universalModePanicRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_universalModePanicRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_universalModePanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @universalModePanicRoutineIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_universalModePanicRoutineIR ("universalModePanicRoutineIR",
                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_universalModePanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_universalModePanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalModePanicRoutineIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR GALGAS_universalModePanicRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_universalModePanicRoutineIR result ;
  const GALGAS_universalModePanicRoutineIR * p = (const GALGAS_universalModePanicRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_universalModePanicRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalModePanicRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sectionModePanicRoutineIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sectionModePanicRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mPanicSetupListIR.printNonNullClassInstanceProperties ("mPanicSetupListIR") ;
    mProperty_mPanicLoopListIR.printNonNullClassInstanceProperties ("mPanicLoopListIR") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sectionModePanicRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sectionModePanicRoutineIR * p = (const cPtr_sectionModePanicRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
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
    result = mProperty_mPanicSetupListIR.objectCompare (p->mProperty_mPanicSetupListIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicLoopListIR.objectCompare (p->mProperty_mPanicLoopListIR) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sectionModePanicRoutineIR::objectCompare (const GALGAS_sectionModePanicRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR::GALGAS_sectionModePanicRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR::GALGAS_sectionModePanicRoutineIR (const cPtr_sectionModePanicRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sectionModePanicRoutineIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR GALGAS_sectionModePanicRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                    const GALGAS_bool & inAttribute_isRequired,
                                                                                    const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                    const GALGAS_panicSortedListIR & inAttribute_mPanicSetupListIR,
                                                                                    const GALGAS_panicSortedListIR & inAttribute_mPanicLoopListIR
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sectionModePanicRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mPanicSetupListIR.isValid () && inAttribute_mPanicLoopListIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sectionModePanicRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mPanicSetupListIR, inAttribute_mPanicLoopListIR COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sectionModePanicRoutineIR::setter_setMPanicSetupListIR (GALGAS_panicSortedListIR inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    p->mProperty_mPanicSetupListIR = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sectionModePanicRoutineIR::setter_setMPanicLoopListIR (GALGAS_panicSortedListIR inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    p->mProperty_mPanicLoopListIR = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR GALGAS_sectionModePanicRoutineIR::readProperty_mPanicSetupListIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_panicSortedListIR () ;
  }else{
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    return p->mProperty_mPanicSetupListIR ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR GALGAS_sectionModePanicRoutineIR::readProperty_mPanicLoopListIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_panicSortedListIR () ;
  }else{
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    return p->mProperty_mPanicLoopListIR ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sectionModePanicRoutineIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sectionModePanicRoutineIR::cPtr_sectionModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                const GALGAS_bool & in_isRequired,
                                                                const GALGAS_bool & in_warnsIfUnused,
                                                                const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                                                const GALGAS_panicSortedListIR & in_mPanicLoopListIR
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mPanicSetupListIR (in_mPanicSetupListIR),
mProperty_mPanicLoopListIR (in_mPanicLoopListIR) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sectionModePanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;
}

void cPtr_sectionModePanicRoutineIR::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@sectionModePanicRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicSetupListIR.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicLoopListIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sectionModePanicRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sectionModePanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mPanicSetupListIR, mProperty_mPanicLoopListIR COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @sectionModePanicRoutineIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ("sectionModePanicRoutineIR",
                                                  & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sectionModePanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sectionModePanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionModePanicRoutineIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR GALGAS_sectionModePanicRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sectionModePanicRoutineIR result ;
  const GALGAS_sectionModePanicRoutineIR * p = (const GALGAS_sectionModePanicRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sectionModePanicRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionModePanicRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeConvertToBooleanAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeConvertToBooleanAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mConverterName.printNonNullClassInstanceProperties ("mConverterName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeConvertToBooleanAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_compileTimeConvertToBooleanAST * p = (const cPtr_compileTimeConvertToBooleanAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeName.objectCompare (p->mProperty_mReceiverTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConverterName.objectCompare (p->mProperty_mConverterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeConvertToBooleanAST::objectCompare (const GALGAS_compileTimeConvertToBooleanAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST::GALGAS_compileTimeConvertToBooleanAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST::GALGAS_compileTimeConvertToBooleanAST (const cPtr_compileTimeConvertToBooleanAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeConvertToBooleanAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST GALGAS_compileTimeConvertToBooleanAST::constructor_new (const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                              const GALGAS_lstring & inAttribute_mReceiverTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mConverterName,
                                                                                              const GALGAS_ctExpressionAST & inAttribute_mExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeConvertToBooleanAST result ;
  if (inAttribute_mReceiverName.isValid () && inAttribute_mReceiverTypeName.isValid () && inAttribute_mConverterName.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_compileTimeConvertToBooleanAST (inAttribute_mReceiverName, inAttribute_mReceiverTypeName, inAttribute_mConverterName, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeConvertToBooleanAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeConvertToBooleanAST::setter_setMReceiverTypeName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeConvertToBooleanAST::setter_setMConverterName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mConverterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeConvertToBooleanAST::setter_setMExpression (GALGAS_ctExpressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeConvertToBooleanAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeConvertToBooleanAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeConvertToBooleanAST::readProperty_mConverterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mConverterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compileTimeConvertToBooleanAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeConvertToBooleanAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeConvertToBooleanAST::cPtr_compileTimeConvertToBooleanAST (const GALGAS_lstring & in_mReceiverName,
                                                                          const GALGAS_lstring & in_mReceiverTypeName,
                                                                          const GALGAS_lstring & in_mConverterName,
                                                                          const GALGAS_ctExpressionAST & in_mExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mReceiverTypeName (in_mReceiverTypeName),
mProperty_mConverterName (in_mConverterName),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeConvertToBooleanAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ;
}

void cPtr_compileTimeConvertToBooleanAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@compileTimeConvertToBooleanAST:" ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConverterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeConvertToBooleanAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeConvertToBooleanAST (mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mConverterName, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @compileTimeConvertToBooleanAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ("compileTimeConvertToBooleanAST",
                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeConvertToBooleanAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeConvertToBooleanAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeConvertToBooleanAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST GALGAS_compileTimeConvertToBooleanAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeConvertToBooleanAST result ;
  const GALGAS_compileTimeConvertToBooleanAST * p = (const GALGAS_compileTimeConvertToBooleanAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeConvertToBooleanAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeConvertToBooleanAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @llvmConvertToBooleanAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmConvertToBooleanAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mConverterName.printNonNullClassInstanceProperties ("mConverterName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmConvertToBooleanAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmConvertToBooleanAST * p = (const cPtr_llvmConvertToBooleanAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeName.objectCompare (p->mProperty_mReceiverTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConverterName.objectCompare (p->mProperty_mConverterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmConvertToBooleanAST::objectCompare (const GALGAS_llvmConvertToBooleanAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST::GALGAS_llvmConvertToBooleanAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST::GALGAS_llvmConvertToBooleanAST (const cPtr_llvmConvertToBooleanAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmConvertToBooleanAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST GALGAS_llvmConvertToBooleanAST::constructor_new (const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                const GALGAS_lstring & inAttribute_mReceiverTypeName,
                                                                                const GALGAS_lstring & inAttribute_mConverterName,
                                                                                const GALGAS_llvmGenerationInstructionList & inAttribute_mInstructionList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_llvmConvertToBooleanAST result ;
  if (inAttribute_mReceiverName.isValid () && inAttribute_mReceiverTypeName.isValid () && inAttribute_mConverterName.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmConvertToBooleanAST (inAttribute_mReceiverName, inAttribute_mReceiverTypeName, inAttribute_mConverterName, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmConvertToBooleanAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmConvertToBooleanAST::setter_setMReceiverTypeName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmConvertToBooleanAST::setter_setMConverterName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mConverterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmConvertToBooleanAST::setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmConvertToBooleanAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmConvertToBooleanAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmConvertToBooleanAST::readProperty_mConverterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mConverterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmConvertToBooleanAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @llvmConvertToBooleanAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_llvmConvertToBooleanAST::cPtr_llvmConvertToBooleanAST (const GALGAS_lstring & in_mReceiverName,
                                                            const GALGAS_lstring & in_mReceiverTypeName,
                                                            const GALGAS_lstring & in_mConverterName,
                                                            const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mReceiverTypeName (in_mReceiverTypeName),
mProperty_mConverterName (in_mConverterName),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmConvertToBooleanAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ;
}

void cPtr_llvmConvertToBooleanAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@llvmConvertToBooleanAST:" ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConverterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmConvertToBooleanAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmConvertToBooleanAST (mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mConverterName, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmConvertToBooleanAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ("llvmConvertToBooleanAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmConvertToBooleanAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmConvertToBooleanAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmConvertToBooleanAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST GALGAS_llvmConvertToBooleanAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmConvertToBooleanAST result ;
  const GALGAS_llvmConvertToBooleanAST * p = (const GALGAS_llvmConvertToBooleanAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmConvertToBooleanAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmConvertToBooleanAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeImplicitConverterToBoolean reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeImplicitConverterToBoolean::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_compileTimeImplicitConverterToBoolean * p = (const cPtr_compileTimeImplicitConverterToBoolean *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeImplicitConverterToBoolean::objectCompare (const GALGAS_compileTimeImplicitConverterToBoolean & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean::GALGAS_compileTimeImplicitConverterToBoolean (void) :
GALGAS_abstractImplicitConverterToBoolean () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean::GALGAS_compileTimeImplicitConverterToBoolean (const cPtr_compileTimeImplicitConverterToBoolean * inSourcePtr) :
GALGAS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeImplicitConverterToBoolean) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean GALGAS_compileTimeImplicitConverterToBoolean::constructor_new (const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                            const GALGAS_ctExpressionAST & inAttribute_mExpression
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeImplicitConverterToBoolean result ;
  if (inAttribute_mReceiverName.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_compileTimeImplicitConverterToBoolean (inAttribute_mReceiverName, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeImplicitConverterToBoolean::setter_setMReceiverName (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeImplicitConverterToBoolean::setter_setMExpression (GALGAS_ctExpressionAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeImplicitConverterToBoolean::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compileTimeImplicitConverterToBoolean::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeImplicitConverterToBoolean class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeImplicitConverterToBoolean::cPtr_compileTimeImplicitConverterToBoolean (const GALGAS_lstring & in_mReceiverName,
                                                                                        const GALGAS_ctExpressionAST & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;
}

void cPtr_compileTimeImplicitConverterToBoolean::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@compileTimeImplicitConverterToBoolean:" ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeImplicitConverterToBoolean::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeImplicitConverterToBoolean (mProperty_mReceiverName, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @compileTimeImplicitConverterToBoolean generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ("compileTimeImplicitConverterToBoolean",
                                                              & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean GALGAS_compileTimeImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeImplicitConverterToBoolean result ;
  const GALGAS_compileTimeImplicitConverterToBoolean * p = (const GALGAS_compileTimeImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @llvmImplicitConverterToBoolean reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmImplicitConverterToBoolean::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmImplicitConverterToBoolean * p = (const cPtr_llvmImplicitConverterToBoolean *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmImplicitConverterToBoolean::objectCompare (const GALGAS_llvmImplicitConverterToBoolean & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean::GALGAS_llvmImplicitConverterToBoolean (void) :
GALGAS_abstractImplicitConverterToBoolean () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean::GALGAS_llvmImplicitConverterToBoolean (const cPtr_llvmImplicitConverterToBoolean * inSourcePtr) :
GALGAS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmImplicitConverterToBoolean) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean GALGAS_llvmImplicitConverterToBoolean::constructor_new (const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                              const GALGAS_omnibusType & inAttribute_mReceiverType,
                                                                                              const GALGAS_llvmGenerationInstructionList & inAttribute_mInstructionList
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmImplicitConverterToBoolean result ;
  if (inAttribute_mReceiverName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmImplicitConverterToBoolean (inAttribute_mReceiverName, inAttribute_mReceiverType, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmImplicitConverterToBoolean::setter_setMReceiverName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmImplicitConverterToBoolean::setter_setMReceiverType (GALGAS_omnibusType inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmImplicitConverterToBoolean::setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmImplicitConverterToBoolean::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_llvmImplicitConverterToBoolean::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmImplicitConverterToBoolean::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @llvmImplicitConverterToBoolean class
//----------------------------------------------------------------------------------------------------------------------

cPtr_llvmImplicitConverterToBoolean::cPtr_llvmImplicitConverterToBoolean (const GALGAS_lstring & in_mReceiverName,
                                                                          const GALGAS_omnibusType & in_mReceiverType,
                                                                          const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;
}

void cPtr_llvmImplicitConverterToBoolean::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@llvmImplicitConverterToBoolean:" ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmImplicitConverterToBoolean::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmImplicitConverterToBoolean (mProperty_mReceiverName, mProperty_mReceiverType, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmImplicitConverterToBoolean generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ("llvmImplicitConverterToBoolean",
                                                       & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean GALGAS_llvmImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_llvmImplicitConverterToBoolean result ;
  const GALGAS_llvmImplicitConverterToBoolean * p = (const GALGAS_llvmImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @convertExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_convertExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_convertExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_convertExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpression.objectCompare (p->mProperty_mEndOfExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_convertExpressionAST::objectCompare (const GALGAS_convertExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (const cPtr_convertExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                          const GALGAS_location & inAttribute_mEndOfExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_convertExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_convertExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_convertExpressionAST::setter_setMExpression (GALGAS_expressionAST inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_convertExpressionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_convertExpressionAST::setter_setMEndOfExpression (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_convertExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_convertExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_convertExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @convertExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_convertExpressionAST::cPtr_convertExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                      const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_location & in_mEndOfExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_convertExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

void cPtr_convertExpressionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@convertExpressionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_convertExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_convertExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @convertExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertExpressionAST ("convertExpressionAST",
                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_convertExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_convertExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_convertExpressionAST result ;
  const GALGAS_convertExpressionAST * p = (const GALGAS_convertExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_convertExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @convertInstructionIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_convertInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_convertInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_convertInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_convertInstructionIR::objectCompare (const GALGAS_convertInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (const cPtr_convertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertInstructionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                          const GALGAS_objectIR & inAttribute_mOperand,
                                                                          const GALGAS_location & inAttribute_mLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperand.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_convertInstructionIR (inAttribute_mTarget, inAttribute_mOperand, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_convertInstructionIR::setter_setMTarget (GALGAS_objectIR inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_convertInstructionIR::setter_setMOperand (GALGAS_objectIR inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    p->mProperty_mOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_convertInstructionIR::setter_setMLocation (GALGAS_location inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_convertInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_convertInstructionIR::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    return p->mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_convertInstructionIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @convertInstructionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_convertInstructionIR::cPtr_convertInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                      const GALGAS_objectIR & in_mOperand,
                                                      const GALGAS_location & in_mLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mOperand (in_mOperand),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_convertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

void cPtr_convertInstructionIR::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@convertInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_convertInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_convertInstructionIR (mProperty_mTarget, mProperty_mOperand, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @convertInstructionIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertInstructionIR ("convertInstructionIR",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_convertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_convertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertInstructionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR result ;
  const GALGAS_convertInstructionIR * p = (const GALGAS_convertInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_convertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_convertInstructionIR_2D_weak::objectCompare (const GALGAS_convertInstructionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR_2D_weak::GALGAS_convertInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR_2D_weak & GALGAS_convertInstructionIR_2D_weak::operator = (const GALGAS_convertInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR_2D_weak::GALGAS_convertInstructionIR_2D_weak (const GALGAS_convertInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR_2D_weak GALGAS_convertInstructionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_convertInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR GALGAS_convertInstructionIR_2D_weak::bang_convertInstructionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_convertInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_convertInstructionIR) ;
      result = GALGAS_convertInstructionIR ((cPtr_convertInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @convertInstructionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertInstructionIR_2D_weak ("convertInstructionIR-weak",
                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_convertInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_convertInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR_2D_weak GALGAS_convertInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR_2D_weak result ;
  const GALGAS_convertInstructionIR_2D_weak * p = (const GALGAS_convertInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_convertInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @extendExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extendExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extendExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extendExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpression.objectCompare (p->mProperty_mEndOfExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_extendExpressionAST::objectCompare (const GALGAS_extendExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                        const GALGAS_lstring & inAttribute_mTypeName,
                                                                        const GALGAS_location & inAttribute_mEndOfExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extendExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extendExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendExpressionAST::setter_setMExpression (GALGAS_expressionAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendExpressionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendExpressionAST::setter_setMEndOfExpression (GALGAS_location inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_extendExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extendExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extendExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extendExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extendExpressionAST::cPtr_extendExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                    const GALGAS_lstring & in_mTypeName,
                                                    const GALGAS_location & in_mEndOfExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extendExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

void cPtr_extendExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@extendExpressionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extendExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extendExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @extendExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendExpressionAST ("extendExpressionAST",
                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extendExpressionAST result ;
  const GALGAS_extendExpressionAST * p = (const GALGAS_extendExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extendExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @truncateExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_truncateExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_truncateExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpression.objectCompare (p->mProperty_mEndOfExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_truncateExpressionAST::objectCompare (const GALGAS_truncateExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (const cPtr_truncateExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                            const GALGAS_lstring & inAttribute_mTypeName,
                                                                            const GALGAS_location & inAttribute_mEndOfExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_truncateExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_truncateExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_truncateExpressionAST::setter_setMExpression (GALGAS_expressionAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_truncateExpressionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_truncateExpressionAST::setter_setMEndOfExpression (GALGAS_location inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_truncateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_truncateExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_truncateExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @truncateExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                        const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_location & in_mEndOfExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_truncateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

void cPtr_truncateExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@truncateExpressionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_truncateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_truncateExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @truncateExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_truncateExpressionAST ("truncateExpressionAST",
                                              & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_truncateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_truncateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_truncateExpressionAST result ;
  const GALGAS_truncateExpressionAST * p = (const GALGAS_truncateExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_truncateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST::GALGAS_controlRegisterLValueAST (void) :
mProperty_mRegisterGroupName (),
mProperty_mGroupIndex (),
mProperty_mRegisterName (),
mProperty_mRegisterIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST::~ GALGAS_controlRegisterLValueAST (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST::GALGAS_controlRegisterLValueAST (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_registerGroupIndexAST & inOperand1,
                                                                  const GALGAS_lstring & inOperand2,
                                                                  const GALGAS_registerIndexAST & inOperand3) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mGroupIndex (inOperand1),
mProperty_mRegisterName (inOperand2),
mProperty_mRegisterIndex (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterLValueAST::constructor_new (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                  const GALGAS_registerGroupIndexAST & in_mGroupIndex,
                                                                                  const GALGAS_lstring & in_mRegisterName,
                                                                                  const GALGAS_registerIndexAST & in_mRegisterIndex,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterLValueAST result ;
  if (in_mRegisterGroupName.isValid () && in_mGroupIndex.isValid () && in_mRegisterName.isValid () && in_mRegisterIndex.isValid ()) {
    result = GALGAS_controlRegisterLValueAST (in_mRegisterGroupName, in_mGroupIndex, in_mRegisterName, in_mRegisterIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterLValueAST::objectCompare (const GALGAS_controlRegisterLValueAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterGroupName.objectCompare (inOperand.mProperty_mRegisterGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupIndex.objectCompare (inOperand.mProperty_mGroupIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterName.objectCompare (inOperand.mProperty_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterIndex.objectCompare (inOperand.mProperty_mRegisterIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterLValueAST::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mGroupIndex.isValid () && mProperty_mRegisterName.isValid () && mProperty_mRegisterIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterLValueAST::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mGroupIndex.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mRegisterIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterLValueAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterLValueAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterLValueAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterLValueAST ("controlRegisterLValueAST",
                                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterLValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterLValueAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterLValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterLValueAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterLValueAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterLValueAST result ;
  const GALGAS_controlRegisterLValueAST * p = (const GALGAS_controlRegisterLValueAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterLValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterLValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueAST::GALGAS_LValueAST (void) :
mProperty_mIdentifier (),
mProperty_mOperand () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueAST::~ GALGAS_LValueAST (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueAST::GALGAS_LValueAST (const GALGAS_lstring & inOperand0,
                                    const GALGAS_LValueOperandAST & inOperand1) :
mProperty_mIdentifier (inOperand0),
mProperty_mOperand (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueAST GALGAS_LValueAST::constructor_new (const GALGAS_lstring & in_mIdentifier,
                                                    const GALGAS_LValueOperandAST & in_mOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueAST result ;
  if (in_mIdentifier.isValid () && in_mOperand.isValid ()) {
    result = GALGAS_LValueAST (in_mIdentifier, in_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_LValueAST::objectCompare (const GALGAS_LValueAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIdentifier.objectCompare (inOperand.mProperty_mIdentifier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_LValueAST::isValid (void) const {
  return mProperty_mIdentifier.isValid () && mProperty_mOperand.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_LValueAST::drop (void) {
  mProperty_mIdentifier.drop () ;
  mProperty_mOperand.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_LValueAST::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<struct @LValueAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIdentifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @LValueAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueAST ("LValueAST",
                                  nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_LValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_LValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueAST GALGAS_LValueAST::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_LValueAST result ;
  const GALGAS_LValueAST * p = (const GALGAS_LValueAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_LValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (void) :
mProperty_type (),
mProperty_llvmName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation::~ GALGAS_LValueRepresentation (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (const GALGAS_omnibusType & inOperand0,
                                                          const GALGAS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::constructor_new (const GALGAS_omnibusType & in_type,
                                                                          const GALGAS_string & in_llvmName,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  if (in_type.isValid () && in_llvmName.isValid ()) {
    result = GALGAS_LValueRepresentation (in_type, in_llvmName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_LValueRepresentation::objectCompare (const GALGAS_LValueRepresentation & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_llvmName.objectCompare (inOperand.mProperty_llvmName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_LValueRepresentation::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_LValueRepresentation::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_LValueRepresentation::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @LValueRepresentation:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_llvmName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @LValueRepresentation generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueRepresentation ("LValueRepresentation",
                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_LValueRepresentation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueRepresentation ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_LValueRepresentation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueRepresentation (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  const GALGAS_LValueRepresentation * p = (const GALGAS_LValueRepresentation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_LValueRepresentation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueRepresentation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sizeofExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sizeofExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLValue.printNonNullClassInstanceProperties ("mLValue") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sizeofExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofExpressionAST * p = (const cPtr_sizeofExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sizeofExpressionAST::objectCompare (const GALGAS_sizeofExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST::GALGAS_sizeofExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST::GALGAS_sizeofExpressionAST (const cPtr_sizeofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::constructor_new (const GALGAS_LValueAST & inAttribute_mLValue
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sizeofExpressionAST result ;
  if (inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofExpressionAST (inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sizeofExpressionAST::setter_setMLValue (GALGAS_LValueAST inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofExpressionAST * p = (cPtr_sizeofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
    p->mProperty_mLValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueAST GALGAS_sizeofExpressionAST::readProperty_mLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_LValueAST () ;
  }else{
    cPtr_sizeofExpressionAST * p = (cPtr_sizeofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
    return p->mProperty_mLValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sizeofExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sizeofExpressionAST::cPtr_sizeofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue (in_mLValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sizeofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

void cPtr_sizeofExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@sizeofExpressionAST:" ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sizeofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sizeofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @sizeofExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofExpressionAST ("sizeofExpressionAST",
                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sizeofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sizeofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sizeofExpressionAST result ;
  const GALGAS_sizeofExpressionAST * p = (const GALGAS_sizeofExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sizeofExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sizeofTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sizeofTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sizeofTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofTypeAST * p = (const cPtr_sizeofTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sizeofTypeAST::objectCompare (const GALGAS_sizeofTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST::GALGAS_sizeofTypeAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST::GALGAS_sizeofTypeAST (const cPtr_sizeofTypeAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sizeofTypeAST result ;
  if (inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofTypeAST (inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sizeofTypeAST::setter_setMTypeName (GALGAS_lstring inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofTypeAST * p = (cPtr_sizeofTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sizeofTypeAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_sizeofTypeAST * p = (cPtr_sizeofTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sizeofTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sizeofTypeAST::cPtr_sizeofTypeAST (const GALGAS_lstring & in_mTypeName
                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (in_mTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sizeofTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

void cPtr_sizeofTypeAST::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@sizeofTypeAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sizeofTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sizeofTypeAST (mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @sizeofTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofTypeAST ("sizeofTypeAST",
                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sizeofTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sizeofTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sizeofTypeAST result ;
  const GALGAS_sizeofTypeAST * p = (const GALGAS_sizeofTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sizeofTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sizeofInstructionIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sizeofInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mSourceType.printNonNullClassInstanceProperties ("mSourceType") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sizeofInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofInstructionIR * p = (const cPtr_sizeofInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceType.objectCompare (p->mProperty_mSourceType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sizeofInstructionIR::objectCompare (const GALGAS_sizeofInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR::GALGAS_sizeofInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR::GALGAS_sizeofInstructionIR (const cPtr_sizeofInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofInstructionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                        const GALGAS_omnibusType & inAttribute_mSourceType
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sizeofInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSourceType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofInstructionIR (inAttribute_mTarget, inAttribute_mSourceType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sizeofInstructionIR::setter_setMTarget (GALGAS_objectIR inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sizeofInstructionIR::setter_setMSourceType (GALGAS_omnibusType inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_sizeofInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_sizeofInstructionIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    return p->mProperty_mSourceType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sizeofInstructionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sizeofInstructionIR::cPtr_sizeofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                    const GALGAS_omnibusType & in_mSourceType
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mSourceType (in_mSourceType) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sizeofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

void cPtr_sizeofInstructionIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@sizeofInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sizeofInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sizeofInstructionIR (mProperty_mTarget, mProperty_mSourceType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @sizeofInstructionIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofInstructionIR ("sizeofInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sizeofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sizeofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofInstructionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sizeofInstructionIR result ;
  const GALGAS_sizeofInstructionIR * p = (const GALGAS_sizeofInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sizeofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @typedConstantCallAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typedConstantCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mConstructorName.printNonNullClassInstanceProperties ("mConstructorName") ;
    mProperty_mAccessList.printNonNullClassInstanceProperties ("mAccessList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_typedConstantCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstructorName.objectCompare (p->mProperty_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_typedConstantCallAST::objectCompare (const GALGAS_typedConstantCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (const cPtr_typedConstantCallAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typedConstantCallAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::constructor_new (const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                          const GALGAS_lstring & inAttribute_mConstructorName,
                                                                          const GALGAS_primaryInExpressionAccessListAST & inAttribute_mAccessList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCallAST result ;
  if (inAttribute_mOptionalTypeName.isValid () && inAttribute_mConstructorName.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typedConstantCallAST (inAttribute_mOptionalTypeName, inAttribute_mConstructorName, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedConstantCallAST::setter_setMOptionalTypeName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedConstantCallAST::setter_setMConstructorName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mConstructorName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedConstantCallAST::setter_setMAccessList (GALGAS_primaryInExpressionAccessListAST inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mAccessList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typedConstantCallAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typedConstantCallAST::readProperty_mConstructorName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mConstructorName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_typedConstantCallAST::readProperty_mAccessList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_primaryInExpressionAccessListAST () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mAccessList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @typedConstantCallAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                      const GALGAS_lstring & in_mConstructorName,
                                                      const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mConstructorName (in_mConstructorName),
mProperty_mAccessList (in_mAccessList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typedConstantCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

void cPtr_typedConstantCallAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@typedConstantCallAST:" ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typedConstantCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typedConstantCallAST (mProperty_mOptionalTypeName, mProperty_mConstructorName, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @typedConstantCallAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedConstantCallAST ("typedConstantCallAST",
                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typedConstantCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typedConstantCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedConstantCallAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCallAST result ;
  const GALGAS_typedConstantCallAST * p = (const GALGAS_typedConstantCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typedConstantCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedConstantCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @integerSliceExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_integerSliceExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mSliceValues.printNonNullClassInstanceProperties ("mSliceValues") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_integerSliceExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerSliceExpressionAST * p = (const cPtr_integerSliceExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSliceValues.objectCompare (p->mProperty_mSliceValues) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_integerSliceExpressionAST::objectCompare (const GALGAS_integerSliceExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST::GALGAS_integerSliceExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST::GALGAS_integerSliceExpressionAST (const cPtr_integerSliceExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerSliceExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                                    const GALGAS_integerSliceFieldListAST & inAttribute_mSliceValues,
                                                                                    const GALGAS_location & inAttribute_mLocation
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceExpressionAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mSliceValues.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerSliceExpressionAST (inAttribute_mTypeName, inAttribute_mSliceValues, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerSliceExpressionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerSliceExpressionAST::setter_setMSliceValues (GALGAS_integerSliceFieldListAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mSliceValues = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerSliceExpressionAST::setter_setMLocation (GALGAS_location inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_integerSliceExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST GALGAS_integerSliceExpressionAST::readProperty_mSliceValues (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_integerSliceFieldListAST () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mSliceValues ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_integerSliceExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @integerSliceExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_integerSliceExpressionAST::cPtr_integerSliceExpressionAST (const GALGAS_lstring & in_mTypeName,
                                                                const GALGAS_integerSliceFieldListAST & in_mSliceValues,
                                                                const GALGAS_location & in_mLocation
                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mSliceValues (in_mSliceValues),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_integerSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

void cPtr_integerSliceExpressionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@integerSliceExpressionAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSliceValues.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_integerSliceExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerSliceExpressionAST (mProperty_mTypeName, mProperty_mSliceValues, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @integerSliceExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerSliceExpressionAST ("integerSliceExpressionAST",
                                                  & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerSliceExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceExpressionAST result ;
  const GALGAS_integerSliceExpressionAST * p = (const GALGAS_integerSliceExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalIntegerInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalIntegerInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInteger.printNonNullClassInstanceProperties ("mLiteralInteger") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalIntegerInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalIntegerInExpressionAST * p = (const cPtr_literalIntegerInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInteger.objectCompare (p->mProperty_mLiteralInteger) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalIntegerInExpressionAST::objectCompare (const GALGAS_literalIntegerInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST::GALGAS_literalIntegerInExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST::GALGAS_literalIntegerInExpressionAST (const cPtr_literalIntegerInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntegerInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::constructor_new (const GALGAS_lbigint & inAttribute_mLiteralInteger
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST result ;
  if (inAttribute_mLiteralInteger.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalIntegerInExpressionAST (inAttribute_mLiteralInteger COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_literalIntegerInExpressionAST::setter_setMLiteralInteger (GALGAS_lbigint inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_literalIntegerInExpressionAST * p = (cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    p->mProperty_mLiteralInteger = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_literalIntegerInExpressionAST::readProperty_mLiteralInteger (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_literalIntegerInExpressionAST * p = (cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    return p->mProperty_mLiteralInteger ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalIntegerInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalIntegerInExpressionAST::cPtr_literalIntegerInExpressionAST (const GALGAS_lbigint & in_mLiteralInteger
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLiteralInteger (in_mLiteralInteger) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalIntegerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

void cPtr_literalIntegerInExpressionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@literalIntegerInExpressionAST:" ;
  mProperty_mLiteralInteger.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalIntegerInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalIntegerInExpressionAST (mProperty_mLiteralInteger COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @literalIntegerInExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ("literalIntegerInExpressionAST",
                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalIntegerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalIntegerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntegerInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST result ;
  const GALGAS_literalIntegerInExpressionAST * p = (const GALGAS_literalIntegerInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalIntegerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalStringInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralString.printNonNullClassInstanceProperties ("mLiteralString") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalStringInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringInExpressionAST * p = (const cPtr_literalStringInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralString.objectCompare (p->mProperty_mLiteralString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalStringInExpressionAST::objectCompare (const GALGAS_literalStringInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST::GALGAS_literalStringInExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST::GALGAS_literalStringInExpressionAST (const cPtr_literalStringInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLiteralString
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST result ;
  if (inAttribute_mLiteralString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringInExpressionAST (inAttribute_mLiteralString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_literalStringInExpressionAST::setter_setMLiteralString (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_literalStringInExpressionAST * p = (cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    p->mProperty_mLiteralString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_literalStringInExpressionAST::readProperty_mLiteralString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_literalStringInExpressionAST * p = (cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    return p->mProperty_mLiteralString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalStringInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalStringInExpressionAST::cPtr_literalStringInExpressionAST (const GALGAS_lstring & in_mLiteralString
                                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLiteralString (in_mLiteralString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalStringInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

void cPtr_literalStringInExpressionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@literalStringInExpressionAST:" ;
  mProperty_mLiteralString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringInExpressionAST (mProperty_mLiteralString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @literalStringInExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringInExpressionAST ("literalStringInExpressionAST",
                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST result ;
  const GALGAS_literalStringInExpressionAST * p = (const GALGAS_literalStringInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalStringInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @registerInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_registerInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
    mProperty_mFieldName.printNonNullClassInstanceProperties ("mFieldName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_registerInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerInExpressionAST * p = (const cPtr_registerInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldName.objectCompare (p->mProperty_mFieldName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_registerInExpressionAST::objectCompare (const GALGAS_registerInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST::GALGAS_registerInExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST::GALGAS_registerInExpressionAST (const cPtr_registerInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST GALGAS_registerInExpressionAST::constructor_new (const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue,
                                                                                const GALGAS_lstring & inAttribute_mFieldName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerInExpressionAST result ;
  if (inAttribute_mControlRegisterLValue.isValid () && inAttribute_mFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerInExpressionAST (inAttribute_mControlRegisterLValue, inAttribute_mFieldName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerInExpressionAST::setter_setMControlRegisterLValue (GALGAS_controlRegisterLValueAST inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerInExpressionAST::setter_setMFieldName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    p->mProperty_mFieldName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_registerInExpressionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterLValueAST () ;
  }else{
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerInExpressionAST::readProperty_mFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    return p->mProperty_mFieldName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @registerInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_registerInExpressionAST::cPtr_registerInExpressionAST (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                            const GALGAS_lstring & in_mFieldName
                                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue),
mProperty_mFieldName (in_mFieldName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_registerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

void cPtr_registerInExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@registerInExpressionAST:" ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_registerInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_registerInExpressionAST (mProperty_mControlRegisterLValue, mProperty_mFieldName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @registerInExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerInExpressionAST ("registerInExpressionAST",
                                                & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST GALGAS_registerInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerInExpressionAST result ;
  const GALGAS_registerInExpressionAST * p = (const GALGAS_registerInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @registerConstantExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_registerConstantExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterGroupName.printNonNullClassInstanceProperties ("mRegisterGroupName") ;
    mProperty_mRegisterName.printNonNullClassInstanceProperties ("mRegisterName") ;
    mProperty_mFieldValues.printNonNullClassInstanceProperties ("mFieldValues") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_registerConstantExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterGroupName.objectCompare (p->mProperty_mRegisterGroupName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterName.objectCompare (p->mProperty_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldValues.objectCompare (p->mProperty_mFieldValues) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_registerConstantExpressionAST::objectCompare (const GALGAS_registerConstantExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST::GALGAS_registerConstantExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST::GALGAS_registerConstantExpressionAST (const cPtr_registerConstantExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerConstantExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mRegisterGroupName,
                                                                                            const GALGAS_lstring & inAttribute_mRegisterName,
                                                                                            const GALGAS_registerIntegerFieldListAST & inAttribute_mFieldValues
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST result ;
  if (inAttribute_mRegisterGroupName.isValid () && inAttribute_mRegisterName.isValid () && inAttribute_mFieldValues.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerConstantExpressionAST (inAttribute_mRegisterGroupName, inAttribute_mRegisterName, inAttribute_mFieldValues COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerConstantExpressionAST::setter_setMRegisterGroupName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mRegisterGroupName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerConstantExpressionAST::setter_setMRegisterName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerConstantExpressionAST::setter_setMFieldValues (GALGAS_registerIntegerFieldListAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mFieldValues = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerConstantExpressionAST::readProperty_mRegisterGroupName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mRegisterGroupName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerConstantExpressionAST::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mRegisterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST GALGAS_registerConstantExpressionAST::readProperty_mFieldValues (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerIntegerFieldListAST () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mFieldValues ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @registerConstantExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_registerConstantExpressionAST::cPtr_registerConstantExpressionAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                                        const GALGAS_lstring & in_mRegisterName,
                                                                        const GALGAS_registerIntegerFieldListAST & in_mFieldValues
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mRegisterGroupName (in_mRegisterGroupName),
mProperty_mRegisterName (in_mRegisterName),
mProperty_mFieldValues (in_mFieldValues) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_registerConstantExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

void cPtr_registerConstantExpressionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@registerConstantExpressionAST:" ;
  mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldValues.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_registerConstantExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_registerConstantExpressionAST (mProperty_mRegisterGroupName, mProperty_mRegisterName, mProperty_mFieldValues COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @registerConstantExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerConstantExpressionAST ("registerConstantExpressionAST",
                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerConstantExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerConstantExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerConstantExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST result ;
  const GALGAS_registerConstantExpressionAST * p = (const GALGAS_registerConstantExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerConstantExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerConstantExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @primaryInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_primaryInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mAccessList.printNonNullClassInstanceProperties ("mAccessList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_primaryInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_primaryInExpressionAST * p = (const cPtr_primaryInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_primaryInExpressionAST::objectCompare (const GALGAS_primaryInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST::GALGAS_primaryInExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST::GALGAS_primaryInExpressionAST (const cPtr_primaryInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primaryInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mReceiverName,
                                                                              const GALGAS_primaryInExpressionAccessListAST & inAttribute_mAccessList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAST result ;
  if (inAttribute_mReceiverName.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_primaryInExpressionAST (inAttribute_mReceiverName, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAST::setter_setMAccessList (GALGAS_primaryInExpressionAccessListAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    p->mProperty_mAccessList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_primaryInExpressionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAST::readProperty_mAccessList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_primaryInExpressionAccessListAST () ;
  }else{
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    return p->mProperty_mAccessList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @primaryInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_primaryInExpressionAST::cPtr_primaryInExpressionAST (const GALGAS_lstring & in_mReceiverName,
                                                          const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mAccessList (in_mAccessList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_primaryInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

void cPtr_primaryInExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@primaryInExpressionAST:" ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_primaryInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_primaryInExpressionAST (mProperty_mReceiverName, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primaryInExpressionAST ("primaryInExpressionAST",
                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAST result ;
  const GALGAS_primaryInExpressionAST * p = (const GALGAS_primaryInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primaryInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_analyzePrimaryExpressionNoSelf (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                         const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_mode constinArgument_inMode,
                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         GALGAS_objectIR & outArgument_outResult,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject var_entity_9500 ;
  const GALGAS_primaryInExpressionAST temp_0 = this ;
  extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_0.readProperty_mReceiverName (), var_entity_9500, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 232)) ;
  switch (var_entity_9500.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_10095 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_9500.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_9537_type = extractPtr_10095->mAssociatedValue0 ;
      const GALGAS_primaryInExpressionAST temp_1 = this ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_9537_type, function_llvmNameForGlobalVariable (temp_1.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 235))  COMMA_SOURCE_FILE ("expression-primary.galgas", 235)) ;
      {
      const GALGAS_primaryInExpressionAST temp_2 = this ;
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_2.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 236)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_10783 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_9500.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_10112_type = extractPtr_10783->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_10117_instancied = extractPtr_10783->mAssociatedValue1 ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = extractedValue_10117_instancied.operator_not (SOURCE_FILE ("expression-primary.galgas", 251)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_primaryInExpressionAST temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the driver should be instancied"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 252)) ;
        }
      }
      const GALGAS_primaryInExpressionAST temp_6 = this ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_10112_type, function_llvmNameForGlobalVariable (temp_6.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 254))  COMMA_SOURCE_FILE ("expression-primary.galgas", 254)) ;
      {
      const GALGAS_primaryInExpressionAST temp_7 = this ;
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_7.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 255)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_11306 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_entity_9500.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_10818_objectIR = extractPtr_11306->mAssociatedValue0 ;
      outArgument_outResult = extractedValue_10818_objectIR ;
      {
      const GALGAS_primaryInExpressionAST temp_8 = this ;
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_8.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 271)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_11969 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_9500.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_11343_type = extractPtr_11969->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_11357_omnibusName = extractPtr_11969->mAssociatedValue1 ;
      {
      const GALGAS_primaryInExpressionAST temp_9 = this ;
      extensionSetter_readAccess (ioArgument_ioUniversalMap, temp_9.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 286)) ;
      }
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_11343_type, function_llvmNameForLocalVariable (extractedValue_11357_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 287))  COMMA_SOURCE_FILE ("expression-primary.galgas", 287)) ;
      {
      const GALGAS_primaryInExpressionAST temp_10 = this ;
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_10.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 288)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_12631 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_9500.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_12006_type = extractPtr_12631->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_12020_omnibusName = extractPtr_12631->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_12006_type, function_llvmNameForLocalVariable (extractedValue_12020_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 303))  COMMA_SOURCE_FILE ("expression-primary.galgas", 303)) ;
      {
      const GALGAS_primaryInExpressionAST temp_11 = this ;
      extensionSetter_readAccess (ioArgument_ioUniversalMap, temp_11.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 304)) ;
      }
      {
      const GALGAS_primaryInExpressionAST temp_12 = this ;
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_12.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 305)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_13249 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_9500.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_12673_type = extractPtr_13249->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_12687_omnibusName = extractPtr_13249->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_12673_type, function_llvmNameForGlobalSyncInstance (extractedValue_12687_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 320))  COMMA_SOURCE_FILE ("expression-primary.galgas", 320)) ;
      {
      const GALGAS_primaryInExpressionAST temp_13 = this ;
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_13.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 321)) ;
      }
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionNoSelf (cPtr_primaryInExpressionAST * inObject,
                                                         const GALGAS_omnibusType constin_inSelfType,
                                                         const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                         const GALGAS_omnibusType constin_inOptionalTargetType,
                                                         const GALGAS_semanticContext constin_inContext,
                                                         const GALGAS_mode constin_inMode,
                                                         GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                         GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                         GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                         GALGAS_allocaList & io_ioAllocaList,
                                                         GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                         GALGAS_objectIR & out_outResult,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    inObject->method_analyzePrimaryExpressionNoSelf  (constin_inSelfType, constin_inRoutineAttributes, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_analyzePrimaryExpressionWithSelf (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 432))  COMMA_SOURCE_FILE ("expression-primary.galgas", 432)) ;
  const GALGAS_primaryInExpressionAST temp_0 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_16781 (temp_0.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_16781.hasCurrentObject ()) {
    switch (enumerator_16781.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_17088 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_16781.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_16862_low = extractPtr_17088->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_16875_high = extractPtr_17088->mAssociatedValue1 ;
        {
        routine_handleSliceInExpression (constinArgument_inContext, outArgument_outResult, extractedValue_16862_low, extractedValue_16875_high, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 437)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_17388 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_16781.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_17118_propertyName = extractPtr_17388->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (constinArgument_inContext, outArgument_outResult, extractedValue_17118_propertyName, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 446)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_17997 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_16781.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_17427_indexExpression = extractPtr_17997->mAssociatedValue0 ;
        const GALGAS_location extractedValue_17453_endOfIndex = extractPtr_17997->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_17464_checkIndexExpression = extractPtr_17997->mAssociatedValue2 ;
        {
        routine_handleArrayAccessInExpression (outArgument_outResult, extractedValue_17427_indexExpression, extractedValue_17453_endOfIndex, extractedValue_17464_checkIndexExpression, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 456)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_18677 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_16781.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_18027_methodName = extractPtr_18677->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_18064_arguments = extractPtr_18677->mAssociatedValue1 ;
        const GALGAS_location extractedValue_18084_errorLocation = extractPtr_18677->mAssociatedValue2 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 473)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_18084_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 474)) ;
            outArgument_outResult.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_1) {
          {
          routine_handleFunctionCallInExpression (extractedValue_18027_methodName, outArgument_outResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_18064_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 476)) ;
          }
        }
      }
      break ;
    }
    enumerator_16781.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionWithSelf (cPtr_primaryInExpressionAST * inObject,
                                                           const GALGAS_omnibusType constin_inSelfType,
                                                           const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                           const GALGAS_omnibusType constin_inOptionalTargetType,
                                                           const GALGAS_semanticContext constin_inContext,
                                                           const GALGAS_mode constin_inMode,
                                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                           GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                           GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                           GALGAS_allocaList & io_ioAllocaList,
                                                           GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                           GALGAS_objectIR & out_outResult,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    inObject->method_analyzePrimaryExpressionWithSelf  (constin_inSelfType, constin_inRoutineAttributes, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
// @standaloneFunctionInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_standaloneFunctionInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mStandaloneFunctionName.printNonNullClassInstanceProperties ("mStandaloneFunctionName") ;
    mProperty_mArguments.printNonNullClassInstanceProperties ("mArguments") ;
    mProperty_mEndOfArguments.printNonNullClassInstanceProperties ("mEndOfArguments") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_standaloneFunctionInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_standaloneFunctionInExpressionAST * p = (const cPtr_standaloneFunctionInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mStandaloneFunctionName.objectCompare (p->mProperty_mStandaloneFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_standaloneFunctionInExpressionAST::objectCompare (const GALGAS_standaloneFunctionInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST::GALGAS_standaloneFunctionInExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST::GALGAS_standaloneFunctionInExpressionAST (const cPtr_standaloneFunctionInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standaloneFunctionInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mStandaloneFunctionName,
                                                                                                    const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                                    const GALGAS_location & inAttribute_mEndOfArguments
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_standaloneFunctionInExpressionAST result ;
  if (inAttribute_mStandaloneFunctionName.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_standaloneFunctionInExpressionAST (inAttribute_mStandaloneFunctionName, inAttribute_mArguments, inAttribute_mEndOfArguments COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_standaloneFunctionInExpressionAST::setter_setMStandaloneFunctionName (GALGAS_lstring inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mStandaloneFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_standaloneFunctionInExpressionAST::setter_setMArguments (GALGAS_effectiveArgumentListAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mArguments = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_standaloneFunctionInExpressionAST::setter_setMEndOfArguments (GALGAS_location inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mEndOfArguments = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_standaloneFunctionInExpressionAST::readProperty_mStandaloneFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mStandaloneFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_standaloneFunctionInExpressionAST::readProperty_mArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_effectiveArgumentListAST () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mArguments ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_standaloneFunctionInExpressionAST::readProperty_mEndOfArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mEndOfArguments ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @standaloneFunctionInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_standaloneFunctionInExpressionAST::cPtr_standaloneFunctionInExpressionAST (const GALGAS_lstring & in_mStandaloneFunctionName,
                                                                                const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                const GALGAS_location & in_mEndOfArguments
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mStandaloneFunctionName (in_mStandaloneFunctionName),
mProperty_mArguments (in_mArguments),
mProperty_mEndOfArguments (in_mEndOfArguments) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_standaloneFunctionInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

void cPtr_standaloneFunctionInExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@standaloneFunctionInExpressionAST:" ;
  mProperty_mStandaloneFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_standaloneFunctionInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_standaloneFunctionInExpressionAST (mProperty_mStandaloneFunctionName, mProperty_mArguments, mProperty_mEndOfArguments COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @standaloneFunctionInExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ("standaloneFunctionInExpressionAST",
                                                          & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_standaloneFunctionInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_standaloneFunctionInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standaloneFunctionInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_standaloneFunctionInExpressionAST result ;
  const GALGAS_standaloneFunctionInExpressionAST * p = (const GALGAS_standaloneFunctionInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_standaloneFunctionInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneFunctionInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @constructorCallAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_constructorCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_constructorCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constructorCallAST * p = (const cPtr_constructorCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constructorCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorLocation.objectCompare (p->mProperty_mErrorLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_constructorCallAST::objectCompare (const GALGAS_constructorCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST::GALGAS_constructorCallAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST::GALGAS_constructorCallAST (const cPtr_constructorCallAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorCallAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST GALGAS_constructorCallAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_functionCallEffectiveParameterListAST & inAttribute_mParameterList,
                                                                      const GALGAS_location & inAttribute_mErrorLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constructorCallAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mErrorLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constructorCallAST (inAttribute_mTypeName, inAttribute_mParameterList, inAttribute_mErrorLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorCallAST::setter_setMTypeName (GALGAS_lstring inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorCallAST::setter_setMParameterList (GALGAS_functionCallEffectiveParameterListAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorCallAST::setter_setMErrorLocation (GALGAS_location inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_constructorCallAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST GALGAS_constructorCallAST::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_functionCallEffectiveParameterListAST () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_constructorCallAST::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mErrorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @constructorCallAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_constructorCallAST::cPtr_constructorCallAST (const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_functionCallEffectiveParameterListAST & in_mParameterList,
                                                  const GALGAS_location & in_mErrorLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mParameterList (in_mParameterList),
mProperty_mErrorLocation (in_mErrorLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_constructorCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST ;
}

void cPtr_constructorCallAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@constructorCallAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_constructorCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_constructorCallAST (mProperty_mTypeName, mProperty_mParameterList, mProperty_mErrorLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @constructorCallAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorCallAST ("constructorCallAST",
                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorCallAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST GALGAS_constructorCallAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_constructorCallAST result ;
  const GALGAS_constructorCallAST * p = (const GALGAS_constructorCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeInfixOperatorAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeInfixOperatorAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mInfixOperator.printNonNullClassInstanceProperties ("mInfixOperator") ;
    mProperty_mInfixOperatorLocation.printNonNullClassInstanceProperties ("mInfixOperatorLocation") ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mLeftTypeName.printNonNullClassInstanceProperties ("mLeftTypeName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mRightTypeName.printNonNullClassInstanceProperties ("mRightTypeName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeInfixOperatorAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_compileTimeInfixOperatorAST * p = (const cPtr_compileTimeInfixOperatorAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInfixOperator.objectCompare (p->mProperty_mInfixOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInfixOperatorLocation.objectCompare (p->mProperty_mInfixOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperandName.objectCompare (p->mProperty_mLeftOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftTypeName.objectCompare (p->mProperty_mLeftTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperandName.objectCompare (p->mProperty_mRightOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightTypeName.objectCompare (p->mProperty_mRightTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (p->mProperty_mResultTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeInfixOperatorAST::objectCompare (const GALGAS_compileTimeInfixOperatorAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST::GALGAS_compileTimeInfixOperatorAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST::GALGAS_compileTimeInfixOperatorAST (const cPtr_compileTimeInfixOperatorAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixOperatorAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST GALGAS_compileTimeInfixOperatorAST::constructor_new (const GALGAS_compileTimeInfixOperatorEnumeration & inAttribute_mInfixOperator,
                                                                                        const GALGAS_location & inAttribute_mInfixOperatorLocation,
                                                                                        const GALGAS_lstring & inAttribute_mLeftOperandName,
                                                                                        const GALGAS_lstring & inAttribute_mLeftTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mRightOperandName,
                                                                                        const GALGAS_lstring & inAttribute_mRightTypeName,
                                                                                        const GALGAS_ctExpressionAST & inAttribute_mExpression,
                                                                                        const GALGAS_lstring & inAttribute_mResultTypeName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorAST result ;
  if (inAttribute_mInfixOperator.isValid () && inAttribute_mInfixOperatorLocation.isValid () && inAttribute_mLeftOperandName.isValid () && inAttribute_mLeftTypeName.isValid () && inAttribute_mRightOperandName.isValid () && inAttribute_mRightTypeName.isValid () && inAttribute_mExpression.isValid () && inAttribute_mResultTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_compileTimeInfixOperatorAST (inAttribute_mInfixOperator, inAttribute_mInfixOperatorLocation, inAttribute_mLeftOperandName, inAttribute_mLeftTypeName, inAttribute_mRightOperandName, inAttribute_mRightTypeName, inAttribute_mExpression, inAttribute_mResultTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setter_setMInfixOperator (GALGAS_compileTimeInfixOperatorEnumeration inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setter_setMInfixOperatorLocation (GALGAS_location inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mInfixOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setter_setMLeftOperandName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setter_setMLeftTypeName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mLeftTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setter_setMRightOperandName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setter_setMRightTypeName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mRightTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setter_setMExpression (GALGAS_ctExpressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setter_setMResultTypeName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_compileTimeInfixOperatorEnumeration () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_compileTimeInfixOperatorAST::readProperty_mInfixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mInfixOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorAST::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorAST::readProperty_mLeftTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mLeftTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorAST::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mRightOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorAST::readProperty_mRightTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mRightTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compileTimeInfixOperatorAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixOperatorAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorAST::cPtr_compileTimeInfixOperatorAST (const GALGAS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                    const GALGAS_location & in_mInfixOperatorLocation,
                                                                    const GALGAS_lstring & in_mLeftOperandName,
                                                                    const GALGAS_lstring & in_mLeftTypeName,
                                                                    const GALGAS_lstring & in_mRightOperandName,
                                                                    const GALGAS_lstring & in_mRightTypeName,
                                                                    const GALGAS_ctExpressionAST & in_mExpression,
                                                                    const GALGAS_lstring & in_mResultTypeName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mInfixOperator (in_mInfixOperator),
mProperty_mInfixOperatorLocation (in_mInfixOperatorLocation),
mProperty_mLeftOperandName (in_mLeftOperandName),
mProperty_mLeftTypeName (in_mLeftTypeName),
mProperty_mRightOperandName (in_mRightOperandName),
mProperty_mRightTypeName (in_mRightTypeName),
mProperty_mExpression (in_mExpression),
mProperty_mResultTypeName (in_mResultTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeInfixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ;
}

void cPtr_compileTimeInfixOperatorAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@compileTimeInfixOperatorAST:" ;
  mProperty_mInfixOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInfixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeInfixOperatorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixOperatorAST (mProperty_mInfixOperator, mProperty_mInfixOperatorLocation, mProperty_mLeftOperandName, mProperty_mLeftTypeName, mProperty_mRightOperandName, mProperty_mRightTypeName, mProperty_mExpression, mProperty_mResultTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixOperatorAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ("compileTimeInfixOperatorAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeInfixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeInfixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeInfixOperatorAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST GALGAS_compileTimeInfixOperatorAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorAST result ;
  const GALGAS_compileTimeInfixOperatorAST * p = (const GALGAS_compileTimeInfixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeInfixOperatorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeInfixOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeInfixOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_compileTimeInfixOperatorUsage * p = (const cPtr_compileTimeInfixOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperandName.objectCompare (p->mProperty_mLeftOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperandName.objectCompare (p->mProperty_mRightOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeInfixOperatorUsage::objectCompare (const GALGAS_compileTimeInfixOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage::GALGAS_compileTimeInfixOperatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage::GALGAS_compileTimeInfixOperatorUsage (const cPtr_compileTimeInfixOperatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage GALGAS_compileTimeInfixOperatorUsage::constructor_new (const GALGAS_lstring & inAttribute_mLeftOperandName,
                                                                                            const GALGAS_lstring & inAttribute_mRightOperandName,
                                                                                            const GALGAS_ctExpressionAST & inAttribute_mExpression
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorUsage result ;
  if (inAttribute_mLeftOperandName.isValid () && inAttribute_mRightOperandName.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_compileTimeInfixOperatorUsage (inAttribute_mLeftOperandName, inAttribute_mRightOperandName, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorUsage::setter_setMLeftOperandName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorUsage::setter_setMRightOperandName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorUsage::setter_setMExpression (GALGAS_ctExpressionAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compileTimeInfixOperatorUsage::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorUsage::cPtr_compileTimeInfixOperatorUsage (const GALGAS_lstring & in_mLeftOperandName,
                                                                        const GALGAS_lstring & in_mRightOperandName,
                                                                        const GALGAS_ctExpressionAST & in_mExpression
                                                                        COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mLeftOperandName (in_mLeftOperandName),
mProperty_mRightOperandName (in_mRightOperandName),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;
}

void cPtr_compileTimeInfixOperatorUsage::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@compileTimeInfixOperatorUsage:" ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeInfixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixOperatorUsage (mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixOperatorUsage generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ("compileTimeInfixOperatorUsage",
                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage GALGAS_compileTimeInfixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorUsage result ;
  const GALGAS_compileTimeInfixOperatorUsage * p = (const GALGAS_compileTimeInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@compileTimeInfixOperatorUsage eval'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::method_eval (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                      const GALGAS_objectIR constinArgument_inRightOperand,
                                                      GALGAS_bigint & outArgument_outResult,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_10750 ;
  GALGAS_omnibusType joker_10734_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_10734_1, var_leftValue_10750, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 273)) ;
  GALGAS_bigint var_rightValue_10810 ;
  GALGAS_omnibusType joker_10794_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_10794_1, var_rightValue_10810, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 274)) ;
  GALGAS_ctMap var_varMap_10835 = GALGAS_ctMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-compile-time.galgas", 275)) ;
  {
  const GALGAS_compileTimeInfixOperatorUsage temp_0 = this ;
  var_varMap_10835.setter_insertKey (temp_0.readProperty_mLeftOperandName (), var_leftValue_10750, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 276)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorUsage temp_1 = this ;
  var_varMap_10835.setter_insertKey (temp_1.readProperty_mRightOperandName (), var_rightValue_10810, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 277)) ;
  }
  const GALGAS_compileTimeInfixOperatorUsage temp_2 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_2.readProperty_mExpression ().ptr (), var_varMap_10835, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 278)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (cPtr_compileTimeInfixOperatorUsage * inObject,
                               const GALGAS_objectIR constin_inLeftOperand,
                               const GALGAS_objectIR constin_inRightOperand,
                               GALGAS_bigint & out_outResult,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_compileTimeInfixOperatorUsage) ;
    inObject->method_eval  (constin_inLeftOperand, constin_inRightOperand, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
// @compileTimeInfixInfEqualOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeInfixInfEqualOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mEqualOperatorUsage.printNonNullClassInstanceProperties ("mEqualOperatorUsage") ;
    mProperty_mLessThanOperatorUsage.printNonNullClassInstanceProperties ("mLessThanOperatorUsage") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeInfixInfEqualOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_compileTimeInfixInfEqualOperatorUsage * p = (const cPtr_compileTimeInfixInfEqualOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mEqualOperatorUsage.objectCompare (p->mProperty_mEqualOperatorUsage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLessThanOperatorUsage.objectCompare (p->mProperty_mLessThanOperatorUsage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeInfixInfEqualOperatorUsage::objectCompare (const GALGAS_compileTimeInfixInfEqualOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage::GALGAS_compileTimeInfixInfEqualOperatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage::GALGAS_compileTimeInfixInfEqualOperatorUsage (const cPtr_compileTimeInfixInfEqualOperatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage GALGAS_compileTimeInfixInfEqualOperatorUsage::constructor_new (const GALGAS_compileTimeInfixOperatorUsage & inAttribute_mEqualOperatorUsage,
                                                                                                            const GALGAS_compileTimeInfixOperatorUsage & inAttribute_mLessThanOperatorUsage
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixInfEqualOperatorUsage result ;
  if (inAttribute_mEqualOperatorUsage.isValid () && inAttribute_mLessThanOperatorUsage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_compileTimeInfixInfEqualOperatorUsage (inAttribute_mEqualOperatorUsage, inAttribute_mLessThanOperatorUsage COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixInfEqualOperatorUsage::setter_setMEqualOperatorUsage (GALGAS_compileTimeInfixOperatorUsage inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    p->mProperty_mEqualOperatorUsage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixInfEqualOperatorUsage::setter_setMLessThanOperatorUsage (GALGAS_compileTimeInfixOperatorUsage inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    p->mProperty_mLessThanOperatorUsage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage GALGAS_compileTimeInfixInfEqualOperatorUsage::readProperty_mEqualOperatorUsage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_compileTimeInfixOperatorUsage () ;
  }else{
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    return p->mProperty_mEqualOperatorUsage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage GALGAS_compileTimeInfixInfEqualOperatorUsage::readProperty_mLessThanOperatorUsage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_compileTimeInfixOperatorUsage () ;
  }else{
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    return p->mProperty_mLessThanOperatorUsage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixInfEqualOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixInfEqualOperatorUsage::cPtr_compileTimeInfixInfEqualOperatorUsage (const GALGAS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                                                        const GALGAS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mEqualOperatorUsage (in_mEqualOperatorUsage),
mProperty_mLessThanOperatorUsage (in_mLessThanOperatorUsage) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeInfixInfEqualOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;
}

void cPtr_compileTimeInfixInfEqualOperatorUsage::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@compileTimeInfixInfEqualOperatorUsage:" ;
  mProperty_mEqualOperatorUsage.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLessThanOperatorUsage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeInfixInfEqualOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixInfEqualOperatorUsage (mProperty_mEqualOperatorUsage, mProperty_mLessThanOperatorUsage COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixInfEqualOperatorUsage generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ("compileTimeInfixInfEqualOperatorUsage",
                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeInfixInfEqualOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeInfixInfEqualOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeInfixInfEqualOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage GALGAS_compileTimeInfixInfEqualOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixInfEqualOperatorUsage result ;
  const GALGAS_compileTimeInfixInfEqualOperatorUsage * p = (const GALGAS_compileTimeInfixInfEqualOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeInfixInfEqualOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixInfEqualOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @llvmInfixOperatorAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmInfixOperatorAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mInfixOperator.printNonNullClassInstanceProperties ("mInfixOperator") ;
    mProperty_mInfixOperatorLocation.printNonNullClassInstanceProperties ("mInfixOperatorLocation") ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mLeftTypeName.printNonNullClassInstanceProperties ("mLeftTypeName") ;
    mProperty_mLeftGenericFormalParameterList.printNonNullClassInstanceProperties ("mLeftGenericFormalParameterList") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mRightTypeName.printNonNullClassInstanceProperties ("mRightTypeName") ;
    mProperty_mRightGenericFormalParameterList.printNonNullClassInstanceProperties ("mRightGenericFormalParameterList") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_mResultGenericFormalParameterList.printNonNullClassInstanceProperties ("mResultGenericFormalParameterList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmInfixOperatorAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmInfixOperatorAST * p = (const cPtr_llvmInfixOperatorAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInfixOperator.objectCompare (p->mProperty_mInfixOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInfixOperatorLocation.objectCompare (p->mProperty_mInfixOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperandName.objectCompare (p->mProperty_mLeftOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftTypeName.objectCompare (p->mProperty_mLeftTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftGenericFormalParameterList.objectCompare (p->mProperty_mLeftGenericFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperandName.objectCompare (p->mProperty_mRightOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightTypeName.objectCompare (p->mProperty_mRightTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightGenericFormalParameterList.objectCompare (p->mProperty_mRightGenericFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (p->mProperty_mResultTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultGenericFormalParameterList.objectCompare (p->mProperty_mResultGenericFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmInfixOperatorAST::objectCompare (const GALGAS_llvmInfixOperatorAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST::GALGAS_llvmInfixOperatorAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST::GALGAS_llvmInfixOperatorAST (const cPtr_llvmInfixOperatorAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInfixOperatorAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST GALGAS_llvmInfixOperatorAST::constructor_new (const GALGAS_omnibusInfixOperator & inAttribute_mInfixOperator,
                                                                          const GALGAS_location & inAttribute_mInfixOperatorLocation,
                                                                          const GALGAS_lstring & inAttribute_mLeftOperandName,
                                                                          const GALGAS_lstring & inAttribute_mLeftTypeName,
                                                                          const GALGAS_genericFormalParameterList & inAttribute_mLeftGenericFormalParameterList,
                                                                          const GALGAS_lstring & inAttribute_mRightOperandName,
                                                                          const GALGAS_lstring & inAttribute_mRightTypeName,
                                                                          const GALGAS_genericFormalParameterList & inAttribute_mRightGenericFormalParameterList,
                                                                          const GALGAS_lstring & inAttribute_mResultTypeName,
                                                                          const GALGAS_genericFormalParameterList & inAttribute_mResultGenericFormalParameterList,
                                                                          const GALGAS_llvmGenerationInstructionList & inAttribute_mInstructionList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_llvmInfixOperatorAST result ;
  if (inAttribute_mInfixOperator.isValid () && inAttribute_mInfixOperatorLocation.isValid () && inAttribute_mLeftOperandName.isValid () && inAttribute_mLeftTypeName.isValid () && inAttribute_mLeftGenericFormalParameterList.isValid () && inAttribute_mRightOperandName.isValid () && inAttribute_mRightTypeName.isValid () && inAttribute_mRightGenericFormalParameterList.isValid () && inAttribute_mResultTypeName.isValid () && inAttribute_mResultGenericFormalParameterList.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmInfixOperatorAST (inAttribute_mInfixOperator, inAttribute_mInfixOperatorLocation, inAttribute_mLeftOperandName, inAttribute_mLeftTypeName, inAttribute_mLeftGenericFormalParameterList, inAttribute_mRightOperandName, inAttribute_mRightTypeName, inAttribute_mRightGenericFormalParameterList, inAttribute_mResultTypeName, inAttribute_mResultGenericFormalParameterList, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMInfixOperator (GALGAS_omnibusInfixOperator inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMInfixOperatorLocation (GALGAS_location inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInfixOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMLeftOperandName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMLeftTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMLeftGenericFormalParameterList (GALGAS_genericFormalParameterList inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftGenericFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMRightOperandName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMRightTypeName (GALGAS_lstring inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMRightGenericFormalParameterList (GALGAS_genericFormalParameterList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightGenericFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMResultTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMResultGenericFormalParameterList (GALGAS_genericFormalParameterList inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mResultGenericFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_llvmInfixOperatorAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusInfixOperator () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_llvmInfixOperatorAST::readProperty_mInfixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInfixOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorAST::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorAST::readProperty_mLeftTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmInfixOperatorAST::readProperty_mLeftGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftGenericFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorAST::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorAST::readProperty_mRightTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmInfixOperatorAST::readProperty_mRightGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightGenericFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmInfixOperatorAST::readProperty_mResultGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mResultGenericFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmInfixOperatorAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @llvmInfixOperatorAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorAST::cPtr_llvmInfixOperatorAST (const GALGAS_omnibusInfixOperator & in_mInfixOperator,
                                                      const GALGAS_location & in_mInfixOperatorLocation,
                                                      const GALGAS_lstring & in_mLeftOperandName,
                                                      const GALGAS_lstring & in_mLeftTypeName,
                                                      const GALGAS_genericFormalParameterList & in_mLeftGenericFormalParameterList,
                                                      const GALGAS_lstring & in_mRightOperandName,
                                                      const GALGAS_lstring & in_mRightTypeName,
                                                      const GALGAS_genericFormalParameterList & in_mRightGenericFormalParameterList,
                                                      const GALGAS_lstring & in_mResultTypeName,
                                                      const GALGAS_genericFormalParameterList & in_mResultGenericFormalParameterList,
                                                      const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mInfixOperator (in_mInfixOperator),
mProperty_mInfixOperatorLocation (in_mInfixOperatorLocation),
mProperty_mLeftOperandName (in_mLeftOperandName),
mProperty_mLeftTypeName (in_mLeftTypeName),
mProperty_mLeftGenericFormalParameterList (in_mLeftGenericFormalParameterList),
mProperty_mRightOperandName (in_mRightOperandName),
mProperty_mRightTypeName (in_mRightTypeName),
mProperty_mRightGenericFormalParameterList (in_mRightGenericFormalParameterList),
mProperty_mResultTypeName (in_mResultTypeName),
mProperty_mResultGenericFormalParameterList (in_mResultGenericFormalParameterList),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmInfixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorAST ;
}

void cPtr_llvmInfixOperatorAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@llvmInfixOperatorAST:" ;
  mProperty_mInfixOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInfixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmInfixOperatorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInfixOperatorAST (mProperty_mInfixOperator, mProperty_mInfixOperatorLocation, mProperty_mLeftOperandName, mProperty_mLeftTypeName, mProperty_mLeftGenericFormalParameterList, mProperty_mRightOperandName, mProperty_mRightTypeName, mProperty_mRightGenericFormalParameterList, mProperty_mResultTypeName, mProperty_mResultGenericFormalParameterList, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmInfixOperatorAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmInfixOperatorAST ("llvmInfixOperatorAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmInfixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmInfixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmInfixOperatorAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST GALGAS_llvmInfixOperatorAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmInfixOperatorAST result ;
  const GALGAS_llvmInfixOperatorAST * p = (const GALGAS_llvmInfixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmInfixOperatorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInfixOperatorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @llvmInfixOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mInfixMangledFunctionName.printNonNullClassInstanceProperties ("mInfixMangledFunctionName") ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmInfixOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmInfixOperatorUsage * p = (const cPtr_llvmInfixOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mInfixMangledFunctionName.objectCompare (p->mProperty_mInfixMangledFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperandName.objectCompare (p->mProperty_mLeftOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperandName.objectCompare (p->mProperty_mRightOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmInfixOperatorUsage::objectCompare (const GALGAS_llvmInfixOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage::GALGAS_llvmInfixOperatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage::GALGAS_llvmInfixOperatorUsage (const cPtr_llvmInfixOperatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInfixOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage GALGAS_llvmInfixOperatorUsage::constructor_new (const GALGAS_string & inAttribute_mInfixMangledFunctionName,
                                                                              const GALGAS_lstring & inAttribute_mLeftOperandName,
                                                                              const GALGAS_lstring & inAttribute_mRightOperandName,
                                                                              const GALGAS_llvmGenerationInstructionList & inAttribute_mInstructionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmInfixOperatorUsage result ;
  if (inAttribute_mInfixMangledFunctionName.isValid () && inAttribute_mLeftOperandName.isValid () && inAttribute_mRightOperandName.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmInfixOperatorUsage (inAttribute_mInfixMangledFunctionName, inAttribute_mLeftOperandName, inAttribute_mRightOperandName, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorUsage::setter_setMInfixMangledFunctionName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mInfixMangledFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorUsage::setter_setMLeftOperandName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorUsage::setter_setMRightOperandName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorUsage::setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_llvmInfixOperatorUsage::readProperty_mInfixMangledFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mInfixMangledFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmInfixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @llvmInfixOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorUsage::cPtr_llvmInfixOperatorUsage (const GALGAS_string & in_mInfixMangledFunctionName,
                                                          const GALGAS_lstring & in_mLeftOperandName,
                                                          const GALGAS_lstring & in_mRightOperandName,
                                                          const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mInfixMangledFunctionName (in_mInfixMangledFunctionName),
mProperty_mLeftOperandName (in_mLeftOperandName),
mProperty_mRightOperandName (in_mRightOperandName),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;
}

void cPtr_llvmInfixOperatorUsage::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@llvmInfixOperatorUsage:" ;
  mProperty_mInfixMangledFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmInfixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInfixOperatorUsage (mProperty_mInfixMangledFunctionName, mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmInfixOperatorUsage generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ("llvmInfixOperatorUsage",
                                               & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage GALGAS_llvmInfixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_llvmInfixOperatorUsage result ;
  const GALGAS_llvmInfixOperatorUsage * p = (const GALGAS_llvmInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @llvmInlineInfixOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmInlineInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmInlineInfixOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmInlineInfixOperatorUsage * p = (const cPtr_llvmInlineInfixOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperandName.objectCompare (p->mProperty_mLeftOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperandName.objectCompare (p->mProperty_mRightOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmInlineInfixOperatorUsage::objectCompare (const GALGAS_llvmInlineInfixOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage::GALGAS_llvmInlineInfixOperatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage::GALGAS_llvmInlineInfixOperatorUsage (const cPtr_llvmInlineInfixOperatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInlineInfixOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage GALGAS_llvmInlineInfixOperatorUsage::constructor_new (const GALGAS_lstring & inAttribute_mLeftOperandName,
                                                                                          const GALGAS_lstring & inAttribute_mRightOperandName,
                                                                                          const GALGAS_llvmGenerationInstructionList & inAttribute_mInstructionList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_llvmInlineInfixOperatorUsage result ;
  if (inAttribute_mLeftOperandName.isValid () && inAttribute_mRightOperandName.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmInlineInfixOperatorUsage (inAttribute_mLeftOperandName, inAttribute_mRightOperandName, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInlineInfixOperatorUsage::setter_setMLeftOperandName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInlineInfixOperatorUsage::setter_setMRightOperandName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmInlineInfixOperatorUsage::setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInlineInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInlineInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmInlineInfixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @llvmInlineInfixOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_llvmInlineInfixOperatorUsage::cPtr_llvmInlineInfixOperatorUsage (const GALGAS_lstring & in_mLeftOperandName,
                                                                      const GALGAS_lstring & in_mRightOperandName,
                                                                      const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mLeftOperandName (in_mLeftOperandName),
mProperty_mRightOperandName (in_mRightOperandName),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmInlineInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;
}

void cPtr_llvmInlineInfixOperatorUsage::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@llvmInlineInfixOperatorUsage:" ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmInlineInfixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInlineInfixOperatorUsage (mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmInlineInfixOperatorUsage generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ("llvmInlineInfixOperatorUsage",
                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmInlineInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmInlineInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmInlineInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage GALGAS_llvmInlineInfixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmInlineInfixOperatorUsage result ;
  const GALGAS_llvmInlineInfixOperatorUsage * p = (const GALGAS_llvmInlineInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmInlineInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInlineInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @infixOperatorRoutineIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_infixOperatorRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVarName.printNonNullClassInstanceProperties ("mTargetVarName") ;
    mProperty_mSourceType.printNonNullClassInstanceProperties ("mSourceType") ;
    mProperty_mSourceVarName.printNonNullClassInstanceProperties ("mSourceVarName") ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mGeneratedInstructions.printNonNullClassInstanceProperties ("mGeneratedInstructions") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_infixOperatorRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_infixOperatorRoutineIR * p = (const cPtr_infixOperatorRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
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
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarName.objectCompare (p->mProperty_mTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceType.objectCompare (p->mProperty_mSourceType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceVarName.objectCompare (p->mProperty_mSourceVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGeneratedInstructions.objectCompare (p->mProperty_mGeneratedInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (p->mProperty_mAllocaList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_infixOperatorRoutineIR::objectCompare (const GALGAS_infixOperatorRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR::GALGAS_infixOperatorRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR::GALGAS_infixOperatorRoutineIR (const cPtr_infixOperatorRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorRoutineIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR GALGAS_infixOperatorRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                              const GALGAS_bool & inAttribute_isRequired,
                                                                              const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                              const GALGAS_omnibusType & inAttribute_mTargetType,
                                                                              const GALGAS_string & inAttribute_mTargetVarName,
                                                                              const GALGAS_omnibusType & inAttribute_mSourceType,
                                                                              const GALGAS_string & inAttribute_mSourceVarName,
                                                                              const GALGAS_omnibusType & inAttribute_mResultType,
                                                                              const GALGAS_stringlist & inAttribute_mGeneratedInstructions,
                                                                              const GALGAS_allocaList & inAttribute_mAllocaList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mTargetType.isValid () && inAttribute_mTargetVarName.isValid () && inAttribute_mSourceType.isValid () && inAttribute_mSourceVarName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mGeneratedInstructions.isValid () && inAttribute_mAllocaList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_infixOperatorRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mTargetType, inAttribute_mTargetVarName, inAttribute_mSourceType, inAttribute_mSourceVarName, inAttribute_mResultType, inAttribute_mGeneratedInstructions, inAttribute_mAllocaList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setter_setMTargetType (GALGAS_omnibusType inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setter_setMTargetVarName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setter_setMSourceType (GALGAS_omnibusType inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setter_setMSourceVarName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setter_setMResultType (GALGAS_omnibusType inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mResultType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setter_setMGeneratedInstructions (GALGAS_stringlist inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setter_setMAllocaList (GALGAS_allocaList inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_infixOperatorRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_infixOperatorRoutineIR::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mTargetVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_infixOperatorRoutineIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mSourceType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_infixOperatorRoutineIR::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mSourceVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_infixOperatorRoutineIR::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mResultType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_infixOperatorRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_infixOperatorRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_allocaList () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @infixOperatorRoutineIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_infixOperatorRoutineIR::cPtr_infixOperatorRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                          const GALGAS_bool & in_isRequired,
                                                          const GALGAS_bool & in_warnsIfUnused,
                                                          const GALGAS_omnibusType & in_mTargetType,
                                                          const GALGAS_string & in_mTargetVarName,
                                                          const GALGAS_omnibusType & in_mSourceType,
                                                          const GALGAS_string & in_mSourceVarName,
                                                          const GALGAS_omnibusType & in_mResultType,
                                                          const GALGAS_stringlist & in_mGeneratedInstructions,
                                                          const GALGAS_allocaList & in_mAllocaList
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mTargetVarName (in_mTargetVarName),
mProperty_mSourceType (in_mSourceType),
mProperty_mSourceVarName (in_mSourceVarName),
mProperty_mResultType (in_mResultType),
mProperty_mGeneratedInstructions (in_mGeneratedInstructions),
mProperty_mAllocaList (in_mAllocaList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_infixOperatorRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;
}

void cPtr_infixOperatorRoutineIR::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@infixOperatorRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGeneratedInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_infixOperatorRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_infixOperatorRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mTargetType, mProperty_mTargetVarName, mProperty_mSourceType, mProperty_mSourceVarName, mProperty_mResultType, mProperty_mGeneratedInstructions, mProperty_mAllocaList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @infixOperatorRoutineIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorRoutineIR ("infixOperatorRoutineIR",
                                               & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_infixOperatorRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_infixOperatorRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorRoutineIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR GALGAS_infixOperatorRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorRoutineIR result ;
  const GALGAS_infixOperatorRoutineIR * p = (const GALGAS_infixOperatorRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_infixOperatorRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compiletimePrefixOperatorAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compiletimePrefixOperatorAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixOperator.printNonNullClassInstanceProperties ("mPrefixOperator") ;
    mProperty_mPrefixOperatorLocation.printNonNullClassInstanceProperties ("mPrefixOperatorLocation") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compiletimePrefixOperatorAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_compiletimePrefixOperatorAST * p = (const cPtr_compiletimePrefixOperatorAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mPrefixOperator.objectCompare (p->mProperty_mPrefixOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixOperatorLocation.objectCompare (p->mProperty_mPrefixOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeName.objectCompare (p->mProperty_mReceiverTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (p->mProperty_mResultTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compiletimePrefixOperatorAST::objectCompare (const GALGAS_compiletimePrefixOperatorAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST::GALGAS_compiletimePrefixOperatorAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST::GALGAS_compiletimePrefixOperatorAST (const cPtr_compiletimePrefixOperatorAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compiletimePrefixOperatorAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST GALGAS_compiletimePrefixOperatorAST::constructor_new (const GALGAS_compileTimePrefixOperatorEnumeration & inAttribute_mPrefixOperator,
                                                                                          const GALGAS_location & inAttribute_mPrefixOperatorLocation,
                                                                                          const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                          const GALGAS_lstring & inAttribute_mReceiverTypeName,
                                                                                          const GALGAS_ctExpressionAST & inAttribute_mExpression,
                                                                                          const GALGAS_lstring & inAttribute_mResultTypeName
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_compiletimePrefixOperatorAST result ;
  if (inAttribute_mPrefixOperator.isValid () && inAttribute_mPrefixOperatorLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mReceiverTypeName.isValid () && inAttribute_mExpression.isValid () && inAttribute_mResultTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_compiletimePrefixOperatorAST (inAttribute_mPrefixOperator, inAttribute_mPrefixOperatorLocation, inAttribute_mReceiverName, inAttribute_mReceiverTypeName, inAttribute_mExpression, inAttribute_mResultTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setter_setMPrefixOperator (GALGAS_compileTimePrefixOperatorEnumeration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setter_setMPrefixOperatorLocation (GALGAS_location inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setter_setMReceiverTypeName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setter_setMExpression (GALGAS_ctExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setter_setMResultTypeName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorEnumeration GALGAS_compiletimePrefixOperatorAST::readProperty_mPrefixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_compileTimePrefixOperatorEnumeration () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_compiletimePrefixOperatorAST::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compiletimePrefixOperatorAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compiletimePrefixOperatorAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compiletimePrefixOperatorAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compiletimePrefixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compiletimePrefixOperatorAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compiletimePrefixOperatorAST::cPtr_compiletimePrefixOperatorAST (const GALGAS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                                      const GALGAS_location & in_mPrefixOperatorLocation,
                                                                      const GALGAS_lstring & in_mReceiverName,
                                                                      const GALGAS_lstring & in_mReceiverTypeName,
                                                                      const GALGAS_ctExpressionAST & in_mExpression,
                                                                      const GALGAS_lstring & in_mResultTypeName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mPrefixOperator (in_mPrefixOperator),
mProperty_mPrefixOperatorLocation (in_mPrefixOperatorLocation),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mReceiverTypeName (in_mReceiverTypeName),
mProperty_mExpression (in_mExpression),
mProperty_mResultTypeName (in_mResultTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compiletimePrefixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ;
}

void cPtr_compiletimePrefixOperatorAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@compiletimePrefixOperatorAST:" ;
  mProperty_mPrefixOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compiletimePrefixOperatorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compiletimePrefixOperatorAST (mProperty_mPrefixOperator, mProperty_mPrefixOperatorLocation, mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mExpression, mProperty_mResultTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @compiletimePrefixOperatorAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ("compiletimePrefixOperatorAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compiletimePrefixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compiletimePrefixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compiletimePrefixOperatorAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST GALGAS_compiletimePrefixOperatorAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compiletimePrefixOperatorAST result ;
  const GALGAS_compiletimePrefixOperatorAST * p = (const GALGAS_compiletimePrefixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compiletimePrefixOperatorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimePrefixOperatorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimePrefixOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimePrefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixOperatorLocation.printNonNullClassInstanceProperties ("mPrefixOperatorLocation") ;
    mProperty_mReceiverOperandName.printNonNullClassInstanceProperties ("mReceiverOperandName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimePrefixOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_compileTimePrefixOperatorUsage * p = (const cPtr_compileTimePrefixOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mPrefixOperatorLocation.objectCompare (p->mProperty_mPrefixOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverOperandName.objectCompare (p->mProperty_mReceiverOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimePrefixOperatorUsage::objectCompare (const GALGAS_compileTimePrefixOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage::GALGAS_compileTimePrefixOperatorUsage (void) :
GALGAS_prefixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage::GALGAS_compileTimePrefixOperatorUsage (const cPtr_compileTimePrefixOperatorUsage * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimePrefixOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage GALGAS_compileTimePrefixOperatorUsage::constructor_new (const GALGAS_location & inAttribute_mPrefixOperatorLocation,
                                                                                              const GALGAS_lstring & inAttribute_mReceiverOperandName,
                                                                                              const GALGAS_ctExpressionAST & inAttribute_mExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_compileTimePrefixOperatorUsage result ;
  if (inAttribute_mPrefixOperatorLocation.isValid () && inAttribute_mReceiverOperandName.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_compileTimePrefixOperatorUsage (inAttribute_mPrefixOperatorLocation, inAttribute_mReceiverOperandName, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimePrefixOperatorUsage::setter_setMPrefixOperatorLocation (GALGAS_location inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimePrefixOperatorUsage::setter_setMReceiverOperandName (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mReceiverOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_compileTimePrefixOperatorUsage::setter_setMExpression (GALGAS_ctExpressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_compileTimePrefixOperatorUsage::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimePrefixOperatorUsage::readProperty_mReceiverOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mReceiverOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compileTimePrefixOperatorUsage::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimePrefixOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimePrefixOperatorUsage::cPtr_compileTimePrefixOperatorUsage (const GALGAS_location & in_mPrefixOperatorLocation,
                                                                          const GALGAS_lstring & in_mReceiverOperandName,
                                                                          const GALGAS_ctExpressionAST & in_mExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE),
mProperty_mPrefixOperatorLocation (in_mPrefixOperatorLocation),
mProperty_mReceiverOperandName (in_mReceiverOperandName),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimePrefixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;
}

void cPtr_compileTimePrefixOperatorUsage::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@compileTimePrefixOperatorUsage:" ;
  mProperty_mPrefixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimePrefixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimePrefixOperatorUsage (mProperty_mPrefixOperatorLocation, mProperty_mReceiverOperandName, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @compileTimePrefixOperatorUsage generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ("compileTimePrefixOperatorUsage",
                                                       & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimePrefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimePrefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimePrefixOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage GALGAS_compileTimePrefixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimePrefixOperatorUsage result ;
  const GALGAS_compileTimePrefixOperatorUsage * p = (const GALGAS_compileTimePrefixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimePrefixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimePrefixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @llvmPrefixOperatorAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmPrefixOperatorAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixOperator.printNonNullClassInstanceProperties ("mPrefixOperator") ;
    mProperty_mPrefixOperatorLocation.printNonNullClassInstanceProperties ("mPrefixOperatorLocation") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmPrefixOperatorAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmPrefixOperatorAST * p = (const cPtr_llvmPrefixOperatorAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mPrefixOperator.objectCompare (p->mProperty_mPrefixOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixOperatorLocation.objectCompare (p->mProperty_mPrefixOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeName.objectCompare (p->mProperty_mReceiverTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (p->mProperty_mResultTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmPrefixOperatorAST::objectCompare (const GALGAS_llvmPrefixOperatorAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST::GALGAS_llvmPrefixOperatorAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST::GALGAS_llvmPrefixOperatorAST (const cPtr_llvmPrefixOperatorAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmPrefixOperatorAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST GALGAS_llvmPrefixOperatorAST::constructor_new (const GALGAS_llvmPrefixOperatorEnumeration & inAttribute_mPrefixOperator,
                                                                            const GALGAS_location & inAttribute_mPrefixOperatorLocation,
                                                                            const GALGAS_lstring & inAttribute_mReceiverName,
                                                                            const GALGAS_lstring & inAttribute_mReceiverTypeName,
                                                                            const GALGAS_llvmGenerationInstructionList & inAttribute_mInstructionList,
                                                                            const GALGAS_lstring & inAttribute_mResultTypeName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorAST result ;
  if (inAttribute_mPrefixOperator.isValid () && inAttribute_mPrefixOperatorLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mReceiverTypeName.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mResultTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmPrefixOperatorAST (inAttribute_mPrefixOperator, inAttribute_mPrefixOperatorLocation, inAttribute_mReceiverName, inAttribute_mReceiverTypeName, inAttribute_mInstructionList, inAttribute_mResultTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setter_setMPrefixOperator (GALGAS_llvmPrefixOperatorEnumeration inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setter_setMPrefixOperatorLocation (GALGAS_location inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setter_setMReceiverTypeName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setter_setMResultTypeName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorEnumeration GALGAS_llvmPrefixOperatorAST::readProperty_mPrefixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmPrefixOperatorEnumeration () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_llvmPrefixOperatorAST::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmPrefixOperatorAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmPrefixOperatorAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmPrefixOperatorAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmPrefixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @llvmPrefixOperatorAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_llvmPrefixOperatorAST::cPtr_llvmPrefixOperatorAST (const GALGAS_llvmPrefixOperatorEnumeration & in_mPrefixOperator,
                                                        const GALGAS_location & in_mPrefixOperatorLocation,
                                                        const GALGAS_lstring & in_mReceiverName,
                                                        const GALGAS_lstring & in_mReceiverTypeName,
                                                        const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                                        const GALGAS_lstring & in_mResultTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mPrefixOperator (in_mPrefixOperator),
mProperty_mPrefixOperatorLocation (in_mPrefixOperatorLocation),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mReceiverTypeName (in_mReceiverTypeName),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mResultTypeName (in_mResultTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmPrefixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorAST ;
}

void cPtr_llvmPrefixOperatorAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@llvmPrefixOperatorAST:" ;
  mProperty_mPrefixOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmPrefixOperatorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmPrefixOperatorAST (mProperty_mPrefixOperator, mProperty_mPrefixOperatorLocation, mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mInstructionList, mProperty_mResultTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmPrefixOperatorAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmPrefixOperatorAST ("llvmPrefixOperatorAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmPrefixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmPrefixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmPrefixOperatorAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST GALGAS_llvmPrefixOperatorAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorAST result ;
  const GALGAS_llvmPrefixOperatorAST * p = (const GALGAS_llvmPrefixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmPrefixOperatorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @llvmPrefixOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmPrefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixMangledFunctionName.printNonNullClassInstanceProperties ("mPrefixMangledFunctionName") ;
    mProperty_mReceiverOperandName.printNonNullClassInstanceProperties ("mReceiverOperandName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmPrefixOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmPrefixOperatorUsage * p = (const cPtr_llvmPrefixOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mPrefixMangledFunctionName.objectCompare (p->mProperty_mPrefixMangledFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverOperandName.objectCompare (p->mProperty_mReceiverOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmPrefixOperatorUsage::objectCompare (const GALGAS_llvmPrefixOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage::GALGAS_llvmPrefixOperatorUsage (void) :
GALGAS_prefixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage::GALGAS_llvmPrefixOperatorUsage (const cPtr_llvmPrefixOperatorUsage * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmPrefixOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage GALGAS_llvmPrefixOperatorUsage::constructor_new (const GALGAS_string & inAttribute_mPrefixMangledFunctionName,
                                                                                const GALGAS_lstring & inAttribute_mReceiverOperandName,
                                                                                const GALGAS_llvmGenerationInstructionList & inAttribute_mInstructionList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorUsage result ;
  if (inAttribute_mPrefixMangledFunctionName.isValid () && inAttribute_mReceiverOperandName.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmPrefixOperatorUsage (inAttribute_mPrefixMangledFunctionName, inAttribute_mReceiverOperandName, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorUsage::setter_setMPrefixMangledFunctionName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    p->mProperty_mPrefixMangledFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorUsage::setter_setMReceiverOperandName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    p->mProperty_mReceiverOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorUsage::setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_llvmPrefixOperatorUsage::readProperty_mPrefixMangledFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    return p->mProperty_mPrefixMangledFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmPrefixOperatorUsage::readProperty_mReceiverOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    return p->mProperty_mReceiverOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmPrefixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @llvmPrefixOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_llvmPrefixOperatorUsage::cPtr_llvmPrefixOperatorUsage (const GALGAS_string & in_mPrefixMangledFunctionName,
                                                            const GALGAS_lstring & in_mReceiverOperandName,
                                                            const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                            COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE),
mProperty_mPrefixMangledFunctionName (in_mPrefixMangledFunctionName),
mProperty_mReceiverOperandName (in_mReceiverOperandName),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmPrefixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;
}

void cPtr_llvmPrefixOperatorUsage::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@llvmPrefixOperatorUsage:" ;
  mProperty_mPrefixMangledFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmPrefixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmPrefixOperatorUsage (mProperty_mPrefixMangledFunctionName, mProperty_mReceiverOperandName, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmPrefixOperatorUsage generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ("llvmPrefixOperatorUsage",
                                                & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmPrefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmPrefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmPrefixOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage GALGAS_llvmPrefixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorUsage result ;
  const GALGAS_llvmPrefixOperatorUsage * p = (const GALGAS_llvmPrefixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmPrefixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @prefixOperatorRoutineIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefixOperatorRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mReceiverVarName.printNonNullClassInstanceProperties ("mReceiverVarName") ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mGeneratedInstructions.printNonNullClassInstanceProperties ("mGeneratedInstructions") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_prefixOperatorRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefixOperatorRoutineIR * p = (const cPtr_prefixOperatorRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
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
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverVarName.objectCompare (p->mProperty_mReceiverVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGeneratedInstructions.objectCompare (p->mProperty_mGeneratedInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (p->mProperty_mAllocaList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_prefixOperatorRoutineIR::objectCompare (const GALGAS_prefixOperatorRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR::GALGAS_prefixOperatorRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR::GALGAS_prefixOperatorRoutineIR (const cPtr_prefixOperatorRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorRoutineIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR GALGAS_prefixOperatorRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                const GALGAS_bool & inAttribute_isRequired,
                                                                                const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                const GALGAS_omnibusType & inAttribute_mReceiverType,
                                                                                const GALGAS_string & inAttribute_mReceiverVarName,
                                                                                const GALGAS_omnibusType & inAttribute_mResultType,
                                                                                const GALGAS_stringlist & inAttribute_mGeneratedInstructions,
                                                                                const GALGAS_allocaList & inAttribute_mAllocaList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mReceiverVarName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mGeneratedInstructions.isValid () && inAttribute_mAllocaList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefixOperatorRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mReceiverType, inAttribute_mReceiverVarName, inAttribute_mResultType, inAttribute_mGeneratedInstructions, inAttribute_mAllocaList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorRoutineIR::setter_setMReceiverType (GALGAS_omnibusType inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorRoutineIR::setter_setMReceiverVarName (GALGAS_string inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mReceiverVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorRoutineIR::setter_setMResultType (GALGAS_omnibusType inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mResultType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorRoutineIR::setter_setMGeneratedInstructions (GALGAS_stringlist inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorRoutineIR::setter_setMAllocaList (GALGAS_allocaList inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_prefixOperatorRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_prefixOperatorRoutineIR::readProperty_mReceiverVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mReceiverVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_prefixOperatorRoutineIR::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mResultType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_prefixOperatorRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_prefixOperatorRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_allocaList () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @prefixOperatorRoutineIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_prefixOperatorRoutineIR::cPtr_prefixOperatorRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                            const GALGAS_bool & in_isRequired,
                                                            const GALGAS_bool & in_warnsIfUnused,
                                                            const GALGAS_omnibusType & in_mReceiverType,
                                                            const GALGAS_string & in_mReceiverVarName,
                                                            const GALGAS_omnibusType & in_mResultType,
                                                            const GALGAS_stringlist & in_mGeneratedInstructions,
                                                            const GALGAS_allocaList & in_mAllocaList
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mReceiverVarName (in_mReceiverVarName),
mProperty_mResultType (in_mResultType),
mProperty_mGeneratedInstructions (in_mGeneratedInstructions),
mProperty_mAllocaList (in_mAllocaList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefixOperatorRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;
}

void cPtr_prefixOperatorRoutineIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@prefixOperatorRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGeneratedInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefixOperatorRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefixOperatorRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mReceiverType, mProperty_mReceiverVarName, mProperty_mResultType, mProperty_mGeneratedInstructions, mProperty_mAllocaList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @prefixOperatorRoutineIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ("prefixOperatorRoutineIR",
                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorRoutineIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR GALGAS_prefixOperatorRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorRoutineIR result ;
  const GALGAS_prefixOperatorRoutineIR * p = (const GALGAS_prefixOperatorRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperatorRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @checkInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_checkInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCheckMessage.printNonNullClassInstanceProperties ("mCheckMessage") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_checkInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_checkInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCheckMessage.objectCompare (p->mProperty_mCheckMessage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_checkInstructionAST::objectCompare (const GALGAS_checkInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST::GALGAS_checkInstructionAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST::GALGAS_checkInstructionAST (const cPtr_checkInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_checkInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                        const GALGAS_lstring & inAttribute_mCheckMessage,
                                                                        const GALGAS_expressionAST & inAttribute_mExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCheckMessage.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_checkInstructionAST (inAttribute_mInstructionLocation, inAttribute_mCheckMessage, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkInstructionAST::setter_setMCheckMessage (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    p->mProperty_mCheckMessage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkInstructionAST::setter_setMExpression (GALGAS_expressionAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_checkInstructionAST::readProperty_mCheckMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    return p->mProperty_mCheckMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_checkInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @checkInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_checkInstructionAST::cPtr_checkInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_lstring & in_mCheckMessage,
                                                    const GALGAS_expressionAST & in_mExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCheckMessage (in_mCheckMessage),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_checkInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

void cPtr_checkInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@checkInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCheckMessage.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_checkInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_checkInstructionAST (mProperty_mInstructionLocation, mProperty_mCheckMessage, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @checkInstructionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkInstructionAST ("checkInstructionAST",
                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST result ;
  const GALGAS_checkInstructionAST * p = (const GALGAS_checkInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_checkInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @assignmentInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetAST.printNonNullClassInstanceProperties ("mTargetAST") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_assignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetAST.objectCompare (p->mProperty_mTargetAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assignmentInstructionAST::objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_LValueAST & inAttribute_mTargetAST,
                                                                                  const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetAST.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTargetAST, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstructionAST::setter_setMTargetAST (GALGAS_LValueAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mTargetAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstructionAST::setter_setMSourceExpression (GALGAS_expressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueAST GALGAS_assignmentInstructionAST::readProperty_mTargetAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_LValueAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mTargetAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_assignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_LValueAST & in_mTargetAST,
                                                              const GALGAS_expressionAST & in_mSourceExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetAST (in_mTargetAST),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@assignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetAST, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @assignmentInstructionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                 & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  const GALGAS_assignmentInstructionAST * p = (const GALGAS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValueInAssignment (const GALGAS_LValueAST inObject,
                                                const GALGAS_omnibusType constinArgument_inSelfType,
                                                const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                const GALGAS_semanticContext constinArgument_inContext,
                                                const GALGAS_mode constinArgument_inMode,
                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_LValueAST temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("instruction-assignment.galgas", 122)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_LValueAST temp_3 = inObject ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 123)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        {
        const GALGAS_LValueAST temp_5 = inObject ;
        routine_analyzeSelfLValueInAssignment (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, temp_5.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 125)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_6299 ;
    const GALGAS_LValueAST temp_6 = inObject ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_6.readProperty_mIdentifier (), var_entity_6299, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 141)) ;
    switch (var_entity_6299.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        const GALGAS_LValueAST temp_7 = inObject ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a task has no value"), fixItArray8  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 144)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        const GALGAS_LValueAST temp_9 = inObject ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a driver has no value"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 146)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        const GALGAS_LValueAST temp_11 = inObject ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a global constant cannot be written"), fixItArray12  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 148)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const GALGAS_LValueAST temp_13 = inObject ;
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a local constant cannot be written"), fixItArray14  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 150)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const GALGAS_LValueAST temp_15 = inObject ;
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a global sync instance is not allowed here"), fixItArray16  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 152)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_7665 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_6299.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_6962_variableType = extractPtr_7665->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_6984_omnibusName = extractPtr_7665->mAssociatedValue1 ;
        {
        const GALGAS_LValueAST temp_17 = inObject ;
        const GALGAS_LValueAST temp_18 = inObject ;
        routine_analyzeVariableInLValueInAssignment (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, temp_17.readProperty_mIdentifier (), function_llvmNameForLocalVariable (extractedValue_6984_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 166)), extractedValue_6962_variableType, temp_18.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 154)) ;
        }
      }
      break ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
// @controlRegisterAssignmentInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_controlRegisterAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
    mProperty_mAssignmentKind.printNonNullClassInstanceProperties ("mAssignmentKind") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_controlRegisterAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_controlRegisterAssignmentInstructionAST * p = (const cPtr_controlRegisterAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssignmentKind.objectCompare (p->mProperty_mAssignmentKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_controlRegisterAssignmentInstructionAST::objectCompare (const GALGAS_controlRegisterAssignmentInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST::GALGAS_controlRegisterAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST::GALGAS_controlRegisterAssignmentInstructionAST (const cPtr_controlRegisterAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterAssignmentInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue,
                                                                                                                const GALGAS_controlRegisterAssignmentOperatorKind & inAttribute_mAssignmentKind,
                                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mControlRegisterLValue.isValid () && inAttribute_mAssignmentKind.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_controlRegisterAssignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mControlRegisterLValue, inAttribute_mAssignmentKind, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentInstructionAST::setter_setMControlRegisterLValue (GALGAS_controlRegisterLValueAST inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentInstructionAST::setter_setMAssignmentKind (GALGAS_controlRegisterAssignmentOperatorKind inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mAssignmentKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentInstructionAST::setter_setMSourceExpression (GALGAS_expressionAST inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterAssignmentInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterLValueAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind GALGAS_controlRegisterAssignmentInstructionAST::readProperty_mAssignmentKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterAssignmentOperatorKind () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mAssignmentKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_controlRegisterAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @controlRegisterAssignmentInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                            const GALGAS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue),
mProperty_mAssignmentKind (in_mAssignmentKind),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_controlRegisterAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

void cPtr_controlRegisterAssignmentInstructionAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@controlRegisterAssignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssignmentKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_controlRegisterAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_controlRegisterAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mAssignmentKind, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterAssignmentInstructionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ("controlRegisterAssignmentInstructionAST",
                                                                & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST result ;
  const GALGAS_controlRegisterAssignmentInstructionAST * p = (const GALGAS_controlRegisterAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sliceAssignmentInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sliceAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mSliceAssignmentList.printNonNullClassInstanceProperties ("mSliceAssignmentList") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mSourceExpressionLocation.printNonNullClassInstanceProperties ("mSourceExpressionLocation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sliceAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sliceAssignmentInstructionAST * p = (const cPtr_sliceAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSliceAssignmentList.objectCompare (p->mProperty_mSliceAssignmentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpressionLocation.objectCompare (p->mProperty_mSourceExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sliceAssignmentInstructionAST::objectCompare (const GALGAS_sliceAssignmentInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST::GALGAS_sliceAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST::GALGAS_sliceAssignmentInstructionAST (const cPtr_sliceAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sliceAssignmentInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_lstring & inAttribute_mTypeName,
                                                                                            const GALGAS_sliceAssignmentListAST & inAttribute_mSliceAssignmentList,
                                                                                            const GALGAS_expressionAST & inAttribute_mSourceExpression,
                                                                                            const GALGAS_location & inAttribute_mSourceExpressionLocation
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mSliceAssignmentList.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mSourceExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sliceAssignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTypeName, inAttribute_mSliceAssignmentList, inAttribute_mSourceExpression, inAttribute_mSourceExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setter_setMSliceAssignmentList (GALGAS_sliceAssignmentListAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSliceAssignmentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setter_setMSourceExpression (GALGAS_expressionAST inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setter_setMSourceExpressionLocation (GALGAS_location inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sliceAssignmentInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentInstructionAST::readProperty_mSliceAssignmentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_sliceAssignmentListAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSliceAssignmentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_sliceAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_sliceAssignmentInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sliceAssignmentInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mTypeName,
                                                                        const GALGAS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                                        const GALGAS_location & in_mSourceExpressionLocation
                                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mSliceAssignmentList (in_mSliceAssignmentList),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mSourceExpressionLocation (in_mSourceExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sliceAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

void cPtr_sliceAssignmentInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@sliceAssignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSliceAssignmentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sliceAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sliceAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mSliceAssignmentList, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @sliceAssignmentInstructionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ("sliceAssignmentInstructionAST",
                                                      & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST result ;
  const GALGAS_sliceAssignmentInstructionAST * p = (const GALGAS_sliceAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @bitbandInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitbandInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
    mProperty_mBitExpression.printNonNullClassInstanceProperties ("mBitExpression") ;
    mProperty_mBitExpressionLocation.printNonNullClassInstanceProperties ("mBitExpressionLocation") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mSourceExpressionLocation.printNonNullClassInstanceProperties ("mSourceExpressionLocation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_bitbandInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bitbandInstructionAST * p = (const cPtr_bitbandInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitExpression.objectCompare (p->mProperty_mBitExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitExpressionLocation.objectCompare (p->mProperty_mBitExpressionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpressionLocation.objectCompare (p->mProperty_mSourceExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_bitbandInstructionAST::objectCompare (const GALGAS_bitbandInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST::GALGAS_bitbandInstructionAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST::GALGAS_bitbandInstructionAST (const cPtr_bitbandInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                            const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue,
                                                                            const GALGAS_expressionAST & inAttribute_mBitExpression,
                                                                            const GALGAS_location & inAttribute_mBitExpressionLocation,
                                                                            const GALGAS_expressionAST & inAttribute_mSourceExpression,
                                                                            const GALGAS_location & inAttribute_mSourceExpressionLocation
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mControlRegisterLValue.isValid () && inAttribute_mBitExpression.isValid () && inAttribute_mBitExpressionLocation.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mSourceExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bitbandInstructionAST (inAttribute_mInstructionLocation, inAttribute_mControlRegisterLValue, inAttribute_mBitExpression, inAttribute_mBitExpressionLocation, inAttribute_mSourceExpression, inAttribute_mSourceExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setter_setMControlRegisterLValue (GALGAS_controlRegisterLValueAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setter_setMBitExpression (GALGAS_expressionAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mBitExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setter_setMBitExpressionLocation (GALGAS_location inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mBitExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setter_setMSourceExpression (GALGAS_expressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setter_setMSourceExpressionLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_bitbandInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterLValueAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_bitbandInstructionAST::readProperty_mBitExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mBitExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_bitbandInstructionAST::readProperty_mBitExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mBitExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_bitbandInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_bitbandInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @bitbandInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionAST::cPtr_bitbandInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                        const GALGAS_expressionAST & in_mBitExpression,
                                                        const GALGAS_location & in_mBitExpressionLocation,
                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                        const GALGAS_location & in_mSourceExpressionLocation
                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue),
mProperty_mBitExpression (in_mBitExpression),
mProperty_mBitExpressionLocation (in_mBitExpressionLocation),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mSourceExpressionLocation (in_mSourceExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitbandInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

void cPtr_bitbandInstructionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@bitbandInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitbandInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitbandInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mBitExpression, mProperty_mBitExpressionLocation, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @bitbandInstructionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitbandInstructionAST ("bitbandInstructionAST",
                                              & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitbandInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitbandInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitbandInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST result ;
  const GALGAS_bitbandInstructionAST * p = (const GALGAS_bitbandInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitbandInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @varInstructionWithAssignmentAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInstructionWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varInstructionWithAssignmentAST::objectCompare (const GALGAS_varInstructionWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionWithAssignmentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mVarName,
                                                                                                const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInstructionWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mOptionalTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varInstructionWithAssignmentAST::setter_setMVarName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varInstructionWithAssignmentAST::setter_setMOptionalTypeName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varInstructionWithAssignmentAST::setter_setMSourceExpression (GALGAS_expressionAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_varInstructionWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @varInstructionWithAssignmentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mVarName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

void cPtr_varInstructionWithAssignmentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@varInstructionWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mOptionalTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @varInstructionWithAssignmentAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ("varInstructionWithAssignmentAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  const GALGAS_varInstructionWithAssignmentAST * p = (const GALGAS_varInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @varDeclarationInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varDeclarationInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varDeclarationInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varDeclarationInstructionAST * p = (const cPtr_varDeclarationInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varDeclarationInstructionAST::objectCompare (const GALGAS_varDeclarationInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST::GALGAS_varDeclarationInstructionAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST::GALGAS_varDeclarationInstructionAST (const cPtr_varDeclarationInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varDeclarationInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST GALGAS_varDeclarationInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mVarName,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_varDeclarationInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varDeclarationInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varDeclarationInstructionAST::setter_setMVarName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varDeclarationInstructionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varDeclarationInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varDeclarationInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @varDeclarationInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_varDeclarationInstructionAST::cPtr_varDeclarationInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mVarName,
                                                                      const GALGAS_lstring & in_mTypeName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mTypeName (in_mTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varDeclarationInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST ;
}

void cPtr_varDeclarationInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@varDeclarationInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varDeclarationInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varDeclarationInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @varDeclarationInstructionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varDeclarationInstructionAST ("varDeclarationInstructionAST",
                                                     & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varDeclarationInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varDeclarationInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varDeclarationInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST GALGAS_varDeclarationInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varDeclarationInstructionAST result ;
  const GALGAS_varDeclarationInstructionAST * p = (const GALGAS_varDeclarationInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varDeclarationInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varDeclarationInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @letInstructionWithAssignmentAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_letInstructionWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_letInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_letInstructionWithAssignmentAST::objectCompare (const GALGAS_letInstructionWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionWithAssignmentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_letInstructionWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mConstantName, inAttribute_mOptionalTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_letInstructionWithAssignmentAST::setter_setMConstantName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_letInstructionWithAssignmentAST::setter_setMOptionalTypeName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_letInstructionWithAssignmentAST::setter_setMSourceExpression (GALGAS_expressionAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_letInstructionWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @letInstructionWithAssignmentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mConstantName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantName (in_mConstantName),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_letInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

void cPtr_letInstructionWithAssignmentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@letInstructionWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_letInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_letInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mOptionalTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @letInstructionWithAssignmentAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ("letInstructionWithAssignmentAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_letInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_letInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  const GALGAS_letInstructionWithAssignmentAST * p = (const GALGAS_letInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_letInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @forInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mIteratedObject.printNonNullClassInstanceProperties ("mIteratedObject") ;
    mProperty_mWhileExpression.printNonNullClassInstanceProperties ("mWhileExpression") ;
    mProperty_mEndOf_5F_whileExpression.printNonNullClassInstanceProperties ("mEndOf_whileExpression") ;
    mProperty_mStaticWhileExpression.printNonNullClassInstanceProperties ("mStaticWhileExpression") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mEndOf_5F_for_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_for_instruction") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_whileExpression.objectCompare (p->mProperty_mEndOf_5F_whileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStaticWhileExpression.objectCompare (p->mProperty_mStaticWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_for_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_for_5F_instruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_lstring & inAttribute_mVarName,
                                                                    const GALGAS_lstring & inAttribute_mIteratedObject,
                                                                    const GALGAS_expressionAST & inAttribute_mWhileExpression,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_whileExpression,
                                                                    const GALGAS_bool & inAttribute_mStaticWhileExpression,
                                                                    const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_for_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mIteratedObject.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOf_5F_whileExpression.isValid () && inAttribute_mStaticWhileExpression.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_for_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mIteratedObject, inAttribute_mWhileExpression, inAttribute_mEndOf_5F_whileExpression, inAttribute_mStaticWhileExpression, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setter_setMVarName (GALGAS_lstring inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setter_setMIteratedObject (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mIteratedObject = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setter_setMWhileExpression (GALGAS_expressionAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mWhileExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setter_setMEndOf_5F_whileExpression (GALGAS_location inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_whileExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setter_setMStaticWhileExpression (GALGAS_bool inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mStaticWhileExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setter_setMDoInstructionList (GALGAS_instructionListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setter_setMEndOf_5F_for_5F_instruction (GALGAS_location inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_for_5F_instruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionAST::readProperty_mIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mIteratedObject ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_forInstructionAST::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mWhileExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_whileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_whileExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_forInstructionAST::readProperty_mStaticWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mStaticWhileExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_forInstructionAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_for_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_for_5F_instruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_forInstructionAST::cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mVarName,
                                                const GALGAS_lstring & in_mIteratedObject,
                                                const GALGAS_expressionAST & in_mWhileExpression,
                                                const GALGAS_location & in_mEndOf_5F_whileExpression,
                                                const GALGAS_bool & in_mStaticWhileExpression,
                                                const GALGAS_instructionListAST & in_mDoInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_for_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mIteratedObject (in_mIteratedObject),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mEndOf_5F_whileExpression (in_mEndOf_5F_whileExpression),
mProperty_mStaticWhileExpression (in_mStaticWhileExpression),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_for_5F_instruction (in_mEndOf_5F_for_5F_instruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@forInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_whileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStaticWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_for_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mIteratedObject, mProperty_mWhileExpression, mProperty_mEndOf_5F_whileExpression, mProperty_mStaticWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @forInstructionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  const GALGAS_forInstructionAST * p = (const GALGAS_forInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @forInstructionOnArrayIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forInstructionOnArrayIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mEnumeratedValueName.printNonNullClassInstanceProperties ("mEnumeratedValueName") ;
    mProperty_mIteratedObjectName.printNonNullClassInstanceProperties ("mIteratedObjectName") ;
    mProperty_mIteratedObject.printNonNullClassInstanceProperties ("mIteratedObject") ;
    mProperty_mWhileInstructionList.printNonNullClassInstanceProperties ("mWhileInstructionList") ;
    mProperty_mWhileExpressionBooleanResult_5F_llvmName.printNonNullClassInstanceProperties ("mWhileExpressionBooleanResult_llvmName") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mArraySize.printNonNullClassInstanceProperties ("mArraySize") ;
    mProperty_mInvokedFunctionSet.printNonNullClassInstanceProperties ("mInvokedFunctionSet") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_forInstructionOnArrayIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedValueName.objectCompare (p->mProperty_mEnumeratedValueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObjectName.objectCompare (p->mProperty_mIteratedObjectName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileInstructionList.objectCompare (p->mProperty_mWhileInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpressionBooleanResult_5F_llvmName.objectCompare (p->mProperty_mWhileExpressionBooleanResult_5F_llvmName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (p->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_forInstructionOnArrayIR::objectCompare (const GALGAS_forInstructionOnArrayIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR::GALGAS_forInstructionOnArrayIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR::GALGAS_forInstructionOnArrayIR (const cPtr_forInstructionOnArrayIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnArrayIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::constructor_new (const GALGAS_string & inAttribute_mEnumeratedValueName,
                                                                                const GALGAS_lstring & inAttribute_mIteratedObjectName,
                                                                                const GALGAS_objectIR & inAttribute_mIteratedObject,
                                                                                const GALGAS_instructionListIR & inAttribute_mWhileInstructionList,
                                                                                const GALGAS_string & inAttribute_mWhileExpressionBooleanResult_5F_llvmName,
                                                                                const GALGAS_instructionListIR & inAttribute_mDoInstructionList,
                                                                                const GALGAS_omnibusType & inAttribute_mElementType,
                                                                                const GALGAS_uint & inAttribute_mArraySize,
                                                                                const GALGAS_stringset & inAttribute_mInvokedFunctionSet
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR result ;
  if (inAttribute_mEnumeratedValueName.isValid () && inAttribute_mIteratedObjectName.isValid () && inAttribute_mIteratedObject.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mWhileExpressionBooleanResult_5F_llvmName.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mElementType.isValid () && inAttribute_mArraySize.isValid () && inAttribute_mInvokedFunctionSet.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionOnArrayIR (inAttribute_mEnumeratedValueName, inAttribute_mIteratedObjectName, inAttribute_mIteratedObject, inAttribute_mWhileInstructionList, inAttribute_mWhileExpressionBooleanResult_5F_llvmName, inAttribute_mDoInstructionList, inAttribute_mElementType, inAttribute_mArraySize, inAttribute_mInvokedFunctionSet COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setter_setMEnumeratedValueName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mEnumeratedValueName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setter_setMIteratedObjectName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mIteratedObjectName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setter_setMIteratedObject (GALGAS_objectIR inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mIteratedObject = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setter_setMWhileInstructionList (GALGAS_instructionListIR inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mWhileInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setter_setMWhileExpressionBooleanResult_5F_llvmName (GALGAS_string inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mWhileExpressionBooleanResult_5F_llvmName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setter_setMDoInstructionList (GALGAS_instructionListIR inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setter_setMElementType (GALGAS_omnibusType inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setter_setMArraySize (GALGAS_uint inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setter_setMInvokedFunctionSet (GALGAS_stringset inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mInvokedFunctionSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionOnArrayIR::readProperty_mEnumeratedValueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mEnumeratedValueName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionOnArrayIR::readProperty_mIteratedObjectName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mIteratedObjectName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_forInstructionOnArrayIR::readProperty_mIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mIteratedObject ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_forInstructionOnArrayIR::readProperty_mWhileInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mWhileInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionOnArrayIR::readProperty_mWhileExpressionBooleanResult_5F_llvmName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mWhileExpressionBooleanResult_5F_llvmName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_forInstructionOnArrayIR::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_forInstructionOnArrayIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mElementType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_forInstructionOnArrayIR::readProperty_mArraySize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mArraySize ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_forInstructionOnArrayIR::readProperty_mInvokedFunctionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mInvokedFunctionSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionOnArrayIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_forInstructionOnArrayIR::cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                                            const GALGAS_lstring & in_mIteratedObjectName,
                                                            const GALGAS_objectIR & in_mIteratedObject,
                                                            const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                            const GALGAS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                                            const GALGAS_instructionListIR & in_mDoInstructionList,
                                                            const GALGAS_omnibusType & in_mElementType,
                                                            const GALGAS_uint & in_mArraySize,
                                                            const GALGAS_stringset & in_mInvokedFunctionSet
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mEnumeratedValueName (in_mEnumeratedValueName),
mProperty_mIteratedObjectName (in_mIteratedObjectName),
mProperty_mIteratedObject (in_mIteratedObject),
mProperty_mWhileInstructionList (in_mWhileInstructionList),
mProperty_mWhileExpressionBooleanResult_5F_llvmName (in_mWhileExpressionBooleanResult_5F_llvmName),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mElementType (in_mElementType),
mProperty_mArraySize (in_mArraySize),
mProperty_mInvokedFunctionSet (in_mInvokedFunctionSet) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionOnArrayIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

void cPtr_forInstructionOnArrayIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@forInstructionOnArrayIR:" ;
  mProperty_mEnumeratedValueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObjectName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpressionBooleanResult_5F_llvmName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionOnArrayIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionOnArrayIR (mProperty_mEnumeratedValueName, mProperty_mIteratedObjectName, mProperty_mIteratedObject, mProperty_mWhileInstructionList, mProperty_mWhileExpressionBooleanResult_5F_llvmName, mProperty_mDoInstructionList, mProperty_mElementType, mProperty_mArraySize, mProperty_mInvokedFunctionSet COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @forInstructionOnArrayIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionOnArrayIR ("forInstructionOnArrayIR",
                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionOnArrayIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionOnArrayIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnArrayIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR result ;
  const GALGAS_forInstructionOnArrayIR * p = (const GALGAS_forInstructionOnArrayIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionOnArrayIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnArrayIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @forInstructionOnLiteralStringIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forInstructionOnLiteralStringIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mStringElementIteratedObject.printNonNullClassInstanceProperties ("mStringElementIteratedObject") ;
    mProperty_mLiteralStringType.printNonNullClassInstanceProperties ("mLiteralStringType") ;
    mProperty_mWhileInstructionList.printNonNullClassInstanceProperties ("mWhileInstructionList") ;
    mProperty_mWhileExpressionResult.printNonNullClassInstanceProperties ("mWhileExpressionResult") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_forInstructionOnLiteralStringIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionOnLiteralStringIR * p = (const cPtr_forInstructionOnLiteralStringIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStringElementIteratedObject.objectCompare (p->mProperty_mStringElementIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralStringType.objectCompare (p->mProperty_mLiteralStringType) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_forInstructionOnLiteralStringIR::objectCompare (const GALGAS_forInstructionOnLiteralStringIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR::GALGAS_forInstructionOnLiteralStringIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR::GALGAS_forInstructionOnLiteralStringIR (const cPtr_forInstructionOnLiteralStringIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnLiteralStringIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR GALGAS_forInstructionOnLiteralStringIR::constructor_new (const GALGAS_string & inAttribute_mVarName,
                                                                                                const GALGAS_location & inAttribute_mLocation,
                                                                                                const GALGAS_objectIR & inAttribute_mStringElementIteratedObject,
                                                                                                const GALGAS_omnibusType & inAttribute_mLiteralStringType,
                                                                                                const GALGAS_instructionListIR & inAttribute_mWhileInstructionList,
                                                                                                const GALGAS_objectIR & inAttribute_mWhileExpressionResult,
                                                                                                const GALGAS_instructionListIR & inAttribute_mDoInstructionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnLiteralStringIR result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mLocation.isValid () && inAttribute_mStringElementIteratedObject.isValid () && inAttribute_mLiteralStringType.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mWhileExpressionResult.isValid () && inAttribute_mDoInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionOnLiteralStringIR (inAttribute_mVarName, inAttribute_mLocation, inAttribute_mStringElementIteratedObject, inAttribute_mLiteralStringType, inAttribute_mWhileInstructionList, inAttribute_mWhileExpressionResult, inAttribute_mDoInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setter_setMVarName (GALGAS_string inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setter_setMLocation (GALGAS_location inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setter_setMStringElementIteratedObject (GALGAS_objectIR inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mStringElementIteratedObject = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setter_setMLiteralStringType (GALGAS_omnibusType inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mLiteralStringType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setter_setMWhileInstructionList (GALGAS_instructionListIR inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mWhileInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setter_setMWhileExpressionResult (GALGAS_objectIR inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mWhileExpressionResult = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setter_setMDoInstructionList (GALGAS_instructionListIR inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionOnLiteralStringIR::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionOnLiteralStringIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_forInstructionOnLiteralStringIR::readProperty_mStringElementIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mStringElementIteratedObject ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_forInstructionOnLiteralStringIR::readProperty_mLiteralStringType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mLiteralStringType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_forInstructionOnLiteralStringIR::readProperty_mWhileInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mWhileInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_forInstructionOnLiteralStringIR::readProperty_mWhileExpressionResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mWhileExpressionResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_forInstructionOnLiteralStringIR::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionOnLiteralStringIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_forInstructionOnLiteralStringIR::cPtr_forInstructionOnLiteralStringIR (const GALGAS_string & in_mVarName,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_objectIR & in_mStringElementIteratedObject,
                                                                            const GALGAS_omnibusType & in_mLiteralStringType,
                                                                            const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                                            const GALGAS_objectIR & in_mWhileExpressionResult,
                                                                            const GALGAS_instructionListIR & in_mDoInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mLocation (in_mLocation),
mProperty_mStringElementIteratedObject (in_mStringElementIteratedObject),
mProperty_mLiteralStringType (in_mLiteralStringType),
mProperty_mWhileInstructionList (in_mWhileInstructionList),
mProperty_mWhileExpressionResult (in_mWhileExpressionResult),
mProperty_mDoInstructionList (in_mDoInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionOnLiteralStringIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;
}

void cPtr_forInstructionOnLiteralStringIR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@forInstructionOnLiteralStringIR:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStringElementIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLiteralStringType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionOnLiteralStringIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionOnLiteralStringIR (mProperty_mVarName, mProperty_mLocation, mProperty_mStringElementIteratedObject, mProperty_mLiteralStringType, mProperty_mWhileInstructionList, mProperty_mWhileExpressionResult, mProperty_mDoInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @forInstructionOnLiteralStringIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ("forInstructionOnLiteralStringIR",
                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionOnLiteralStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionOnLiteralStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnLiteralStringIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR GALGAS_forInstructionOnLiteralStringIR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnLiteralStringIR result ;
  const GALGAS_forInstructionOnLiteralStringIR * p = (const GALGAS_forInstructionOnLiteralStringIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionOnLiteralStringIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnLiteralStringIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @forLowerUpperBoundInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forLowerUpperBoundInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mLowerBoundExpression.printNonNullClassInstanceProperties ("mLowerBoundExpression") ;
    mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_lowerBoundExpression_instruction") ;
    mProperty_mUpperBoundExpression.printNonNullClassInstanceProperties ("mUpperBoundExpression") ;
    mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_upperBoundExpression_instruction") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mEndOf_5F_do_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_do_instruction") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_forLowerUpperBoundInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_do_5F_instruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_forLowerUpperBoundInstructionAST::objectCompare (const GALGAS_forLowerUpperBoundInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST::GALGAS_forLowerUpperBoundInstructionAST (void) :
GALGAS_instructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST::GALGAS_forLowerUpperBoundInstructionAST (const cPtr_forLowerUpperBoundInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mVarName,
                                                                                                  const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                  const GALGAS_expressionAST & inAttribute_mLowerBoundExpression,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                                                  const GALGAS_expressionAST & inAttribute_mUpperBoundExpression,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                                                  const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instruction
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mTypeName, inAttribute_mLowerBoundExpression, inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, inAttribute_mUpperBoundExpression, inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setter_setMVarName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setter_setMLowerBoundExpression (GALGAS_expressionAST inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setter_setMEndOf_5F_lowerBoundExpression_5F_instruction (GALGAS_location inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setter_setMUpperBoundExpression (GALGAS_expressionAST inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setter_setMEndOf_5F_upperBoundExpression_5F_instruction (GALGAS_location inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setter_setMDoInstructionList (GALGAS_instructionListAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setter_setMEndOf_5F_do_5F_instruction (GALGAS_location inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_do_5F_instruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_forLowerUpperBoundInstructionAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_do_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_instruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @forLowerUpperBoundInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionAST::cPtr_forLowerUpperBoundInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mVarName,
                                                                              const GALGAS_lstring & in_mTypeName,
                                                                              const GALGAS_expressionAST & in_mLowerBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                              const GALGAS_expressionAST & in_mUpperBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                              const GALGAS_instructionListAST & in_mDoInstructionList,
                                                                              const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mTypeName (in_mTypeName),
mProperty_mLowerBoundExpression (in_mLowerBoundExpression),
mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (in_mEndOf_5F_lowerBoundExpression_5F_instruction),
mProperty_mUpperBoundExpression (in_mUpperBoundExpression),
mProperty_mEndOf_5F_upperBoundExpression_5F_instruction (in_mEndOf_5F_upperBoundExpression_5F_instruction),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_do_5F_instruction (in_mEndOf_5F_do_5F_instruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

void cPtr_forLowerUpperBoundInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@forLowerUpperBoundInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forLowerUpperBoundInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName, mProperty_mLowerBoundExpression, mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, mProperty_mUpperBoundExpression, mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @forLowerUpperBoundInstructionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ("forLowerUpperBoundInstructionAST",
                                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  const GALGAS_forLowerUpperBoundInstructionAST * p = (const GALGAS_forLowerUpperBoundInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

