#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
// @externRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_externRoutineIR::cPtr_externRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externRoutineIR::objectCompare (const GALGAS_externRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externRoutineIR::GALGAS_externRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_externRoutineIR GALGAS_externRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                 const GALGAS_bool & in_isRequired,
                                                 const GALGAS_bool & in_warnsIfUnused,
                                                 const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                 const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_externRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_externRoutineIR (inCompiler COMMA_THERE)) ;
  object->externRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFormalArgumentListForGeneration, in_mReturnType, inCompiler) ;
  const GALGAS_externRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externRoutineIR::
externRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                 const GALGAS_bool & in_isRequired,
                                                                 const GALGAS_bool & in_warnsIfUnused,
                                                                 const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                 const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externRoutineIR::GALGAS_externRoutineIR (const cPtr_externRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_externRoutineIR GALGAS_externRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                               const GALGAS_bool & in_isRequired,
                                                               const GALGAS_bool & in_warnsIfUnused,
                                                               const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                               const GALGAS_unifiedTypeMapEntry & in_mReturnType
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_externRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFormalArgumentListForGeneration, in_mReturnType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_externRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListIR () ;
  }else{
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externRoutineIR::setProperty_mFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_externRoutineIR::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externRoutineIR::setProperty_mReturnType (const GALGAS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_externRoutineIR::cPtr_externRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                            const GALGAS_bool & in_isRequired,
                                            const GALGAS_bool & in_warnsIfUnused,
                                            const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                            const GALGAS_unifiedTypeMapEntry & in_mReturnType
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR ;
}

void cPtr_externRoutineIR::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@externRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @externRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineIR ("externRoutineIR",
                                                                       & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externRoutineIR GALGAS_externRoutineIR::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineIR result ;
  const GALGAS_externRoutineIR * p = (const GALGAS_externRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element::GALGAS_externProcedureMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element::~ GALGAS_externProcedureMapIR_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                                 const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  result.mProperty_mReturnType = in_mReturnType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externProcedureMapIR_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element::GALGAS_externProcedureMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_routineFormalArgumentListIR & inOperand1,
                                                                                const GALGAS_unifiedTypeMapEntry & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mFormalArgumentListForGeneration (inOperand1),
mProperty_mReturnType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                               const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  result.mProperty_mReturnType = in_mReturnType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_externProcedureMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReturnType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externProcedureMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalArgumentListForGeneration.drop () ;
  mProperty_mReturnType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externProcedureMapIR_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externProcedureMapIR-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externProcedureMapIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ("externProcedureMapIR-element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externProcedureMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externProcedureMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureMapIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR_2D_element result ;
  const GALGAS_externProcedureMapIR_2D_element * p = (const GALGAS_externProcedureMapIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externProcedureMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @isrDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_isrDeclarationAST::cPtr_isrDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mDriverName (),
mProperty_mISRInstructionList (),
mProperty_mEndOfISRDeclaration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_isrDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mISRName.printNonNullClassInstanceProperties ("mISRName") ;
    mProperty_mMode.printNonNullClassInstanceProperties ("mMode") ;
    mProperty_mDriverName.printNonNullClassInstanceProperties ("mDriverName") ;
    mProperty_mISRInstructionList.printNonNullClassInstanceProperties ("mISRInstructionList") ;
    mProperty_mEndOfISRDeclaration.printNonNullClassInstanceProperties ("mEndOfISRDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_isrDeclarationAST::objectCompare (const GALGAS_isrDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_isrDeclarationAST::GALGAS_isrDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_isrDeclarationAST GALGAS_isrDeclarationAST::
init_21__21__21__21__21_ (const GALGAS_lstring & in_mISRName,
                          const GALGAS_mode & in_mMode,
                          const GALGAS_lstring & in_mDriverName,
                          const GALGAS_instructionListAST & in_mISRInstructionList,
                          const GALGAS_location & in_mEndOfISRDeclaration,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_isrDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_isrDeclarationAST (inCompiler COMMA_THERE)) ;
  object->isrDeclarationAST_init_21__21__21__21__21_ (in_mISRName, in_mMode, in_mDriverName, in_mISRInstructionList, in_mEndOfISRDeclaration, inCompiler) ;
  const GALGAS_isrDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::
isrDeclarationAST_init_21__21__21__21__21_ (const GALGAS_lstring & in_mISRName,
                                            const GALGAS_mode & in_mMode,
                                            const GALGAS_lstring & in_mDriverName,
                                            const GALGAS_instructionListAST & in_mISRInstructionList,
                                            const GALGAS_location & in_mEndOfISRDeclaration,
                                            Compiler * /* inCompiler */) {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
  mProperty_mISRInstructionList = in_mISRInstructionList ;
  mProperty_mEndOfISRDeclaration = in_mEndOfISRDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_isrDeclarationAST::GALGAS_isrDeclarationAST (const cPtr_isrDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_isrDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_isrDeclarationAST GALGAS_isrDeclarationAST::class_func_new (const GALGAS_lstring & in_mISRName,
                                                                   const GALGAS_mode & in_mMode,
                                                                   const GALGAS_lstring & in_mDriverName,
                                                                   const GALGAS_instructionListAST & in_mISRInstructionList,
                                                                   const GALGAS_location & in_mEndOfISRDeclaration
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_isrDeclarationAST (in_mISRName, in_mMode, in_mDriverName, in_mISRInstructionList, in_mEndOfISRDeclaration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_isrDeclarationAST::readProperty_mISRName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mISRName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_isrDeclarationAST::setProperty_mISRName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mISRName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_isrDeclarationAST::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_mode () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_isrDeclarationAST::setProperty_mMode (const GALGAS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_isrDeclarationAST::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_isrDeclarationAST::setProperty_mDriverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_isrDeclarationAST::readProperty_mISRInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mISRInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_isrDeclarationAST::setProperty_mISRInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mISRInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_isrDeclarationAST::readProperty_mEndOfISRDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mEndOfISRDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_isrDeclarationAST::setProperty_mEndOfISRDeclaration (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mEndOfISRDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @isrDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_isrDeclarationAST::cPtr_isrDeclarationAST (const GALGAS_lstring & in_mISRName,
                                                const GALGAS_mode & in_mMode,
                                                const GALGAS_lstring & in_mDriverName,
                                                const GALGAS_instructionListAST & in_mISRInstructionList,
                                                const GALGAS_location & in_mEndOfISRDeclaration
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mDriverName (),
mProperty_mISRInstructionList (),
mProperty_mEndOfISRDeclaration () {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
  mProperty_mISRInstructionList = in_mISRInstructionList ;
  mProperty_mEndOfISRDeclaration = in_mEndOfISRDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_isrDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationAST ;
}

void cPtr_isrDeclarationAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@isrDeclarationAST:") ;
  mProperty_mISRName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mISRInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfISRDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_isrDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_isrDeclarationAST (mProperty_mISRName, mProperty_mMode, mProperty_mDriverName, mProperty_mISRInstructionList, mProperty_mEndOfISRDeclaration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @isrDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_isrDeclarationAST ("isrDeclarationAST",
                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_isrDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_isrDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_isrDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_isrDeclarationAST GALGAS_isrDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationAST result ;
  const GALGAS_isrDeclarationAST * p = (const GALGAS_isrDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_isrDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedISRDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedISRDeclaration::cPtr_decoratedISRDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mDriverName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedISRDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mISRName.printNonNullClassInstanceProperties ("mISRName") ;
    mProperty_mMode.printNonNullClassInstanceProperties ("mMode") ;
    mProperty_mDriverName.printNonNullClassInstanceProperties ("mDriverName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedISRDeclaration::objectCompare (const GALGAS_decoratedISRDeclaration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration::GALGAS_decoratedISRDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_decoratedISRDeclaration GALGAS_decoratedISRDeclaration::
init_21__21__21_ (const GALGAS_lstring & in_mISRName,
                  const GALGAS_mode & in_mMode,
                  const GALGAS_lstring & in_mDriverName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_decoratedISRDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedISRDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedISRDeclaration_init_21__21__21_ (in_mISRName, in_mMode, in_mDriverName, inCompiler) ;
  const GALGAS_decoratedISRDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedISRDeclaration::
decoratedISRDeclaration_init_21__21__21_ (const GALGAS_lstring & in_mISRName,
                                          const GALGAS_mode & in_mMode,
                                          const GALGAS_lstring & in_mDriverName,
                                          Compiler * /* inCompiler */) {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration::GALGAS_decoratedISRDeclaration (const cPtr_decoratedISRDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedISRDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration GALGAS_decoratedISRDeclaration::class_func_new (const GALGAS_lstring & in_mISRName,
                                                                               const GALGAS_mode & in_mMode,
                                                                               const GALGAS_lstring & in_mDriverName
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_decoratedISRDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedISRDeclaration (in_mISRName, in_mMode, in_mDriverName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedISRDeclaration::readProperty_mISRName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mISRName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedISRDeclaration::setProperty_mISRName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mISRName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_decoratedISRDeclaration::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_mode () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedISRDeclaration::setProperty_mMode (const GALGAS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedISRDeclaration::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedISRDeclaration::setProperty_mDriverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedISRDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedISRDeclaration::cPtr_decoratedISRDeclaration (const GALGAS_lstring & in_mISRName,
                                                            const GALGAS_mode & in_mMode,
                                                            const GALGAS_lstring & in_mDriverName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mDriverName () {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedISRDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclaration ;
}

void cPtr_decoratedISRDeclaration::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedISRDeclaration:") ;
  mProperty_mISRName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedISRDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedISRDeclaration (mProperty_mISRName, mProperty_mMode, mProperty_mDriverName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @decoratedISRDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration ("decoratedISRDeclaration",
                                                                               & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedISRDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedISRDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedISRDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration GALGAS_decoratedISRDeclaration::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @guardDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_guardDeclarationAST::cPtr_guardDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mReceiverLLVMBaseTypeName (),
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guardDeclarationAST::objectCompare (const GALGAS_guardDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST::GALGAS_guardDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_guardDeclarationAST GALGAS_guardDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mReceiverTypeName,
                                          const GALGAS_string & in_mReceiverLLVMBaseTypeName,
                                          const GALGAS_lstring & in_mGuardName,
                                          const GALGAS_bool & in_mIsPublic,
                                          const GALGAS_lstringlist & in_mGuardAttributeList,
                                          const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                          const GALGAS_guardKind & in_mGuardKind,
                                          const GALGAS_instructionListAST & in_mGuardInstructionList,
                                          const GALGAS_location & in_mEndOfGuardDeclaration,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_guardDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_guardDeclarationAST (inCompiler COMMA_THERE)) ;
  object->guardDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mReceiverTypeName, in_mReceiverLLVMBaseTypeName, in_mGuardName, in_mIsPublic, in_mGuardAttributeList, in_mGuardFormalArgumentList, in_mGuardKind, in_mGuardInstructionList, in_mEndOfGuardDeclaration, inCompiler) ;
  const GALGAS_guardDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_guardDeclarationAST::
guardDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mReceiverTypeName,
                                                              const GALGAS_string & in_mReceiverLLVMBaseTypeName,
                                                              const GALGAS_lstring & in_mGuardName,
                                                              const GALGAS_bool & in_mIsPublic,
                                                              const GALGAS_lstringlist & in_mGuardAttributeList,
                                                              const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                              const GALGAS_guardKind & in_mGuardKind,
                                                              const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                              const GALGAS_location & in_mEndOfGuardDeclaration,
                                                              Compiler * /* inCompiler */) {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mReceiverLLVMBaseTypeName = in_mReceiverLLVMBaseTypeName ;
  mProperty_mGuardName = in_mGuardName ;
  mProperty_mIsPublic = in_mIsPublic ;
  mProperty_mGuardAttributeList = in_mGuardAttributeList ;
  mProperty_mGuardFormalArgumentList = in_mGuardFormalArgumentList ;
  mProperty_mGuardKind = in_mGuardKind ;
  mProperty_mGuardInstructionList = in_mGuardInstructionList ;
  mProperty_mEndOfGuardDeclaration = in_mEndOfGuardDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST::GALGAS_guardDeclarationAST (const cPtr_guardDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST GALGAS_guardDeclarationAST::class_func_new (const GALGAS_lstring & in_mReceiverTypeName,
                                                                       const GALGAS_string & in_mReceiverLLVMBaseTypeName,
                                                                       const GALGAS_lstring & in_mGuardName,
                                                                       const GALGAS_bool & in_mIsPublic,
                                                                       const GALGAS_lstringlist & in_mGuardAttributeList,
                                                                       const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                       const GALGAS_guardKind & in_mGuardKind,
                                                                       const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                                       const GALGAS_location & in_mEndOfGuardDeclaration
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_guardDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_guardDeclarationAST (in_mReceiverTypeName, in_mReceiverLLVMBaseTypeName, in_mGuardName, in_mIsPublic, in_mGuardAttributeList, in_mGuardFormalArgumentList, in_mGuardKind, in_mGuardInstructionList, in_mEndOfGuardDeclaration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guardDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setProperty_mReceiverTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guardDeclarationAST::readProperty_mReceiverLLVMBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mReceiverLLVMBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setProperty_mReceiverLLVMBaseTypeName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mReceiverLLVMBaseTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guardDeclarationAST::readProperty_mGuardName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setProperty_mGuardName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardDeclarationAST::readProperty_mIsPublic (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mIsPublic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setProperty_mIsPublic (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mIsPublic = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_guardDeclarationAST::readProperty_mGuardAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setProperty_mGuardAttributeList (const GALGAS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_guardDeclarationAST::readProperty_mGuardFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListAST () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setProperty_mGuardFormalArgumentList (const GALGAS_routineFormalArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind GALGAS_guardDeclarationAST::readProperty_mGuardKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_guardKind () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setProperty_mGuardKind (const GALGAS_guardKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_guardDeclarationAST::readProperty_mGuardInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setProperty_mGuardInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_guardDeclarationAST::readProperty_mEndOfGuardDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mEndOfGuardDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardDeclarationAST::setProperty_mEndOfGuardDeclaration (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mEndOfGuardDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @guardDeclarationAST class
//--------------------------------------------------------------------------------------------------

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
mProperty_mReceiverTypeName (),
mProperty_mReceiverLLVMBaseTypeName (),
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mReceiverLLVMBaseTypeName = in_mReceiverLLVMBaseTypeName ;
  mProperty_mGuardName = in_mGuardName ;
  mProperty_mIsPublic = in_mIsPublic ;
  mProperty_mGuardAttributeList = in_mGuardAttributeList ;
  mProperty_mGuardFormalArgumentList = in_mGuardFormalArgumentList ;
  mProperty_mGuardKind = in_mGuardKind ;
  mProperty_mGuardInstructionList = in_mGuardInstructionList ;
  mProperty_mEndOfGuardDeclaration = in_mEndOfGuardDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_guardDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationAST ;
}

void cPtr_guardDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@guardDeclarationAST:") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverLLVMBaseTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsPublic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfGuardDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_guardDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardDeclarationAST (mProperty_mReceiverTypeName, mProperty_mReceiverLLVMBaseTypeName, mProperty_mGuardName, mProperty_mIsPublic, mProperty_mGuardAttributeList, mProperty_mGuardFormalArgumentList, mProperty_mGuardKind, mProperty_mGuardInstructionList, mProperty_mEndOfGuardDeclaration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @guardDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationAST ("guardDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST GALGAS_guardDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @decoratedGuardDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedGuardDeclaration::cPtr_decoratedGuardDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedGuardDeclaration::objectCompare (const GALGAS_decoratedGuardDeclaration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration::GALGAS_decoratedGuardDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration GALGAS_decoratedGuardDeclaration::
init_21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mReceiverTypeName,
                                      const GALGAS_lstring & in_mGuardName,
                                      const GALGAS_bool & in_mIsPublic,
                                      const GALGAS_lstringlist & in_mGuardAttributeList,
                                      const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                      const GALGAS_guardKind & in_mGuardKind,
                                      const GALGAS_instructionListAST & in_mGuardInstructionList,
                                      const GALGAS_location & in_mEndOfGuardDeclaration,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_decoratedGuardDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedGuardDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedGuardDeclaration_init_21__21__21__21__21__21__21__21_ (in_mReceiverTypeName, in_mGuardName, in_mIsPublic, in_mGuardAttributeList, in_mGuardFormalArgumentList, in_mGuardKind, in_mGuardInstructionList, in_mEndOfGuardDeclaration, inCompiler) ;
  const GALGAS_decoratedGuardDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedGuardDeclaration::
decoratedGuardDeclaration_init_21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mReceiverTypeName,
                                                                const GALGAS_lstring & in_mGuardName,
                                                                const GALGAS_bool & in_mIsPublic,
                                                                const GALGAS_lstringlist & in_mGuardAttributeList,
                                                                const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                const GALGAS_guardKind & in_mGuardKind,
                                                                const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                                const GALGAS_location & in_mEndOfGuardDeclaration,
                                                                Compiler * /* inCompiler */) {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mGuardName = in_mGuardName ;
  mProperty_mIsPublic = in_mIsPublic ;
  mProperty_mGuardAttributeList = in_mGuardAttributeList ;
  mProperty_mGuardFormalArgumentList = in_mGuardFormalArgumentList ;
  mProperty_mGuardKind = in_mGuardKind ;
  mProperty_mGuardInstructionList = in_mGuardInstructionList ;
  mProperty_mEndOfGuardDeclaration = in_mEndOfGuardDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration::GALGAS_decoratedGuardDeclaration (const cPtr_decoratedGuardDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedGuardDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration GALGAS_decoratedGuardDeclaration::class_func_new (const GALGAS_lstring & in_mReceiverTypeName,
                                                                                   const GALGAS_lstring & in_mGuardName,
                                                                                   const GALGAS_bool & in_mIsPublic,
                                                                                   const GALGAS_lstringlist & in_mGuardAttributeList,
                                                                                   const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                                   const GALGAS_guardKind & in_mGuardKind,
                                                                                   const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                                                   const GALGAS_location & in_mEndOfGuardDeclaration
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_decoratedGuardDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedGuardDeclaration (in_mReceiverTypeName, in_mGuardName, in_mIsPublic, in_mGuardAttributeList, in_mGuardFormalArgumentList, in_mGuardKind, in_mGuardInstructionList, in_mEndOfGuardDeclaration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedGuardDeclaration::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setProperty_mReceiverTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedGuardDeclaration::readProperty_mGuardName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setProperty_mGuardName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_decoratedGuardDeclaration::readProperty_mIsPublic (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mIsPublic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setProperty_mIsPublic (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mIsPublic = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_decoratedGuardDeclaration::readProperty_mGuardAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setProperty_mGuardAttributeList (const GALGAS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_decoratedGuardDeclaration::readProperty_mGuardFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListAST () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setProperty_mGuardFormalArgumentList (const GALGAS_routineFormalArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind GALGAS_decoratedGuardDeclaration::readProperty_mGuardKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_guardKind () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setProperty_mGuardKind (const GALGAS_guardKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_decoratedGuardDeclaration::readProperty_mGuardInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setProperty_mGuardInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_decoratedGuardDeclaration::readProperty_mEndOfGuardDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mEndOfGuardDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedGuardDeclaration::setProperty_mEndOfGuardDeclaration (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mEndOfGuardDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedGuardDeclaration class
//--------------------------------------------------------------------------------------------------

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
mProperty_mReceiverTypeName (),
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mGuardName = in_mGuardName ;
  mProperty_mIsPublic = in_mIsPublic ;
  mProperty_mGuardAttributeList = in_mGuardAttributeList ;
  mProperty_mGuardFormalArgumentList = in_mGuardFormalArgumentList ;
  mProperty_mGuardKind = in_mGuardKind ;
  mProperty_mGuardInstructionList = in_mGuardInstructionList ;
  mProperty_mEndOfGuardDeclaration = in_mEndOfGuardDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedGuardDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;
}

void cPtr_decoratedGuardDeclaration::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedGuardDeclaration:") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsPublic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfGuardDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedGuardDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedGuardDeclaration (mProperty_mReceiverTypeName, mProperty_mGuardName, mProperty_mIsPublic, mProperty_mGuardAttributeList, mProperty_mGuardFormalArgumentList, mProperty_mGuardKind, mProperty_mGuardInstructionList, mProperty_mEndOfGuardDeclaration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @decoratedGuardDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration ("decoratedGuardDeclaration",
                                                                                 & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedGuardDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedGuardDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedGuardDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration GALGAS_decoratedGuardDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @callInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_callInstructionAST::cPtr_callInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mArguments (),
mProperty_mEndOfArguments () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_callInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mArguments.printNonNullClassInstanceProperties ("mArguments") ;
    mProperty_mEndOfArguments.printNonNullClassInstanceProperties ("mEndOfArguments") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_callInstructionAST::objectCompare (const GALGAS_callInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST::GALGAS_callInstructionAST (void) :
GALGAS_instructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST::GALGAS_callInstructionAST (const cPtr_callInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_callInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_callInstructionAST::readProperty_mArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_effectiveArgumentListAST () ;
  }else{
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    return p->mProperty_mArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_callInstructionAST::setProperty_mArguments (const GALGAS_effectiveArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    p->mProperty_mArguments = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_callInstructionAST::readProperty_mEndOfArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    return p->mProperty_mEndOfArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_callInstructionAST::setProperty_mEndOfArguments (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    p->mProperty_mEndOfArguments = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @callInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_callInstructionAST::cPtr_callInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                  const GALGAS_location & in_mEndOfArguments
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mArguments (),
mProperty_mEndOfArguments () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
}


//--------------------------------------------------------------------------------------------------
//
//     @callInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_callInstructionAST ("callInstructionAST",
                                                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_callInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_callInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_callInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_callInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST GALGAS_callInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @guardUserRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_guardUserRoutineIR::cPtr_guardUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mMangledImplementationGuardName (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_guardUserRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mMangledImplementationGuardName.printNonNullClassInstanceProperties ("mMangledImplementationGuardName") ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mGuardKindGenerationIR.printNonNullClassInstanceProperties ("mGuardKindGenerationIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guardUserRoutineIR::objectCompare (const GALGAS_guardUserRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR::GALGAS_guardUserRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_guardUserRoutineIR GALGAS_guardUserRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                         const GALGAS_bool & in_isRequired,
                                                         const GALGAS_bool & in_warnsIfUnused,
                                                         const GALGAS_string & in_mMangledImplementationGuardName,
                                                         const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                         const GALGAS_omnibusType & in_mReceiverType,
                                                         const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cPtr_guardUserRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_guardUserRoutineIR (inCompiler COMMA_THERE)) ;
  object->guardUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mMangledImplementationGuardName, in_mFormalArgumentListForGeneration, in_mReceiverType, in_mGuardKindGenerationIR, inCompiler) ;
  const GALGAS_guardUserRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::
guardUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                            const GALGAS_bool & in_isRequired,
                                                                            const GALGAS_bool & in_warnsIfUnused,
                                                                            const GALGAS_string & in_mMangledImplementationGuardName,
                                                                            const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                            const GALGAS_omnibusType & in_mReceiverType,
                                                                            const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mMangledImplementationGuardName = in_mMangledImplementationGuardName ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mGuardKindGenerationIR = in_mGuardKindGenerationIR ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR::GALGAS_guardUserRoutineIR (const cPtr_guardUserRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardUserRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR GALGAS_guardUserRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                     const GALGAS_bool & in_isRequired,
                                                                     const GALGAS_bool & in_warnsIfUnused,
                                                                     const GALGAS_string & in_mMangledImplementationGuardName,
                                                                     const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                     const GALGAS_omnibusType & in_mReceiverType,
                                                                     const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_guardUserRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_guardUserRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mMangledImplementationGuardName, in_mFormalArgumentListForGeneration, in_mReceiverType, in_mGuardKindGenerationIR COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guardUserRoutineIR::readProperty_mMangledImplementationGuardName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mMangledImplementationGuardName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardUserRoutineIR::setProperty_mMangledImplementationGuardName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mMangledImplementationGuardName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_guardUserRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListIR () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardUserRoutineIR::setProperty_mFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_guardUserRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardUserRoutineIR::setProperty_mReceiverType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKindGenerationIR GALGAS_guardUserRoutineIR::readProperty_mGuardKindGenerationIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_guardKindGenerationIR () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mGuardKindGenerationIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardUserRoutineIR::setProperty_mGuardKindGenerationIR (const GALGAS_guardKindGenerationIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mGuardKindGenerationIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @guardUserRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_guardUserRoutineIR::cPtr_guardUserRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                  const GALGAS_bool & in_isRequired,
                                                  const GALGAS_bool & in_warnsIfUnused,
                                                  const GALGAS_string & in_mMangledImplementationGuardName,
                                                  const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                  const GALGAS_omnibusType & in_mReceiverType,
                                                  const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mMangledImplementationGuardName (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mMangledImplementationGuardName = in_mMangledImplementationGuardName ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mGuardKindGenerationIR = in_mGuardKindGenerationIR ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_guardUserRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR ;
}

void cPtr_guardUserRoutineIR::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@guardUserRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMangledImplementationGuardName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardKindGenerationIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_guardUserRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardUserRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mMangledImplementationGuardName, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @guardUserRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR ("guardUserRoutineIR",
                                                                          & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardUserRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardUserRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardUserRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR GALGAS_guardUserRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @guardImplementationRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_guardImplementationRoutineIR::cPtr_guardImplementationRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guardImplementationRoutineIR::objectCompare (const GALGAS_guardImplementationRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR::GALGAS_guardImplementationRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR GALGAS_guardImplementationRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                             const GALGAS_bool & in_isRequired,
                                                             const GALGAS_bool & in_warnsIfUnused,
                                                             const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                             const GALGAS_omnibusType & in_mReceiverType,
                                                             const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                             const GALGAS_allocaList & in_mAllocaList,
                                                             const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_guardImplementationRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_guardImplementationRoutineIR (inCompiler COMMA_THERE)) ;
  object->guardImplementationRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFormalArgumentListForGeneration, in_mReceiverType, in_mGuardKindGenerationIR, in_mAllocaList, in_mInstructionGenerationList, inCompiler) ;
  const GALGAS_guardImplementationRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_guardImplementationRoutineIR::
guardImplementationRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                          const GALGAS_bool & in_isRequired,
                                                                                          const GALGAS_bool & in_warnsIfUnused,
                                                                                          const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                          const GALGAS_omnibusType & in_mReceiverType,
                                                                                          const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                                          const GALGAS_allocaList & in_mAllocaList,
                                                                                          const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                                                          Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mGuardKindGenerationIR = in_mGuardKindGenerationIR ;
  mProperty_mAllocaList = in_mAllocaList ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR::GALGAS_guardImplementationRoutineIR (const cPtr_guardImplementationRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardImplementationRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR GALGAS_guardImplementationRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                         const GALGAS_bool & in_isRequired,
                                                                                         const GALGAS_bool & in_warnsIfUnused,
                                                                                         const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                         const GALGAS_omnibusType & in_mReceiverType,
                                                                                         const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                                         const GALGAS_allocaList & in_mAllocaList,
                                                                                         const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_guardImplementationRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_guardImplementationRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFormalArgumentListForGeneration, in_mReceiverType, in_mGuardKindGenerationIR, in_mAllocaList, in_mInstructionGenerationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_guardImplementationRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardImplementationRoutineIR::setProperty_mFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_guardImplementationRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardImplementationRoutineIR::setProperty_mReceiverType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKindGenerationIR GALGAS_guardImplementationRoutineIR::readProperty_mGuardKindGenerationIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_guardKindGenerationIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mGuardKindGenerationIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardImplementationRoutineIR::setProperty_mGuardKindGenerationIR (const GALGAS_guardKindGenerationIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mGuardKindGenerationIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_guardImplementationRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_allocaList () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardImplementationRoutineIR::setProperty_mAllocaList (const GALGAS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_guardImplementationRoutineIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardImplementationRoutineIR::setProperty_mInstructionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @guardImplementationRoutineIR class
//--------------------------------------------------------------------------------------------------

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
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mGuardKindGenerationIR = in_mGuardKindGenerationIR ;
  mProperty_mAllocaList = in_mAllocaList ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_guardImplementationRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;
}

void cPtr_guardImplementationRoutineIR::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@guardImplementationRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardKindGenerationIR.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_guardImplementationRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardImplementationRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR, mProperty_mAllocaList, mProperty_mInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @guardImplementationRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR ("guardImplementationRoutineIR",
                                                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardImplementationRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardImplementationRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardImplementationRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR GALGAS_guardImplementationRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@effectiveArgumentListAST routineSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring extensionGetter_routineSignature (const GALGAS_effectiveArgumentListAST & inObject,
                                                 const GALGAS_location & constinArgument_inRoutineNameLocation,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_key_8566 = GALGAS_string ("(") ;
  const GALGAS_effectiveArgumentListAST temp_0 = inObject ;
  cEnumerator_effectiveArgumentListAST enumerator_8595 (temp_0, EnumerationOrder::up) ;
  while (enumerator_8595.hasCurrentObject ()) {
    var_key_8566.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_8595.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)).add_operation (enumerator_8595.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)) ;
    enumerator_8595.gotoNextObject () ;
  }
  var_key_8566.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 219)) ;
  result_result = GALGAS_lstring::init_21__21_ (var_key_8566, constinArgument_inRoutineNameLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList_2D_element::~ GALGAS_decoratedRegularRoutineList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList_2D_element GALGAS_decoratedRegularRoutineList_2D_element::init_21_receiverTypeName_21_mode_21_isRequired_21_routineKind_21_warnIfUnused_21_exportedRoutine_21_routineAttributes_21_routineMangledLLVMName_21_formalArgumentList_21_warningOnUnusedArgs_21__21__21_returnTypeName (const GALGAS_lstring & in_receiverTypeName,
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
                                                                                                                                                                                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                                                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedRegularRoutineList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_receiverTypeName = in_receiverTypeName ;
  result.mProperty_mode = in_mode ;
  result.mProperty_isRequired = in_isRequired ;
  result.mProperty_routineKind = in_routineKind ;
  result.mProperty_warnIfUnused = in_warnIfUnused ;
  result.mProperty_exportedRoutine = in_exportedRoutine ;
  result.mProperty_routineAttributes = in_routineAttributes ;
  result.mProperty_routineMangledLLVMName = in_routineMangledLLVMName ;
  result.mProperty_formalArgumentList = in_formalArgumentList ;
  result.mProperty_warningOnUnusedArgs = in_warningOnUnusedArgs ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineDeclaration = in_mEndOfRoutineDeclaration ;
  result.mProperty_returnTypeName = in_returnTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList_2D_element GALGAS_decoratedRegularRoutineList_2D_element::class_func_new (const GALGAS_lstring & in_receiverTypeName,
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
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedRegularRoutineList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_receiverTypeName = in_receiverTypeName ;
  result.mProperty_mode = in_mode ;
  result.mProperty_isRequired = in_isRequired ;
  result.mProperty_routineKind = in_routineKind ;
  result.mProperty_warnIfUnused = in_warnIfUnused ;
  result.mProperty_exportedRoutine = in_exportedRoutine ;
  result.mProperty_routineAttributes = in_routineAttributes ;
  result.mProperty_routineMangledLLVMName = in_routineMangledLLVMName ;
  result.mProperty_formalArgumentList = in_formalArgumentList ;
  result.mProperty_warningOnUnusedArgs = in_warningOnUnusedArgs ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineDeclaration = in_mEndOfRoutineDeclaration ;
  result.mProperty_returnTypeName = in_returnTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_decoratedRegularRoutineList_2D_element::isValid (void) const {
  return mProperty_receiverTypeName.isValid () && mProperty_mode.isValid () && mProperty_isRequired.isValid () && mProperty_routineKind.isValid () && mProperty_warnIfUnused.isValid () && mProperty_exportedRoutine.isValid () && mProperty_routineAttributes.isValid () && mProperty_routineMangledLLVMName.isValid () && mProperty_formalArgumentList.isValid () && mProperty_warningOnUnusedArgs.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineDeclaration.isValid () && mProperty_returnTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @decoratedRegularRoutineList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_receiverTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isRequired.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_routineKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_warnIfUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exportedRoutine.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_routineAttributes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_routineMangledLLVMName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_formalArgumentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_warningOnUnusedArgs.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_returnTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @decoratedRegularRoutineList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2D_element ("decoratedRegularRoutineList-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedRegularRoutineList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedRegularRoutineList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRegularRoutineList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList_2D_element GALGAS_decoratedRegularRoutineList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @regularRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_regularRoutineIR::cPtr_regularRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mExportedFunction (),
mProperty_mKind (),
mProperty_mReturnType (),
mProperty_mAppendFileAndLineArgumentForPanicLocation () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_regularRoutineIR::objectCompare (const GALGAS_regularRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR::GALGAS_regularRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_regularRoutineIR GALGAS_regularRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                         const GALGAS_bool & in_isRequired,
                                                                         const GALGAS_bool & in_warnsIfUnused,
                                                                         const GALGAS_omnibusType & in_mReceiverType,
                                                                         const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                         const GALGAS_allocaList & in_mAllocaList,
                                                                         const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                                         const GALGAS_bool & in_mExportedFunction,
                                                                         const GALGAS_routineKind & in_mKind,
                                                                         const GALGAS_omnibusType & in_mReturnType,
                                                                         const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_regularRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_regularRoutineIR (inCompiler COMMA_THERE)) ;
  object->regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mReceiverType, in_mFormalArgumentListForGeneration, in_mAllocaList, in_mInstructionGenerationList, in_mExportedFunction, in_mKind, in_mReturnType, in_mAppendFileAndLineArgumentForPanicLocation, inCompiler) ;
  const GALGAS_regularRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::
regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                          const GALGAS_bool & in_isRequired,
                                                                                          const GALGAS_bool & in_warnsIfUnused,
                                                                                          const GALGAS_omnibusType & in_mReceiverType,
                                                                                          const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                          const GALGAS_allocaList & in_mAllocaList,
                                                                                          const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                                                          const GALGAS_bool & in_mExportedFunction,
                                                                                          const GALGAS_routineKind & in_mKind,
                                                                                          const GALGAS_omnibusType & in_mReturnType,
                                                                                          const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                                                                          Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mAllocaList = in_mAllocaList ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
  mProperty_mExportedFunction = in_mExportedFunction ;
  mProperty_mKind = in_mKind ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation = in_mAppendFileAndLineArgumentForPanicLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR::GALGAS_regularRoutineIR (const cPtr_regularRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_regularRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR GALGAS_regularRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
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
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_regularRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_regularRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mReceiverType, in_mFormalArgumentListForGeneration, in_mAllocaList, in_mInstructionGenerationList, in_mExportedFunction, in_mKind, in_mReturnType, in_mAppendFileAndLineArgumentForPanicLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_regularRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setProperty_mReceiverType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_regularRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListIR () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setProperty_mFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_regularRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_allocaList () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setProperty_mAllocaList (const GALGAS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_regularRoutineIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setProperty_mInstructionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_regularRoutineIR::readProperty_mExportedFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mExportedFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setProperty_mExportedFunction (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mExportedFunction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_regularRoutineIR::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineKind () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setProperty_mKind (const GALGAS_routineKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_regularRoutineIR::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setProperty_mReturnType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_regularRoutineIR::readProperty_mAppendFileAndLineArgumentForPanicLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularRoutineIR::setProperty_mAppendFileAndLineArgumentForPanicLocation (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mAppendFileAndLineArgumentForPanicLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @regularRoutineIR class
//--------------------------------------------------------------------------------------------------

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
mProperty_mReceiverType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mExportedFunction (),
mProperty_mKind (),
mProperty_mReturnType (),
mProperty_mAppendFileAndLineArgumentForPanicLocation () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mAllocaList = in_mAllocaList ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
  mProperty_mExportedFunction = in_mExportedFunction ;
  mProperty_mKind = in_mKind ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation = in_mAppendFileAndLineArgumentForPanicLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_regularRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

void cPtr_regularRoutineIR::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@regularRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExportedFunction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_regularRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_regularRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mReceiverType, mProperty_mFormalArgumentListForGeneration, mProperty_mAllocaList, mProperty_mInstructionGenerationList, mProperty_mExportedFunction, mProperty_mKind, mProperty_mReturnType, mProperty_mAppendFileAndLineArgumentForPanicLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @regularRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularRoutineIR ("regularRoutineIR",
                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_regularRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_regularRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR GALGAS_regularRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @panicAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_panicAST::cPtr_panicAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsSetup (),
mProperty_mPanicInstructionList (),
mProperty_mEndOfPanicInstructions (),
mProperty_mPriority () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsSetup.printNonNullClassInstanceProperties ("mIsSetup") ;
    mProperty_mPanicInstructionList.printNonNullClassInstanceProperties ("mPanicInstructionList") ;
    mProperty_mEndOfPanicInstructions.printNonNullClassInstanceProperties ("mEndOfPanicInstructions") ;
    mProperty_mPriority.printNonNullClassInstanceProperties ("mPriority") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_panicAST::objectCompare (const GALGAS_panicAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicAST::GALGAS_panicAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_panicAST GALGAS_panicAST::
init_21__21__21__21_ (const GALGAS_bool & in_mIsSetup,
                      const GALGAS_instructionListAST & in_mPanicInstructionList,
                      const GALGAS_location & in_mEndOfPanicInstructions,
                      const GALGAS_lbigint & in_mPriority,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_panicAST * object = nullptr ;
  macroMyNew (object, cPtr_panicAST (inCompiler COMMA_THERE)) ;
  object->panicAST_init_21__21__21__21_ (in_mIsSetup, in_mPanicInstructionList, in_mEndOfPanicInstructions, in_mPriority, inCompiler) ;
  const GALGAS_panicAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::
panicAST_init_21__21__21__21_ (const GALGAS_bool & in_mIsSetup,
                               const GALGAS_instructionListAST & in_mPanicInstructionList,
                               const GALGAS_location & in_mEndOfPanicInstructions,
                               const GALGAS_lbigint & in_mPriority,
                               Compiler * /* inCompiler */) {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPanicInstructionList = in_mPanicInstructionList ;
  mProperty_mEndOfPanicInstructions = in_mEndOfPanicInstructions ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicAST::GALGAS_panicAST (const cPtr_panicAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_panicAST GALGAS_panicAST::class_func_new (const GALGAS_bool & in_mIsSetup,
                                                 const GALGAS_instructionListAST & in_mPanicInstructionList,
                                                 const GALGAS_location & in_mEndOfPanicInstructions,
                                                 const GALGAS_lbigint & in_mPriority
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_panicAST result ;
  macroMyNew (result.mObjectPtr, cPtr_panicAST (in_mIsSetup, in_mPanicInstructionList, in_mEndOfPanicInstructions, in_mPriority COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_panicAST::readProperty_mIsSetup (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mIsSetup ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicAST::setProperty_mIsSetup (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mIsSetup = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_panicAST::readProperty_mPanicInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mPanicInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicAST::setProperty_mPanicInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mPanicInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_panicAST::readProperty_mEndOfPanicInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mEndOfPanicInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicAST::setProperty_mEndOfPanicInstructions (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mEndOfPanicInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_panicAST::readProperty_mPriority (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mPriority ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicAST::setProperty_mPriority (const GALGAS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mPriority = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicAST class
//--------------------------------------------------------------------------------------------------

cPtr_panicAST::cPtr_panicAST (const GALGAS_bool & in_mIsSetup,
                              const GALGAS_instructionListAST & in_mPanicInstructionList,
                              const GALGAS_location & in_mEndOfPanicInstructions,
                              const GALGAS_lbigint & in_mPriority
                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mIsSetup (),
mProperty_mPanicInstructionList (),
mProperty_mEndOfPanicInstructions (),
mProperty_mPriority () {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPanicInstructionList = in_mPanicInstructionList ;
  mProperty_mEndOfPanicInstructions = in_mEndOfPanicInstructions ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_panicAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

void cPtr_panicAST::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@panicAST:") ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfPanicInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_panicAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicAST (mProperty_mIsSetup, mProperty_mPanicInstructionList, mProperty_mEndOfPanicInstructions, mProperty_mPriority COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @panicAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicAST ("panicAST",
                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicAST GALGAS_panicAST::extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
//
//Extension method '@panicAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_noteTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_panicAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mPanicInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 53)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (cPtr_panicAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_panicAST) ;
    inObject->method_noteTypesInPrecedenceGraph  (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @decoratedPanicRoutine reference class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedPanicRoutine::cPtr_decoratedPanicRoutine (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mIsSetup (),
mProperty_mPriority () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedPanicRoutine::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mIsSetup.printNonNullClassInstanceProperties ("mIsSetup") ;
    mProperty_mPriority.printNonNullClassInstanceProperties ("mPriority") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedPanicRoutine::objectCompare (const GALGAS_decoratedPanicRoutine & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine::GALGAS_decoratedPanicRoutine (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::
init_21__21_ (const GALGAS_bool & in_mIsSetup,
              const GALGAS_lbigint & in_mPriority,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedPanicRoutine * object = nullptr ;
  macroMyNew (object, cPtr_decoratedPanicRoutine (inCompiler COMMA_THERE)) ;
  object->decoratedPanicRoutine_init_21__21_ (in_mIsSetup, in_mPriority, inCompiler) ;
  const GALGAS_decoratedPanicRoutine result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedPanicRoutine::
decoratedPanicRoutine_init_21__21_ (const GALGAS_bool & in_mIsSetup,
                                    const GALGAS_lbigint & in_mPriority,
                                    Compiler * /* inCompiler */) {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine::GALGAS_decoratedPanicRoutine (const cPtr_decoratedPanicRoutine * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedPanicRoutine) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::class_func_new (const GALGAS_bool & in_mIsSetup,
                                                                           const GALGAS_lbigint & in_mPriority
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_decoratedPanicRoutine result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedPanicRoutine (in_mIsSetup, in_mPriority COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_decoratedPanicRoutine::readProperty_mIsSetup (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    return p->mProperty_mIsSetup ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedPanicRoutine::setProperty_mIsSetup (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    p->mProperty_mIsSetup = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_decoratedPanicRoutine::readProperty_mPriority (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    return p->mProperty_mPriority ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedPanicRoutine::setProperty_mPriority (const GALGAS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    p->mProperty_mPriority = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedPanicRoutine class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedPanicRoutine::cPtr_decoratedPanicRoutine (const GALGAS_bool & in_mIsSetup,
                                                        const GALGAS_lbigint & in_mPriority
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mIsSetup (),
mProperty_mPriority () {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedPanicRoutine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

void cPtr_decoratedPanicRoutine::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedPanicRoutine:") ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedPanicRoutine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedPanicRoutine (mProperty_mIsSetup, mProperty_mPriority COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @decoratedPanicRoutine generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine ("decoratedPanicRoutine",
                                                                             & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedPanicRoutine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedPanicRoutine::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedPanicRoutine (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @fileSpecificPanicRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_fileSpecificPanicRoutineIR::cPtr_fileSpecificPanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_inFilePath () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_fileSpecificPanicRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_inFilePath.printNonNullClassInstanceProperties ("inFilePath") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_fileSpecificPanicRoutineIR::objectCompare (const GALGAS_fileSpecificPanicRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR::GALGAS_fileSpecificPanicRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR GALGAS_fileSpecificPanicRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                             const GALGAS_bool & in_isRequired,
                                             const GALGAS_bool & in_warnsIfUnused,
                                             const GALGAS_string & in_inFilePath,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_fileSpecificPanicRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_fileSpecificPanicRoutineIR (inCompiler COMMA_THERE)) ;
  object->fileSpecificPanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_inFilePath, inCompiler) ;
  const GALGAS_fileSpecificPanicRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::
fileSpecificPanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                        const GALGAS_bool & in_isRequired,
                                                                        const GALGAS_bool & in_warnsIfUnused,
                                                                        const GALGAS_string & in_inFilePath,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_inFilePath = in_inFilePath ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR::GALGAS_fileSpecificPanicRoutineIR (const cPtr_fileSpecificPanicRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fileSpecificPanicRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR GALGAS_fileSpecificPanicRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                     const GALGAS_bool & in_isRequired,
                                                                                     const GALGAS_bool & in_warnsIfUnused,
                                                                                     const GALGAS_string & in_inFilePath
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_fileSpecificPanicRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_fileSpecificPanicRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_inFilePath COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_fileSpecificPanicRoutineIR::readProperty_inFilePath (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_fileSpecificPanicRoutineIR * p = (cPtr_fileSpecificPanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fileSpecificPanicRoutineIR) ;
    return p->mProperty_inFilePath ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fileSpecificPanicRoutineIR::setProperty_inFilePath (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fileSpecificPanicRoutineIR * p = (cPtr_fileSpecificPanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fileSpecificPanicRoutineIR) ;
    p->mProperty_inFilePath = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @fileSpecificPanicRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_fileSpecificPanicRoutineIR::cPtr_fileSpecificPanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                  const GALGAS_bool & in_isRequired,
                                                                  const GALGAS_bool & in_warnsIfUnused,
                                                                  const GALGAS_string & in_inFilePath
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_inFilePath () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_inFilePath = in_inFilePath ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_fileSpecificPanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;
}

void cPtr_fileSpecificPanicRoutineIR::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@fileSpecificPanicRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_inFilePath.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_fileSpecificPanicRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_fileSpecificPanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_inFilePath COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @fileSpecificPanicRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ("fileSpecificPanicRoutineIR",
                                                                                  & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fileSpecificPanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fileSpecificPanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileSpecificPanicRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR GALGAS_fileSpecificPanicRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @universalModePanicRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_universalModePanicRoutineIR::cPtr_universalModePanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_universalModePanicRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_universalModePanicRoutineIR::objectCompare (const GALGAS_universalModePanicRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR::GALGAS_universalModePanicRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR GALGAS_universalModePanicRoutineIR::
init_21__21_isRequired_21_warnsIfUnused (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_universalModePanicRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_universalModePanicRoutineIR (inCompiler COMMA_THERE)) ;
  object->universalModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GALGAS_universalModePanicRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::
universalModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused (const GALGAS_lstring & in_mRoutineMangledName,
                                                                     const GALGAS_bool & in_isRequired,
                                                                     const GALGAS_bool & in_warnsIfUnused,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR::GALGAS_universalModePanicRoutineIR (const cPtr_universalModePanicRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_universalModePanicRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR GALGAS_universalModePanicRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                       const GALGAS_bool & in_isRequired,
                                                                                       const GALGAS_bool & in_warnsIfUnused
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_universalModePanicRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_universalModePanicRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @universalModePanicRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_universalModePanicRoutineIR::cPtr_universalModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                    const GALGAS_bool & in_isRequired,
                                                                    const GALGAS_bool & in_warnsIfUnused
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_universalModePanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;
}

void cPtr_universalModePanicRoutineIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@universalModePanicRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_universalModePanicRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_universalModePanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @universalModePanicRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR ("universalModePanicRoutineIR",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_universalModePanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_universalModePanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalModePanicRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR GALGAS_universalModePanicRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @sectionModePanicRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_sectionModePanicRoutineIR::cPtr_sectionModePanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mPanicSetupListIR (),
mProperty_mPanicLoopListIR () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sectionModePanicRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mPanicSetupListIR.printNonNullClassInstanceProperties ("mPanicSetupListIR") ;
    mProperty_mPanicLoopListIR.printNonNullClassInstanceProperties ("mPanicLoopListIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sectionModePanicRoutineIR::objectCompare (const GALGAS_sectionModePanicRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR::GALGAS_sectionModePanicRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR GALGAS_sectionModePanicRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                 const GALGAS_bool & in_isRequired,
                                                 const GALGAS_bool & in_warnsIfUnused,
                                                 const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                                 const GALGAS_panicSortedListIR & in_mPanicLoopListIR,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_sectionModePanicRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_sectionModePanicRoutineIR (inCompiler COMMA_THERE)) ;
  object->sectionModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mPanicSetupListIR, in_mPanicLoopListIR, inCompiler) ;
  const GALGAS_sectionModePanicRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::
sectionModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                           const GALGAS_bool & in_isRequired,
                                                                           const GALGAS_bool & in_warnsIfUnused,
                                                                           const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                                                           const GALGAS_panicSortedListIR & in_mPanicLoopListIR,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mPanicSetupListIR = in_mPanicSetupListIR ;
  mProperty_mPanicLoopListIR = in_mPanicLoopListIR ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR::GALGAS_sectionModePanicRoutineIR (const cPtr_sectionModePanicRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sectionModePanicRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR GALGAS_sectionModePanicRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                   const GALGAS_bool & in_isRequired,
                                                                                   const GALGAS_bool & in_warnsIfUnused,
                                                                                   const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                                                                   const GALGAS_panicSortedListIR & in_mPanicLoopListIR
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_sectionModePanicRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_sectionModePanicRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mPanicSetupListIR, in_mPanicLoopListIR COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR GALGAS_sectionModePanicRoutineIR::readProperty_mPanicSetupListIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_panicSortedListIR () ;
  }else{
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    return p->mProperty_mPanicSetupListIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionModePanicRoutineIR::setProperty_mPanicSetupListIR (const GALGAS_panicSortedListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    p->mProperty_mPanicSetupListIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR GALGAS_sectionModePanicRoutineIR::readProperty_mPanicLoopListIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_panicSortedListIR () ;
  }else{
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    return p->mProperty_mPanicLoopListIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionModePanicRoutineIR::setProperty_mPanicLoopListIR (const GALGAS_panicSortedListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    p->mProperty_mPanicLoopListIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sectionModePanicRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_sectionModePanicRoutineIR::cPtr_sectionModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                const GALGAS_bool & in_isRequired,
                                                                const GALGAS_bool & in_warnsIfUnused,
                                                                const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                                                const GALGAS_panicSortedListIR & in_mPanicLoopListIR
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mPanicSetupListIR (),
mProperty_mPanicLoopListIR () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mPanicSetupListIR = in_mPanicSetupListIR ;
  mProperty_mPanicLoopListIR = in_mPanicLoopListIR ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sectionModePanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;
}

void cPtr_sectionModePanicRoutineIR::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@sectionModePanicRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicSetupListIR.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicLoopListIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sectionModePanicRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sectionModePanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mPanicSetupListIR, mProperty_mPanicLoopListIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sectionModePanicRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ("sectionModePanicRoutineIR",
                                                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sectionModePanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sectionModePanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionModePanicRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR GALGAS_sectionModePanicRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @compileTimeConvertToBooleanAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeConvertToBooleanAST::cPtr_compileTimeConvertToBooleanAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mConverterName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeConvertToBooleanAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mConverterName.printNonNullClassInstanceProperties ("mConverterName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeConvertToBooleanAST::objectCompare (const GALGAS_compileTimeConvertToBooleanAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST::GALGAS_compileTimeConvertToBooleanAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST GALGAS_compileTimeConvertToBooleanAST::
init_21__21__21__21_ (const GALGAS_lstring & in_mReceiverName,
                      const GALGAS_lstring & in_mReceiverTypeName,
                      const GALGAS_lstring & in_mConverterName,
                      const GALGAS_ctExpressionAST & in_mExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_compileTimeConvertToBooleanAST * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeConvertToBooleanAST (inCompiler COMMA_THERE)) ;
  object->compileTimeConvertToBooleanAST_init_21__21__21__21_ (in_mReceiverName, in_mReceiverTypeName, in_mConverterName, in_mExpression, inCompiler) ;
  const GALGAS_compileTimeConvertToBooleanAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeConvertToBooleanAST::
compileTimeConvertToBooleanAST_init_21__21__21__21_ (const GALGAS_lstring & in_mReceiverName,
                                                     const GALGAS_lstring & in_mReceiverTypeName,
                                                     const GALGAS_lstring & in_mConverterName,
                                                     const GALGAS_ctExpressionAST & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mConverterName = in_mConverterName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST::GALGAS_compileTimeConvertToBooleanAST (const cPtr_compileTimeConvertToBooleanAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeConvertToBooleanAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST GALGAS_compileTimeConvertToBooleanAST::class_func_new (const GALGAS_lstring & in_mReceiverName,
                                                                                             const GALGAS_lstring & in_mReceiverTypeName,
                                                                                             const GALGAS_lstring & in_mConverterName,
                                                                                             const GALGAS_ctExpressionAST & in_mExpression
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeConvertToBooleanAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeConvertToBooleanAST (in_mReceiverName, in_mReceiverTypeName, in_mConverterName, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeConvertToBooleanAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeConvertToBooleanAST::setProperty_mReceiverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeConvertToBooleanAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeConvertToBooleanAST::setProperty_mReceiverTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeConvertToBooleanAST::readProperty_mConverterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mConverterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeConvertToBooleanAST::setProperty_mConverterName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mConverterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compileTimeConvertToBooleanAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeConvertToBooleanAST::setProperty_mExpression (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeConvertToBooleanAST class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeConvertToBooleanAST::cPtr_compileTimeConvertToBooleanAST (const GALGAS_lstring & in_mReceiverName,
                                                                          const GALGAS_lstring & in_mReceiverTypeName,
                                                                          const GALGAS_lstring & in_mConverterName,
                                                                          const GALGAS_ctExpressionAST & in_mExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mConverterName (),
mProperty_mExpression () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mConverterName = in_mConverterName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeConvertToBooleanAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ;
}

void cPtr_compileTimeConvertToBooleanAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimeConvertToBooleanAST:") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConverterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeConvertToBooleanAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeConvertToBooleanAST (mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mConverterName, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeConvertToBooleanAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ("compileTimeConvertToBooleanAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeConvertToBooleanAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeConvertToBooleanAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeConvertToBooleanAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST GALGAS_compileTimeConvertToBooleanAST::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @llvmConvertToBooleanAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmConvertToBooleanAST::cPtr_llvmConvertToBooleanAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mConverterName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmConvertToBooleanAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mConverterName.printNonNullClassInstanceProperties ("mConverterName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmConvertToBooleanAST::objectCompare (const GALGAS_llvmConvertToBooleanAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST::GALGAS_llvmConvertToBooleanAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST GALGAS_llvmConvertToBooleanAST::
init_21__21__21__21_ (const GALGAS_lstring & in_mReceiverName,
                      const GALGAS_lstring & in_mReceiverTypeName,
                      const GALGAS_lstring & in_mConverterName,
                      const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_llvmConvertToBooleanAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmConvertToBooleanAST (inCompiler COMMA_THERE)) ;
  object->llvmConvertToBooleanAST_init_21__21__21__21_ (in_mReceiverName, in_mReceiverTypeName, in_mConverterName, in_mInstructionList, inCompiler) ;
  const GALGAS_llvmConvertToBooleanAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmConvertToBooleanAST::
llvmConvertToBooleanAST_init_21__21__21__21_ (const GALGAS_lstring & in_mReceiverName,
                                              const GALGAS_lstring & in_mReceiverTypeName,
                                              const GALGAS_lstring & in_mConverterName,
                                              const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                              Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mConverterName = in_mConverterName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST::GALGAS_llvmConvertToBooleanAST (const cPtr_llvmConvertToBooleanAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmConvertToBooleanAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST GALGAS_llvmConvertToBooleanAST::class_func_new (const GALGAS_lstring & in_mReceiverName,
                                                                               const GALGAS_lstring & in_mReceiverTypeName,
                                                                               const GALGAS_lstring & in_mConverterName,
                                                                               const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_llvmConvertToBooleanAST result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmConvertToBooleanAST (in_mReceiverName, in_mReceiverTypeName, in_mConverterName, in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmConvertToBooleanAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmConvertToBooleanAST::setProperty_mReceiverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmConvertToBooleanAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmConvertToBooleanAST::setProperty_mReceiverTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmConvertToBooleanAST::readProperty_mConverterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mConverterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmConvertToBooleanAST::setProperty_mConverterName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mConverterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmConvertToBooleanAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmConvertToBooleanAST::setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmConvertToBooleanAST class
//--------------------------------------------------------------------------------------------------

cPtr_llvmConvertToBooleanAST::cPtr_llvmConvertToBooleanAST (const GALGAS_lstring & in_mReceiverName,
                                                            const GALGAS_lstring & in_mReceiverTypeName,
                                                            const GALGAS_lstring & in_mConverterName,
                                                            const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mConverterName (),
mProperty_mInstructionList () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mConverterName = in_mConverterName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmConvertToBooleanAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ;
}

void cPtr_llvmConvertToBooleanAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmConvertToBooleanAST:") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConverterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmConvertToBooleanAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmConvertToBooleanAST (mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mConverterName, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmConvertToBooleanAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ("llvmConvertToBooleanAST",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmConvertToBooleanAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmConvertToBooleanAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmConvertToBooleanAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST GALGAS_llvmConvertToBooleanAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @compileTimeImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeImplicitConverterToBoolean::cPtr_compileTimeImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeImplicitConverterToBoolean::objectCompare (const GALGAS_compileTimeImplicitConverterToBoolean & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean::GALGAS_compileTimeImplicitConverterToBoolean (void) :
GALGAS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean GALGAS_compileTimeImplicitConverterToBoolean::
init_21__21_ (const GALGAS_lstring & in_mReceiverName,
              const GALGAS_ctExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_compileTimeImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->compileTimeImplicitConverterToBoolean_init_21__21_ (in_mReceiverName, in_mExpression, inCompiler) ;
  const GALGAS_compileTimeImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeImplicitConverterToBoolean::
compileTimeImplicitConverterToBoolean_init_21__21_ (const GALGAS_lstring & in_mReceiverName,
                                                    const GALGAS_ctExpressionAST & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean::GALGAS_compileTimeImplicitConverterToBoolean (const cPtr_compileTimeImplicitConverterToBoolean * inSourcePtr) :
GALGAS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean GALGAS_compileTimeImplicitConverterToBoolean::class_func_new (const GALGAS_lstring & in_mReceiverName,
                                                                                                           const GALGAS_ctExpressionAST & in_mExpression
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeImplicitConverterToBoolean (in_mReceiverName, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeImplicitConverterToBoolean::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeImplicitConverterToBoolean::setProperty_mReceiverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compileTimeImplicitConverterToBoolean::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeImplicitConverterToBoolean::setProperty_mExpression (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeImplicitConverterToBoolean::cPtr_compileTimeImplicitConverterToBoolean (const GALGAS_lstring & in_mReceiverName,
                                                                                        const GALGAS_ctExpressionAST & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (THERE),
mProperty_mReceiverName (),
mProperty_mExpression () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;
}

void cPtr_compileTimeImplicitConverterToBoolean::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimeImplicitConverterToBoolean:") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeImplicitConverterToBoolean::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeImplicitConverterToBoolean (mProperty_mReceiverName, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeImplicitConverterToBoolean generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ("compileTimeImplicitConverterToBoolean",
                                                                                             & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean GALGAS_compileTimeImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @llvmImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmImplicitConverterToBoolean::cPtr_llvmImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverType (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmImplicitConverterToBoolean::objectCompare (const GALGAS_llvmImplicitConverterToBoolean & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean::GALGAS_llvmImplicitConverterToBoolean (void) :
GALGAS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean GALGAS_llvmImplicitConverterToBoolean::
init_21__21__21_ (const GALGAS_lstring & in_mReceiverName,
                  const GALGAS_omnibusType & in_mReceiverType,
                  const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_llvmImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_llvmImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->llvmImplicitConverterToBoolean_init_21__21__21_ (in_mReceiverName, in_mReceiverType, in_mInstructionList, inCompiler) ;
  const GALGAS_llvmImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmImplicitConverterToBoolean::
llvmImplicitConverterToBoolean_init_21__21__21_ (const GALGAS_lstring & in_mReceiverName,
                                                 const GALGAS_omnibusType & in_mReceiverType,
                                                 const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean::GALGAS_llvmImplicitConverterToBoolean (const cPtr_llvmImplicitConverterToBoolean * inSourcePtr) :
GALGAS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean GALGAS_llvmImplicitConverterToBoolean::class_func_new (const GALGAS_lstring & in_mReceiverName,
                                                                                             const GALGAS_omnibusType & in_mReceiverType,
                                                                                             const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_llvmImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmImplicitConverterToBoolean (in_mReceiverName, in_mReceiverType, in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmImplicitConverterToBoolean::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmImplicitConverterToBoolean::setProperty_mReceiverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_llvmImplicitConverterToBoolean::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmImplicitConverterToBoolean::setProperty_mReceiverType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmImplicitConverterToBoolean::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmImplicitConverterToBoolean::setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

cPtr_llvmImplicitConverterToBoolean::cPtr_llvmImplicitConverterToBoolean (const GALGAS_lstring & in_mReceiverName,
                                                                          const GALGAS_omnibusType & in_mReceiverType,
                                                                          const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (THERE),
mProperty_mReceiverName (),
mProperty_mReceiverType (),
mProperty_mInstructionList () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;
}

void cPtr_llvmImplicitConverterToBoolean::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmImplicitConverterToBoolean:") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmImplicitConverterToBoolean::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmImplicitConverterToBoolean (mProperty_mReceiverName, mProperty_mReceiverType, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmImplicitConverterToBoolean generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ("llvmImplicitConverterToBoolean",
                                                                                      & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean GALGAS_llvmImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @convertExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_convertExpressionAST::cPtr_convertExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_convertExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_convertExpressionAST::objectCompare (const GALGAS_convertExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::
init_21__21__21_ (const GALGAS_expressionAST & in_mExpression,
                  const GALGAS_lstring & in_mTypeName,
                  const GALGAS_location & in_mEndOfExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_convertExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_convertExpressionAST (inCompiler COMMA_THERE)) ;
  object->convertExpressionAST_init_21__21__21_ (in_mExpression, in_mTypeName, in_mEndOfExpression, inCompiler) ;
  const GALGAS_convertExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::
convertExpressionAST_init_21__21__21_ (const GALGAS_expressionAST & in_mExpression,
                                       const GALGAS_lstring & in_mTypeName,
                                       const GALGAS_location & in_mEndOfExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (const cPtr_convertExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::class_func_new (const GALGAS_expressionAST & in_mExpression,
                                                                         const GALGAS_lstring & in_mTypeName,
                                                                         const GALGAS_location & in_mEndOfExpression
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_convertExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_convertExpressionAST (in_mExpression, in_mTypeName, in_mEndOfExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_convertExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_convertExpressionAST::setProperty_mExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_convertExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_convertExpressionAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_convertExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_convertExpressionAST::setProperty_mEndOfExpression (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @convertExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_convertExpressionAST::cPtr_convertExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                      const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_location & in_mEndOfExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_convertExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

void cPtr_convertExpressionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@convertExpressionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_convertExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_convertExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @convertExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertExpressionAST ("convertExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_convertExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_convertExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @convertInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_convertInstructionIR::cPtr_convertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mOperand (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_convertInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_convertInstructionIR::objectCompare (const GALGAS_convertInstructionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::
init_21__21__21_ (const GALGAS_objectIR & in_mTarget,
                  const GALGAS_objectIR & in_mOperand,
                  const GALGAS_location & in_mLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_convertInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_convertInstructionIR (inCompiler COMMA_THERE)) ;
  object->convertInstructionIR_init_21__21__21_ (in_mTarget, in_mOperand, in_mLocation, inCompiler) ;
  const GALGAS_convertInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_convertInstructionIR::
convertInstructionIR_init_21__21__21_ (const GALGAS_objectIR & in_mTarget,
                                       const GALGAS_objectIR & in_mOperand,
                                       const GALGAS_location & in_mLocation,
                                       Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (const cPtr_convertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::class_func_new (const GALGAS_objectIR & in_mTarget,
                                                                         const GALGAS_objectIR & in_mOperand,
                                                                         const GALGAS_location & in_mLocation
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_convertInstructionIR (in_mTarget, in_mOperand, in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_convertInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_convertInstructionIR::setProperty_mTarget (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_convertInstructionIR::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_convertInstructionIR::setProperty_mOperand (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_convertInstructionIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_convertInstructionIR::setProperty_mLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @convertInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_convertInstructionIR::cPtr_convertInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                      const GALGAS_objectIR & in_mOperand,
                                                      const GALGAS_location & in_mLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (),
mProperty_mOperand (),
mProperty_mLocation () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_convertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

void cPtr_convertInstructionIR::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@convertInstructionIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_convertInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_convertInstructionIR (mProperty_mTarget, mProperty_mOperand, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @convertInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertInstructionIR ("convertInstructionIR",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_convertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_convertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_convertInstructionIR_2D_weak::objectCompare (const GALGAS_convertInstructionIR_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR_2D_weak::GALGAS_convertInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR_2D_weak & GALGAS_convertInstructionIR_2D_weak::operator = (const GALGAS_convertInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR_2D_weak::GALGAS_convertInstructionIR_2D_weak (const GALGAS_convertInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR_2D_weak GALGAS_convertInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_convertInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR GALGAS_convertInstructionIR_2D_weak::bang_convertInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
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

//--------------------------------------------------------------------------------------------------
//
//     @convertInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertInstructionIR_2D_weak ("convertInstructionIR-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_convertInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_convertInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertInstructionIR_2D_weak GALGAS_convertInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @extendExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_extendExpressionAST::cPtr_extendExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extendExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extendExpressionAST::objectCompare (const GALGAS_extendExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::
init_21__21__21_ (const GALGAS_expressionAST & in_mExpression,
                  const GALGAS_lstring & in_mTypeName,
                  const GALGAS_location & in_mEndOfExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_extendExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_extendExpressionAST (inCompiler COMMA_THERE)) ;
  object->extendExpressionAST_init_21__21__21_ (in_mExpression, in_mTypeName, in_mEndOfExpression, inCompiler) ;
  const GALGAS_extendExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::
extendExpressionAST_init_21__21__21_ (const GALGAS_expressionAST & in_mExpression,
                                      const GALGAS_lstring & in_mTypeName,
                                      const GALGAS_location & in_mEndOfExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::class_func_new (const GALGAS_expressionAST & in_mExpression,
                                                                       const GALGAS_lstring & in_mTypeName,
                                                                       const GALGAS_location & in_mEndOfExpression
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_extendExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_extendExpressionAST (in_mExpression, in_mTypeName, in_mEndOfExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_extendExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendExpressionAST::setProperty_mExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extendExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendExpressionAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extendExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendExpressionAST::setProperty_mEndOfExpression (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extendExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_extendExpressionAST::cPtr_extendExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                    const GALGAS_lstring & in_mTypeName,
                                                    const GALGAS_location & in_mEndOfExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extendExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

void cPtr_extendExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@extendExpressionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extendExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extendExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @extendExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendExpressionAST ("extendExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @truncateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_truncateExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_truncateExpressionAST::objectCompare (const GALGAS_truncateExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::
init_21__21__21_ (const GALGAS_expressionAST & in_mExpression,
                  const GALGAS_lstring & in_mTypeName,
                  const GALGAS_location & in_mEndOfExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_truncateExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_truncateExpressionAST (inCompiler COMMA_THERE)) ;
  object->truncateExpressionAST_init_21__21__21_ (in_mExpression, in_mTypeName, in_mEndOfExpression, inCompiler) ;
  const GALGAS_truncateExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::
truncateExpressionAST_init_21__21__21_ (const GALGAS_expressionAST & in_mExpression,
                                        const GALGAS_lstring & in_mTypeName,
                                        const GALGAS_location & in_mEndOfExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (const cPtr_truncateExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::class_func_new (const GALGAS_expressionAST & in_mExpression,
                                                                           const GALGAS_lstring & in_mTypeName,
                                                                           const GALGAS_location & in_mEndOfExpression
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_truncateExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_truncateExpressionAST (in_mExpression, in_mTypeName, in_mEndOfExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_truncateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_truncateExpressionAST::setProperty_mExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_truncateExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_truncateExpressionAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_truncateExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_truncateExpressionAST::setProperty_mEndOfExpression (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @truncateExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                        const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_location & in_mEndOfExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_truncateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

void cPtr_truncateExpressionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@truncateExpressionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_truncateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_truncateExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @truncateExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateExpressionAST ("truncateExpressionAST",
                                                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_truncateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_truncateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST::GALGAS_controlRegisterLValueAST (void) :
mProperty_mRegisterGroupName (),
mProperty_mGroupIndex (),
mProperty_mRegisterName (),
mProperty_mRegisterIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST::~ GALGAS_controlRegisterLValueAST (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterLValueAST::init_21__21__21__21_ (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                       const GALGAS_registerGroupIndexAST & in_mGroupIndex,
                                                                                       const GALGAS_lstring & in_mRegisterName,
                                                                                       const GALGAS_registerIndexAST & in_mRegisterIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterLValueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mGroupIndex = in_mGroupIndex ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mRegisterIndex = in_mRegisterIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterLValueAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST::GALGAS_controlRegisterLValueAST (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_registerGroupIndexAST & inOperand1,
                                                                  const GALGAS_lstring & inOperand2,
                                                                  const GALGAS_registerIndexAST & inOperand3) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mGroupIndex (inOperand1),
mProperty_mRegisterName (inOperand2),
mProperty_mRegisterIndex (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterLValueAST::class_func_new (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                 const GALGAS_registerGroupIndexAST & in_mGroupIndex,
                                                                                 const GALGAS_lstring & in_mRegisterName,
                                                                                 const GALGAS_registerIndexAST & in_mRegisterIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterLValueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mGroupIndex = in_mGroupIndex ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mRegisterIndex = in_mRegisterIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterLValueAST::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mGroupIndex.isValid () && mProperty_mRegisterName.isValid () && mProperty_mRegisterIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterLValueAST::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mGroupIndex.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mRegisterIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterLValueAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterLValueAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterLValueAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterLValueAST ("controlRegisterLValueAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterLValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterLValueAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterLValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterLValueAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterLValueAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GALGAS_LValueAST::GALGAS_LValueAST (void) :
mProperty_mIdentifier (),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueAST::~ GALGAS_LValueAST (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_LValueAST GALGAS_LValueAST::init_21__21_ (const GALGAS_lstring & in_mIdentifier,
                                                 const GALGAS_LValueOperandAST & in_mOperand,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIdentifier = in_mIdentifier ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueAST::GALGAS_LValueAST (const GALGAS_lstring & inOperand0,
                                    const GALGAS_LValueOperandAST & inOperand1) :
mProperty_mIdentifier (inOperand0),
mProperty_mOperand (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueAST GALGAS_LValueAST::class_func_new (const GALGAS_lstring & in_mIdentifier,
                                                   const GALGAS_LValueOperandAST & in_mOperand,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIdentifier = in_mIdentifier ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_LValueAST::isValid (void) const {
  return mProperty_mIdentifier.isValid () && mProperty_mOperand.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueAST::drop (void) {
  mProperty_mIdentifier.drop () ;
  mProperty_mOperand.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueAST::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @LValueAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @LValueAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueAST ("LValueAST",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_LValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_LValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueAST GALGAS_LValueAST::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (void) :
mProperty_type (),
mProperty_llvmName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation::~ GALGAS_LValueRepresentation (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::init_21__21_ (const GALGAS_omnibusType & in_type,
                                                                       const GALGAS_string & in_llvmName,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueRepresentation::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (const GALGAS_omnibusType & inOperand0,
                                                          const GALGAS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::class_func_new (const GALGAS_omnibusType & in_type,
                                                                         const GALGAS_string & in_llvmName,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_LValueRepresentation::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueRepresentation::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueRepresentation::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @LValueRepresentation:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_llvmName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @LValueRepresentation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueRepresentation ("LValueRepresentation",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_LValueRepresentation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueRepresentation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_LValueRepresentation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueRepresentation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @sizeofExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_sizeofExpressionAST::cPtr_sizeofExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sizeofExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLValue.printNonNullClassInstanceProperties ("mLValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sizeofExpressionAST::objectCompare (const GALGAS_sizeofExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST::GALGAS_sizeofExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::
init_21_ (const GALGAS_LValueAST & in_mLValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_sizeofExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_sizeofExpressionAST (inCompiler COMMA_THERE)) ;
  object->sizeofExpressionAST_init_21_ (in_mLValue, inCompiler) ;
  const GALGAS_sizeofExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::
sizeofExpressionAST_init_21_ (const GALGAS_LValueAST & in_mLValue,
                              Compiler * /* inCompiler */) {
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST::GALGAS_sizeofExpressionAST (const cPtr_sizeofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::class_func_new (const GALGAS_LValueAST & in_mLValue
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_sizeofExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_sizeofExpressionAST (in_mLValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueAST GALGAS_sizeofExpressionAST::readProperty_mLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_LValueAST () ;
  }else{
    cPtr_sizeofExpressionAST * p = (cPtr_sizeofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
    return p->mProperty_mLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sizeofExpressionAST::setProperty_mLValue (const GALGAS_LValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofExpressionAST * p = (cPtr_sizeofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
    p->mProperty_mLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sizeofExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_sizeofExpressionAST::cPtr_sizeofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue () {
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sizeofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

void cPtr_sizeofExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@sizeofExpressionAST:") ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sizeofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sizeofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sizeofExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofExpressionAST ("sizeofExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sizeofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sizeofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @sizeofTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_sizeofTypeAST::cPtr_sizeofTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sizeofTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sizeofTypeAST::objectCompare (const GALGAS_sizeofTypeAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST::GALGAS_sizeofTypeAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::
init_21_ (const GALGAS_lstring & in_mTypeName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_sizeofTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_sizeofTypeAST (inCompiler COMMA_THERE)) ;
  object->sizeofTypeAST_init_21_ (in_mTypeName, inCompiler) ;
  const GALGAS_sizeofTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::
sizeofTypeAST_init_21_ (const GALGAS_lstring & in_mTypeName,
                        Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST::GALGAS_sizeofTypeAST (const cPtr_sizeofTypeAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::class_func_new (const GALGAS_lstring & in_mTypeName
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_sizeofTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_sizeofTypeAST (in_mTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sizeofTypeAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_sizeofTypeAST * p = (cPtr_sizeofTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sizeofTypeAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofTypeAST * p = (cPtr_sizeofTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sizeofTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_sizeofTypeAST::cPtr_sizeofTypeAST (const GALGAS_lstring & in_mTypeName
                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName () {
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sizeofTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

void cPtr_sizeofTypeAST::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@sizeofTypeAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sizeofTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sizeofTypeAST (mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sizeofTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofTypeAST ("sizeofTypeAST",
                                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sizeofTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sizeofTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @sizeofInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_sizeofInstructionIR::cPtr_sizeofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mSourceType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sizeofInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mSourceType.printNonNullClassInstanceProperties ("mSourceType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sizeofInstructionIR::objectCompare (const GALGAS_sizeofInstructionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR::GALGAS_sizeofInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR::
init_21__21_ (const GALGAS_objectIR & in_mTarget,
              const GALGAS_omnibusType & in_mSourceType,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_sizeofInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_sizeofInstructionIR (inCompiler COMMA_THERE)) ;
  object->sizeofInstructionIR_init_21__21_ (in_mTarget, in_mSourceType, inCompiler) ;
  const GALGAS_sizeofInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sizeofInstructionIR::
sizeofInstructionIR_init_21__21_ (const GALGAS_objectIR & in_mTarget,
                                  const GALGAS_omnibusType & in_mSourceType,
                                  Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mSourceType = in_mSourceType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR::GALGAS_sizeofInstructionIR (const cPtr_sizeofInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR::class_func_new (const GALGAS_objectIR & in_mTarget,
                                                                       const GALGAS_omnibusType & in_mSourceType
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_sizeofInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_sizeofInstructionIR (in_mTarget, in_mSourceType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_sizeofInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sizeofInstructionIR::setProperty_mTarget (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_sizeofInstructionIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    return p->mProperty_mSourceType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sizeofInstructionIR::setProperty_mSourceType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sizeofInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_sizeofInstructionIR::cPtr_sizeofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                    const GALGAS_omnibusType & in_mSourceType
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (),
mProperty_mSourceType () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mSourceType = in_mSourceType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sizeofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

void cPtr_sizeofInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@sizeofInstructionIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sizeofInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sizeofInstructionIR (mProperty_mTarget, mProperty_mSourceType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sizeofInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofInstructionIR ("sizeofInstructionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sizeofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sizeofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @typedConstantCallAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mOptionalTypeName (),
mProperty_mConstructorName (),
mProperty_mAccessList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typedConstantCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mConstructorName.printNonNullClassInstanceProperties ("mConstructorName") ;
    mProperty_mAccessList.printNonNullClassInstanceProperties ("mAccessList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typedConstantCallAST::objectCompare (const GALGAS_typedConstantCallAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::
init_21__21__21_ (const GALGAS_lstring & in_mOptionalTypeName,
                  const GALGAS_lstring & in_mConstructorName,
                  const GALGAS_primaryInExpressionAccessListAST & in_mAccessList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_typedConstantCallAST * object = nullptr ;
  macroMyNew (object, cPtr_typedConstantCallAST (inCompiler COMMA_THERE)) ;
  object->typedConstantCallAST_init_21__21__21_ (in_mOptionalTypeName, in_mConstructorName, in_mAccessList, inCompiler) ;
  const GALGAS_typedConstantCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::
typedConstantCallAST_init_21__21__21_ (const GALGAS_lstring & in_mOptionalTypeName,
                                       const GALGAS_lstring & in_mConstructorName,
                                       const GALGAS_primaryInExpressionAccessListAST & in_mAccessList,
                                       Compiler * /* inCompiler */) {
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mConstructorName = in_mConstructorName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (const cPtr_typedConstantCallAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typedConstantCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::class_func_new (const GALGAS_lstring & in_mOptionalTypeName,
                                                                         const GALGAS_lstring & in_mConstructorName,
                                                                         const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_typedConstantCallAST (in_mOptionalTypeName, in_mConstructorName, in_mAccessList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typedConstantCallAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedConstantCallAST::setProperty_mOptionalTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typedConstantCallAST::readProperty_mConstructorName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mConstructorName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedConstantCallAST::setProperty_mConstructorName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mConstructorName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_typedConstantCallAST::readProperty_mAccessList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_primaryInExpressionAccessListAST () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mAccessList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedConstantCallAST::setProperty_mAccessList (const GALGAS_primaryInExpressionAccessListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mAccessList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typedConstantCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                      const GALGAS_lstring & in_mConstructorName,
                                                      const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mOptionalTypeName (),
mProperty_mConstructorName (),
mProperty_mAccessList () {
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mConstructorName = in_mConstructorName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typedConstantCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

void cPtr_typedConstantCallAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@typedConstantCallAST:") ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstructorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typedConstantCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typedConstantCallAST (mProperty_mOptionalTypeName, mProperty_mConstructorName, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @typedConstantCallAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedConstantCallAST ("typedConstantCallAST",
                                                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typedConstantCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typedConstantCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedConstantCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @integerSliceExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_integerSliceExpressionAST::cPtr_integerSliceExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceValues (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_integerSliceExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mSliceValues.printNonNullClassInstanceProperties ("mSliceValues") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_integerSliceExpressionAST::objectCompare (const GALGAS_integerSliceExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST::GALGAS_integerSliceExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::
init_21__21__21_ (const GALGAS_lstring & in_mTypeName,
                  const GALGAS_integerSliceFieldListAST & in_mSliceValues,
                  const GALGAS_location & in_mLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_integerSliceExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_integerSliceExpressionAST (inCompiler COMMA_THERE)) ;
  object->integerSliceExpressionAST_init_21__21__21_ (in_mTypeName, in_mSliceValues, in_mLocation, inCompiler) ;
  const GALGAS_integerSliceExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::
integerSliceExpressionAST_init_21__21__21_ (const GALGAS_lstring & in_mTypeName,
                                            const GALGAS_integerSliceFieldListAST & in_mSliceValues,
                                            const GALGAS_location & in_mLocation,
                                            Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceValues = in_mSliceValues ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST::GALGAS_integerSliceExpressionAST (const cPtr_integerSliceExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerSliceExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::class_func_new (const GALGAS_lstring & in_mTypeName,
                                                                                   const GALGAS_integerSliceFieldListAST & in_mSliceValues,
                                                                                   const GALGAS_location & in_mLocation
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_integerSliceExpressionAST (in_mTypeName, in_mSliceValues, in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_integerSliceExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceExpressionAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST GALGAS_integerSliceExpressionAST::readProperty_mSliceValues (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_integerSliceFieldListAST () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mSliceValues ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceExpressionAST::setProperty_mSliceValues (const GALGAS_integerSliceFieldListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mSliceValues = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_integerSliceExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceExpressionAST::setProperty_mLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @integerSliceExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_integerSliceExpressionAST::cPtr_integerSliceExpressionAST (const GALGAS_lstring & in_mTypeName,
                                                                const GALGAS_integerSliceFieldListAST & in_mSliceValues,
                                                                const GALGAS_location & in_mLocation
                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (),
mProperty_mSliceValues (),
mProperty_mLocation () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceValues = in_mSliceValues ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_integerSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

void cPtr_integerSliceExpressionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@integerSliceExpressionAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSliceValues.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_integerSliceExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerSliceExpressionAST (mProperty_mTypeName, mProperty_mSliceValues, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @integerSliceExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST ("integerSliceExpressionAST",
                                                                                 & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerSliceExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @literalIntegerInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalIntegerInExpressionAST::cPtr_literalIntegerInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInteger () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalIntegerInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInteger.printNonNullClassInstanceProperties ("mLiteralInteger") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_literalIntegerInExpressionAST::objectCompare (const GALGAS_literalIntegerInExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST::GALGAS_literalIntegerInExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::
init_21_ (const GALGAS_lbigint & in_mLiteralInteger,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalIntegerInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalIntegerInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalIntegerInExpressionAST_init_21_ (in_mLiteralInteger, inCompiler) ;
  const GALGAS_literalIntegerInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::
literalIntegerInExpressionAST_init_21_ (const GALGAS_lbigint & in_mLiteralInteger,
                                        Compiler * /* inCompiler */) {
  mProperty_mLiteralInteger = in_mLiteralInteger ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST::GALGAS_literalIntegerInExpressionAST (const cPtr_literalIntegerInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntegerInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::class_func_new (const GALGAS_lbigint & in_mLiteralInteger
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalIntegerInExpressionAST (in_mLiteralInteger COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_literalIntegerInExpressionAST::readProperty_mLiteralInteger (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_literalIntegerInExpressionAST * p = (cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    return p->mProperty_mLiteralInteger ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_literalIntegerInExpressionAST::setProperty_mLiteralInteger (const GALGAS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalIntegerInExpressionAST * p = (cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    p->mProperty_mLiteralInteger = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalIntegerInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalIntegerInExpressionAST::cPtr_literalIntegerInExpressionAST (const GALGAS_lbigint & in_mLiteralInteger
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLiteralInteger () {
  mProperty_mLiteralInteger = in_mLiteralInteger ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalIntegerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

void cPtr_literalIntegerInExpressionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@literalIntegerInExpressionAST:") ;
  mProperty_mLiteralInteger.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalIntegerInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalIntegerInExpressionAST (mProperty_mLiteralInteger COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalIntegerInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ("literalIntegerInExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalIntegerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalIntegerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntegerInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @literalStringInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringInExpressionAST::cPtr_literalStringInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralString () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralString.printNonNullClassInstanceProperties ("mLiteralString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_literalStringInExpressionAST::objectCompare (const GALGAS_literalStringInExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST::GALGAS_literalStringInExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::
init_21_ (const GALGAS_lstring & in_mLiteralString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalStringInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalStringInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalStringInExpressionAST_init_21_ (in_mLiteralString, inCompiler) ;
  const GALGAS_literalStringInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::
literalStringInExpressionAST_init_21_ (const GALGAS_lstring & in_mLiteralString,
                                       Compiler * /* inCompiler */) {
  mProperty_mLiteralString = in_mLiteralString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST::GALGAS_literalStringInExpressionAST (const cPtr_literalStringInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::class_func_new (const GALGAS_lstring & in_mLiteralString
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalStringInExpressionAST (in_mLiteralString COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_literalStringInExpressionAST::readProperty_mLiteralString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_literalStringInExpressionAST * p = (cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    return p->mProperty_mLiteralString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_literalStringInExpressionAST::setProperty_mLiteralString (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalStringInExpressionAST * p = (cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    p->mProperty_mLiteralString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringInExpressionAST::cPtr_literalStringInExpressionAST (const GALGAS_lstring & in_mLiteralString
                                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLiteralString () {
  mProperty_mLiteralString = in_mLiteralString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalStringInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

void cPtr_literalStringInExpressionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@literalStringInExpressionAST:") ;
  mProperty_mLiteralString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringInExpressionAST (mProperty_mLiteralString COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalStringInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST ("literalStringInExpressionAST",
                                                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @registerInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_registerInExpressionAST::cPtr_registerInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mFieldName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_registerInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
    mProperty_mFieldName.printNonNullClassInstanceProperties ("mFieldName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_registerInExpressionAST::objectCompare (const GALGAS_registerInExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST::GALGAS_registerInExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_registerInExpressionAST GALGAS_registerInExpressionAST::
init_21__21_ (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
              const GALGAS_lstring & in_mFieldName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_registerInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_registerInExpressionAST (inCompiler COMMA_THERE)) ;
  object->registerInExpressionAST_init_21__21_ (in_mControlRegisterLValue, in_mFieldName, inCompiler) ;
  const GALGAS_registerInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::
registerInExpressionAST_init_21__21_ (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                      const GALGAS_lstring & in_mFieldName,
                                      Compiler * /* inCompiler */) {
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mFieldName = in_mFieldName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST::GALGAS_registerInExpressionAST (const cPtr_registerInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST GALGAS_registerInExpressionAST::class_func_new (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                               const GALGAS_lstring & in_mFieldName
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_registerInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_registerInExpressionAST (in_mControlRegisterLValue, in_mFieldName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_registerInExpressionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterLValueAST () ;
  }else{
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerInExpressionAST::setProperty_mControlRegisterLValue (const GALGAS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerInExpressionAST::readProperty_mFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    return p->mProperty_mFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerInExpressionAST::setProperty_mFieldName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    p->mProperty_mFieldName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @registerInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_registerInExpressionAST::cPtr_registerInExpressionAST (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                            const GALGAS_lstring & in_mFieldName
                                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mControlRegisterLValue (),
mProperty_mFieldName () {
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mFieldName = in_mFieldName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_registerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

void cPtr_registerInExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@registerInExpressionAST:") ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFieldName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_registerInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_registerInExpressionAST (mProperty_mControlRegisterLValue, mProperty_mFieldName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @registerInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerInExpressionAST ("registerInExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST GALGAS_registerInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @registerConstantExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_registerConstantExpressionAST::cPtr_registerConstantExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mRegisterGroupName (),
mProperty_mRegisterName (),
mProperty_mFieldValues () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_registerConstantExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterGroupName.printNonNullClassInstanceProperties ("mRegisterGroupName") ;
    mProperty_mRegisterName.printNonNullClassInstanceProperties ("mRegisterName") ;
    mProperty_mFieldValues.printNonNullClassInstanceProperties ("mFieldValues") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_registerConstantExpressionAST::objectCompare (const GALGAS_registerConstantExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST::GALGAS_registerConstantExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::
init_21__21__21_ (const GALGAS_lstring & in_mRegisterGroupName,
                  const GALGAS_lstring & in_mRegisterName,
                  const GALGAS_registerIntegerFieldListAST & in_mFieldValues,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_registerConstantExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_registerConstantExpressionAST (inCompiler COMMA_THERE)) ;
  object->registerConstantExpressionAST_init_21__21__21_ (in_mRegisterGroupName, in_mRegisterName, in_mFieldValues, inCompiler) ;
  const GALGAS_registerConstantExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::
registerConstantExpressionAST_init_21__21__21_ (const GALGAS_lstring & in_mRegisterGroupName,
                                                const GALGAS_lstring & in_mRegisterName,
                                                const GALGAS_registerIntegerFieldListAST & in_mFieldValues,
                                                Compiler * /* inCompiler */) {
  mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mFieldValues = in_mFieldValues ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST::GALGAS_registerConstantExpressionAST (const cPtr_registerConstantExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerConstantExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::class_func_new (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                           const GALGAS_lstring & in_mRegisterName,
                                                                                           const GALGAS_registerIntegerFieldListAST & in_mFieldValues
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_registerConstantExpressionAST (in_mRegisterGroupName, in_mRegisterName, in_mFieldValues COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerConstantExpressionAST::readProperty_mRegisterGroupName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mRegisterGroupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerConstantExpressionAST::setProperty_mRegisterGroupName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mRegisterGroupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerConstantExpressionAST::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerConstantExpressionAST::setProperty_mRegisterName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST GALGAS_registerConstantExpressionAST::readProperty_mFieldValues (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerIntegerFieldListAST () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mFieldValues ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerConstantExpressionAST::setProperty_mFieldValues (const GALGAS_registerIntegerFieldListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mFieldValues = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @registerConstantExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_registerConstantExpressionAST::cPtr_registerConstantExpressionAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                                        const GALGAS_lstring & in_mRegisterName,
                                                                        const GALGAS_registerIntegerFieldListAST & in_mFieldValues
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mRegisterGroupName (),
mProperty_mRegisterName (),
mProperty_mFieldValues () {
  mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mFieldValues = in_mFieldValues ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_registerConstantExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

void cPtr_registerConstantExpressionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@registerConstantExpressionAST:") ;
  mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFieldValues.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_registerConstantExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_registerConstantExpressionAST (mProperty_mRegisterGroupName, mProperty_mRegisterName, mProperty_mFieldValues COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @registerConstantExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST ("registerConstantExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerConstantExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerConstantExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerConstantExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @primaryInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_primaryInExpressionAST::cPtr_primaryInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mAccessList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_primaryInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mAccessList.printNonNullClassInstanceProperties ("mAccessList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_primaryInExpressionAST::objectCompare (const GALGAS_primaryInExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST::GALGAS_primaryInExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::
init_21__21_ (const GALGAS_lstring & in_mReceiverName,
              const GALGAS_primaryInExpressionAccessListAST & in_mAccessList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_primaryInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_primaryInExpressionAST (inCompiler COMMA_THERE)) ;
  object->primaryInExpressionAST_init_21__21_ (in_mReceiverName, in_mAccessList, inCompiler) ;
  const GALGAS_primaryInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::
primaryInExpressionAST_init_21__21_ (const GALGAS_lstring & in_mReceiverName,
                                     const GALGAS_primaryInExpressionAccessListAST & in_mAccessList,
                                     Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST::GALGAS_primaryInExpressionAST (const cPtr_primaryInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primaryInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::class_func_new (const GALGAS_lstring & in_mReceiverName,
                                                                             const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_primaryInExpressionAST (in_mReceiverName, in_mAccessList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_primaryInExpressionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAST::setProperty_mReceiverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAST::readProperty_mAccessList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_primaryInExpressionAccessListAST () ;
  }else{
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    return p->mProperty_mAccessList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAST::setProperty_mAccessList (const GALGAS_primaryInExpressionAccessListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    p->mProperty_mAccessList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @primaryInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_primaryInExpressionAST::cPtr_primaryInExpressionAST (const GALGAS_lstring & in_mReceiverName,
                                                          const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mReceiverName (),
mProperty_mAccessList () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_primaryInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

void cPtr_primaryInExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@primaryInExpressionAST:") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_primaryInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_primaryInExpressionAST (mProperty_mReceiverName, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAST ("primaryInExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'
//
//--------------------------------------------------------------------------------------------------

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
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject var_entity_9503 ;
  const GALGAS_primaryInExpressionAST temp_0 = this ;
  extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_0.readProperty_mReceiverName (), var_entity_9503, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 232)) ;
  switch (var_entity_9503.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_10098 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_9503.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_9540_type = extractPtr_10098->mAssociatedValue0 ;
      const GALGAS_primaryInExpressionAST temp_1 = this ;
      outArgument_outResult = GALGAS_objectIR::class_func_reference (extractedValue_9540_type, function_llvmNameForGlobalVariable (temp_1.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 235))  COMMA_SOURCE_FILE ("expression-primary.galgas", 235)) ;
      {
      const GALGAS_primaryInExpressionAST temp_2 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_2.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 236)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_10786 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_9503.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_10115_type = extractPtr_10786->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_10120_instancied = extractPtr_10786->mAssociatedValue1 ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = extractedValue_10120_instancied.operator_not (SOURCE_FILE ("expression-primary.galgas", 251)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_primaryInExpressionAST temp_4 = this ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the driver should be instancied"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 252)) ;
        }
      }
      const GALGAS_primaryInExpressionAST temp_6 = this ;
      outArgument_outResult = GALGAS_objectIR::class_func_reference (extractedValue_10115_type, function_llvmNameForGlobalVariable (temp_6.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 254))  COMMA_SOURCE_FILE ("expression-primary.galgas", 254)) ;
      {
      const GALGAS_primaryInExpressionAST temp_7 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_7.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 255)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_11309 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_entity_9503.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_10821_objectIR = extractPtr_11309->mAssociatedValue0 ;
      outArgument_outResult = extractedValue_10821_objectIR ;
      {
      const GALGAS_primaryInExpressionAST temp_8 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_8.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 271)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_11972 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_9503.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_11346_type = extractPtr_11972->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_11360_omnibusName = extractPtr_11972->mAssociatedValue1 ;
      {
      const GALGAS_primaryInExpressionAST temp_9 = this ;
      extensionSetter_readAccess (ioArgument_ioUniversalMap, temp_9.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 286)) ;
      }
      outArgument_outResult = GALGAS_objectIR::class_func_reference (extractedValue_11346_type, function_llvmNameForLocalVariable (extractedValue_11360_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 287))  COMMA_SOURCE_FILE ("expression-primary.galgas", 287)) ;
      {
      const GALGAS_primaryInExpressionAST temp_10 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_10.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 288)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_12634 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_9503.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_12009_type = extractPtr_12634->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_12023_omnibusName = extractPtr_12634->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::class_func_reference (extractedValue_12009_type, function_llvmNameForLocalVariable (extractedValue_12023_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 303))  COMMA_SOURCE_FILE ("expression-primary.galgas", 303)) ;
      {
      const GALGAS_primaryInExpressionAST temp_11 = this ;
      extensionSetter_readAccess (ioArgument_ioUniversalMap, temp_11.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 304)) ;
      }
      {
      const GALGAS_primaryInExpressionAST temp_12 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_12.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 305)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_13252 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_9503.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_12676_type = extractPtr_13252->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_12690_omnibusName = extractPtr_13252->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::class_func_reference (extractedValue_12676_type, function_llvmNameForGlobalSyncInstance (extractedValue_12690_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 320))  COMMA_SOURCE_FILE ("expression-primary.galgas", 320)) ;
      {
      const GALGAS_primaryInExpressionAST temp_13 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_13.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 321)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------

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
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    inObject->method_analyzePrimaryExpressionNoSelf  (constin_inSelfType, constin_inRoutineAttributes, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'
//
//--------------------------------------------------------------------------------------------------

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
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult = GALGAS_objectIR::class_func_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 432))  COMMA_SOURCE_FILE ("expression-primary.galgas", 432)) ;
  const GALGAS_primaryInExpressionAST temp_0 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_16784 (temp_0.readProperty_mAccessList (), EnumerationOrder::up) ;
  while (enumerator_16784.hasCurrentObject ()) {
    switch (enumerator_16784.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_17091 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_16784.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_16865_low = extractPtr_17091->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_16878_high = extractPtr_17091->mAssociatedValue1 ;
        {
        routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (constinArgument_inContext, outArgument_outResult, extractedValue_16865_low, extractedValue_16878_high, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 437)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_17391 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_16784.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_17121_propertyName = extractPtr_17391->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, outArgument_outResult, extractedValue_17121_propertyName, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 446)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_18000 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_16784.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_17430_indexExpression = extractPtr_18000->mAssociatedValue0 ;
        const GALGAS_location extractedValue_17456_endOfIndex = extractPtr_18000->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_17467_checkIndexExpression = extractPtr_18000->mAssociatedValue2 ;
        {
        routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (outArgument_outResult, extractedValue_17430_indexExpression, extractedValue_17456_endOfIndex, extractedValue_17467_checkIndexExpression, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 456)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_18680 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_16784.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_18030_methodName = extractPtr_18680->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_18067_arguments = extractPtr_18680->mAssociatedValue1 ;
        const GALGAS_location extractedValue_18087_errorLocation = extractPtr_18680->mAssociatedValue2 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 473)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_18087_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 474)) ;
            outArgument_outResult.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_1) {
          {
          routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (extractedValue_18030_methodName, outArgument_outResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_18067_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 476)) ;
          }
        }
      }
      break ;
    }
    enumerator_16784.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

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
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    inObject->method_analyzePrimaryExpressionWithSelf  (constin_inSelfType, constin_inRoutineAttributes, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @standaloneFunctionInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_standaloneFunctionInExpressionAST::cPtr_standaloneFunctionInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mStandaloneFunctionName (),
mProperty_mArguments (),
mProperty_mEndOfArguments () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_standaloneFunctionInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mStandaloneFunctionName.printNonNullClassInstanceProperties ("mStandaloneFunctionName") ;
    mProperty_mArguments.printNonNullClassInstanceProperties ("mArguments") ;
    mProperty_mEndOfArguments.printNonNullClassInstanceProperties ("mEndOfArguments") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_standaloneFunctionInExpressionAST::objectCompare (const GALGAS_standaloneFunctionInExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST::GALGAS_standaloneFunctionInExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::
init_21__21__21_ (const GALGAS_lstring & in_mStandaloneFunctionName,
                  const GALGAS_effectiveArgumentListAST & in_mArguments,
                  const GALGAS_location & in_mEndOfArguments,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_standaloneFunctionInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_standaloneFunctionInExpressionAST (inCompiler COMMA_THERE)) ;
  object->standaloneFunctionInExpressionAST_init_21__21__21_ (in_mStandaloneFunctionName, in_mArguments, in_mEndOfArguments, inCompiler) ;
  const GALGAS_standaloneFunctionInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::
standaloneFunctionInExpressionAST_init_21__21__21_ (const GALGAS_lstring & in_mStandaloneFunctionName,
                                                    const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                    const GALGAS_location & in_mEndOfArguments,
                                                    Compiler * /* inCompiler */) {
  mProperty_mStandaloneFunctionName = in_mStandaloneFunctionName ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST::GALGAS_standaloneFunctionInExpressionAST (const cPtr_standaloneFunctionInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standaloneFunctionInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::class_func_new (const GALGAS_lstring & in_mStandaloneFunctionName,
                                                                                                   const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                                   const GALGAS_location & in_mEndOfArguments
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_standaloneFunctionInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_standaloneFunctionInExpressionAST (in_mStandaloneFunctionName, in_mArguments, in_mEndOfArguments COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_standaloneFunctionInExpressionAST::readProperty_mStandaloneFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mStandaloneFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneFunctionInExpressionAST::setProperty_mStandaloneFunctionName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mStandaloneFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_standaloneFunctionInExpressionAST::readProperty_mArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_effectiveArgumentListAST () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneFunctionInExpressionAST::setProperty_mArguments (const GALGAS_effectiveArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mArguments = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_standaloneFunctionInExpressionAST::readProperty_mEndOfArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mEndOfArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneFunctionInExpressionAST::setProperty_mEndOfArguments (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mEndOfArguments = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @standaloneFunctionInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_standaloneFunctionInExpressionAST::cPtr_standaloneFunctionInExpressionAST (const GALGAS_lstring & in_mStandaloneFunctionName,
                                                                                const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                const GALGAS_location & in_mEndOfArguments
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mStandaloneFunctionName (),
mProperty_mArguments (),
mProperty_mEndOfArguments () {
  mProperty_mStandaloneFunctionName = in_mStandaloneFunctionName ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_standaloneFunctionInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

void cPtr_standaloneFunctionInExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@standaloneFunctionInExpressionAST:") ;
  mProperty_mStandaloneFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_standaloneFunctionInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_standaloneFunctionInExpressionAST (mProperty_mStandaloneFunctionName, mProperty_mArguments, mProperty_mEndOfArguments COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @standaloneFunctionInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ("standaloneFunctionInExpressionAST",
                                                                                         & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_standaloneFunctionInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_standaloneFunctionInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standaloneFunctionInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @constructorCallAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_constructorCallAST::cPtr_constructorCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mParameterList (),
mProperty_mErrorLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_constructorCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_constructorCallAST::objectCompare (const GALGAS_constructorCallAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST::GALGAS_constructorCallAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_constructorCallAST GALGAS_constructorCallAST::
init_21__21__21_ (const GALGAS_lstring & in_mTypeName,
                  const GALGAS_functionCallEffectiveParameterListAST & in_mParameterList,
                  const GALGAS_location & in_mErrorLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_constructorCallAST * object = nullptr ;
  macroMyNew (object, cPtr_constructorCallAST (inCompiler COMMA_THERE)) ;
  object->constructorCallAST_init_21__21__21_ (in_mTypeName, in_mParameterList, in_mErrorLocation, inCompiler) ;
  const GALGAS_constructorCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::
constructorCallAST_init_21__21__21_ (const GALGAS_lstring & in_mTypeName,
                                     const GALGAS_functionCallEffectiveParameterListAST & in_mParameterList,
                                     const GALGAS_location & in_mErrorLocation,
                                     Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mErrorLocation = in_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST::GALGAS_constructorCallAST (const cPtr_constructorCallAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST GALGAS_constructorCallAST::class_func_new (const GALGAS_lstring & in_mTypeName,
                                                                     const GALGAS_functionCallEffectiveParameterListAST & in_mParameterList,
                                                                     const GALGAS_location & in_mErrorLocation
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_constructorCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_constructorCallAST (in_mTypeName, in_mParameterList, in_mErrorLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_constructorCallAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorCallAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST GALGAS_constructorCallAST::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_functionCallEffectiveParameterListAST () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorCallAST::setProperty_mParameterList (const GALGAS_functionCallEffectiveParameterListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_constructorCallAST::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorCallAST::setProperty_mErrorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @constructorCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_constructorCallAST::cPtr_constructorCallAST (const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_functionCallEffectiveParameterListAST & in_mParameterList,
                                                  const GALGAS_location & in_mErrorLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (),
mProperty_mParameterList (),
mProperty_mErrorLocation () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mErrorLocation = in_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_constructorCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST ;
}

void cPtr_constructorCallAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@constructorCallAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_constructorCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_constructorCallAST (mProperty_mTypeName, mProperty_mParameterList, mProperty_mErrorLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @constructorCallAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorCallAST ("constructorCallAST",
                                                                          & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST GALGAS_constructorCallAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @compileTimeInfixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorAST::cPtr_compileTimeInfixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mInfixOperator (),
mProperty_mInfixOperatorLocation (),
mProperty_mLeftOperandName (),
mProperty_mLeftTypeName (),
mProperty_mRightOperandName (),
mProperty_mRightTypeName (),
mProperty_mExpression (),
mProperty_mResultTypeName () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeInfixOperatorAST::objectCompare (const GALGAS_compileTimeInfixOperatorAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST::GALGAS_compileTimeInfixOperatorAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST GALGAS_compileTimeInfixOperatorAST::
init_21__21__21__21__21__21__21__21_ (const GALGAS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                      const GALGAS_location & in_mInfixOperatorLocation,
                                      const GALGAS_lstring & in_mLeftOperandName,
                                      const GALGAS_lstring & in_mLeftTypeName,
                                      const GALGAS_lstring & in_mRightOperandName,
                                      const GALGAS_lstring & in_mRightTypeName,
                                      const GALGAS_ctExpressionAST & in_mExpression,
                                      const GALGAS_lstring & in_mResultTypeName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_compileTimeInfixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeInfixOperatorAST (inCompiler COMMA_THERE)) ;
  object->compileTimeInfixOperatorAST_init_21__21__21__21__21__21__21__21_ (in_mInfixOperator, in_mInfixOperatorLocation, in_mLeftOperandName, in_mLeftTypeName, in_mRightOperandName, in_mRightTypeName, in_mExpression, in_mResultTypeName, inCompiler) ;
  const GALGAS_compileTimeInfixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::
compileTimeInfixOperatorAST_init_21__21__21__21__21__21__21__21_ (const GALGAS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                  const GALGAS_location & in_mInfixOperatorLocation,
                                                                  const GALGAS_lstring & in_mLeftOperandName,
                                                                  const GALGAS_lstring & in_mLeftTypeName,
                                                                  const GALGAS_lstring & in_mRightOperandName,
                                                                  const GALGAS_lstring & in_mRightTypeName,
                                                                  const GALGAS_ctExpressionAST & in_mExpression,
                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mInfixOperatorLocation = in_mInfixOperatorLocation ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mLeftTypeName = in_mLeftTypeName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mRightTypeName = in_mRightTypeName ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST::GALGAS_compileTimeInfixOperatorAST (const cPtr_compileTimeInfixOperatorAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST GALGAS_compileTimeInfixOperatorAST::class_func_new (const GALGAS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                                       const GALGAS_location & in_mInfixOperatorLocation,
                                                                                       const GALGAS_lstring & in_mLeftOperandName,
                                                                                       const GALGAS_lstring & in_mLeftTypeName,
                                                                                       const GALGAS_lstring & in_mRightOperandName,
                                                                                       const GALGAS_lstring & in_mRightTypeName,
                                                                                       const GALGAS_ctExpressionAST & in_mExpression,
                                                                                       const GALGAS_lstring & in_mResultTypeName
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeInfixOperatorAST (in_mInfixOperator, in_mInfixOperatorLocation, in_mLeftOperandName, in_mLeftTypeName, in_mRightOperandName, in_mRightTypeName, in_mExpression, in_mResultTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_compileTimeInfixOperatorEnumeration () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setProperty_mInfixOperator (const GALGAS_compileTimeInfixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_compileTimeInfixOperatorAST::readProperty_mInfixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mInfixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setProperty_mInfixOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mInfixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorAST::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setProperty_mLeftOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorAST::readProperty_mLeftTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mLeftTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setProperty_mLeftTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mLeftTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorAST::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setProperty_mRightOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorAST::readProperty_mRightTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mRightTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setProperty_mRightTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mRightTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compileTimeInfixOperatorAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setProperty_mExpression (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorAST::setProperty_mResultTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixOperatorAST class
//--------------------------------------------------------------------------------------------------

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
mProperty_mInfixOperator (),
mProperty_mInfixOperatorLocation (),
mProperty_mLeftOperandName (),
mProperty_mLeftTypeName (),
mProperty_mRightOperandName (),
mProperty_mRightTypeName (),
mProperty_mExpression (),
mProperty_mResultTypeName () {
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mInfixOperatorLocation = in_mInfixOperatorLocation ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mLeftTypeName = in_mLeftTypeName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mRightTypeName = in_mRightTypeName ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeInfixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ;
}

void cPtr_compileTimeInfixOperatorAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimeInfixOperatorAST:") ;
  mProperty_mInfixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInfixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeInfixOperatorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixOperatorAST (mProperty_mInfixOperator, mProperty_mInfixOperatorLocation, mProperty_mLeftOperandName, mProperty_mLeftTypeName, mProperty_mRightOperandName, mProperty_mRightTypeName, mProperty_mExpression, mProperty_mResultTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixOperatorAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ("compileTimeInfixOperatorAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeInfixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeInfixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeInfixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST GALGAS_compileTimeInfixOperatorAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @compileTimeInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorUsage::cPtr_compileTimeInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeInfixOperatorUsage::objectCompare (const GALGAS_compileTimeInfixOperatorUsage & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage::GALGAS_compileTimeInfixOperatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage GALGAS_compileTimeInfixOperatorUsage::
init_21__21__21_ (const GALGAS_lstring & in_mLeftOperandName,
                  const GALGAS_lstring & in_mRightOperandName,
                  const GALGAS_ctExpressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_compileTimeInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->compileTimeInfixOperatorUsage_init_21__21__21_ (in_mLeftOperandName, in_mRightOperandName, in_mExpression, inCompiler) ;
  const GALGAS_compileTimeInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::
compileTimeInfixOperatorUsage_init_21__21__21_ (const GALGAS_lstring & in_mLeftOperandName,
                                                const GALGAS_lstring & in_mRightOperandName,
                                                const GALGAS_ctExpressionAST & in_mExpression,
                                                Compiler * /* inCompiler */) {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage::GALGAS_compileTimeInfixOperatorUsage (const cPtr_compileTimeInfixOperatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage GALGAS_compileTimeInfixOperatorUsage::class_func_new (const GALGAS_lstring & in_mLeftOperandName,
                                                                                           const GALGAS_lstring & in_mRightOperandName,
                                                                                           const GALGAS_ctExpressionAST & in_mExpression
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeInfixOperatorUsage (in_mLeftOperandName, in_mRightOperandName, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorUsage::setProperty_mLeftOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimeInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorUsage::setProperty_mRightOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compileTimeInfixOperatorUsage::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorUsage::setProperty_mExpression (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorUsage::cPtr_compileTimeInfixOperatorUsage (const GALGAS_lstring & in_mLeftOperandName,
                                                                        const GALGAS_lstring & in_mRightOperandName,
                                                                        const GALGAS_ctExpressionAST & in_mExpression
                                                                        COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mExpression () {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;
}

void cPtr_compileTimeInfixOperatorUsage::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimeInfixOperatorUsage:") ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeInfixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixOperatorUsage (mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ("compileTimeInfixOperatorUsage",
                                                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage GALGAS_compileTimeInfixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
//
//Extension method '@compileTimeInfixOperatorUsage eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::method_eval (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                      const GALGAS_objectIR constinArgument_inRightOperand,
                                                      GALGAS_bigint & outArgument_outResult,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_10766 ;
  GALGAS_omnibusType joker_10750_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_10750_1, var_leftValue_10766, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 273)) ;
  GALGAS_bigint var_rightValue_10826 ;
  GALGAS_omnibusType joker_10810_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_10810_1, var_rightValue_10826, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 274)) ;
  GALGAS_ctMap temp_0 = GALGAS_ctMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 275)) ;
  GALGAS_ctMap var_varMap_10851 = temp_0 ;
  {
  const GALGAS_compileTimeInfixOperatorUsage temp_1 = this ;
  var_varMap_10851.setter_insertKey (temp_1.readProperty_mLeftOperandName (), var_leftValue_10766, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 276)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorUsage temp_2 = this ;
  var_varMap_10851.setter_insertKey (temp_2.readProperty_mRightOperandName (), var_rightValue_10826, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 277)) ;
  }
  const GALGAS_compileTimeInfixOperatorUsage temp_3 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_3.readProperty_mExpression ().ptr (), var_varMap_10851, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 278)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (cPtr_compileTimeInfixOperatorUsage * inObject,
                               const GALGAS_objectIR constin_inLeftOperand,
                               const GALGAS_objectIR constin_inRightOperand,
                               GALGAS_bigint & out_outResult,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_compileTimeInfixOperatorUsage) ;
    inObject->method_eval  (constin_inLeftOperand, constin_inRightOperand, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @compileTimeInfixInfEqualOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixInfEqualOperatorUsage::cPtr_compileTimeInfixInfEqualOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mEqualOperatorUsage (),
mProperty_mLessThanOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeInfixInfEqualOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mEqualOperatorUsage.printNonNullClassInstanceProperties ("mEqualOperatorUsage") ;
    mProperty_mLessThanOperatorUsage.printNonNullClassInstanceProperties ("mLessThanOperatorUsage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeInfixInfEqualOperatorUsage::objectCompare (const GALGAS_compileTimeInfixInfEqualOperatorUsage & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage::GALGAS_compileTimeInfixInfEqualOperatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage GALGAS_compileTimeInfixInfEqualOperatorUsage::
init_21__21_ (const GALGAS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
              const GALGAS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_compileTimeInfixInfEqualOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeInfixInfEqualOperatorUsage (inCompiler COMMA_THERE)) ;
  object->compileTimeInfixInfEqualOperatorUsage_init_21__21_ (in_mEqualOperatorUsage, in_mLessThanOperatorUsage, inCompiler) ;
  const GALGAS_compileTimeInfixInfEqualOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixInfEqualOperatorUsage::
compileTimeInfixInfEqualOperatorUsage_init_21__21_ (const GALGAS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                    const GALGAS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage,
                                                    Compiler * /* inCompiler */) {
  mProperty_mEqualOperatorUsage = in_mEqualOperatorUsage ;
  mProperty_mLessThanOperatorUsage = in_mLessThanOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage::GALGAS_compileTimeInfixInfEqualOperatorUsage (const cPtr_compileTimeInfixInfEqualOperatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage GALGAS_compileTimeInfixInfEqualOperatorUsage::class_func_new (const GALGAS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                                                                           const GALGAS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixInfEqualOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeInfixInfEqualOperatorUsage (in_mEqualOperatorUsage, in_mLessThanOperatorUsage COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage GALGAS_compileTimeInfixInfEqualOperatorUsage::readProperty_mEqualOperatorUsage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_compileTimeInfixOperatorUsage () ;
  }else{
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    return p->mProperty_mEqualOperatorUsage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixInfEqualOperatorUsage::setProperty_mEqualOperatorUsage (const GALGAS_compileTimeInfixOperatorUsage & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    p->mProperty_mEqualOperatorUsage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage GALGAS_compileTimeInfixInfEqualOperatorUsage::readProperty_mLessThanOperatorUsage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_compileTimeInfixOperatorUsage () ;
  }else{
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    return p->mProperty_mLessThanOperatorUsage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixInfEqualOperatorUsage::setProperty_mLessThanOperatorUsage (const GALGAS_compileTimeInfixOperatorUsage & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    p->mProperty_mLessThanOperatorUsage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixInfEqualOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixInfEqualOperatorUsage::cPtr_compileTimeInfixInfEqualOperatorUsage (const GALGAS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                                                        const GALGAS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mEqualOperatorUsage (),
mProperty_mLessThanOperatorUsage () {
  mProperty_mEqualOperatorUsage = in_mEqualOperatorUsage ;
  mProperty_mLessThanOperatorUsage = in_mLessThanOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeInfixInfEqualOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;
}

void cPtr_compileTimeInfixInfEqualOperatorUsage::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimeInfixInfEqualOperatorUsage:") ;
  mProperty_mEqualOperatorUsage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLessThanOperatorUsage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeInfixInfEqualOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixInfEqualOperatorUsage (mProperty_mEqualOperatorUsage, mProperty_mLessThanOperatorUsage COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixInfEqualOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ("compileTimeInfixInfEqualOperatorUsage",
                                                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeInfixInfEqualOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeInfixInfEqualOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeInfixInfEqualOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage GALGAS_compileTimeInfixInfEqualOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @llvmInfixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorAST::cPtr_llvmInfixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mInfixOperator (),
mProperty_mInfixOperatorLocation (),
mProperty_mLeftOperandName (),
mProperty_mLeftTypeName (),
mProperty_mLeftGenericFormalParameterList (),
mProperty_mRightOperandName (),
mProperty_mRightTypeName (),
mProperty_mRightGenericFormalParameterList (),
mProperty_mResultTypeName (),
mProperty_mResultGenericFormalParameterList (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmInfixOperatorAST::objectCompare (const GALGAS_llvmInfixOperatorAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST::GALGAS_llvmInfixOperatorAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST GALGAS_llvmInfixOperatorAST::
init_21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_omnibusInfixOperator & in_mInfixOperator,
                                                  const GALGAS_location & in_mInfixOperatorLocation,
                                                  const GALGAS_lstring & in_mLeftOperandName,
                                                  const GALGAS_lstring & in_mLeftTypeName,
                                                  const GALGAS_genericFormalParameterList & in_mLeftGenericFormalParameterList,
                                                  const GALGAS_lstring & in_mRightOperandName,
                                                  const GALGAS_lstring & in_mRightTypeName,
                                                  const GALGAS_genericFormalParameterList & in_mRightGenericFormalParameterList,
                                                  const GALGAS_lstring & in_mResultTypeName,
                                                  const GALGAS_genericFormalParameterList & in_mResultGenericFormalParameterList,
                                                  const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_llvmInfixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmInfixOperatorAST (inCompiler COMMA_THERE)) ;
  object->llvmInfixOperatorAST_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mInfixOperator, in_mInfixOperatorLocation, in_mLeftOperandName, in_mLeftTypeName, in_mLeftGenericFormalParameterList, in_mRightOperandName, in_mRightTypeName, in_mRightGenericFormalParameterList, in_mResultTypeName, in_mResultGenericFormalParameterList, in_mInstructionList, inCompiler) ;
  const GALGAS_llvmInfixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::
llvmInfixOperatorAST_init_21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_omnibusInfixOperator & in_mInfixOperator,
                                                                       const GALGAS_location & in_mInfixOperatorLocation,
                                                                       const GALGAS_lstring & in_mLeftOperandName,
                                                                       const GALGAS_lstring & in_mLeftTypeName,
                                                                       const GALGAS_genericFormalParameterList & in_mLeftGenericFormalParameterList,
                                                                       const GALGAS_lstring & in_mRightOperandName,
                                                                       const GALGAS_lstring & in_mRightTypeName,
                                                                       const GALGAS_genericFormalParameterList & in_mRightGenericFormalParameterList,
                                                                       const GALGAS_lstring & in_mResultTypeName,
                                                                       const GALGAS_genericFormalParameterList & in_mResultGenericFormalParameterList,
                                                                       const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mInfixOperatorLocation = in_mInfixOperatorLocation ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mLeftTypeName = in_mLeftTypeName ;
  mProperty_mLeftGenericFormalParameterList = in_mLeftGenericFormalParameterList ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mRightTypeName = in_mRightTypeName ;
  mProperty_mRightGenericFormalParameterList = in_mRightGenericFormalParameterList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultGenericFormalParameterList = in_mResultGenericFormalParameterList ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST::GALGAS_llvmInfixOperatorAST (const cPtr_llvmInfixOperatorAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInfixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST GALGAS_llvmInfixOperatorAST::class_func_new (const GALGAS_omnibusInfixOperator & in_mInfixOperator,
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
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_llvmInfixOperatorAST result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmInfixOperatorAST (in_mInfixOperator, in_mInfixOperatorLocation, in_mLeftOperandName, in_mLeftTypeName, in_mLeftGenericFormalParameterList, in_mRightOperandName, in_mRightTypeName, in_mRightGenericFormalParameterList, in_mResultTypeName, in_mResultGenericFormalParameterList, in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_llvmInfixOperatorAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusInfixOperator () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mInfixOperator (const GALGAS_omnibusInfixOperator & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_llvmInfixOperatorAST::readProperty_mInfixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInfixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mInfixOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInfixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorAST::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mLeftOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorAST::readProperty_mLeftTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mLeftTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmInfixOperatorAST::readProperty_mLeftGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mLeftGenericFormalParameterList (const GALGAS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorAST::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mRightOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorAST::readProperty_mRightTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mRightTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmInfixOperatorAST::readProperty_mRightGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mRightGenericFormalParameterList (const GALGAS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mResultTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmInfixOperatorAST::readProperty_mResultGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mResultGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mResultGenericFormalParameterList (const GALGAS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mResultGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmInfixOperatorAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorAST::setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmInfixOperatorAST class
//--------------------------------------------------------------------------------------------------

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
mProperty_mInfixOperator (),
mProperty_mInfixOperatorLocation (),
mProperty_mLeftOperandName (),
mProperty_mLeftTypeName (),
mProperty_mLeftGenericFormalParameterList (),
mProperty_mRightOperandName (),
mProperty_mRightTypeName (),
mProperty_mRightGenericFormalParameterList (),
mProperty_mResultTypeName (),
mProperty_mResultGenericFormalParameterList (),
mProperty_mInstructionList () {
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mInfixOperatorLocation = in_mInfixOperatorLocation ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mLeftTypeName = in_mLeftTypeName ;
  mProperty_mLeftGenericFormalParameterList = in_mLeftGenericFormalParameterList ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mRightTypeName = in_mRightTypeName ;
  mProperty_mRightGenericFormalParameterList = in_mRightGenericFormalParameterList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultGenericFormalParameterList = in_mResultGenericFormalParameterList ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmInfixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorAST ;
}

void cPtr_llvmInfixOperatorAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmInfixOperatorAST:") ;
  mProperty_mInfixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInfixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmInfixOperatorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInfixOperatorAST (mProperty_mInfixOperator, mProperty_mInfixOperatorLocation, mProperty_mLeftOperandName, mProperty_mLeftTypeName, mProperty_mLeftGenericFormalParameterList, mProperty_mRightOperandName, mProperty_mRightTypeName, mProperty_mRightGenericFormalParameterList, mProperty_mResultTypeName, mProperty_mResultGenericFormalParameterList, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmInfixOperatorAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorAST ("llvmInfixOperatorAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmInfixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmInfixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmInfixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST GALGAS_llvmInfixOperatorAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @llvmInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorUsage::cPtr_llvmInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mInfixMangledFunctionName (),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mInfixMangledFunctionName.printNonNullClassInstanceProperties ("mInfixMangledFunctionName") ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmInfixOperatorUsage::objectCompare (const GALGAS_llvmInfixOperatorUsage & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage::GALGAS_llvmInfixOperatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage GALGAS_llvmInfixOperatorUsage::
init_21__21__21__21_ (const GALGAS_string & in_mInfixMangledFunctionName,
                      const GALGAS_lstring & in_mLeftOperandName,
                      const GALGAS_lstring & in_mRightOperandName,
                      const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_llvmInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmInfixOperatorUsage_init_21__21__21__21_ (in_mInfixMangledFunctionName, in_mLeftOperandName, in_mRightOperandName, in_mInstructionList, inCompiler) ;
  const GALGAS_llvmInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorUsage::
llvmInfixOperatorUsage_init_21__21__21__21_ (const GALGAS_string & in_mInfixMangledFunctionName,
                                             const GALGAS_lstring & in_mLeftOperandName,
                                             const GALGAS_lstring & in_mRightOperandName,
                                             const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                             Compiler * /* inCompiler */) {
  mProperty_mInfixMangledFunctionName = in_mInfixMangledFunctionName ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage::GALGAS_llvmInfixOperatorUsage (const cPtr_llvmInfixOperatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage GALGAS_llvmInfixOperatorUsage::class_func_new (const GALGAS_string & in_mInfixMangledFunctionName,
                                                                             const GALGAS_lstring & in_mLeftOperandName,
                                                                             const GALGAS_lstring & in_mRightOperandName,
                                                                             const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_llvmInfixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmInfixOperatorUsage (in_mInfixMangledFunctionName, in_mLeftOperandName, in_mRightOperandName, in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_llvmInfixOperatorUsage::readProperty_mInfixMangledFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mInfixMangledFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorUsage::setProperty_mInfixMangledFunctionName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mInfixMangledFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorUsage::setProperty_mLeftOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorUsage::setProperty_mRightOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmInfixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInfixOperatorUsage::setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorUsage::cPtr_llvmInfixOperatorUsage (const GALGAS_string & in_mInfixMangledFunctionName,
                                                          const GALGAS_lstring & in_mLeftOperandName,
                                                          const GALGAS_lstring & in_mRightOperandName,
                                                          const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mInfixMangledFunctionName (),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
  mProperty_mInfixMangledFunctionName = in_mInfixMangledFunctionName ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;
}

void cPtr_llvmInfixOperatorUsage::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmInfixOperatorUsage:") ;
  mProperty_mInfixMangledFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmInfixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInfixOperatorUsage (mProperty_mInfixMangledFunctionName, mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmInfixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ("llvmInfixOperatorUsage",
                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage GALGAS_llvmInfixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @llvmInlineInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmInlineInfixOperatorUsage::cPtr_llvmInlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmInlineInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmInlineInfixOperatorUsage::objectCompare (const GALGAS_llvmInlineInfixOperatorUsage & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage::GALGAS_llvmInlineInfixOperatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage GALGAS_llvmInlineInfixOperatorUsage::
init_21__21__21_ (const GALGAS_lstring & in_mLeftOperandName,
                  const GALGAS_lstring & in_mRightOperandName,
                  const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_llvmInlineInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmInlineInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmInlineInfixOperatorUsage_init_21__21__21_ (in_mLeftOperandName, in_mRightOperandName, in_mInstructionList, inCompiler) ;
  const GALGAS_llvmInlineInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmInlineInfixOperatorUsage::
llvmInlineInfixOperatorUsage_init_21__21__21_ (const GALGAS_lstring & in_mLeftOperandName,
                                               const GALGAS_lstring & in_mRightOperandName,
                                               const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                               Compiler * /* inCompiler */) {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage::GALGAS_llvmInlineInfixOperatorUsage (const cPtr_llvmInlineInfixOperatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInlineInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage GALGAS_llvmInlineInfixOperatorUsage::class_func_new (const GALGAS_lstring & in_mLeftOperandName,
                                                                                         const GALGAS_lstring & in_mRightOperandName,
                                                                                         const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_llvmInlineInfixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmInlineInfixOperatorUsage (in_mLeftOperandName, in_mRightOperandName, in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInlineInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInlineInfixOperatorUsage::setProperty_mLeftOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmInlineInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInlineInfixOperatorUsage::setProperty_mRightOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmInlineInfixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmInlineInfixOperatorUsage::setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmInlineInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmInlineInfixOperatorUsage::cPtr_llvmInlineInfixOperatorUsage (const GALGAS_lstring & in_mLeftOperandName,
                                                                      const GALGAS_lstring & in_mRightOperandName,
                                                                      const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmInlineInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;
}

void cPtr_llvmInlineInfixOperatorUsage::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmInlineInfixOperatorUsage:") ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmInlineInfixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInlineInfixOperatorUsage (mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmInlineInfixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ("llvmInlineInfixOperatorUsage",
                                                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmInlineInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmInlineInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmInlineInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage GALGAS_llvmInlineInfixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @infixOperatorRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_infixOperatorRoutineIR::cPtr_infixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mSourceType (),
mProperty_mSourceVarName (),
mProperty_mResultType (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_infixOperatorRoutineIR::objectCompare (const GALGAS_infixOperatorRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR::GALGAS_infixOperatorRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR GALGAS_infixOperatorRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                     const GALGAS_bool & in_isRequired,
                                                                     const GALGAS_bool & in_warnsIfUnused,
                                                                     const GALGAS_omnibusType & in_mTargetType,
                                                                     const GALGAS_string & in_mTargetVarName,
                                                                     const GALGAS_omnibusType & in_mSourceType,
                                                                     const GALGAS_string & in_mSourceVarName,
                                                                     const GALGAS_omnibusType & in_mResultType,
                                                                     const GALGAS_stringlist & in_mGeneratedInstructions,
                                                                     const GALGAS_allocaList & in_mAllocaList,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cPtr_infixOperatorRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_infixOperatorRoutineIR (inCompiler COMMA_THERE)) ;
  object->infixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, in_mTargetVarName, in_mSourceType, in_mSourceVarName, in_mResultType, in_mGeneratedInstructions, in_mAllocaList, inCompiler) ;
  const GALGAS_infixOperatorRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_infixOperatorRoutineIR::
infixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                            const GALGAS_bool & in_isRequired,
                                                                                            const GALGAS_bool & in_warnsIfUnused,
                                                                                            const GALGAS_omnibusType & in_mTargetType,
                                                                                            const GALGAS_string & in_mTargetVarName,
                                                                                            const GALGAS_omnibusType & in_mSourceType,
                                                                                            const GALGAS_string & in_mSourceVarName,
                                                                                            const GALGAS_omnibusType & in_mResultType,
                                                                                            const GALGAS_stringlist & in_mGeneratedInstructions,
                                                                                            const GALGAS_allocaList & in_mAllocaList,
                                                                                            Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mSourceType = in_mSourceType ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR::GALGAS_infixOperatorRoutineIR (const cPtr_infixOperatorRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR GALGAS_infixOperatorRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                             const GALGAS_bool & in_isRequired,
                                                                             const GALGAS_bool & in_warnsIfUnused,
                                                                             const GALGAS_omnibusType & in_mTargetType,
                                                                             const GALGAS_string & in_mTargetVarName,
                                                                             const GALGAS_omnibusType & in_mSourceType,
                                                                             const GALGAS_string & in_mSourceVarName,
                                                                             const GALGAS_omnibusType & in_mResultType,
                                                                             const GALGAS_stringlist & in_mGeneratedInstructions,
                                                                             const GALGAS_allocaList & in_mAllocaList
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_infixOperatorRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, in_mTargetVarName, in_mSourceType, in_mSourceVarName, in_mResultType, in_mGeneratedInstructions, in_mAllocaList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_infixOperatorRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setProperty_mTargetType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_infixOperatorRoutineIR::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setProperty_mTargetVarName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_infixOperatorRoutineIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mSourceType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setProperty_mSourceType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_infixOperatorRoutineIR::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setProperty_mSourceVarName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_infixOperatorRoutineIR::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setProperty_mResultType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mResultType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_infixOperatorRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setProperty_mGeneratedInstructions (const GALGAS_stringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_infixOperatorRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_allocaList () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorRoutineIR::setProperty_mAllocaList (const GALGAS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @infixOperatorRoutineIR class
//--------------------------------------------------------------------------------------------------

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
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mSourceType (),
mProperty_mSourceVarName (),
mProperty_mResultType (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mSourceType = in_mSourceType ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_infixOperatorRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;
}

void cPtr_infixOperatorRoutineIR::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@infixOperatorRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGeneratedInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_infixOperatorRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_infixOperatorRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mTargetType, mProperty_mTargetVarName, mProperty_mSourceType, mProperty_mSourceVarName, mProperty_mResultType, mProperty_mGeneratedInstructions, mProperty_mAllocaList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @infixOperatorRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR ("infixOperatorRoutineIR",
                                                                              & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_infixOperatorRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_infixOperatorRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR GALGAS_infixOperatorRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @compiletimePrefixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_compiletimePrefixOperatorAST::cPtr_compiletimePrefixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPrefixOperator (),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mExpression (),
mProperty_mResultTypeName () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compiletimePrefixOperatorAST::objectCompare (const GALGAS_compiletimePrefixOperatorAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST::GALGAS_compiletimePrefixOperatorAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST GALGAS_compiletimePrefixOperatorAST::
init_21__21__21__21__21__21_ (const GALGAS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                              const GALGAS_location & in_mPrefixOperatorLocation,
                              const GALGAS_lstring & in_mReceiverName,
                              const GALGAS_lstring & in_mReceiverTypeName,
                              const GALGAS_ctExpressionAST & in_mExpression,
                              const GALGAS_lstring & in_mResultTypeName,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_compiletimePrefixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_compiletimePrefixOperatorAST (inCompiler COMMA_THERE)) ;
  object->compiletimePrefixOperatorAST_init_21__21__21__21__21__21_ (in_mPrefixOperator, in_mPrefixOperatorLocation, in_mReceiverName, in_mReceiverTypeName, in_mExpression, in_mResultTypeName, inCompiler) ;
  const GALGAS_compiletimePrefixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::
compiletimePrefixOperatorAST_init_21__21__21__21__21__21_ (const GALGAS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                           const GALGAS_location & in_mPrefixOperatorLocation,
                                                           const GALGAS_lstring & in_mReceiverName,
                                                           const GALGAS_lstring & in_mReceiverTypeName,
                                                           const GALGAS_ctExpressionAST & in_mExpression,
                                                           const GALGAS_lstring & in_mResultTypeName,
                                                           Compiler * /* inCompiler */) {
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST::GALGAS_compiletimePrefixOperatorAST (const cPtr_compiletimePrefixOperatorAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compiletimePrefixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST GALGAS_compiletimePrefixOperatorAST::class_func_new (const GALGAS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                                                         const GALGAS_location & in_mPrefixOperatorLocation,
                                                                                         const GALGAS_lstring & in_mReceiverName,
                                                                                         const GALGAS_lstring & in_mReceiverTypeName,
                                                                                         const GALGAS_ctExpressionAST & in_mExpression,
                                                                                         const GALGAS_lstring & in_mResultTypeName
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_compiletimePrefixOperatorAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compiletimePrefixOperatorAST (in_mPrefixOperator, in_mPrefixOperatorLocation, in_mReceiverName, in_mReceiverTypeName, in_mExpression, in_mResultTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorEnumeration GALGAS_compiletimePrefixOperatorAST::readProperty_mPrefixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_compileTimePrefixOperatorEnumeration () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setProperty_mPrefixOperator (const GALGAS_compileTimePrefixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_compiletimePrefixOperatorAST::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setProperty_mPrefixOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compiletimePrefixOperatorAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setProperty_mReceiverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compiletimePrefixOperatorAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setProperty_mReceiverTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compiletimePrefixOperatorAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setProperty_mExpression (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compiletimePrefixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compiletimePrefixOperatorAST::setProperty_mResultTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compiletimePrefixOperatorAST class
//--------------------------------------------------------------------------------------------------

cPtr_compiletimePrefixOperatorAST::cPtr_compiletimePrefixOperatorAST (const GALGAS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                                      const GALGAS_location & in_mPrefixOperatorLocation,
                                                                      const GALGAS_lstring & in_mReceiverName,
                                                                      const GALGAS_lstring & in_mReceiverTypeName,
                                                                      const GALGAS_ctExpressionAST & in_mExpression,
                                                                      const GALGAS_lstring & in_mResultTypeName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mPrefixOperator (),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mExpression (),
mProperty_mResultTypeName () {
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compiletimePrefixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ;
}

void cPtr_compiletimePrefixOperatorAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@compiletimePrefixOperatorAST:") ;
  mProperty_mPrefixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compiletimePrefixOperatorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compiletimePrefixOperatorAST (mProperty_mPrefixOperator, mProperty_mPrefixOperatorLocation, mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mExpression, mProperty_mResultTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compiletimePrefixOperatorAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ("compiletimePrefixOperatorAST",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compiletimePrefixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compiletimePrefixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compiletimePrefixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST GALGAS_compiletimePrefixOperatorAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @compileTimePrefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimePrefixOperatorUsage::cPtr_compileTimePrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverOperandName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimePrefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixOperatorLocation.printNonNullClassInstanceProperties ("mPrefixOperatorLocation") ;
    mProperty_mReceiverOperandName.printNonNullClassInstanceProperties ("mReceiverOperandName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimePrefixOperatorUsage::objectCompare (const GALGAS_compileTimePrefixOperatorUsage & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage::GALGAS_compileTimePrefixOperatorUsage (void) :
GALGAS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage GALGAS_compileTimePrefixOperatorUsage::
init_21__21__21_ (const GALGAS_location & in_mPrefixOperatorLocation,
                  const GALGAS_lstring & in_mReceiverOperandName,
                  const GALGAS_ctExpressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_compileTimePrefixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_compileTimePrefixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->compileTimePrefixOperatorUsage_init_21__21__21_ (in_mPrefixOperatorLocation, in_mReceiverOperandName, in_mExpression, inCompiler) ;
  const GALGAS_compileTimePrefixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimePrefixOperatorUsage::
compileTimePrefixOperatorUsage_init_21__21__21_ (const GALGAS_location & in_mPrefixOperatorLocation,
                                                 const GALGAS_lstring & in_mReceiverOperandName,
                                                 const GALGAS_ctExpressionAST & in_mExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverOperandName = in_mReceiverOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage::GALGAS_compileTimePrefixOperatorUsage (const cPtr_compileTimePrefixOperatorUsage * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimePrefixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage GALGAS_compileTimePrefixOperatorUsage::class_func_new (const GALGAS_location & in_mPrefixOperatorLocation,
                                                                                             const GALGAS_lstring & in_mReceiverOperandName,
                                                                                             const GALGAS_ctExpressionAST & in_mExpression
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_compileTimePrefixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimePrefixOperatorUsage (in_mPrefixOperatorLocation, in_mReceiverOperandName, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_compileTimePrefixOperatorUsage::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimePrefixOperatorUsage::setProperty_mPrefixOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_compileTimePrefixOperatorUsage::readProperty_mReceiverOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mReceiverOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimePrefixOperatorUsage::setProperty_mReceiverOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mReceiverOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_compileTimePrefixOperatorUsage::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimePrefixOperatorUsage::setProperty_mExpression (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimePrefixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimePrefixOperatorUsage::cPtr_compileTimePrefixOperatorUsage (const GALGAS_location & in_mPrefixOperatorLocation,
                                                                          const GALGAS_lstring & in_mReceiverOperandName,
                                                                          const GALGAS_ctExpressionAST & in_mExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverOperandName (),
mProperty_mExpression () {
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverOperandName = in_mReceiverOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimePrefixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;
}

void cPtr_compileTimePrefixOperatorUsage::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimePrefixOperatorUsage:") ;
  mProperty_mPrefixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimePrefixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimePrefixOperatorUsage (mProperty_mPrefixOperatorLocation, mProperty_mReceiverOperandName, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimePrefixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ("compileTimePrefixOperatorUsage",
                                                                                      & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimePrefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimePrefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimePrefixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage GALGAS_compileTimePrefixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @llvmPrefixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmPrefixOperatorAST::cPtr_llvmPrefixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPrefixOperator (),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mInstructionList (),
mProperty_mResultTypeName () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmPrefixOperatorAST::objectCompare (const GALGAS_llvmPrefixOperatorAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST::GALGAS_llvmPrefixOperatorAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST GALGAS_llvmPrefixOperatorAST::
init_21__21__21__21__21__21_ (const GALGAS_llvmPrefixOperatorEnumeration & in_mPrefixOperator,
                              const GALGAS_location & in_mPrefixOperatorLocation,
                              const GALGAS_lstring & in_mReceiverName,
                              const GALGAS_lstring & in_mReceiverTypeName,
                              const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                              const GALGAS_lstring & in_mResultTypeName,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_llvmPrefixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmPrefixOperatorAST (inCompiler COMMA_THERE)) ;
  object->llvmPrefixOperatorAST_init_21__21__21__21__21__21_ (in_mPrefixOperator, in_mPrefixOperatorLocation, in_mReceiverName, in_mReceiverTypeName, in_mInstructionList, in_mResultTypeName, inCompiler) ;
  const GALGAS_llvmPrefixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorAST::
llvmPrefixOperatorAST_init_21__21__21__21__21__21_ (const GALGAS_llvmPrefixOperatorEnumeration & in_mPrefixOperator,
                                                    const GALGAS_location & in_mPrefixOperatorLocation,
                                                    const GALGAS_lstring & in_mReceiverName,
                                                    const GALGAS_lstring & in_mReceiverTypeName,
                                                    const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                                    const GALGAS_lstring & in_mResultTypeName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST::GALGAS_llvmPrefixOperatorAST (const cPtr_llvmPrefixOperatorAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmPrefixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST GALGAS_llvmPrefixOperatorAST::class_func_new (const GALGAS_llvmPrefixOperatorEnumeration & in_mPrefixOperator,
                                                                           const GALGAS_location & in_mPrefixOperatorLocation,
                                                                           const GALGAS_lstring & in_mReceiverName,
                                                                           const GALGAS_lstring & in_mReceiverTypeName,
                                                                           const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                                                           const GALGAS_lstring & in_mResultTypeName
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorAST result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmPrefixOperatorAST (in_mPrefixOperator, in_mPrefixOperatorLocation, in_mReceiverName, in_mReceiverTypeName, in_mInstructionList, in_mResultTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorEnumeration GALGAS_llvmPrefixOperatorAST::readProperty_mPrefixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmPrefixOperatorEnumeration () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setProperty_mPrefixOperator (const GALGAS_llvmPrefixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_llvmPrefixOperatorAST::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setProperty_mPrefixOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmPrefixOperatorAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setProperty_mReceiverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmPrefixOperatorAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setProperty_mReceiverTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmPrefixOperatorAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmPrefixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorAST::setProperty_mResultTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmPrefixOperatorAST class
//--------------------------------------------------------------------------------------------------

cPtr_llvmPrefixOperatorAST::cPtr_llvmPrefixOperatorAST (const GALGAS_llvmPrefixOperatorEnumeration & in_mPrefixOperator,
                                                        const GALGAS_location & in_mPrefixOperatorLocation,
                                                        const GALGAS_lstring & in_mReceiverName,
                                                        const GALGAS_lstring & in_mReceiverTypeName,
                                                        const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                                        const GALGAS_lstring & in_mResultTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mPrefixOperator (),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mInstructionList (),
mProperty_mResultTypeName () {
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmPrefixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorAST ;
}

void cPtr_llvmPrefixOperatorAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmPrefixOperatorAST:") ;
  mProperty_mPrefixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmPrefixOperatorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmPrefixOperatorAST (mProperty_mPrefixOperator, mProperty_mPrefixOperatorLocation, mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mInstructionList, mProperty_mResultTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmPrefixOperatorAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST ("llvmPrefixOperatorAST",
                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmPrefixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmPrefixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmPrefixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST GALGAS_llvmPrefixOperatorAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @llvmPrefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmPrefixOperatorUsage::cPtr_llvmPrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mPrefixMangledFunctionName (),
mProperty_mReceiverOperandName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmPrefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixMangledFunctionName.printNonNullClassInstanceProperties ("mPrefixMangledFunctionName") ;
    mProperty_mReceiverOperandName.printNonNullClassInstanceProperties ("mReceiverOperandName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmPrefixOperatorUsage::objectCompare (const GALGAS_llvmPrefixOperatorUsage & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage::GALGAS_llvmPrefixOperatorUsage (void) :
GALGAS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage GALGAS_llvmPrefixOperatorUsage::
init_21__21__21_ (const GALGAS_string & in_mPrefixMangledFunctionName,
                  const GALGAS_lstring & in_mReceiverOperandName,
                  const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_llvmPrefixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmPrefixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmPrefixOperatorUsage_init_21__21__21_ (in_mPrefixMangledFunctionName, in_mReceiverOperandName, in_mInstructionList, inCompiler) ;
  const GALGAS_llvmPrefixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorUsage::
llvmPrefixOperatorUsage_init_21__21__21_ (const GALGAS_string & in_mPrefixMangledFunctionName,
                                          const GALGAS_lstring & in_mReceiverOperandName,
                                          const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                          Compiler * /* inCompiler */) {
  mProperty_mPrefixMangledFunctionName = in_mPrefixMangledFunctionName ;
  mProperty_mReceiverOperandName = in_mReceiverOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage::GALGAS_llvmPrefixOperatorUsage (const cPtr_llvmPrefixOperatorUsage * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmPrefixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage GALGAS_llvmPrefixOperatorUsage::class_func_new (const GALGAS_string & in_mPrefixMangledFunctionName,
                                                                               const GALGAS_lstring & in_mReceiverOperandName,
                                                                               const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmPrefixOperatorUsage (in_mPrefixMangledFunctionName, in_mReceiverOperandName, in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_llvmPrefixOperatorUsage::readProperty_mPrefixMangledFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    return p->mProperty_mPrefixMangledFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorUsage::setProperty_mPrefixMangledFunctionName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    p->mProperty_mPrefixMangledFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmPrefixOperatorUsage::readProperty_mReceiverOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    return p->mProperty_mReceiverOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorUsage::setProperty_mReceiverOperandName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    p->mProperty_mReceiverOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmPrefixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorUsage::setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmPrefixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmPrefixOperatorUsage::cPtr_llvmPrefixOperatorUsage (const GALGAS_string & in_mPrefixMangledFunctionName,
                                                            const GALGAS_lstring & in_mReceiverOperandName,
                                                            const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                            COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE),
mProperty_mPrefixMangledFunctionName (),
mProperty_mReceiverOperandName (),
mProperty_mInstructionList () {
  mProperty_mPrefixMangledFunctionName = in_mPrefixMangledFunctionName ;
  mProperty_mReceiverOperandName = in_mReceiverOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmPrefixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;
}

void cPtr_llvmPrefixOperatorUsage::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmPrefixOperatorUsage:") ;
  mProperty_mPrefixMangledFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmPrefixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmPrefixOperatorUsage (mProperty_mPrefixMangledFunctionName, mProperty_mReceiverOperandName, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmPrefixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ("llvmPrefixOperatorUsage",
                                                                               & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmPrefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmPrefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmPrefixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage GALGAS_llvmPrefixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @prefixOperatorRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorRoutineIR::cPtr_prefixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mReceiverVarName (),
mProperty_mResultType (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_prefixOperatorRoutineIR::objectCompare (const GALGAS_prefixOperatorRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR::GALGAS_prefixOperatorRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR GALGAS_prefixOperatorRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                             const GALGAS_bool & in_isRequired,
                                                             const GALGAS_bool & in_warnsIfUnused,
                                                             const GALGAS_omnibusType & in_mReceiverType,
                                                             const GALGAS_string & in_mReceiverVarName,
                                                             const GALGAS_omnibusType & in_mResultType,
                                                             const GALGAS_stringlist & in_mGeneratedInstructions,
                                                             const GALGAS_allocaList & in_mAllocaList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_prefixOperatorRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_prefixOperatorRoutineIR (inCompiler COMMA_THERE)) ;
  object->prefixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mReceiverType, in_mReceiverVarName, in_mResultType, in_mGeneratedInstructions, in_mAllocaList, inCompiler) ;
  const GALGAS_prefixOperatorRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorRoutineIR::
prefixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                     const GALGAS_bool & in_isRequired,
                                                                                     const GALGAS_bool & in_warnsIfUnused,
                                                                                     const GALGAS_omnibusType & in_mReceiverType,
                                                                                     const GALGAS_string & in_mReceiverVarName,
                                                                                     const GALGAS_omnibusType & in_mResultType,
                                                                                     const GALGAS_stringlist & in_mGeneratedInstructions,
                                                                                     const GALGAS_allocaList & in_mAllocaList,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mReceiverVarName = in_mReceiverVarName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR::GALGAS_prefixOperatorRoutineIR (const cPtr_prefixOperatorRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR GALGAS_prefixOperatorRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                               const GALGAS_bool & in_isRequired,
                                                                               const GALGAS_bool & in_warnsIfUnused,
                                                                               const GALGAS_omnibusType & in_mReceiverType,
                                                                               const GALGAS_string & in_mReceiverVarName,
                                                                               const GALGAS_omnibusType & in_mResultType,
                                                                               const GALGAS_stringlist & in_mGeneratedInstructions,
                                                                               const GALGAS_allocaList & in_mAllocaList
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_prefixOperatorRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mReceiverType, in_mReceiverVarName, in_mResultType, in_mGeneratedInstructions, in_mAllocaList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_prefixOperatorRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorRoutineIR::setProperty_mReceiverType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_prefixOperatorRoutineIR::readProperty_mReceiverVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mReceiverVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorRoutineIR::setProperty_mReceiverVarName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mReceiverVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_prefixOperatorRoutineIR::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorRoutineIR::setProperty_mResultType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mResultType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_prefixOperatorRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorRoutineIR::setProperty_mGeneratedInstructions (const GALGAS_stringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_prefixOperatorRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_allocaList () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorRoutineIR::setProperty_mAllocaList (const GALGAS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefixOperatorRoutineIR class
//--------------------------------------------------------------------------------------------------

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
mProperty_mReceiverType (),
mProperty_mReceiverVarName (),
mProperty_mResultType (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mReceiverVarName = in_mReceiverVarName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefixOperatorRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;
}

void cPtr_prefixOperatorRoutineIR::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@prefixOperatorRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGeneratedInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefixOperatorRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefixOperatorRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mReceiverType, mProperty_mReceiverVarName, mProperty_mResultType, mProperty_mGeneratedInstructions, mProperty_mAllocaList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ("prefixOperatorRoutineIR",
                                                                               & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR GALGAS_prefixOperatorRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @checkInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_checkInstructionAST::cPtr_checkInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mCheckMessage (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_checkInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCheckMessage.printNonNullClassInstanceProperties ("mCheckMessage") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_checkInstructionAST::objectCompare (const GALGAS_checkInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST::GALGAS_checkInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_lstring & in_mCheckMessage,
                  const GALGAS_expressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_checkInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_checkInstructionAST (inCompiler COMMA_THERE)) ;
  object->checkInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mCheckMessage, in_mExpression, inCompiler) ;
  const GALGAS_checkInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_checkInstructionAST::
checkInstructionAST_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_lstring & in_mCheckMessage,
                                      const GALGAS_expressionAST & in_mExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCheckMessage = in_mCheckMessage ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST::GALGAS_checkInstructionAST (const cPtr_checkInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_checkInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_lstring & in_mCheckMessage,
                                                                       const GALGAS_expressionAST & in_mExpression
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_checkInstructionAST (in_mInstructionLocation, in_mCheckMessage, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_checkInstructionAST::readProperty_mCheckMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    return p->mProperty_mCheckMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkInstructionAST::setProperty_mCheckMessage (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    p->mProperty_mCheckMessage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_checkInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkInstructionAST::setProperty_mExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @checkInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_checkInstructionAST::cPtr_checkInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_lstring & in_mCheckMessage,
                                                    const GALGAS_expressionAST & in_mExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCheckMessage (),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCheckMessage = in_mCheckMessage ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_checkInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

void cPtr_checkInstructionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@checkInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCheckMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_checkInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_checkInstructionAST (mProperty_mInstructionLocation, mProperty_mCheckMessage, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @checkInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkInstructionAST ("checkInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @assignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTargetAST (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetAST.printNonNullClassInstanceProperties ("mTargetAST") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assignmentInstructionAST::objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_LValueAST & in_mTargetAST,
                  const GALGAS_expressionAST & in_mSourceExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_assignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_assignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->assignmentInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mTargetAST, in_mSourceExpression, inCompiler) ;
  const GALGAS_assignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::
assignmentInstructionAST_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_LValueAST & in_mTargetAST,
                                           const GALGAS_expressionAST & in_mSourceExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetAST = in_mTargetAST ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                 const GALGAS_LValueAST & in_mTargetAST,
                                                                                 const GALGAS_expressionAST & in_mSourceExpression
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionAST (in_mInstructionLocation, in_mTargetAST, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueAST GALGAS_assignmentInstructionAST::readProperty_mTargetAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_LValueAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mTargetAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstructionAST::setProperty_mTargetAST (const GALGAS_LValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mTargetAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_assignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstructionAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_LValueAST & in_mTargetAST,
                                                              const GALGAS_expressionAST & in_mSourceExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetAST (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetAST = in_mTargetAST ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@assignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetAST, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @assignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValueInAssignment'
//
//--------------------------------------------------------------------------------------------------

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
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_LValueAST temp_1 = inObject ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("instruction-assignment.galgas", 122)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_LValueAST temp_3 = inObject ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 123)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        {
        const GALGAS_LValueAST temp_5 = inObject ;
        routine_analyzeSelfLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, temp_5.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 125)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_6301 ;
    const GALGAS_LValueAST temp_6 = inObject ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_6.readProperty_mIdentifier (), var_entity_6301, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 141)) ;
    switch (var_entity_6301.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        const GALGAS_LValueAST temp_7 = inObject ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a task has no value"), fixItArray8  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 144)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        const GALGAS_LValueAST temp_9 = inObject ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a driver has no value"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 146)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        const GALGAS_LValueAST temp_11 = inObject ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a global constant cannot be written"), fixItArray12  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 148)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const GALGAS_LValueAST temp_13 = inObject ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a local constant cannot be written"), fixItArray14  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 150)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const GALGAS_LValueAST temp_15 = inObject ;
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a global sync instance is not allowed here"), fixItArray16  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 152)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_7667 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_6301.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_6964_variableType = extractPtr_7667->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_6986_omnibusName = extractPtr_7667->mAssociatedValue1 ;
        {
        const GALGAS_LValueAST temp_17 = inObject ;
        const GALGAS_LValueAST temp_18 = inObject ;
        routine_analyzeVariableInLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F_variableName_3F_llvmName_3F_type_3F__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, temp_17.readProperty_mIdentifier (), function_llvmNameForLocalVariable (extractedValue_6986_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 166)), extractedValue_6964_variableType, temp_18.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 154)) ;
        }
      }
      break ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @controlRegisterAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mAssignmentKind (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_controlRegisterAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
    mProperty_mAssignmentKind.printNonNullClassInstanceProperties ("mAssignmentKind") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_controlRegisterAssignmentInstructionAST::objectCompare (const GALGAS_controlRegisterAssignmentInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST::GALGAS_controlRegisterAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                      const GALGAS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                      const GALGAS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_controlRegisterAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_controlRegisterAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mControlRegisterLValue, in_mAssignmentKind, in_mSourceExpression, inCompiler) ;
  const GALGAS_controlRegisterAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::
controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                              const GALGAS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                              const GALGAS_expressionAST & in_mSourceExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mAssignmentKind = in_mAssignmentKind ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST::GALGAS_controlRegisterAssignmentInstructionAST (const cPtr_controlRegisterAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                               const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                                               const GALGAS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                                                                               const GALGAS_expressionAST & in_mSourceExpression
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_controlRegisterAssignmentInstructionAST (in_mInstructionLocation, in_mControlRegisterLValue, in_mAssignmentKind, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterAssignmentInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterLValueAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentInstructionAST::setProperty_mControlRegisterLValue (const GALGAS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind GALGAS_controlRegisterAssignmentInstructionAST::readProperty_mAssignmentKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterAssignmentOperatorKind () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mAssignmentKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentInstructionAST::setProperty_mAssignmentKind (const GALGAS_controlRegisterAssignmentOperatorKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mAssignmentKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_controlRegisterAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentInstructionAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @controlRegisterAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                            const GALGAS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mAssignmentKind (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mAssignmentKind = in_mAssignmentKind ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_controlRegisterAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

void cPtr_controlRegisterAssignmentInstructionAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@controlRegisterAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignmentKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_controlRegisterAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_controlRegisterAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mAssignmentKind, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterAssignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ("controlRegisterAssignmentInstructionAST",
                                                                                               & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @sliceAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceAssignmentList (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sliceAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mSliceAssignmentList.printNonNullClassInstanceProperties ("mSliceAssignmentList") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mSourceExpressionLocation.printNonNullClassInstanceProperties ("mSourceExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sliceAssignmentInstructionAST::objectCompare (const GALGAS_sliceAssignmentInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST::GALGAS_sliceAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_lstring & in_mTypeName,
                          const GALGAS_sliceAssignmentListAST & in_mSliceAssignmentList,
                          const GALGAS_expressionAST & in_mSourceExpression,
                          const GALGAS_location & in_mSourceExpressionLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_sliceAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_sliceAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->sliceAssignmentInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mTypeName, in_mSliceAssignmentList, in_mSourceExpression, in_mSourceExpressionLocation, inCompiler) ;
  const GALGAS_sliceAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sliceAssignmentInstructionAST::
sliceAssignmentInstructionAST_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                        const GALGAS_location & in_mSourceExpressionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceAssignmentList = in_mSliceAssignmentList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST::GALGAS_sliceAssignmentInstructionAST (const cPtr_sliceAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sliceAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                           const GALGAS_lstring & in_mTypeName,
                                                                                           const GALGAS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                                           const GALGAS_expressionAST & in_mSourceExpression,
                                                                                           const GALGAS_location & in_mSourceExpressionLocation
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_sliceAssignmentInstructionAST (in_mInstructionLocation, in_mTypeName, in_mSliceAssignmentList, in_mSourceExpression, in_mSourceExpressionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sliceAssignmentInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentInstructionAST::readProperty_mSliceAssignmentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_sliceAssignmentListAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSliceAssignmentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setProperty_mSliceAssignmentList (const GALGAS_sliceAssignmentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSliceAssignmentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_sliceAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_sliceAssignmentInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setProperty_mSourceExpressionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sliceAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mTypeName,
                                                                        const GALGAS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                                        const GALGAS_location & in_mSourceExpressionLocation
                                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceAssignmentList (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceAssignmentList = in_mSliceAssignmentList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sliceAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

void cPtr_sliceAssignmentInstructionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@sliceAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSliceAssignmentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sliceAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sliceAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mSliceAssignmentList, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sliceAssignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ("sliceAssignmentInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @bitbandInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionAST::cPtr_bitbandInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mBitExpression (),
mProperty_mBitExpressionLocation (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_bitbandInstructionAST::objectCompare (const GALGAS_bitbandInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST::GALGAS_bitbandInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST::
init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                              const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                              const GALGAS_expressionAST & in_mBitExpression,
                              const GALGAS_location & in_mBitExpressionLocation,
                              const GALGAS_expressionAST & in_mSourceExpression,
                              const GALGAS_location & in_mSourceExpressionLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_bitbandInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_bitbandInstructionAST (inCompiler COMMA_THERE)) ;
  object->bitbandInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mControlRegisterLValue, in_mBitExpression, in_mBitExpressionLocation, in_mSourceExpression, in_mSourceExpressionLocation, inCompiler) ;
  const GALGAS_bitbandInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::
bitbandInstructionAST_init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                    const GALGAS_expressionAST & in_mBitExpression,
                                                    const GALGAS_location & in_mBitExpressionLocation,
                                                    const GALGAS_expressionAST & in_mSourceExpression,
                                                    const GALGAS_location & in_mSourceExpressionLocation,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mBitExpression = in_mBitExpression ;
  mProperty_mBitExpressionLocation = in_mBitExpressionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST::GALGAS_bitbandInstructionAST (const cPtr_bitbandInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                           const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                           const GALGAS_expressionAST & in_mBitExpression,
                                                                           const GALGAS_location & in_mBitExpressionLocation,
                                                                           const GALGAS_expressionAST & in_mSourceExpression,
                                                                           const GALGAS_location & in_mSourceExpressionLocation
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_bitbandInstructionAST (in_mInstructionLocation, in_mControlRegisterLValue, in_mBitExpression, in_mBitExpressionLocation, in_mSourceExpression, in_mSourceExpressionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_bitbandInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterLValueAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setProperty_mControlRegisterLValue (const GALGAS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_bitbandInstructionAST::readProperty_mBitExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mBitExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setProperty_mBitExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mBitExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_bitbandInstructionAST::readProperty_mBitExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mBitExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setProperty_mBitExpressionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mBitExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_bitbandInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_bitbandInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setProperty_mSourceExpressionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitbandInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionAST::cPtr_bitbandInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                        const GALGAS_expressionAST & in_mBitExpression,
                                                        const GALGAS_location & in_mBitExpressionLocation,
                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                        const GALGAS_location & in_mSourceExpressionLocation
                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mBitExpression (),
mProperty_mBitExpressionLocation (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mBitExpression = in_mBitExpression ;
  mProperty_mBitExpressionLocation = in_mBitExpressionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitbandInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

void cPtr_bitbandInstructionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@bitbandInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitbandInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitbandInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mBitExpression, mProperty_mBitExpressionLocation, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bitbandInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionAST ("bitbandInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitbandInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitbandInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitbandInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @varInstructionWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInstructionWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_varInstructionWithAssignmentAST::objectCompare (const GALGAS_varInstructionWithAssignmentAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_lstring & in_mVarName,
                      const GALGAS_lstring & in_mOptionalTypeName,
                      const GALGAS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_varInstructionWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_varInstructionWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->varInstructionWithAssignmentAST_init_21__21__21__21_ (in_mInstructionLocation, in_mVarName, in_mOptionalTypeName, in_mSourceExpression, inCompiler) ;
  const GALGAS_varInstructionWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::
varInstructionWithAssignmentAST_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mVarName,
                                                      const GALGAS_lstring & in_mOptionalTypeName,
                                                      const GALGAS_expressionAST & in_mSourceExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mVarName,
                                                                                               const GALGAS_lstring & in_mOptionalTypeName,
                                                                                               const GALGAS_expressionAST & in_mSourceExpression
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_varInstructionWithAssignmentAST (in_mInstructionLocation, in_mVarName, in_mOptionalTypeName, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varInstructionWithAssignmentAST::setProperty_mVarName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varInstructionWithAssignmentAST::setProperty_mOptionalTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_varInstructionWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varInstructionWithAssignmentAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInstructionWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mVarName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

void cPtr_varInstructionWithAssignmentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@varInstructionWithAssignmentAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mOptionalTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @varInstructionWithAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ("varInstructionWithAssignmentAST",
                                                                                       & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @varDeclarationInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_varDeclarationInstructionAST::cPtr_varDeclarationInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varDeclarationInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_varDeclarationInstructionAST::objectCompare (const GALGAS_varDeclarationInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST::GALGAS_varDeclarationInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST GALGAS_varDeclarationInstructionAST::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_lstring & in_mVarName,
                  const GALGAS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_varDeclarationInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_varDeclarationInstructionAST (inCompiler COMMA_THERE)) ;
  object->varDeclarationInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mVarName, in_mTypeName, inCompiler) ;
  const GALGAS_varDeclarationInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::
varDeclarationInstructionAST_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mVarName,
                                               const GALGAS_lstring & in_mTypeName,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST::GALGAS_varDeclarationInstructionAST (const cPtr_varDeclarationInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varDeclarationInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST GALGAS_varDeclarationInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                         const GALGAS_lstring & in_mVarName,
                                                                                         const GALGAS_lstring & in_mTypeName
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_varDeclarationInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_varDeclarationInstructionAST (in_mInstructionLocation, in_mVarName, in_mTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varDeclarationInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varDeclarationInstructionAST::setProperty_mVarName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varDeclarationInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varDeclarationInstructionAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varDeclarationInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_varDeclarationInstructionAST::cPtr_varDeclarationInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mVarName,
                                                                      const GALGAS_lstring & in_mTypeName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varDeclarationInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST ;
}

void cPtr_varDeclarationInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@varDeclarationInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varDeclarationInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varDeclarationInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @varDeclarationInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST ("varDeclarationInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varDeclarationInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varDeclarationInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varDeclarationInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST GALGAS_varDeclarationInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @letInstructionWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_letInstructionWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_letInstructionWithAssignmentAST::objectCompare (const GALGAS_letInstructionWithAssignmentAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_lstring & in_mConstantName,
                      const GALGAS_lstring & in_mOptionalTypeName,
                      const GALGAS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_letInstructionWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_letInstructionWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->letInstructionWithAssignmentAST_init_21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mOptionalTypeName, in_mSourceExpression, inCompiler) ;
  const GALGAS_letInstructionWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_letInstructionWithAssignmentAST::
letInstructionWithAssignmentAST_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mConstantName,
                                                      const GALGAS_lstring & in_mOptionalTypeName,
                                                      const GALGAS_expressionAST & in_mSourceExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mConstantName,
                                                                                               const GALGAS_lstring & in_mOptionalTypeName,
                                                                                               const GALGAS_expressionAST & in_mSourceExpression
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_letInstructionWithAssignmentAST (in_mInstructionLocation, in_mConstantName, in_mOptionalTypeName, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_letInstructionWithAssignmentAST::setProperty_mConstantName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_letInstructionWithAssignmentAST::setProperty_mOptionalTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_letInstructionWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_letInstructionWithAssignmentAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @letInstructionWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mConstantName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_letInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

void cPtr_letInstructionWithAssignmentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@letInstructionWithAssignmentAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_letInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_letInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mOptionalTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @letInstructionWithAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ("letInstructionWithAssignmentAST",
                                                                                       & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_letInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_letInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
// @forInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionAST::cPtr_forInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mIteratedObject (),
mProperty_mWhileExpression (),
mProperty_mEndOf_5F_whileExpression (),
mProperty_mStaticWhileExpression (),
mProperty_mDoInstructionList (),
mProperty_mEndOf_5F_for_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::
init_21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_lstring & in_mVarName,
                                      const GALGAS_lstring & in_mIteratedObject,
                                      const GALGAS_expressionAST & in_mWhileExpression,
                                      const GALGAS_location & in_mEndOf_5F_whileExpression,
                                      const GALGAS_bool & in_mStaticWhileExpression,
                                      const GALGAS_instructionListAST & in_mDoInstructionList,
                                      const GALGAS_location & in_mEndOf_5F_for_5F_instruction,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_forInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_forInstructionAST (inCompiler COMMA_THERE)) ;
  object->forInstructionAST_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVarName, in_mIteratedObject, in_mWhileExpression, in_mEndOf_5F_whileExpression, in_mStaticWhileExpression, in_mDoInstructionList, in_mEndOf_5F_for_5F_instruction, inCompiler) ;
  const GALGAS_forInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::
forInstructionAST_init_21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_lstring & in_mVarName,
                                                        const GALGAS_lstring & in_mIteratedObject,
                                                        const GALGAS_expressionAST & in_mWhileExpression,
                                                        const GALGAS_location & in_mEndOf_5F_whileExpression,
                                                        const GALGAS_bool & in_mStaticWhileExpression,
                                                        const GALGAS_instructionListAST & in_mDoInstructionList,
                                                        const GALGAS_location & in_mEndOf_5F_for_5F_instruction,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mIteratedObject = in_mIteratedObject ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mEndOf_5F_whileExpression = in_mEndOf_5F_whileExpression ;
  mProperty_mStaticWhileExpression = in_mStaticWhileExpression ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOf_5F_for_5F_instruction = in_mEndOf_5F_for_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_lstring & in_mVarName,
                                                                   const GALGAS_lstring & in_mIteratedObject,
                                                                   const GALGAS_expressionAST & in_mWhileExpression,
                                                                   const GALGAS_location & in_mEndOf_5F_whileExpression,
                                                                   const GALGAS_bool & in_mStaticWhileExpression,
                                                                   const GALGAS_instructionListAST & in_mDoInstructionList,
                                                                   const GALGAS_location & in_mEndOf_5F_for_5F_instruction
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (in_mInstructionLocation, in_mVarName, in_mIteratedObject, in_mWhileExpression, in_mEndOf_5F_whileExpression, in_mStaticWhileExpression, in_mDoInstructionList, in_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mVarName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionAST::readProperty_mIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mIteratedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mIteratedObject (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mIteratedObject = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_forInstructionAST::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mWhileExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mWhileExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_whileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_whileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mEndOf_5F_whileExpression (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_whileExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_forInstructionAST::readProperty_mStaticWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mStaticWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mStaticWhileExpression (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mStaticWhileExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_forInstructionAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mDoInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_for_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_for_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mEndOf_5F_for_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_for_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionAST class
//--------------------------------------------------------------------------------------------------

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
mProperty_mVarName (),
mProperty_mIteratedObject (),
mProperty_mWhileExpression (),
mProperty_mEndOf_5F_whileExpression (),
mProperty_mStaticWhileExpression (),
mProperty_mDoInstructionList (),
mProperty_mEndOf_5F_for_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mIteratedObject = in_mIteratedObject ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mEndOf_5F_whileExpression = in_mEndOf_5F_whileExpression ;
  mProperty_mStaticWhileExpression = in_mStaticWhileExpression ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOf_5F_for_5F_instruction = in_mEndOf_5F_for_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@forInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_whileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStaticWhileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_for_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mIteratedObject, mProperty_mWhileExpression, mProperty_mEndOf_5F_whileExpression, mProperty_mStaticWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @forInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
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

