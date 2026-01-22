#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@callInstructionAST baseGuardAnalyze'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_baseGuardAnalyze (cPtr_callInstructionAST * inObject,
                                           const GGS_omnibusType constin_inSelfType,
                                           const GGS_routineAttributes constin_inRoutineAttributes,
                                           const GGS_semanticContext constin_inContext,
                                           const GGS_mode constin_inMode,
                                           GGS_semanticTemporariesStruct & io_ioTemporaries,
                                           GGS_staticEntityMap & io_ioStaticEntityMap,
                                           GGS_universalValuedObjectMap & io_ioUniversalMap,
                                           GGS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outConvenienceGuardGenerationIR.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_callInstructionAST) ;
    inObject->method_baseGuardAnalyze (constin_inSelfType, constin_inRoutineAttributes, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, out_outConvenienceGuardGenerationIR, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @guardUserRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_guardUserRoutineIR::objectCompare (const GGS_guardUserRoutineIR & inOperand) const {
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

GGS_guardUserRoutineIR::GGS_guardUserRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_guardUserRoutineIR GGS_guardUserRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                         const GGS_bool & in_isRequired,
                                                         const GGS_bool & in_warnsIfUnused,
                                                         const GGS_string & in_mMangledImplementationGuardName,
                                                         const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                         const GGS_omnibusType & in_mReceiverType,
                                                         const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cPtr_guardUserRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_guardUserRoutineIR (inCompiler COMMA_THERE)) ;
  object->guardUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mMangledImplementationGuardName, in_mFormalArgumentListForGeneration, in_mReceiverType, in_mGuardKindGenerationIR, inCompiler) ;
  const GGS_guardUserRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::
guardUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                            const GGS_bool & in_isRequired,
                                                                            const GGS_bool & in_warnsIfUnused,
                                                                            const GGS_string & in_mMangledImplementationGuardName,
                                                                            const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                            const GGS_omnibusType & in_mReceiverType,
                                                                            const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
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

GGS_guardUserRoutineIR::GGS_guardUserRoutineIR (const cPtr_guardUserRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardUserRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_guardUserRoutineIR::readProperty_mMangledImplementationGuardName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mMangledImplementationGuardName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardUserRoutineIR::setProperty_mMangledImplementationGuardName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mMangledImplementationGuardName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_guardUserRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListIR () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardUserRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_guardUserRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardUserRoutineIR::setProperty_mReceiverType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR GGS_guardUserRoutineIR::readProperty_mGuardKindGenerationIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_guardKindGenerationIR () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mGuardKindGenerationIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardUserRoutineIR::setProperty_mGuardKindGenerationIR (const GGS_guardKindGenerationIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mGuardKindGenerationIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @guardUserRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_guardUserRoutineIR::cPtr_guardUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mMangledImplementationGuardName (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR () {
}

//--------------------------------------------------------------------------------------------------

cPtr_guardUserRoutineIR::cPtr_guardUserRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                  const GGS_bool & in_isRequired,
                                                  const GGS_bool & in_warnsIfUnused,
                                                  const GGS_string & in_mMangledImplementationGuardName,
                                                  const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                  const GGS_omnibusType & in_mReceiverType,
                                                  const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_guardUserRoutineIR::classDescriptor (void) const {
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

acPtr_class * cPtr_guardUserRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardUserRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mMangledImplementationGuardName, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @guardUserRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardUserRoutineIR ("guardUserRoutineIR",
                                                                       & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardUserRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardUserRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardUserRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR GGS_guardUserRoutineIR::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_guardUserRoutineIR result ;
  const GGS_guardUserRoutineIR * p = (const GGS_guardUserRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardUserRoutineIR *> (p)) {
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

ComparisonResult GGS_guardImplementationRoutineIR::objectCompare (const GGS_guardImplementationRoutineIR & inOperand) const {
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

GGS_guardImplementationRoutineIR::GGS_guardImplementationRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_guardImplementationRoutineIR GGS_guardImplementationRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                             const GGS_bool & in_isRequired,
                                                             const GGS_bool & in_warnsIfUnused,
                                                             const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                             const GGS_omnibusType & in_mReceiverType,
                                                             const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                             const GGS_allocaList & in_mAllocaList,
                                                             const GGS_instructionListIR & in_mInstructionGenerationList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_guardImplementationRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_guardImplementationRoutineIR (inCompiler COMMA_THERE)) ;
  object->guardImplementationRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFormalArgumentListForGeneration, in_mReceiverType, in_mGuardKindGenerationIR, in_mAllocaList, in_mInstructionGenerationList, inCompiler) ;
  const GGS_guardImplementationRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_guardImplementationRoutineIR::
guardImplementationRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                          const GGS_bool & in_isRequired,
                                                                                          const GGS_bool & in_warnsIfUnused,
                                                                                          const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                          const GGS_omnibusType & in_mReceiverType,
                                                                                          const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                                          const GGS_allocaList & in_mAllocaList,
                                                                                          const GGS_instructionListIR & in_mInstructionGenerationList,
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

GGS_guardImplementationRoutineIR::GGS_guardImplementationRoutineIR (const cPtr_guardImplementationRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardImplementationRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_guardImplementationRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardImplementationRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_guardImplementationRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardImplementationRoutineIR::setProperty_mReceiverType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR GGS_guardImplementationRoutineIR::readProperty_mGuardKindGenerationIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_guardKindGenerationIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mGuardKindGenerationIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardImplementationRoutineIR::setProperty_mGuardKindGenerationIR (const GGS_guardKindGenerationIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mGuardKindGenerationIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_guardImplementationRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_allocaList () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardImplementationRoutineIR::setProperty_mAllocaList (const GGS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_guardImplementationRoutineIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardImplementationRoutineIR::setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @guardImplementationRoutineIR class
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

cPtr_guardImplementationRoutineIR::cPtr_guardImplementationRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                                      const GGS_bool & in_isRequired,
                                                                      const GGS_bool & in_warnsIfUnused,
                                                                      const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                      const GGS_omnibusType & in_mReceiverType,
                                                                      const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                      const GGS_allocaList & in_mAllocaList,
                                                                      const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_guardImplementationRoutineIR::classDescriptor (void) const {
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

acPtr_class * cPtr_guardImplementationRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardImplementationRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR, mProperty_mAllocaList, mProperty_mInstructionGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @guardImplementationRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR ("guardImplementationRoutineIR",
                                                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardImplementationRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardImplementationRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardImplementationRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR GGS_guardImplementationRoutineIR::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guardImplementationRoutineIR result ;
  const GGS_guardImplementationRoutineIR * p = (const GGS_guardImplementationRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardImplementationRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardImplementationRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @convertExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_convertExpressionAST::objectCompare (const GGS_convertExpressionAST & inOperand) const {
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

GGS_convertExpressionAST::GGS_convertExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_convertExpressionAST GGS_convertExpressionAST::
init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                  const GGS_lstring & in_mTypeName,
                  const GGS_location & in_mEndOfExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_convertExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_convertExpressionAST (inCompiler COMMA_THERE)) ;
  object->convertExpressionAST_init_21__21__21_ (in_mExpression, in_mTypeName, in_mEndOfExpression, inCompiler) ;
  const GGS_convertExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::
convertExpressionAST_init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                                       const GGS_lstring & in_mTypeName,
                                       const GGS_location & in_mEndOfExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST::GGS_convertExpressionAST (const cPtr_convertExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_convertExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_convertExpressionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_convertExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_convertExpressionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_convertExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_convertExpressionAST::setProperty_mEndOfExpression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @convertExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_convertExpressionAST::cPtr_convertExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_convertExpressionAST::cPtr_convertExpressionAST (const GGS_expressionAST & in_mExpression,
                                                      const GGS_lstring & in_mTypeName,
                                                      const GGS_location & in_mEndOfExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_convertExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_convertExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_convertExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @convertExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_convertExpressionAST ("convertExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_convertExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_convertExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_convertExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST GGS_convertExpressionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_convertExpressionAST result ;
  const GGS_convertExpressionAST * p = (const GGS_convertExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_convertExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element::GGS_controlRegisterDeclarationList_2E_element (void) :
mProperty_mRegisterArrayList (),
mProperty_mRegisterTypeName (),
mProperty_mRegisterBitSliceList (),
mProperty_mRegisterBitSliceListLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element::GGS_controlRegisterDeclarationList_2E_element (const GGS_controlRegisterDeclarationList_2E_element & inSource) :
mProperty_mRegisterArrayList (inSource.mProperty_mRegisterArrayList),
mProperty_mRegisterTypeName (inSource.mProperty_mRegisterTypeName),
mProperty_mRegisterBitSliceList (inSource.mProperty_mRegisterBitSliceList),
mProperty_mRegisterBitSliceListLocation (inSource.mProperty_mRegisterBitSliceListLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element & GGS_controlRegisterDeclarationList_2E_element::operator = (const GGS_controlRegisterDeclarationList_2E_element & inSource) {
  mProperty_mRegisterArrayList = inSource.mProperty_mRegisterArrayList ;
  mProperty_mRegisterTypeName = inSource.mProperty_mRegisterTypeName ;
  mProperty_mRegisterBitSliceList = inSource.mProperty_mRegisterBitSliceList ;
  mProperty_mRegisterBitSliceListLocation = inSource.mProperty_mRegisterBitSliceListLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element GGS_controlRegisterDeclarationList_2E_element::init_21__21__21__21_ (const GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                                                                   const GGS_lstring & in_mRegisterTypeName,
                                                                                                                   const GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                                                                   const GGS_location & in_mRegisterBitSliceListLocation,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterArrayList = in_mRegisterArrayList ;
  result.mProperty_mRegisterTypeName = in_mRegisterTypeName ;
  result.mProperty_mRegisterBitSliceList = in_mRegisterBitSliceList ;
  result.mProperty_mRegisterBitSliceListLocation = in_mRegisterBitSliceListLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element::GGS_controlRegisterDeclarationList_2E_element (const GGS_controlRegisterNameListAST & inOperand0,
                                                                                              const GGS_lstring & inOperand1,
                                                                                              const GGS_controlRegisterBitSliceList & inOperand2,
                                                                                              const GGS_location & inOperand3) :
mProperty_mRegisterArrayList (inOperand0),
mProperty_mRegisterTypeName (inOperand1),
mProperty_mRegisterBitSliceList (inOperand2),
mProperty_mRegisterBitSliceListLocation (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterDeclarationList_2E_element::isValid (void) const {
  return mProperty_mRegisterArrayList.isValid () && mProperty_mRegisterTypeName.isValid () && mProperty_mRegisterBitSliceList.isValid () && mProperty_mRegisterBitSliceListLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList_2E_element::drop (void) {
  mProperty_mRegisterArrayList.drop () ;
  mProperty_mRegisterTypeName.drop () ;
  mProperty_mRegisterBitSliceList.drop () ;
  mProperty_mRegisterBitSliceListLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterDeclarationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRegisterArrayList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterBitSliceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterBitSliceListLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterDeclarationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2E_element ("controlRegisterDeclarationList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterDeclarationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterDeclarationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element GGS_controlRegisterDeclarationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_controlRegisterDeclarationList_2E_element result ;
  const GGS_controlRegisterDeclarationList_2E_element * p = (const GGS_controlRegisterDeclarationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterDeclarationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterDeclarationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedControlRegisterArrayGroupDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedControlRegisterArrayGroupDeclaration::objectCompare (const GGS_decoratedControlRegisterArrayGroupDeclaration & inOperand) const {
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

GGS_decoratedControlRegisterArrayGroupDeclaration::GGS_decoratedControlRegisterArrayGroupDeclaration (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration GGS_decoratedControlRegisterArrayGroupDeclaration::
init_21__21_ (const GGS_lstring & in_mGroupName,
              const GGS_lbigintlist & in_mBaseAddresses,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedControlRegisterArrayGroupDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedControlRegisterArrayGroupDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedControlRegisterArrayGroupDeclaration_init_21__21_ (in_mGroupName, in_mBaseAddresses, inCompiler) ;
  const GGS_decoratedControlRegisterArrayGroupDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedControlRegisterArrayGroupDeclaration::
decoratedControlRegisterArrayGroupDeclaration_init_21__21_ (const GGS_lstring & in_mGroupName,
                                                            const GGS_lbigintlist & in_mBaseAddresses,
                                                            Compiler * /* inCompiler */) {
  mProperty_mGroupName = in_mGroupName ;
  mProperty_mBaseAddresses = in_mBaseAddresses ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration::GGS_decoratedControlRegisterArrayGroupDeclaration (const cPtr_decoratedControlRegisterArrayGroupDeclaration * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedControlRegisterArrayGroupDeclaration::readProperty_mGroupName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    return p->mProperty_mGroupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedControlRegisterArrayGroupDeclaration::setProperty_mGroupName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    p->mProperty_mGroupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist GGS_decoratedControlRegisterArrayGroupDeclaration::readProperty_mBaseAddresses (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigintlist () ;
  }else{
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    return p->mProperty_mBaseAddresses ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedControlRegisterArrayGroupDeclaration::setProperty_mBaseAddresses (const GGS_lbigintlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    p->mProperty_mBaseAddresses = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedControlRegisterArrayGroupDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedControlRegisterArrayGroupDeclaration::cPtr_decoratedControlRegisterArrayGroupDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mGroupName (),
mProperty_mBaseAddresses () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedControlRegisterArrayGroupDeclaration::cPtr_decoratedControlRegisterArrayGroupDeclaration (const GGS_lstring & in_mGroupName,
                                                                                                        const GGS_lbigintlist & in_mBaseAddresses,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mGroupName (),
mProperty_mBaseAddresses () {
  mProperty_mGroupName = in_mGroupName ;
  mProperty_mBaseAddresses = in_mBaseAddresses ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_decoratedControlRegisterArrayGroupDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;
}

void cPtr_decoratedControlRegisterArrayGroupDeclaration::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedControlRegisterArrayGroupDeclaration:") ;
  mProperty_mGroupName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBaseAddresses.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedControlRegisterArrayGroupDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedControlRegisterArrayGroupDeclaration (mProperty_mGroupName, mProperty_mBaseAddresses, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedControlRegisterArrayGroupDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mGroupName.printNonNullClassInstanceProperties ("mGroupName") ;
    mProperty_mBaseAddresses.printNonNullClassInstanceProperties ("mBaseAddresses") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @decoratedControlRegisterArrayGroupDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ("decoratedControlRegisterArrayGroupDeclaration",
                                                                                                  & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedControlRegisterArrayGroupDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedControlRegisterArrayGroupDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedControlRegisterArrayGroupDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration GGS_decoratedControlRegisterArrayGroupDeclaration::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedControlRegisterArrayGroupDeclaration result ;
  const GGS_decoratedControlRegisterArrayGroupDeclaration * p = (const GGS_decoratedControlRegisterArrayGroupDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedControlRegisterArrayGroupDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedControlRegisterArrayGroupDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupArrayList generateLLVMcode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMcode (const GGS_controlRegisterGroupArrayList inObject,
                                       GGS_string & ioArgument_ioLLVMcode,
                                       const GGS_uint constinArgument_inPointerSize,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_controlRegisterGroupArrayList temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 674)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Control Register Group Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 675)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 675)) ;
      GGS_string var_int_28022 = GGS_string ("i").add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 676)) ;
      const GGS_controlRegisterGroupArrayList temp_2 = inObject ;
      UpEnumerator_controlRegisterGroupArrayList enumerator_28067 (temp_2) ;
      while (enumerator_28067.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssignOperation(function_registerGroupAddressArrayLLVMname (enumerator_28067.current_mGroupName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)).add_operation (GGS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)).add_operation (enumerator_28067.current_mBaseAddresses (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 679)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (GGS_string (" x "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (var_int_28022, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (GGS_string ("] ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)) ;
        UpEnumerator_lbigintlist enumerator_28273 (enumerator_28067.current_mBaseAddresses (HERE)) ;
        while (enumerator_28273.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssignOperation(var_int_28022.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)).add_operation (enumerator_28273.current_mValue (HERE).readProperty_bigint ().getter_string (SOURCE_FILE ("declaration-control-register.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)) ;
          enumerator_28273.gotoNextObject () ;
          if (enumerator_28273.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 684)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("] ; "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 686)) ;
        UpEnumerator_lbigintlist enumerator_28449 (enumerator_28067.current_mBaseAddresses (HERE)) ;
        while (enumerator_28449.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssignOperation(enumerator_28449.current_mValue (HERE).readProperty_bigint ().getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 689)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 689)) ;
          enumerator_28449.gotoNextObject () ;
          if (enumerator_28449.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 691)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 693)) ;
        enumerator_28067.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 695)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @llvmAssignmentOperatorDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmAssignmentOperatorDeclarationAST::objectCompare (const GGS_llvmAssignmentOperatorDeclarationAST & inOperand) const {
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

GGS_llvmAssignmentOperatorDeclarationAST::GGS_llvmAssignmentOperatorDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST GGS_llvmAssignmentOperatorDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mOperatorLocation,
                                          const GGS_lstring & in_mTargetVariableName,
                                          const GGS_lstring & in_mTargetTypeName,
                                          const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                          const GGS_lstring & in_mSourceVariableName,
                                          const GGS_lstring & in_mSourceTypeName,
                                          const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                          const GGS_ctExpressionAST & in_mWhereClause,
                                          const GGS_llvmGenerationInstructionList & in_mLLVMInstructionList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_llvmAssignmentOperatorDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmAssignmentOperatorDeclarationAST (inCompiler COMMA_THERE)) ;
  object->llvmAssignmentOperatorDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mOperatorLocation, in_mTargetVariableName, in_mTargetTypeName, in_mTargetGenericFormalParameterList, in_mSourceVariableName, in_mSourceTypeName, in_mSourceGenericFormalParameterList, in_mWhereClause, in_mLLVMInstructionList, inCompiler) ;
  const GGS_llvmAssignmentOperatorDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorDeclarationAST::
llvmAssignmentOperatorDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                                               const GGS_lstring & in_mTargetVariableName,
                                                                               const GGS_lstring & in_mTargetTypeName,
                                                                               const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                               const GGS_lstring & in_mSourceVariableName,
                                                                               const GGS_lstring & in_mSourceTypeName,
                                                                               const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                               const GGS_ctExpressionAST & in_mWhereClause,
                                                                               const GGS_llvmGenerationInstructionList & in_mLLVMInstructionList,
                                                                               Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mTargetVariableName = in_mTargetVariableName ;
  mProperty_mTargetTypeName = in_mTargetTypeName ;
  mProperty_mTargetGenericFormalParameterList = in_mTargetGenericFormalParameterList ;
  mProperty_mSourceVariableName = in_mSourceVariableName ;
  mProperty_mSourceTypeName = in_mSourceTypeName ;
  mProperty_mSourceGenericFormalParameterList = in_mSourceGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mLLVMInstructionList = in_mLLVMInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST::GGS_llvmAssignmentOperatorDeclarationAST (const cPtr_llvmAssignmentOperatorDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmAssignmentOperatorDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mTargetVariableName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mTargetTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mTargetGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mSourceVariableName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mSourceTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mSourceGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mWhereClause (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mLLVMInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mLLVMInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mLLVMInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mLLVMInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmAssignmentOperatorDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorDeclarationAST::cPtr_llvmAssignmentOperatorDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mTargetVariableName (),
mProperty_mTargetTypeName (),
mProperty_mTargetGenericFormalParameterList (),
mProperty_mSourceVariableName (),
mProperty_mSourceTypeName (),
mProperty_mSourceGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mLLVMInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorDeclarationAST::cPtr_llvmAssignmentOperatorDeclarationAST (const GGS_location & in_mOperatorLocation,
                                                                                      const GGS_lstring & in_mTargetVariableName,
                                                                                      const GGS_lstring & in_mTargetTypeName,
                                                                                      const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                                      const GGS_lstring & in_mSourceVariableName,
                                                                                      const GGS_lstring & in_mSourceTypeName,
                                                                                      const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                                      const GGS_ctExpressionAST & in_mWhereClause,
                                                                                      const GGS_llvmGenerationInstructionList & in_mLLVMInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mTargetVariableName (),
mProperty_mTargetTypeName (),
mProperty_mTargetGenericFormalParameterList (),
mProperty_mSourceVariableName (),
mProperty_mSourceTypeName (),
mProperty_mSourceGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mLLVMInstructionList () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mTargetVariableName = in_mTargetVariableName ;
  mProperty_mTargetTypeName = in_mTargetTypeName ;
  mProperty_mTargetGenericFormalParameterList = in_mTargetGenericFormalParameterList ;
  mProperty_mSourceVariableName = in_mSourceVariableName ;
  mProperty_mSourceTypeName = in_mSourceTypeName ;
  mProperty_mSourceGenericFormalParameterList = in_mSourceGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mLLVMInstructionList = in_mLLVMInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_llvmAssignmentOperatorDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST ;
}

void cPtr_llvmAssignmentOperatorDeclarationAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmAssignmentOperatorDeclarationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhereClause.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmAssignmentOperatorDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmAssignmentOperatorDeclarationAST (mProperty_mOperatorLocation, mProperty_mTargetVariableName, mProperty_mTargetTypeName, mProperty_mTargetGenericFormalParameterList, mProperty_mSourceVariableName, mProperty_mSourceTypeName, mProperty_mSourceGenericFormalParameterList, mProperty_mWhereClause, mProperty_mLLVMInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmAssignmentOperatorDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mTargetVariableName.printNonNullClassInstanceProperties ("mTargetVariableName") ;
    mProperty_mTargetTypeName.printNonNullClassInstanceProperties ("mTargetTypeName") ;
    mProperty_mTargetGenericFormalParameterList.printNonNullClassInstanceProperties ("mTargetGenericFormalParameterList") ;
    mProperty_mSourceVariableName.printNonNullClassInstanceProperties ("mSourceVariableName") ;
    mProperty_mSourceTypeName.printNonNullClassInstanceProperties ("mSourceTypeName") ;
    mProperty_mSourceGenericFormalParameterList.printNonNullClassInstanceProperties ("mSourceGenericFormalParameterList") ;
    mProperty_mWhereClause.printNonNullClassInstanceProperties ("mWhereClause") ;
    mProperty_mLLVMInstructionList.printNonNullClassInstanceProperties ("mLLVMInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @llvmAssignmentOperatorDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST ("llvmAssignmentOperatorDeclarationAST",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmAssignmentOperatorDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmAssignmentOperatorDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmAssignmentOperatorDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST GGS_llvmAssignmentOperatorDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorDeclarationAST result ;
  const GGS_llvmAssignmentOperatorDeclarationAST * p = (const GGS_llvmAssignmentOperatorDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmAssignmentOperatorDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmAssignmentOperatorUsage::objectCompare (const GGS_llvmAssignmentOperatorUsage & inOperand) const {
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

GGS_llvmAssignmentOperatorUsage::GGS_llvmAssignmentOperatorUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage GGS_llvmAssignmentOperatorUsage::
init_21__21__21__21__21__21__21__21_ (const GGS_omnibusType & in_mTargetType,
                                      const GGS_lstring & in_mTargetVarName,
                                      const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                      const GGS_omnibusType & in_mSourceTpe,
                                      const GGS_lstring & in_mSourceVarName,
                                      const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                      const GGS_ctExpressionAST & in_mWhereClause,
                                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_llvmAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmAssignmentOperatorUsage_init_21__21__21__21__21__21__21__21_ (in_mTargetType, in_mTargetVarName, in_mTargetGenericFormalParameterList, in_mSourceTpe, in_mSourceVarName, in_mSourceGenericFormalParameterList, in_mWhereClause, in_mInstructionList, inCompiler) ;
  const GGS_llvmAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorUsage::
llvmAssignmentOperatorUsage_init_21__21__21__21__21__21__21__21_ (const GGS_omnibusType & in_mTargetType,
                                                                  const GGS_lstring & in_mTargetVarName,
                                                                  const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                  const GGS_omnibusType & in_mSourceTpe,
                                                                  const GGS_lstring & in_mSourceVarName,
                                                                  const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                  const GGS_ctExpressionAST & in_mWhereClause,
                                                                  const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mTargetGenericFormalParameterList = in_mTargetGenericFormalParameterList ;
  mProperty_mSourceTpe = in_mSourceTpe ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mSourceGenericFormalParameterList = in_mSourceGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage::GGS_llvmAssignmentOperatorUsage (const cPtr_llvmAssignmentOperatorUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_llvmAssignmentOperatorUsage::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mTargetType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorUsage::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mTargetVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmAssignmentOperatorUsage::readProperty_mTargetGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mTargetGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_llvmAssignmentOperatorUsage::readProperty_mSourceTpe (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceTpe ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mSourceTpe (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceTpe = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorUsage::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mSourceVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmAssignmentOperatorUsage::readProperty_mSourceGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mSourceGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_llvmAssignmentOperatorUsage::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mWhereClause (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmAssignmentOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorUsage::cPtr_llvmAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mTargetGenericFormalParameterList (),
mProperty_mSourceTpe (),
mProperty_mSourceVarName (),
mProperty_mSourceGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorUsage::cPtr_llvmAssignmentOperatorUsage (const GGS_omnibusType & in_mTargetType,
                                                                    const GGS_lstring & in_mTargetVarName,
                                                                    const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                    const GGS_omnibusType & in_mSourceTpe,
                                                                    const GGS_lstring & in_mSourceVarName,
                                                                    const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                    const GGS_ctExpressionAST & in_mWhereClause,
                                                                    const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mTargetGenericFormalParameterList (),
mProperty_mSourceTpe (),
mProperty_mSourceVarName (),
mProperty_mSourceGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mInstructionList () {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mTargetGenericFormalParameterList = in_mTargetGenericFormalParameterList ;
  mProperty_mSourceTpe = in_mSourceTpe ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mSourceGenericFormalParameterList = in_mSourceGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_llvmAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ;
}

void cPtr_llvmAssignmentOperatorUsage::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmAssignmentOperatorUsage:") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceTpe.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhereClause.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmAssignmentOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmAssignmentOperatorUsage (mProperty_mTargetType, mProperty_mTargetVarName, mProperty_mTargetGenericFormalParameterList, mProperty_mSourceTpe, mProperty_mSourceVarName, mProperty_mSourceGenericFormalParameterList, mProperty_mWhereClause, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVarName.printNonNullClassInstanceProperties ("mTargetVarName") ;
    mProperty_mTargetGenericFormalParameterList.printNonNullClassInstanceProperties ("mTargetGenericFormalParameterList") ;
    mProperty_mSourceTpe.printNonNullClassInstanceProperties ("mSourceTpe") ;
    mProperty_mSourceVarName.printNonNullClassInstanceProperties ("mSourceVarName") ;
    mProperty_mSourceGenericFormalParameterList.printNonNullClassInstanceProperties ("mSourceGenericFormalParameterList") ;
    mProperty_mWhereClause.printNonNullClassInstanceProperties ("mWhereClause") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @llvmAssignmentOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ("llvmAssignmentOperatorUsage",
                                                                                & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage GGS_llvmAssignmentOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorUsage result ;
  const GGS_llvmAssignmentOperatorUsage * p = (const GGS_llvmAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentRoutineIR::objectCompare (const GGS_assignmentRoutineIR & inOperand) const {
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

GGS_assignmentRoutineIR::GGS_assignmentRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignmentRoutineIR GGS_assignmentRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                 const GGS_bool & in_isRequired,
                                                                 const GGS_bool & in_warnsIfUnused,
                                                                 const GGS_omnibusType & in_mTargetType,
                                                                 const GGS_string & in_mTargetVarName,
                                                                 const GGS_omnibusType & in_mSourceType,
                                                                 const GGS_string & in_mSourceVarName,
                                                                 const GGS_stringlist & in_mGeneratedInstructions,
                                                                 const GGS_allocaList & in_mAllocaList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_assignmentRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_assignmentRoutineIR (inCompiler COMMA_THERE)) ;
  object->assignmentRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, in_mTargetVarName, in_mSourceType, in_mSourceVarName, in_mGeneratedInstructions, in_mAllocaList, inCompiler) ;
  const GGS_assignmentRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentRoutineIR::
assignmentRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                     const GGS_bool & in_isRequired,
                                                                                     const GGS_bool & in_warnsIfUnused,
                                                                                     const GGS_omnibusType & in_mTargetType,
                                                                                     const GGS_string & in_mTargetVarName,
                                                                                     const GGS_omnibusType & in_mSourceType,
                                                                                     const GGS_string & in_mSourceVarName,
                                                                                     const GGS_stringlist & in_mGeneratedInstructions,
                                                                                     const GGS_allocaList & in_mAllocaList,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mSourceType = in_mSourceType ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR::GGS_assignmentRoutineIR (const cPtr_assignmentRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_assignmentRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mTargetType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_assignmentRoutineIR::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mTargetVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_assignmentRoutineIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mSourceType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mSourceType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_assignmentRoutineIR::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mSourceVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_assignmentRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mGeneratedInstructions (const GGS_stringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_assignmentRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_allocaList () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mAllocaList (const GGS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentRoutineIR::cPtr_assignmentRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mSourceType (),
mProperty_mSourceVarName (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignmentRoutineIR::cPtr_assignmentRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                    const GGS_bool & in_isRequired,
                                                    const GGS_bool & in_warnsIfUnused,
                                                    const GGS_omnibusType & in_mTargetType,
                                                    const GGS_string & in_mTargetVarName,
                                                    const GGS_omnibusType & in_mSourceType,
                                                    const GGS_string & in_mSourceVarName,
                                                    const GGS_stringlist & in_mGeneratedInstructions,
                                                    const GGS_allocaList & in_mAllocaList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mSourceType (),
mProperty_mSourceVarName (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mSourceType = in_mSourceType ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assignmentRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR ;
}

void cPtr_assignmentRoutineIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@assignmentRoutineIR:") ;
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
  mProperty_mGeneratedInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mTargetType, mProperty_mTargetVarName, mProperty_mSourceType, mProperty_mSourceVarName, mProperty_mGeneratedInstructions, mProperty_mAllocaList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVarName.printNonNullClassInstanceProperties ("mTargetVarName") ;
    mProperty_mSourceType.printNonNullClassInstanceProperties ("mSourceType") ;
    mProperty_mSourceVarName.printNonNullClassInstanceProperties ("mSourceVarName") ;
    mProperty_mGeneratedInstructions.printNonNullClassInstanceProperties ("mGeneratedInstructions") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @assignmentRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentRoutineIR ("assignmentRoutineIR",
                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR GGS_assignmentRoutineIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_assignmentRoutineIR result ;
  const GGS_assignmentRoutineIR * p = (const GGS_assignmentRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @simpleAssignmentCopyRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_simpleAssignmentCopyRoutineIR::objectCompare (const GGS_simpleAssignmentCopyRoutineIR & inOperand) const {
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

GGS_simpleAssignmentCopyRoutineIR::GGS_simpleAssignmentCopyRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR GGS_simpleAssignmentCopyRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_omnibusType & in_mTargetType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_simpleAssignmentCopyRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_simpleAssignmentCopyRoutineIR (inCompiler COMMA_THERE)) ;
  object->simpleAssignmentCopyRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, inCompiler) ;
  const GGS_simpleAssignmentCopyRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_simpleAssignmentCopyRoutineIR::
simpleAssignmentCopyRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           const GGS_omnibusType & in_mTargetType,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR::GGS_simpleAssignmentCopyRoutineIR (const cPtr_simpleAssignmentCopyRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleAssignmentCopyRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_simpleAssignmentCopyRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_simpleAssignmentCopyRoutineIR * p = (cPtr_simpleAssignmentCopyRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleAssignmentCopyRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleAssignmentCopyRoutineIR::setProperty_mTargetType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_simpleAssignmentCopyRoutineIR * p = (cPtr_simpleAssignmentCopyRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleAssignmentCopyRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @simpleAssignmentCopyRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_simpleAssignmentCopyRoutineIR::cPtr_simpleAssignmentCopyRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mTargetType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_simpleAssignmentCopyRoutineIR::cPtr_simpleAssignmentCopyRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                                        const GGS_bool & in_isRequired,
                                                                        const GGS_bool & in_warnsIfUnused,
                                                                        const GGS_omnibusType & in_mTargetType,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mTargetType () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_simpleAssignmentCopyRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ;
}

void cPtr_simpleAssignmentCopyRoutineIR::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@simpleAssignmentCopyRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_simpleAssignmentCopyRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_simpleAssignmentCopyRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mTargetType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_simpleAssignmentCopyRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @simpleAssignmentCopyRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ("simpleAssignmentCopyRoutineIR",
                                                                                  & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_simpleAssignmentCopyRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleAssignmentCopyRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleAssignmentCopyRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR GGS_simpleAssignmentCopyRoutineIR::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_simpleAssignmentCopyRoutineIR result ;
  const GGS_simpleAssignmentCopyRoutineIR * p = (const GGS_simpleAssignmentCopyRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleAssignmentCopyRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleAssignmentCopyRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typeOpaqueDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeOpaqueDeclarationAST::objectCompare (const GGS_typeOpaqueDeclarationAST & inOperand) const {
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

GGS_typeOpaqueDeclarationAST::GGS_typeOpaqueDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST GGS_typeOpaqueDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mOpaqueTypeName,
                      const GGS_expressionAST & in_mSizeExpression,
                      const GGS_location & in_mSizeExpressionLocation,
                      const GGS_lstringlist & in_mAttributeList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_typeOpaqueDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_typeOpaqueDeclarationAST (inCompiler COMMA_THERE)) ;
  object->typeOpaqueDeclarationAST_init_21__21__21__21_ (in_mOpaqueTypeName, in_mSizeExpression, in_mSizeExpressionLocation, in_mAttributeList, inCompiler) ;
  const GGS_typeOpaqueDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::
typeOpaqueDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mOpaqueTypeName,
                                               const GGS_expressionAST & in_mSizeExpression,
                                               const GGS_location & in_mSizeExpressionLocation,
                                               const GGS_lstringlist & in_mAttributeList,
                                               Compiler * /* inCompiler */) {
  mProperty_mOpaqueTypeName = in_mOpaqueTypeName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mSizeExpressionLocation = in_mSizeExpressionLocation ;
  mProperty_mAttributeList = in_mAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST::GGS_typeOpaqueDeclarationAST (const cPtr_typeOpaqueDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeOpaqueDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeOpaqueDeclarationAST::readProperty_mOpaqueTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mOpaqueTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeOpaqueDeclarationAST::setProperty_mOpaqueTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mOpaqueTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_typeOpaqueDeclarationAST::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeOpaqueDeclarationAST::setProperty_mSizeExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_typeOpaqueDeclarationAST::readProperty_mSizeExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mSizeExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeOpaqueDeclarationAST::setProperty_mSizeExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mSizeExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_typeOpaqueDeclarationAST::readProperty_mAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeOpaqueDeclarationAST::setProperty_mAttributeList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeOpaqueDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeOpaqueDeclarationAST::cPtr_typeOpaqueDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOpaqueTypeName (),
mProperty_mSizeExpression (),
mProperty_mSizeExpressionLocation (),
mProperty_mAttributeList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_typeOpaqueDeclarationAST::cPtr_typeOpaqueDeclarationAST (const GGS_lstring & in_mOpaqueTypeName,
                                                              const GGS_expressionAST & in_mSizeExpression,
                                                              const GGS_location & in_mSizeExpressionLocation,
                                                              const GGS_lstringlist & in_mAttributeList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOpaqueTypeName (),
mProperty_mSizeExpression (),
mProperty_mSizeExpressionLocation (),
mProperty_mAttributeList () {
  mProperty_mOpaqueTypeName = in_mOpaqueTypeName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mSizeExpressionLocation = in_mSizeExpressionLocation ;
  mProperty_mAttributeList = in_mAttributeList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_typeOpaqueDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ;
}

void cPtr_typeOpaqueDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@typeOpaqueDeclarationAST:") ;
  mProperty_mOpaqueTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeOpaqueDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeOpaqueDeclarationAST (mProperty_mOpaqueTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation, mProperty_mAttributeList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeOpaqueDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mOpaqueTypeName.printNonNullClassInstanceProperties ("mOpaqueTypeName") ;
    mProperty_mSizeExpression.printNonNullClassInstanceProperties ("mSizeExpression") ;
    mProperty_mSizeExpressionLocation.printNonNullClassInstanceProperties ("mSizeExpressionLocation") ;
    mProperty_mAttributeList.printNonNullClassInstanceProperties ("mAttributeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @typeOpaqueDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ("typeOpaqueDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeOpaqueDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeOpaqueDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeOpaqueDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST GGS_typeOpaqueDeclarationAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeOpaqueDeclarationAST result ;
  const GGS_typeOpaqueDeclarationAST * p = (const GGS_typeOpaqueDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeOpaqueDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeOpaqueDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@typeOpaqueDeclarationAST noteTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::method_noteTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mOpaqueTypeName () COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 50)) ;
  }
  const GGS_typeOpaqueDeclarationAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mSizeExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 51)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (cPtr_typeOpaqueDeclarationAST * inObject,
                                                     GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_typeOpaqueDeclarationAST) ;
    inObject->method_noteTypesInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST::GGS_controlRegisterLValueAST (void) :
mProperty_mRegisterGroupName (),
mProperty_mGroupIndex (),
mProperty_mRegisterName (),
mProperty_mRegisterIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST::GGS_controlRegisterLValueAST (const GGS_controlRegisterLValueAST & inSource) :
mProperty_mRegisterGroupName (inSource.mProperty_mRegisterGroupName),
mProperty_mGroupIndex (inSource.mProperty_mGroupIndex),
mProperty_mRegisterName (inSource.mProperty_mRegisterName),
mProperty_mRegisterIndex (inSource.mProperty_mRegisterIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST & GGS_controlRegisterLValueAST::operator = (const GGS_controlRegisterLValueAST & inSource) {
  mProperty_mRegisterGroupName = inSource.mProperty_mRegisterGroupName ;
  mProperty_mGroupIndex = inSource.mProperty_mGroupIndex ;
  mProperty_mRegisterName = inSource.mProperty_mRegisterName ;
  mProperty_mRegisterIndex = inSource.mProperty_mRegisterIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_controlRegisterLValueAST::init_21__21__21__21_ (const GGS_lstring & in_mRegisterGroupName,
                                                                                 const GGS_registerGroupIndexAST & in_mGroupIndex,
                                                                                 const GGS_lstring & in_mRegisterName,
                                                                                 const GGS_registerIndexAST & in_mRegisterIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterLValueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mGroupIndex = in_mGroupIndex ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mRegisterIndex = in_mRegisterIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterLValueAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST::GGS_controlRegisterLValueAST (const GGS_lstring & inOperand0,
                                                            const GGS_registerGroupIndexAST & inOperand1,
                                                            const GGS_lstring & inOperand2,
                                                            const GGS_registerIndexAST & inOperand3) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mGroupIndex (inOperand1),
mProperty_mRegisterName (inOperand2),
mProperty_mRegisterIndex (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterLValueAST::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mGroupIndex.isValid () && mProperty_mRegisterName.isValid () && mProperty_mRegisterIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterLValueAST::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mGroupIndex.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mRegisterIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterLValueAST::description (String & ioString,
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
//     @controlRegisterLValueAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterLValueAST ("controlRegisterLValueAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterLValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterLValueAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterLValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterLValueAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_controlRegisterLValueAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterLValueAST result ;
  const GGS_controlRegisterLValueAST * p = (const GGS_controlRegisterLValueAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterLValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterLValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @storeFromTemporaryReferenceIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeFromTemporaryReferenceIR::objectCompare (const GGS_storeFromTemporaryReferenceIR & inOperand) const {
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

GGS_storeFromTemporaryReferenceIR::GGS_storeFromTemporaryReferenceIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR GGS_storeFromTemporaryReferenceIR::
init_21__21__21_ (const GGS_omnibusType & in_mTargetVarType,
                  const GGS_string & in_mLLVMTargetVarName,
                  const GGS_objectIR & in_mSourceValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeFromTemporaryReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_storeFromTemporaryReferenceIR (inCompiler COMMA_THERE)) ;
  object->storeFromTemporaryReferenceIR_init_21__21__21_ (in_mTargetVarType, in_mLLVMTargetVarName, in_mSourceValue, inCompiler) ;
  const GGS_storeFromTemporaryReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeFromTemporaryReferenceIR::
storeFromTemporaryReferenceIR_init_21__21__21_ (const GGS_omnibusType & in_mTargetVarType,
                                                const GGS_string & in_mLLVMTargetVarName,
                                                const GGS_objectIR & in_mSourceValue,
                                                Compiler * /* inCompiler */) {
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR::GGS_storeFromTemporaryReferenceIR (const cPtr_storeFromTemporaryReferenceIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeFromTemporaryReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_storeFromTemporaryReferenceIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeFromTemporaryReferenceIR::setProperty_mTargetVarType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_storeFromTemporaryReferenceIR::readProperty_mLLVMTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mLLVMTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeFromTemporaryReferenceIR::setProperty_mLLVMTargetVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mLLVMTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_storeFromTemporaryReferenceIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeFromTemporaryReferenceIR::setProperty_mSourceValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeFromTemporaryReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeFromTemporaryReferenceIR::cPtr_storeFromTemporaryReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetVarType (),
mProperty_mLLVMTargetVarName (),
mProperty_mSourceValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_storeFromTemporaryReferenceIR::cPtr_storeFromTemporaryReferenceIR (const GGS_omnibusType & in_mTargetVarType,
                                                                        const GGS_string & in_mLLVMTargetVarName,
                                                                        const GGS_objectIR & in_mSourceValue,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetVarType (),
mProperty_mLLVMTargetVarName (),
mProperty_mSourceValue () {
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_storeFromTemporaryReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

void cPtr_storeFromTemporaryReferenceIR::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@storeFromTemporaryReferenceIR:") ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMTargetVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeFromTemporaryReferenceIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeFromTemporaryReferenceIR (mProperty_mTargetVarType, mProperty_mLLVMTargetVarName, mProperty_mSourceValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeFromTemporaryReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetVarType.printNonNullClassInstanceProperties ("mTargetVarType") ;
    mProperty_mLLVMTargetVarName.printNonNullClassInstanceProperties ("mLLVMTargetVarName") ;
    mProperty_mSourceValue.printNonNullClassInstanceProperties ("mSourceValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @storeFromTemporaryReferenceIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ("storeFromTemporaryReferenceIR",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_storeFromTemporaryReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeFromTemporaryReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeFromTemporaryReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR GGS_storeFromTemporaryReferenceIR::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_storeFromTemporaryReferenceIR result ;
  const GGS_storeFromTemporaryReferenceIR * p = (const GGS_storeFromTemporaryReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeFromTemporaryReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeFromTemporaryReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @systemRoutineDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_systemRoutineDeclarationAST::objectCompare (const GGS_systemRoutineDeclarationAST & inOperand) const {
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

GGS_systemRoutineDeclarationAST::GGS_systemRoutineDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_systemRoutineDeclarationAST GGS_systemRoutineDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mReceiverTypeName,
                                          const GGS_lstring & in_mSystemRoutineName,
                                          const GGS_mode & in_mMode,
                                          const GGS_bool & in_mPublic,
                                          const GGS_lstringlist & in_mAttributeList,
                                          const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                          const GGS_lstring & in_mReturnTypeName,
                                          const GGS_instructionListAST & in_mInstructionList,
                                          const GGS_location & in_mEndOfInstructionListLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_systemRoutineDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_systemRoutineDeclarationAST (inCompiler COMMA_THERE)) ;
  object->systemRoutineDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mReceiverTypeName, in_mSystemRoutineName, in_mMode, in_mPublic, in_mAttributeList, in_mFormalArgumentList, in_mReturnTypeName, in_mInstructionList, in_mEndOfInstructionListLocation, inCompiler) ;
  const GGS_systemRoutineDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::
systemRoutineDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mReceiverTypeName,
                                                                      const GGS_lstring & in_mSystemRoutineName,
                                                                      const GGS_mode & in_mMode,
                                                                      const GGS_bool & in_mPublic,
                                                                      const GGS_lstringlist & in_mAttributeList,
                                                                      const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                      const GGS_lstring & in_mReturnTypeName,
                                                                      const GGS_instructionListAST & in_mInstructionList,
                                                                      const GGS_location & in_mEndOfInstructionListLocation,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mSystemRoutineName = in_mSystemRoutineName ;
  mProperty_mMode = in_mMode ;
  mProperty_mPublic = in_mPublic ;
  mProperty_mAttributeList = in_mAttributeList ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnTypeName = in_mReturnTypeName ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionListLocation = in_mEndOfInstructionListLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST::GGS_systemRoutineDeclarationAST (const cPtr_systemRoutineDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_systemRoutineDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_systemRoutineDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_systemRoutineDeclarationAST::readProperty_mSystemRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mSystemRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mSystemRoutineName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mSystemRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_systemRoutineDeclarationAST::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mode () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mMode (const GGS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_systemRoutineDeclarationAST::readProperty_mPublic (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mPublic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mPublic (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mPublic = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_systemRoutineDeclarationAST::readProperty_mAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mAttributeList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_systemRoutineDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListAST () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_systemRoutineDeclarationAST::readProperty_mReturnTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mReturnTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mReturnTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mReturnTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_systemRoutineDeclarationAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_systemRoutineDeclarationAST::readProperty_mEndOfInstructionListLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mEndOfInstructionListLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mEndOfInstructionListLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mEndOfInstructionListLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @systemRoutineDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_systemRoutineDeclarationAST::cPtr_systemRoutineDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mSystemRoutineName (),
mProperty_mMode (),
mProperty_mPublic (),
mProperty_mAttributeList (),
mProperty_mFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionListLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_systemRoutineDeclarationAST::cPtr_systemRoutineDeclarationAST (const GGS_lstring & in_mReceiverTypeName,
                                                                    const GGS_lstring & in_mSystemRoutineName,
                                                                    const GGS_mode & in_mMode,
                                                                    const GGS_bool & in_mPublic,
                                                                    const GGS_lstringlist & in_mAttributeList,
                                                                    const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                    const GGS_lstring & in_mReturnTypeName,
                                                                    const GGS_instructionListAST & in_mInstructionList,
                                                                    const GGS_location & in_mEndOfInstructionListLocation,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mSystemRoutineName (),
mProperty_mMode (),
mProperty_mPublic (),
mProperty_mAttributeList (),
mProperty_mFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionListLocation () {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mSystemRoutineName = in_mSystemRoutineName ;
  mProperty_mMode = in_mMode ;
  mProperty_mPublic = in_mPublic ;
  mProperty_mAttributeList = in_mAttributeList ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnTypeName = in_mReturnTypeName ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionListLocation = in_mEndOfInstructionListLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_systemRoutineDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationAST ;
}

void cPtr_systemRoutineDeclarationAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@systemRoutineDeclarationAST:") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSystemRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPublic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionListLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_systemRoutineDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_systemRoutineDeclarationAST (mProperty_mReceiverTypeName, mProperty_mSystemRoutineName, mProperty_mMode, mProperty_mPublic, mProperty_mAttributeList, mProperty_mFormalArgumentList, mProperty_mReturnTypeName, mProperty_mInstructionList, mProperty_mEndOfInstructionListLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_systemRoutineDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mSystemRoutineName.printNonNullClassInstanceProperties ("mSystemRoutineName") ;
    mProperty_mMode.printNonNullClassInstanceProperties ("mMode") ;
    mProperty_mPublic.printNonNullClassInstanceProperties ("mPublic") ;
    mProperty_mAttributeList.printNonNullClassInstanceProperties ("mAttributeList") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mReturnTypeName.printNonNullClassInstanceProperties ("mReturnTypeName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstructionListLocation.printNonNullClassInstanceProperties ("mEndOfInstructionListLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @systemRoutineDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST ("systemRoutineDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_systemRoutineDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_systemRoutineDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_systemRoutineDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST GGS_systemRoutineDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_systemRoutineDeclarationAST result ;
  const GGS_systemRoutineDeclarationAST * p = (const GGS_systemRoutineDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_systemRoutineDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemRoutineDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @systemUserRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_systemUserRoutineIR::objectCompare (const GGS_systemUserRoutineIR & inOperand) const {
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

GGS_systemUserRoutineIR::GGS_systemUserRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_systemUserRoutineIR GGS_systemUserRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                             const GGS_bool & in_isRequired,
                                                             const GGS_bool & in_warnsIfUnused,
                                                             const GGS_string & in_mMangledImplementationName,
                                                             const GGS_routineTypedSignature & in_mFormalArgumentList,
                                                             const GGS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                             const GGS_bool & in_mIsSection,
                                                             const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_systemUserRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_systemUserRoutineIR (inCompiler COMMA_THERE)) ;
  object->systemUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mMangledImplementationName, in_mFormalArgumentList, in_mReceiverTypeProxy, in_mIsSection, in_mReturnTypeProxy, inCompiler) ;
  const GGS_systemUserRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::
systemUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                 const GGS_bool & in_isRequired,
                                                                                 const GGS_bool & in_warnsIfUnused,
                                                                                 const GGS_string & in_mMangledImplementationName,
                                                                                 const GGS_routineTypedSignature & in_mFormalArgumentList,
                                                                                 const GGS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                                                 const GGS_bool & in_mIsSection,
                                                                                 const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mMangledImplementationName = in_mMangledImplementationName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReceiverTypeProxy = in_mReceiverTypeProxy ;
  mProperty_mIsSection = in_mIsSection ;
  mProperty_mReturnTypeProxy = in_mReturnTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR::GGS_systemUserRoutineIR (const cPtr_systemUserRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_systemUserRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_systemUserRoutineIR::readProperty_mMangledImplementationName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mMangledImplementationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemUserRoutineIR::setProperty_mMangledImplementationName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mMangledImplementationName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_systemUserRoutineIR::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineTypedSignature () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemUserRoutineIR::setProperty_mFormalArgumentList (const GGS_routineTypedSignature & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_systemUserRoutineIR::readProperty_mReceiverTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mReceiverTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemUserRoutineIR::setProperty_mReceiverTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mReceiverTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_systemUserRoutineIR::readProperty_mIsSection (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mIsSection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemUserRoutineIR::setProperty_mIsSection (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mIsSection = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_systemUserRoutineIR::readProperty_mReturnTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mReturnTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemUserRoutineIR::setProperty_mReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mReturnTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @systemUserRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_systemUserRoutineIR::cPtr_systemUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mMangledImplementationName (),
mProperty_mFormalArgumentList (),
mProperty_mReceiverTypeProxy (),
mProperty_mIsSection (),
mProperty_mReturnTypeProxy () {
}

//--------------------------------------------------------------------------------------------------

cPtr_systemUserRoutineIR::cPtr_systemUserRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                    const GGS_bool & in_isRequired,
                                                    const GGS_bool & in_warnsIfUnused,
                                                    const GGS_string & in_mMangledImplementationName,
                                                    const GGS_routineTypedSignature & in_mFormalArgumentList,
                                                    const GGS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                    const GGS_bool & in_mIsSection,
                                                    const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mMangledImplementationName (),
mProperty_mFormalArgumentList (),
mProperty_mReceiverTypeProxy (),
mProperty_mIsSection (),
mProperty_mReturnTypeProxy () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mMangledImplementationName = in_mMangledImplementationName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReceiverTypeProxy = in_mReceiverTypeProxy ;
  mProperty_mIsSection = in_mIsSection ;
  mProperty_mReturnTypeProxy = in_mReturnTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_systemUserRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemUserRoutineIR ;
}

void cPtr_systemUserRoutineIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@systemUserRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMangledImplementationName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsSection.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_systemUserRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_systemUserRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mMangledImplementationName, mProperty_mFormalArgumentList, mProperty_mReceiverTypeProxy, mProperty_mIsSection, mProperty_mReturnTypeProxy, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_systemUserRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mMangledImplementationName.printNonNullClassInstanceProperties ("mMangledImplementationName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mReceiverTypeProxy.printNonNullClassInstanceProperties ("mReceiverTypeProxy") ;
    mProperty_mIsSection.printNonNullClassInstanceProperties ("mIsSection") ;
    mProperty_mReturnTypeProxy.printNonNullClassInstanceProperties ("mReturnTypeProxy") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @systemUserRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemUserRoutineIR ("systemUserRoutineIR",
                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_systemUserRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemUserRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_systemUserRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_systemUserRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR GGS_systemUserRoutineIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_systemUserRoutineIR result ;
  const GGS_systemUserRoutineIR * p = (const GGS_systemUserRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_systemUserRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemUserRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_ (GGS_lstringlist & ioArgument_ioImportedFileList,
                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  GGS_lstring var_importedFile_579 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
  ioArgument_ioImportedFileList.addAssignOperation (var_importedFile_579  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 12)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_importedFile_579.readProperty_string ().getter_pathExtension (SOURCE_FILE ("syntax-grammar.galgas", 13)).objectCompare (GGS_string ("omnibus-import"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_importedFile_579.readProperty_location (), GGS_string ("the path extension should be .omnibus-import"), fixItArray1  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 14)) ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_ (GGS_ast & ioArgument_ioAST,
                                                                            GGS_lstringlist & outArgument_outImportedFileList,
                                                                            GGS_location & outArgument_outEndOfSourceFile,
                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("syntax-grammar.galgas", 25)) ;
  outArgument_outImportedFileList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_ (ioArgument_ioAST, inCompiler) ;
    } break ;
    case 3: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("syntax-grammar.galgas", 30)), inCompiler) ;
    } break ;
    case 4: {
      nt_import_5F_file_ (outArgument_outImportedFileList, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  outArgument_outEndOfSourceFile = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_system_5F_routine_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_import_5F_file_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_system_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_import_5F_file_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i2_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 19)) ;
  GGS_lstring var_structureName_1029 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 21)) ;
  GGS_structurePropertyListAST var_fieldList_1085 = GGS_structurePropertyListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_1 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_1085, inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_ (ioArgument_ioAST, var_structureName_1029, inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, var_structureName_1029, inCompiler) ;
    } break ;
    case 5: {
      nt_guard_ (ioArgument_ioAST, var_structureName_1029, var_structureName_1029.readProperty_string (), inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 33)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_syncDeclarationAST::init_21__21_ (var_structureName_1029, var_fieldList_1085, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i2_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 19)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_1 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_guard_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i2_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 19)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_1 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_guard_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i3_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 33)) ;
  GGS_lstring var_taskName_1526 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 34)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 35)) ;
  GGS_lstringlist var_higherPriorityTaskList_1556 = temp_0 ;
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_aTaskName_1652 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 40)) ;
      var_higherPriorityTaskList_1556.addAssignOperation (var_aTaskName_1652  COMMA_SOURCE_FILE ("task-declaration.galgas", 41)) ;
      if (select_omnibus_5F_syntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 43)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_lstring var_stackSizeAttribute_1771 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_stackSizeAttribute_1771.readProperty_string ().objectCompare (GGS_string ("stacksize"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_stackSizeAttribute_1771.readProperty_location (), GGS_string ("this attribute should be @stacksize"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 48)) ;
    }
  }
  GGS_lbigint var_stackSize_1950 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  GGS_bool var_autoStart_1997 = GGS_bool (false) ;
  switch (select_omnibus_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_activateAttribute_2057 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_activateAttribute_2057.readProperty_string ().objectCompare (GGS_string ("autostart"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_activateAttribute_2057.readProperty_location (), GGS_string ("this attribute should be @autostart"), fixItArray5  COMMA_SOURCE_FILE ("task-declaration.galgas", 57)) ;
      }
    }
    var_autoStart_1997 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
  GGS_structurePropertyListAST temp_6 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 62)) ;
  GGS_structurePropertyListAST var_taskVarList_2284 = temp_6 ;
  GGS_taskSetupListAST temp_7 = GGS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 63)) ;
  GGS_taskSetupListAST var_taskSetupList_2328 = temp_7 ;
  GGS_taskSetupListAST temp_8 = GGS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 64)) ;
  GGS_taskSetupListAST var_taskActivateList_2374 = temp_8 ;
  GGS_taskSetupListAST temp_9 = GGS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 65)) ;
  GGS_taskSetupListAST var_taskDeactivateList_2423 = temp_9 ;
  GGS_syncInstructionBranchListAST temp_10 = GGS_syncInstructionBranchListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 66)) ;
  GGS_syncInstructionBranchListAST var_branchList_2486 = temp_10 ;
  bool repeatFlag_11 = true ;
  while (repeatFlag_11) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_taskVarList_2284, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 71)) ;
      GGS_lstring var_procName_2637 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
      GGS_routineFormalArgumentListAST var_formalArgumentList_2724 ;
      nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_2724, inCompiler) ;
      GGS_lstring var_returnTypeName_2762 ;
      switch (select_omnibus_5F_syntax_6 (inCompiler)) {
      case 1: {
        var_returnTypeName_2762 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 76)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
        nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_2762, inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      GGS_instructionListAST var_instructionList_2954 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_2954, inCompiler) ;
      GGS_lstringlist temp_12 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 88)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (GGS_mode::class_func_userMode (SOURCE_FILE ("task-declaration.galgas", 84)), GGS_bool (false), var_taskName_1526, var_procName_2637, temp_12, var_formalArgumentList_2724, var_returnTypeName_2762, var_instructionList_2954, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 92)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 83)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_ (ioArgument_ioAST, var_taskName_1526, var_taskSetupList_2328, var_taskActivateList_2374, var_taskDeactivateList_2423, inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas", 98)) ;
      GGS_guardedCommandAST var_guardedCommand_3454 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, GGS_bool (false), var_guardedCommand_3454, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
      GGS_instructionListAST var_instructionList_3516 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3516, inCompiler) ;
      GGS_location var_endOfInstructions_3542 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 102)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 103)) ;
      var_branchList_2486.addAssignOperation (var_guardedCommand_3454, var_instructionList_3516, var_endOfInstructions_3542  COMMA_SOURCE_FILE ("task-declaration.galgas", 104)) ;
    } break ;
    default:
      repeatFlag_11 = false ;
      break ;
    }
  }
  GGS_location var_endOfTask_3982 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
  ioArgument_ioAST.mProperty_mTaskListAST.addAssignOperation (var_taskName_1526, var_higherPriorityTaskList_1556, var_stackSize_1950, var_taskSetupList_2328, var_taskActivateList_2374, var_taskDeactivateList_2423, var_branchList_2486, var_endOfTask_3982, var_autoStart_1997  COMMA_SOURCE_FILE ("task-declaration.galgas", 116)) ;
  GGS_lstringlist temp_13 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 130)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (var_taskName_1526, var_taskName_1526, var_taskName_1526, temp_13, GGS_bool (false), var_taskVarList_2284, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i3_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 33)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 40)) ;
      if (select_omnibus_5F_syntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 43)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  switch (select_omnibus_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
      nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
      switch (select_omnibus_5F_syntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
        nt_type_5F_definition_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas", 98)) ;
      nt_guarded_5F_command_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i3_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 33)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 40)) ;
      if (select_omnibus_5F_syntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 43)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  switch (select_omnibus_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
      nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
      switch (select_omnibus_5F_syntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas", 98)) ;
      nt_guarded_5F_command_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i4_ (GGS_ast & ioArgument_ioAST,
                                                                          const GGS_lstring constinArgument_inTaskName,
                                                                          GGS_taskSetupListAST & ioArgument_ioTaskSetupListAST,
                                                                          GGS_taskSetupListAST & ioArgument_ioTaskActivateListAST,
                                                                          GGS_taskSetupListAST & ioArgument_ioTaskDeactivateListAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 28)) ;
  GGS_lstring var_attribute_1456 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 29)) ;
  GGS_lstring var_name_1488 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 30)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 31)) ;
  GGS_lstringlist var_dependenceList_1514 = temp_0 ;
  switch (select_omnibus_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 34)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_dependenceName_1602 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 36)) ;
      var_dependenceList_1514.addAssignOperation (var_dependenceName_1602  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 37)) ;
      if (select_omnibus_5F_syntax_8 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 39)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 42)) ;
  GGS_instructionListAST var_instructionList_1744 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1744, inCompiler) ;
  GGS_location var_endOfInit_1768 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 45)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_attribute_1456.readProperty_string ().objectCompare (GGS_string ("onSetup"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioTaskSetupListAST.addAssignOperation (var_name_1488, var_dependenceList_1514  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 47)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GGS_string ("task.setup."), var_name_1488, var_dependenceList_1514, var_instructionList_1744, var_endOfInit_1768, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 48)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_attribute_1456.readProperty_string ().objectCompare (GGS_string ("onStart"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioTaskActivateListAST.addAssignOperation (var_name_1488, var_dependenceList_1514  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 57)) ;
        ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GGS_string ("task.activate."), var_name_1488, var_dependenceList_1514, var_instructionList_1744, var_endOfInit_1768, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 58)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_attribute_1456.readProperty_string ().objectCompare (GGS_string ("onTermination"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          ioArgument_ioTaskDeactivateListAST.addAssignOperation (var_name_1488, var_dependenceList_1514  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 67)) ;
          ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GGS_string ("task.deactivate."), var_name_1488, var_dependenceList_1514, var_instructionList_1744, var_endOfInit_1768, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 68)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_attribute_1456.readProperty_location (), GGS_string ("attribute should be @onSetup, @onStart or @onTermination"), fixItArray5  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 77)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i4_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 30)) ;
  switch (select_omnibus_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 34)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 36)) ;
      if (select_omnibus_5F_syntax_8 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 39)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 42)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i4_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 30)) ;
  switch (select_omnibus_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 34)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 36)) ;
      if (select_omnibus_5F_syntax_8 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 39)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 42)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i5_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  GGS_lstring var_staticListName_2759 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  GGS_staticListPropertyListAST temp_0 = GGS_staticListPropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 65)) ;
  GGS_staticListPropertyListAST var_propertyList_2817 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_staticArrayProperty_ (ioArgument_ioAST, var_propertyList_2817, inCompiler) ;
    if (select_omnibus_5F_syntax_9 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
  GGS_staticListValueListAST temp_2 = GGS_staticListValueListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 71)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_staticListAST::init_21__21__21_ (var_staticListName_2759, var_propertyList_2817, temp_2, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i5_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_parse (inCompiler) ;
    if (select_omnibus_5F_syntax_9 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i5_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_9 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i6_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_staticListPropertyListAST & ioArgument_ioPropertyList,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  GGS_lstring var_propertyName_3257 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 78)) ;
  switch (select_omnibus_5F_syntax_10 (inCompiler)) {
  case 1: {
    GGS_lstring var_typeName_3318 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3318, inCompiler) ;
    ioArgument_ioPropertyList.addAssignOperation (var_propertyName_3257, GGS_staticListPropertyTypeAST::class_func_valueType (var_typeName_3318  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 81))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 81)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 83)) ;
    GGS_mode var_mode_3431 ;
    nt_mode_ (var_mode_3431, inCompiler) ;
    GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 85)) ;
    GGS_lstringlist var_attributeList_3459 = temp_0 ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_omnibus_5F_syntax_11 (inCompiler) == 2) {
        GGS_lstring var_attribute_3530 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
        var_attributeList_3459.addAssignOperation (var_attribute_3530  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 89)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GGS_routineFormalArgumentListAST var_formalArgs_3634 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_3634, inCompiler) ;
    GGS_lstring var_returnType_3664 ;
    switch (select_omnibus_5F_syntax_12 (inCompiler)) {
    case 1: {
      var_returnType_3664 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 96)) ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_returnType_3664, inCompiler) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioPropertyList.addAssignOperation (var_propertyName_3257, GGS_staticListPropertyTypeAST::class_func_function (var_mode_3431, var_formalArgs_3634, var_returnType_3664  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 99))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 99)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i6_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 78)) ;
  switch (select_omnibus_5F_syntax_10 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 83)) ;
    nt_mode_parse (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_omnibus_5F_syntax_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 96)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i6_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 78)) ;
  switch (select_omnibus_5F_syntax_10 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 83)) ;
    nt_mode_indexing (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_omnibus_5F_syntax_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 96)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i7_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 109)) ;
  GGS_lstring var_staticListName_4274 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_extendStaticListElementAST temp_1 = GGS_extendStaticListElementAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 113)) ;
    GGS_extendStaticListElementAST var_expressions_4346 = temp_1 ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GGS_lstring var_selector_4403 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 115)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_selector_4403.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_selector_4403.readProperty_location (), GGS_string ("selector should be empty"), fixItArray4  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 117)) ;
        }
      }
      nt_staticArray_5F_exp_ (ioArgument_ioAST, var_expressions_4346, inCompiler) ;
      if (select_omnibus_5F_syntax_14 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    GGS_staticListValueListAST temp_5 = GGS_staticListValueListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 122)) ;
    GGS_staticListValueListAST var_expressionList_4620 = temp_5 ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = ioArgument_ioAST.readProperty_mExtendStaticArrayDeclarationAST ().getter_hasKey (var_staticListName_4274.readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 123)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        ioArgument_ioAST.readProperty_mExtendStaticArrayDeclarationAST ().method_searchKey (var_staticListName_4274.readProperty_string (), var_expressionList_4620, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 124)) ;
      }
    }
    var_expressionList_4620.addAssignOperation (var_expressions_4346, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 126))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 126)) ;
    ioArgument_ioAST.mProperty_mExtendStaticArrayDeclarationAST.addAssignOperation (var_staticListName_4274.readProperty_string (), var_expressionList_4620, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 127)) ;
    if (select_omnibus_5F_syntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 129)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i7_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 115)) ;
      nt_staticArray_5F_exp_parse (inCompiler) ;
      if (select_omnibus_5F_syntax_14 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_omnibus_5F_syntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 129)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 131)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i7_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 115)) ;
      nt_staticArray_5F_exp_indexing (inCompiler) ;
      if (select_omnibus_5F_syntax_14 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_omnibus_5F_syntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 129)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i8_ (GGS_ast & ioArgument_ioAST,
                                                                               GGS_extendStaticListElementAST & ioArgument_ioExpressions,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_15 (inCompiler)) {
  case 1: {
    GGS_expressionAST var_exp_5235 ;
    nt_expression_ (ioArgument_ioAST, var_exp_5235, inCompiler) ;
    ioArgument_ioExpressions.addAssignOperation (GGS_extendStaticListExpressionAST::class_func_expression (var_exp_5235  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 141)) ;
    GGS_lstring var_functionName_5337 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 142)) ;
    GGS_routineFormalArgumentListAST var_formalArgs_5398 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_5398, inCompiler) ;
    ioArgument_ioExpressions.addAssignOperation (GGS_extendStaticListExpressionAST::class_func_function (var_functionName_5337, var_formalArgs_5398  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 145)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 146))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 144)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i8_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_15 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 141)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 142)) ;
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i8_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_15 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 141)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 142)) ;
    nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i9_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 64)) ;
  GGS_lstring var_driverName_2656 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 65)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 66)) ;
  GGS_lstringlist var_driverDependenceList_2688 = temp_0 ;
  switch (select_omnibus_5F_syntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 69)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_dependenceName_2782 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
      var_driverDependenceList_2688.addAssignOperation (var_dependenceName_2782  COMMA_SOURCE_FILE ("declaration-driver.galgas", 72)) ;
      if (select_omnibus_5F_syntax_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  GGS_structurePropertyListAST temp_2 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 78)) ;
  GGS_structurePropertyListAST var_propertyListAST_2936 = temp_2 ;
  GGS_bool var_bootHandled_2966 = GGS_bool (false) ;
  GGS_location var_bootLocation_2994 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 80)) ;
  GGS_instructionListAST temp_3 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 81)) ;
  GGS_instructionListAST var_bootInstructionList_3052 = temp_3 ;
  GGS_location var_bootEndLocation_3086 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 82)) ;
  GGS_bool var_startupHandled_3127 = GGS_bool (false) ;
  GGS_location var_startupLocation_3158 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 84)) ;
  GGS_instructionListAST temp_4 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 85)) ;
  GGS_instructionListAST var_startupInstructionList_3219 = temp_4 ;
  GGS_location var_startupEndLocation_3256 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 86)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_omnibus_5F_syntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 89)) ;
      var_bootLocation_2994 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 90)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 91)) ;
      nt_instructionList_ (ioArgument_ioAST, var_bootInstructionList_3052, inCompiler) ;
      var_bootEndLocation_3086 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 94)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_bootHandled_2966.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_bootLocation_2994, GGS_string ("a driver supports at most one boot routine"), fixItArray7  COMMA_SOURCE_FILE ("declaration-driver.galgas", 96)) ;
        }
      }
      var_bootHandled_2966 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 100)) ;
      var_startupLocation_3158 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 101)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 102)) ;
      nt_instructionList_ (ioArgument_ioAST, var_startupInstructionList_3219, inCompiler) ;
      var_startupEndLocation_3256 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 104)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_startupHandled_3127.boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_startupLocation_3158, GGS_string ("a driver supports at most one startup routine"), fixItArray9  COMMA_SOURCE_FILE ("declaration-driver.galgas", 107)) ;
        }
      }
      var_startupHandled_3127 = GGS_bool (true) ;
    } break ;
    case 4: {
      nt_isr_5F_in_5F_driver_ (ioArgument_ioAST, var_driverName_2656, inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("declaration-driver.galgas", 113)), var_propertyListAST_2936, inCompiler) ;
    } break ;
    case 6: {
      nt_function_5F_declaration_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2656, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 115)), inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2656, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 117)), inCompiler) ;
    } break ;
    case 8: {
      nt_guard_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2656, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 121)), function_llvmDriverNameFromName (var_driverName_2656, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 122)).readProperty_string (), inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 124)) ;
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST.addAssignOperation (GGS_driverDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_driverName_2656, var_driverDependenceList_2688, var_propertyListAST_2936, var_bootLocation_2994, var_bootInstructionList_3052, var_bootEndLocation_3086, var_startupLocation_3158, var_startupInstructionList_3219, var_startupEndLocation_3256, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i9_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 65)) ;
  switch (select_omnibus_5F_syntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 69)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
      if (select_omnibus_5F_syntax_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 91)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 100)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 102)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
    } break ;
    case 4: {
      nt_isr_5F_in_5F_driver_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_function_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_guard_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 124)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i9_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 65)) ;
  switch (select_omnibus_5F_syntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 69)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
      if (select_omnibus_5F_syntax_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 91)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 100)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 102)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
    } break ;
    case 4: {
      nt_isr_5F_in_5F_driver_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_guard_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i10_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
  GGS_lstring var_driverName_5010 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
  GGS_driverInstanciationArgumentListAST temp_0 = GGS_driverInstanciationArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 145)) ;
  GGS_driverInstanciationArgumentListAST var_driverInstanciationArgumentList_5073 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_19 (inCompiler) == 2) {
      GGS_lstring var_selector_5156 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
      GGS_expressionAST var_expression_5197 ;
      nt_expression_ (ioArgument_ioAST, var_expression_5197, inCompiler) ;
      var_driverInstanciationArgumentList_5073.addAssignOperation (var_selector_5156, var_expression_5197  COMMA_SOURCE_FILE ("declaration-driver.galgas", 150)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
  ioArgument_ioAST.mProperty_mRequiredDriverListAST.addAssignOperation (var_driverName_5010, var_driverInstanciationArgumentList_5073  COMMA_SOURCE_FILE ("declaration-driver.galgas", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i10_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
      nt_expression_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i10_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
      nt_expression_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i11_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  GGS_lstring var_elementTypeName_1061 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_1061, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
  outArgument_outTypeName = GGS_string ("anonymous.").add_operation (ioArgument_ioAST.readProperty_mTypeDeclarationIndex ().getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 23)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_typeDynamicArrayDeclarationAST::init_21__21_ (outArgument_outTypeName, var_elementTypeName_1061, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 24)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i11_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i11_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i12_ (GGS_llvmGenerationInstructionList & outArgument_outInstructionList,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  GGS_llvmGenerationInstructionList temp_0 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 60)) ;
  outArgument_outInstructionList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_20 (inCompiler) == 2) {
      GGS_abstractLLVMInstruction var_instruction_2695 ;
      nt_llvm_5F_instruction_ (var_instruction_2695, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_2695  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 64)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i12_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_20 (inCompiler) == 2) {
      nt_llvm_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i12_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_20 (inCompiler) == 2) {
      nt_llvm_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i13_ (GGS_abstractLLVMInstruction & outArgument_outInstruction,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas", 71)) ;
  GGS_lstring var_name_2985 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 72)) ;
  outArgument_outInstruction = GGS_llvmVarInstruction::init_21_ (var_name_2985, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i13_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i13_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i14_ (GGS_abstractLLVMInstruction & outArgument_outInstruction,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas", 79)) ;
  GGS_llvmGenerationInstructionElementList temp_0 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 80)) ;
  GGS_llvmGenerationInstructionElementList var_elementList_3295 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_22 (inCompiler)) {
    case 1: {
      GGS_lstring var_string_3361 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 83)) ;
      var_elementList_3295.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (var_string_3361.readProperty_string ()  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 84))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 84)) ;
    } break ;
    case 2: {
      GGS_lstring var_name_3453 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 86)) ;
      var_elementList_3295.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (var_name_3453  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 87))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 87)) ;
    } break ;
    case 3: {
      GGS_lstring var_typeName_3535 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas", 89)) ;
      var_elementList_3295.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (var_typeName_3535  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 90))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 90)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 93)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  outArgument_outInstruction = GGS_llvmGenerationInstruction::init_21_ (var_elementList_3295, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i14_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_22 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 83)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 86)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas", 89)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i14_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_22 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 83)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 86)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas", 89)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i15_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  GGS_lstring var_typeName_1686 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  GGS_sliceAssignmentListAST temp_0 = GGS_sliceAssignmentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 39)) ;
  GGS_sliceAssignmentListAST var_sliceAssignmentListAST_1727 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_sliceWidth_1791 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    GGS_sliceTargetAST var_sliceKind_1828 ;
    switch (select_omnibus_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
      var_sliceKind_1828 = GGS_sliceTargetAST::class_func_discarded (SOURCE_FILE ("instruction-slice-assignment.galgas", 45)) ;
    } break ;
    case 2: {
      GGS_LValueAST var_target_1933 ;
      nt_lvalue_ (ioArgument_ioAST, var_target_1933, inCompiler) ;
      var_sliceKind_1828 = GGS_sliceTargetAST::class_func_lValue (var_target_1933  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 48)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      GGS_lstring var_varName_2034 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
      var_sliceKind_1828 = GGS_sliceTargetAST::class_func_varDeclaration (var_varName_2034  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 52)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      GGS_lstring var_letName_2146 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
      var_sliceKind_1828 = GGS_sliceTargetAST::class_func_letDeclaration (var_letName_2146  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 56)) ;
    } break ;
    default:
      break ;
    }
    var_sliceAssignmentListAST_1727.addAssignOperation (var_sliceWidth_1791, var_sliceKind_1828  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 58)) ;
    if (select_omnibus_5F_syntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  GGS_expressionAST var_sourceExpression_2364 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_2364, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_sliceAssignmentInstructionAST::init_21__21__21__21__21_ (var_typeName_1686.readProperty_location (), var_typeName_1686, var_sliceAssignmentListAST_1727, var_sourceExpression_2364, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 71)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i15_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    switch (select_omnibus_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
    } break ;
    case 2: {
      nt_lvalue_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i15_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    switch (select_omnibus_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
    } break ;
    case 2: {
      nt_lvalue_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i16_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_standaloneFunctionName_1151 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  GGS_effectiveArgumentListAST var_arguments_1214 ;
  GGS_location var_endOfArguments_1229 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_1214, var_endOfArguments_1229, inCompiler) ;
  outArgument_outExpression = GGS_standaloneFunctionInExpressionAST::init_21__21__21_ (var_standaloneFunctionName_1151, var_arguments_1214, var_endOfArguments_1229, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i16_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i16_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i17_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  GGS_lstring var_targetName_550 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  ioArgument_ioAST.mProperty_mTargetListAST.addAssignOperation (var_targetName_550  COMMA_SOURCE_FILE ("target-generation.galgas", 12)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i17_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i17_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i18_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  GGS_lstring var_attribute_1111 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  GGS_bool var_isSetup_1135 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_attribute_1111.readProperty_string ().objectCompare (GGS_string ("setup"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_isSetup_1135 = GGS_bool (true) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, var_attribute_1111.readProperty_string ().objectCompare (GGS_string ("loop"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_isSetup_1135 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_attribute_1111.readProperty_location (), GGS_string ("attribute should be @setup or @loop"), fixItArray2  COMMA_SOURCE_FILE ("panic.galgas", 29)) ;
      var_isSetup_1135.drop () ; // Release error dropped variable
    }
  }
  GGS_lbigint var_priority_1376 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  GGS_instructionListAST var_instructionList_1428 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1428, inCompiler) ;
  GGS_location var_endOfInstructionList_1452 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 34)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_panicAST::init_21__21__21__21_ (var_isSetup_1135, var_instructionList_1428, var_endOfInstructionList_1452, var_priority_1376, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i18_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i18_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i19_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_receiver_1751 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 34)) ;
  GGS_primaryInExpressionAccessListAST var_accessList_1832 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1832, inCompiler) ;
  outArgument_outExpression = GGS_primaryInExpressionAST::init_21__21_ (var_receiver_1751, var_accessList_1832, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i19_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 34)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i19_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 34)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i20_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
  GGS_lstring var_receiver_2132 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 45)) ;
  GGS_primaryInExpressionAccessListAST var_accessList_2225 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_2225, inCompiler) ;
  outArgument_outExpression = GGS_primaryInExpressionAST::init_21__21_ (var_receiver_2132, var_accessList_2225, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i20_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i20_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i21_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_primaryInExpressionAccessListAST & outArgument_outAccessList,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outAccessList.drop () ; // Release 'out' argument
  GGS_primaryInExpressionAccessListAST temp_0 = GGS_primaryInExpressionAccessListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 55)) ;
  outArgument_outAccessList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      GGS_lstring var_propertyName_2620 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_property (var_propertyName_2620  COMMA_SOURCE_FILE ("expression-primary.galgas", 60))  COMMA_SOURCE_FILE ("expression-primary.galgas", 60)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      GGS_lbigint var_low_2729 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      GGS_lbigint var_high_2766 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_integerSlice (var_low_2729, var_high_2766  COMMA_SOURCE_FILE ("expression-primary.galgas", 67))  COMMA_SOURCE_FILE ("expression-primary.galgas", 67)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 69)) ;
      GGS_expressionAST var_expression_2893 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2893, inCompiler) ;
      GGS_location var_endOfIndex_2914 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 71)) ;
      GGS_bool var_checkIndexExpression_2958 ;
      switch (select_omnibus_5F_syntax_26 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 74)) ;
        var_checkIndexExpression_2958 = GGS_bool (true) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 77)) ;
        var_checkIndexExpression_2958 = GGS_bool (false) ;
      } break ;
      default:
        break ;
      }
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_arrayAccess (var_expression_2893, var_endOfIndex_2914, var_checkIndexExpression_2958  COMMA_SOURCE_FILE ("expression-primary.galgas", 80))  COMMA_SOURCE_FILE ("expression-primary.galgas", 80)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      GGS_lstring var_methodName_3309 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      GGS_effectiveArgumentListAST var_arguments_3362 ;
      GGS_location var_endOfArguments_3377 ;
      nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_3362, var_endOfArguments_3377, inCompiler) ;
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_funcCall (var_methodName_3309, var_arguments_3362, var_endOfArguments_3377  COMMA_SOURCE_FILE ("expression-primary.galgas", 89))  COMMA_SOURCE_FILE ("expression-primary.galgas", 89)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i21_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 69)) ;
      nt_expression_parse (inCompiler) ;
      switch (select_omnibus_5F_syntax_26 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 77)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      nt_effective_5F_parameters_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i21_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 69)) ;
      nt_expression_indexing (inCompiler) ;
      switch (select_omnibus_5F_syntax_26 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 77)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      nt_effective_5F_parameters_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i22_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  GGS_LValueAST var_lvalue_1002 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1002, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
  outArgument_outExpression = GGS_addressofExpressionAST::init_21_ (var_lvalue_1002, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i22_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i22_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i23_ (GGS_llvmPrefixOperatorEnumeration & outArgument_outOperator,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 123)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 126)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 127)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 129)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 130)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 132)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i23_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 126)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i23_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 126)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i24_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 141)) ;
  GGS_location var_operationLocation_5319 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 142)) ;
  GGS_llvmPrefixOperatorEnumeration var_prefixOperator_5384 ;
  nt_llvmPrefixOperator_ (var_prefixOperator_5384, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 144)) ;
  GGS_lstring var_receiverName_5429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 145)) ;
  GGS_lstring var_receiverType_5460 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 148)) ;
  GGS_lstring var_resultType_5508 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 150)) ;
  GGS_llvmGenerationInstructionList var_instructionList_5560 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5560, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 152)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (var_prefixOperator_5384, var_operationLocation_5319, var_receiverName_5429, var_receiverType_5460, var_instructionList_5560, var_resultType_5508, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i24_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 141)) ;
  nt_llvmPrefixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 150)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 152)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i24_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 141)) ;
  nt_llvmPrefixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 150)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i25_ (GGS_ast & ioArgument_ioAST,
                                                                   const GGS_lstring constinArgument_inReceiverTypeName,
                                                                   const GGS_string constinArgument_inReceiverLLVMBaseTypeName,
                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_1674 ;
  switch (select_omnibus_5F_syntax_28 (inCompiler)) {
  case 1: {
    var_publicAccess_1674 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
    var_publicAccess_1674 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 42)) ;
  GGS_lstring var_guardName_1815 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 44)) ;
  GGS_lstringlist var_attributeList_1846 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_29 (inCompiler) == 2) {
      GGS_lstring var_attribute_1911 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 47)) ;
      var_attributeList_1846.addAssignOperation (var_attribute_1911  COMMA_SOURCE_FILE ("declaration-guard.galgas", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_guardFormalArgumentList_2009 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_guardFormalArgumentList_2009, inCompiler) ;
  GGS_guardKind var_guardKind_2052 ;
  switch (select_omnibus_5F_syntax_30 (inCompiler)) {
  case 1: {
    var_guardKind_2052 = GGS_guardKind::class_func_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 53)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
    GGS_callInstructionAST var_instruction_2155 ;
    nt_procedure_5F_call_ (ioArgument_ioAST, var_instruction_2155, inCompiler) ;
    var_guardKind_2052 = GGS_guardKind::class_func_convenienceGuard (var_instruction_2155  COMMA_SOURCE_FILE ("declaration-guard.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 59)) ;
  GGS_instructionListAST var_instructionList_2274 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2274, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 61)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_guardDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, constinArgument_inReceiverLLVMBaseTypeName, var_guardName_1815, var_publicAccess_1674, var_attributeList_1846, var_guardFormalArgumentList_2009, var_guardKind_2052, var_instructionList_2274, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 72)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 63)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i25_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
    nt_procedure_5F_call_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 59)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i25_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
    nt_procedure_5F_call_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 59)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i26_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  GGS_lstring var_typeName_1059 ;
  switch (select_omnibus_5F_syntax_31 (inCompiler)) {
  case 1: {
    var_typeName_1059 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1059, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfExpression_1219 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  outArgument_outExpression = GGS_convertExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_1059, var_endOfExpression_1219, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i26_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i26_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i27_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  GGS_registerGroupListAST temp_0 = GGS_registerGroupListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 85)) ;
  GGS_registerGroupListAST var_registerGroupListAST_3737 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_registerGroupName_3795 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    switch (select_omnibus_5F_syntax_33 (inCompiler)) {
    case 1: {
      GGS_lstring var_attribute_3852 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_attribute_3852.readProperty_string ().objectCompare (GGS_string ("at"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_attribute_3852.readProperty_location (), GGS_string ("attribute should be @at"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 91)) ;
        }
      }
      GGS_lbigint var_registerGroupBaseAddress_4001 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
      GGS_controlRegisterGroupKindAST var_groupKind_4038 = GGS_controlRegisterGroupKindAST::class_func_single (var_registerGroupBaseAddress_4001  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 94)) ;
      var_registerGroupListAST_3737.addAssignOperation (var_registerGroupName_3795, var_groupKind_4038  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 95)) ;
    } break ;
    case 2: {
      GGS_lbigintlist temp_4 = GGS_lbigintlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 97)) ;
      GGS_lbigintlist var_groupBaseAddresses_4235 = temp_4 ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
      GGS_expressionAST var_groupSize_4306 ;
      nt_expression_ (ioArgument_ioAST, var_groupSize_4306, inCompiler) ;
      GGS_location var_groupSizeExpressionLocation_4328 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 100)) ;
      GGS_lstring var_attribute_4399 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::notEqual, var_attribute_4399.readProperty_string ().objectCompare (GGS_string ("at"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (var_attribute_4399.readProperty_location (), GGS_string ("attribute should be @at"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 103)) ;
        }
      }
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GGS_lbigint var_baseAddress_4565 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
        var_groupBaseAddresses_4235.addAssignOperation (var_baseAddress_4565  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 107)) ;
        if (select_omnibus_5F_syntax_34 (inCompiler) == 2) {
        }else{
          repeatFlag_7 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 111)) ;
      GGS_controlRegisterGroupKindAST var_groupKind_4688 = GGS_controlRegisterGroupKindAST::class_func_groupArray (var_groupSize_4306, var_groupSizeExpressionLocation_4328, var_groupBaseAddresses_4235  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 112)) ;
      var_registerGroupListAST_3737.addAssignOperation (var_registerGroupName_3795, var_groupKind_4688  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 117)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_32 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
  GGS_controlRegisterDeclarationList temp_8 = GGS_controlRegisterDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 123)) ;
  GGS_controlRegisterDeclarationList var_controlRegisterDeclarationList_5043 = temp_8 ;
  bool repeatFlag_9 = true ;
  while (repeatFlag_9) {
    GGS_controlRegisterNameListAST temp_10 = GGS_controlRegisterNameListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 125)) ;
    GGS_controlRegisterNameListAST var_registerDeclarationList_5129 = temp_10 ;
    bool repeatFlag_11 = true ;
    while (repeatFlag_11) {
      nt_registerDeclaration_ (ioArgument_ioAST, var_registerDeclarationList_5129, inCompiler) ;
      if (select_omnibus_5F_syntax_36 (inCompiler) == 2) {
      }else{
        repeatFlag_11 = false ;
      }
    }
    GGS_lstring var_registerTypeName_5292 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 131)) ;
    GGS_controlRegisterBitSliceList temp_12 = GGS_controlRegisterBitSliceList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 132)) ;
    GGS_controlRegisterBitSliceList var_registerBitSliceList_5348 = temp_12 ;
    switch (select_omnibus_5F_syntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
      bool repeatFlag_13 = true ;
      while (repeatFlag_13) {
        GGS_controlRegisterBitSlice var_registerBitSlice_5463 ;
        switch (select_omnibus_5F_syntax_39 (inCompiler)) {
        case 1: {
          GGS_lbigint var_unusedBitCount_5533 = inCompiler->synthetizedAttribute_bigInteger () ;
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
          var_registerBitSlice_5463 = GGS_controlRegisterBitSlice::class_func_unusedBits (var_unusedBitCount_5533  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 140)) ;
        } break ;
        case 2: {
          GGS_lstring var_bitName_5658 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
          switch (select_omnibus_5F_syntax_40 (inCompiler)) {
          case 1: {
            var_registerBitSlice_5463 = GGS_controlRegisterBitSlice::class_func_namedBit (var_bitName_5658, GGS_lbigint::init_21__21_ (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
            GGS_lbigint var_bitCount_5836 = inCompiler->synthetizedAttribute_bigInteger () ;
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 147)) ;
            var_registerBitSlice_5463 = GGS_controlRegisterBitSlice::class_func_namedBit (var_bitName_5658, var_bitCount_5836  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 148)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        var_registerBitSliceList_5348.addAssignOperation (var_registerBitSlice_5463  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 151)) ;
        if (select_omnibus_5F_syntax_38 (inCompiler) == 2) {
        }else{
          repeatFlag_13 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 155)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_endOfBitSlice_6076 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 157)) ;
    var_controlRegisterDeclarationList_5043.addAssignOperation (var_registerDeclarationList_5129, var_registerTypeName_5292, var_registerBitSliceList_5348, var_endOfBitSlice_6076  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 158)) ;
    if (select_omnibus_5F_syntax_35 (inCompiler) == 2) {
    }else{
      repeatFlag_9 = false ;
    }
  }
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_controlRegisterGroupDeclarationAST::init_21__21_ (var_registerGroupListAST_3737, var_controlRegisterDeclarationList_5043, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 161)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i27_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    switch (select_omnibus_5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
        if (select_omnibus_5F_syntax_34 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 111)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_32 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      nt_registerDeclaration_parse (inCompiler) ;
      if (select_omnibus_5F_syntax_36 (inCompiler) == 2) {
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 131)) ;
    switch (select_omnibus_5F_syntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_omnibus_5F_syntax_39 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
          switch (select_omnibus_5F_syntax_40 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 147)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        if (select_omnibus_5F_syntax_38 (inCompiler) == 2) {
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 155)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_35 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 165)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i27_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    switch (select_omnibus_5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
        if (select_omnibus_5F_syntax_34 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 111)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_32 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      nt_registerDeclaration_indexing (inCompiler) ;
      if (select_omnibus_5F_syntax_36 (inCompiler) == 2) {
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 131)) ;
    switch (select_omnibus_5F_syntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_omnibus_5F_syntax_39 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
          switch (select_omnibus_5F_syntax_40 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 147)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        if (select_omnibus_5F_syntax_38 (inCompiler) == 2) {
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 155)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_35 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i28_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_controlRegisterNameListAST & ioArgument_ioRegisterDeclarationList,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_registerName_6797 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 173)) ;
  switch (select_omnibus_5F_syntax_41 (inCompiler)) {
  case 1: {
    GGS_lstring var_attributeOffset_6845 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 175)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_attributeOffset_6845.readProperty_string ().objectCompare (GGS_string ("offset"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@offset")) ;
        inCompiler->emitSemanticError (var_attributeOffset_6845.readProperty_location (), GGS_string ("attribute should be @offset"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 177)) ;
      }
    }
    GGS_expressionAST var_registerOffset_7042 ;
    nt_expression_ (ioArgument_ioAST, var_registerOffset_7042, inCompiler) ;
    GGS_bool var_isReadOnly_7073 ;
    switch (select_omnibus_5F_syntax_42 (inCompiler)) {
    case 1: {
      var_isReadOnly_7073 = GGS_bool (false) ;
    } break ;
    case 2: {
      GGS_lstring var_attribute_7159 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 184)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_attribute_7159.readProperty_string ().objectCompare (GGS_string ("ro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, GGS_string ("@ro")) ;
          inCompiler->emitSemanticError (var_attribute_7159.readProperty_location (), GGS_string ("attribute should be @ro"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 186)) ;
        }
      }
      var_isReadOnly_7073 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioRegisterDeclarationList.addAssignOperation (var_registerName_6797, GGS_controlRegisterKind::class_func_scalar (SOURCE_FILE ("declaration-control-register.galgas", 192)), var_isReadOnly_7073, var_registerOffset_7042, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 195))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 190)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)) ;
    GGS_expressionAST var_sizeExpression_7519 ;
    nt_expression_ (ioArgument_ioAST, var_sizeExpression_7519, inCompiler) ;
    GGS_location var_sizeExpressionLocation_7544 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 199)) ;
    GGS_lstring var_attributeOffset_7608 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_attributeOffset_7608.readProperty_string ().objectCompare (GGS_string ("offset"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, EnumFixItKind::fixItReplace, GGS_string ("@offset")) ;
        inCompiler->emitSemanticError (var_attributeOffset_7608.readProperty_location (), GGS_string ("attribute should be @offset"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 202)) ;
      }
    }
    GGS_expressionAST var_baseAddressExpression_7805 ;
    nt_expression_ (ioArgument_ioAST, var_baseAddressExpression_7805, inCompiler) ;
    GGS_location var_baseAddressExpressionLocation_7837 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 205)) ;
    GGS_lstring var_attributeInc_7908 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::notEqual, var_attributeInc_7908.readProperty_string ().objectCompare (GGS_string ("inc"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@inc")) ;
        inCompiler->emitSemanticError (var_attributeInc_7908.readProperty_location (), GGS_string ("attribute should be @inc"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 208)) ;
      }
    }
    GGS_expressionAST var_arrayElementSizeExpression_8087 ;
    nt_expression_ (ioArgument_ioAST, var_arrayElementSizeExpression_8087, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    GGS_bool var_isReadOnly_8140 ;
    switch (select_omnibus_5F_syntax_43 (inCompiler)) {
    case 1: {
      var_isReadOnly_8140 = GGS_bool (false) ;
    } break ;
    case 2: {
      GGS_lstring var_attribute_8226 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, var_attribute_8226.readProperty_string ().objectCompare (GGS_string ("ro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, GGS_string ("@ro")) ;
          inCompiler->emitSemanticError (var_attribute_8226.readProperty_location (), GGS_string ("attribute should be @ro"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 218)) ;
        }
      }
      var_isReadOnly_8140 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_arrayElementSizeExpressionLocation_8413 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 222)) ;
    ioArgument_ioRegisterDeclarationList.addAssignOperation (var_registerName_6797, GGS_controlRegisterKind::class_func_registerArray (var_sizeExpression_7519, var_sizeExpressionLocation_7544, var_arrayElementSizeExpression_8087, var_arrayElementSizeExpressionLocation_8413  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 225)), var_isReadOnly_8140, var_baseAddressExpression_7805, var_baseAddressExpressionLocation_7837  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 223)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i28_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 173)) ;
  switch (select_omnibus_5F_syntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 175)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 184)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    switch (select_omnibus_5F_syntax_43 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i28_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 173)) ;
  switch (select_omnibus_5F_syntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 175)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 184)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    switch (select_omnibus_5F_syntax_43 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i29_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 242)) ;
  GGS_lstring var_attribute_9246 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_attribute_9246.readProperty_string ().objectCompare (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 244)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_attribute_9246.readProperty_location (), GGS_string ("this attribute should be @").add_operation (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)) ;
    }
  }
  GGS_lstring var_registerGroupName_9429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 247)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 248)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_registerName_9490 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    GGS_lstring var_key_9513 = GGS_lstring::init_21__21_ (GGS_string ("//").add_operation (var_registerGroupName_9429.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)).add_operation (var_registerName_9490.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)), var_registerName_9490.readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioAST.mProperty_mControlRegisterUserAccesMapAST.setter_insertKey (var_key_9513, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 252)) ;
    }
    if (select_omnibus_5F_syntax_44 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 254)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i29_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 242)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 247)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 248)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    if (select_omnibus_5F_syntax_44 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 254)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i29_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 242)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 247)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 248)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    if (select_omnibus_5F_syntax_44 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 254)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i30_ (GGS_lstring & outArgument_outTargetVariableName,
                                                                                        GGS_lstring & outArgument_outTargetTypeName,
                                                                                        GGS_genericFormalParameterList & outArgument_outTargetGenericFormalParameterList,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTargetVariableName.drop () ; // Release 'out' argument
  outArgument_outTargetTypeName.drop () ; // Release 'out' argument
  outArgument_outTargetGenericFormalParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 38)) ;
  outArgument_outTargetVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 39)) ;
  outArgument_outTargetTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 40)) ;
  nt_generic_5F_formal_5F_arguments_ (outArgument_outTargetGenericFormalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i30_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 40)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i30_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 40)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i31_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_targetVariableName_2158 ;
  GGS_lstring var_targetTypeName_2182 ;
  GGS_genericFormalParameterList var_targetGenericFormalParameterList_2202 ;
  nt_llvm_5F_function_5F_header_ (var_targetVariableName_2158, var_targetTypeName_2182, var_targetGenericFormalParameterList_2202, inCompiler) ;
  GGS_location var_operatorLocation_2243 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 49)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 51)) ;
  GGS_lstring var_sourceVariableName_2315 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 52)) ;
  GGS_lstring var_sourceTypeName_2352 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 53)) ;
  GGS_genericFormalParameterList var_sourceGenericFormalParameterList_2403 ;
  nt_generic_5F_formal_5F_arguments_ (var_sourceGenericFormalParameterList_2403, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 55)) ;
  GGS_ctExpressionAST var_whereClause_2476 ;
  nt_generic_5F_where_5F_clause_ (var_whereClause_2476, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 57)) ;
  GGS_llvmGenerationInstructionList var_instructionList_2529 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_2529, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 59)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmAssignmentOperatorDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_operatorLocation_2243, var_targetVariableName_2158, var_targetTypeName_2182, var_targetGenericFormalParameterList_2202, var_sourceVariableName_2315, var_sourceTypeName_2352, var_sourceGenericFormalParameterList_2403, var_whereClause_2476, var_instructionList_2529, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i31_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 53)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 55)) ;
  nt_generic_5F_where_5F_clause_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 57)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 59)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i31_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 53)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 55)) ;
  nt_generic_5F_where_5F_clause_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 57)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i32_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  GGS_lstring var_opaqueTypeName_1104 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 23)) ;
  GGS_lstringlist var_attributeList_1140 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_45 (inCompiler) == 2) {
      GGS_lstring var_attribute_1205 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
      var_attributeList_1140.addAssignOperation (var_attribute_1205  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 27)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  GGS_expressionAST var_sizeExpression_1295 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1295, inCompiler) ;
  GGS_location var_sizeExpressionLocation_1318 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_typeOpaqueDeclarationAST::init_21__21__21__21_ (var_opaqueTypeName_1104, var_sizeExpression_1295, var_sizeExpressionLocation_1318, var_attributeList_1140, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i32_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i32_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i33_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_controlRegisterLValueAST var_registerLValue_1242 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1242, inCompiler) ;
  GGS_lstring var_attribute_1279 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_attribute_1279.readProperty_string ().objectCompare (GGS_string ("bit"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@bit")) ;
      inCompiler->emitSemanticError (var_attribute_1279.readProperty_location (), GGS_string ("attribute should be @bit"), fixItArray1  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 25)) ;
    }
  }
  GGS_expressionAST var_bitExpression_1441 ;
  nt_expression_ (ioArgument_ioAST, var_bitExpression_1441, inCompiler) ;
  GGS_location var_bitExpressionLocation_1463 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  GGS_expressionAST var_sourceExpression_1540 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1540, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_bitbandInstructionAST::init_21__21__21__21__21__21_ (var_registerLValue_1242.readProperty_mRegisterGroupName ().readProperty_location (), var_registerLValue_1242, var_bitExpression_1441, var_bitExpressionLocation_1463, var_sourceExpression_1540, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 38)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i33_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i33_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_ (GGS_ast & ioArgument_ioAST,
                                                                                              const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_1365 ;
  switch (select_omnibus_5F_syntax_46 (inCompiler)) {
  case 1: {
    var_publicAccess_1365 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 30)) ;
    var_publicAccess_1365 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  GGS_lstring var_name_1508 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 34)) ;
  GGS_mode var_mode_1527 ;
  switch (select_omnibus_5F_syntax_47 (inCompiler)) {
  case 1: {
    var_mode_1527 = GGS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-svc.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
    var_mode_1527 = GGS_mode::class_func_safeSectionMode (SOURCE_FILE ("declaration-svc.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 42)) ;
  GGS_lstringlist var_attributeList_1648 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_48 (inCompiler) == 2) {
      GGS_lstring var_attribute_1713 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
      var_attributeList_1648.addAssignOperation (var_attribute_1713  COMMA_SOURCE_FILE ("declaration-svc.galgas", 46)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_formalArgumentList_1811 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_1811, inCompiler) ;
  GGS_lstring var_returnTypeName_1847 ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
    var_returnTypeName_1847 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 53)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1847, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  GGS_instructionListAST var_instructionList_2023 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2023, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_1508, var_mode_1527, var_publicAccess_1365, var_attributeList_1648, var_formalArgumentList_1811, var_returnTypeName_1847, var_instructionList_2023, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 67)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_48 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 53)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_48 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 53)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_ (GGS_ast & ioArgument_ioAST,
                                                                                              const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_2628 ;
  switch (select_omnibus_5F_syntax_50 (inCompiler)) {
  case 1: {
    var_publicAccess_2628 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
    var_publicAccess_2628 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 84)) ;
  GGS_lstring var_name_2773 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  GGS_mode var_mode_2792 ;
  switch (select_omnibus_5F_syntax_51 (inCompiler)) {
  case 1: {
    var_mode_2792 = GGS_mode::class_func_primitiveMode (SOURCE_FILE ("declaration-svc.galgas", 88)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
    var_mode_2792 = GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("declaration-svc.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 93)) ;
  GGS_lstringlist var_attributeList_2917 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_52 (inCompiler) == 2) {
      GGS_lstring var_attribute_2982 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 96)) ;
      var_attributeList_2917.addAssignOperation (var_attribute_2982  COMMA_SOURCE_FILE ("declaration-svc.galgas", 97)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_formalArgumentList_3086 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_3086, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
  GGS_instructionListAST var_instructionList_3148 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_3148, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 102)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_2773, var_mode_2792, var_publicAccess_2628, var_attributeList_2917, var_formalArgumentList_3086, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 110)), var_instructionList_3148, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 112)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 103)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 84)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  switch (select_omnibus_5F_syntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 96)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 84)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  switch (select_omnibus_5F_syntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 96)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i36_ (GGS_ast & ioArgument_ioAST,
                                                                                              const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_3658 ;
  switch (select_omnibus_5F_syntax_53 (inCompiler)) {
  case 1: {
    var_publicAccess_3658 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)) ;
    var_publicAccess_3658 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 126)) ;
  GGS_lstring var_name_3801 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  GGS_mode var_mode_3820 ;
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
    var_mode_3820 = GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-svc.galgas", 130)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
    var_mode_3820 = GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("declaration-svc.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 135)) ;
  GGS_lstringlist var_attributeList_3941 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_55 (inCompiler) == 2) {
      GGS_lstring var_attribute_4006 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
      var_attributeList_3941.addAssignOperation (var_attribute_4006  COMMA_SOURCE_FILE ("declaration-svc.galgas", 139)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_formalArgumentList_4110 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_4110, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 142)) ;
  GGS_instructionListAST var_instructionList_4172 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_4172, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 144)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_3801, var_mode_3820, var_publicAccess_3658, var_attributeList_3941, var_formalArgumentList_4110, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 152)), var_instructionList_4172, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 154)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i36_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 126)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_55 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 142)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 144)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i36_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 126)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_55 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 142)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 144)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i37_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  GGS_location var_loc_992 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 19)) ;
  GGS_expressionAST var_expression_1058 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1058, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_assertInstructionAST::init_21__21_ (var_loc_992, var_expression_1058, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i37_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i37_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i38_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  GGS_lstring var_newTypeName_1260 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  GGS_lstring var_typeName_1315 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1315, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_typeAliasDeclarationAST::init_21__21_ (var_newTypeName_1260, var_typeName_1315, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-alias.galgas", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i38_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i38_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i39_ (GGS_ast & /* ioArgument_ioAST */,
                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i39_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i39_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i40_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_callInstructionAST var_routineCallInstruction_1573 ;
  nt_procedure_5F_call_ (ioArgument_ioAST, var_routineCallInstruction_1573, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_routineCallInstruction_1573  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i40_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_procedure_5F_call_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i40_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_procedure_5F_call_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i41_ (GGS_ast & ioArgument_ioAST,
                                                                               GGS_callInstructionAST & outArgument_outInstruction,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_1856 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 39)) ;
  GGS_LValueAST var_assignmentTargetAST_1919 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_1919, inCompiler) ;
  GGS_effectiveArgumentListAST var_arguments_1979 ;
  GGS_location var_endOfArguments_1994 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_1979, var_endOfArguments_1994, inCompiler) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_assignmentTargetAST_1919.readProperty_mOperand ().objectCompare (GGS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("instruction-procedure-call.galgas", 42)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_assignmentTargetAST_1919.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 42)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outInstruction = GGS_standAloneProcedureCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_1856, var_arguments_1979, var_endOfArguments_1994, var_assignmentTargetAST_1919.readProperty_mIdentifier (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_accessInAssignmentListAST temp_1 = GGS_accessInAssignmentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 50)) ;
    GGS_accessInAssignmentListAST var_accessList_2346 = temp_1 ;
    extensionMethod_buildProcedureCallAccessList (var_assignmentTargetAST_1919.readProperty_mOperand (), var_accessList_2346, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 51)) ;
    outArgument_outInstruction = GGS_procedureCallInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1856, var_arguments_1979, var_endOfArguments_1994, var_assignmentTargetAST_1919.readProperty_mIdentifier (), var_accessList_2346, inCompiler COMMA_HERE) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i41_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i41_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i42_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  GGS_mode var_mode_1259 ;
  GGS_lstring var_procName_1280 ;
  GGS_lstringlist var_attributeList_1311 ;
  GGS_routineFormalArgumentListAST var_procFormalArgumentList_1352 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1259, var_procName_1280, var_attributeList_1311, var_procFormalArgumentList_1352, inCompiler) ;
  GGS_lstring var_returnTypeName_1392 ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
    var_returnTypeName_1392 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 33)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1392, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  GGS_lstring var_llvmName_1553 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
  ioArgument_ioAST.mProperty_mExternFunctionListAST.addAssignOperation (var_procName_1280, var_mode_1259, var_attributeList_1311, var_procFormalArgumentList_1352, var_returnTypeName_1392, var_llvmName_1553, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 47))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i42_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i42_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  nt_function_5F_header_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i43_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 44)) ;
  GGS_lstring var_receiverName_2006 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 45)) ;
  GGS_lstring var_receiverTypeName_2037 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 47)) ;
  GGS_lstring var_converterName_2084 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 49)) ;
  GGS_ctExpressionAST var_expression_2158 ;
  nt_compile_5F_time_5F_expression_ (var_expression_2158, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 51)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_compileTimeConvertToBooleanAST::init_21__21__21__21_ (var_receiverName_2006, var_receiverTypeName_2037, var_converterName_2084, var_expression_2158, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i43_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 49)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i43_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 49)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_receiverName_2530 ;
  GGS_lstring var_receiverTypeName_2548 ;
  GGS_genericFormalParameterList var_receiverGenericFormalParameterList_2577 ;
  nt_llvm_5F_function_5F_header_ (var_receiverName_2530, var_receiverTypeName_2548, var_receiverGenericFormalParameterList_2577, inCompiler) ;
  GGS_lstring var_converterName_2634 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 65)) ;
  GGS_llvmGenerationInstructionList var_instructionList_2689 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_2689, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 67)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmConvertToBooleanAST::init_21__21__21__21_ (var_receiverName_2530, var_receiverTypeName_2548, var_converterName_2634, var_instructionList_2689, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 65)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 65)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i45_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  GGS_lstring var_checkMessage_1038 ;
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
    var_checkMessage_1038 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 22)) ;
  } break ;
  case 2: {
    var_checkMessage_1038 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  GGS_expressionAST var_expression_1192 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1192, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_checkInstructionAST::init_21__21__21_ (var_checkMessage_1038.readProperty_location (), var_checkMessage_1038, var_expression_1192, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("directive-check.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i45_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i45_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i46_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  GGS_lstring var_typeName_1061 ;
  switch (select_omnibus_5F_syntax_58 (inCompiler)) {
  case 1: {
    var_typeName_1061 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1061, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfExpression_1221 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  outArgument_outExpression = GGS_truncateExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_1061, var_endOfExpression_1221, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i46_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i46_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i47_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  GGS_lstring var_typeName_1059 ;
  switch (select_omnibus_5F_syntax_59 (inCompiler)) {
  case 1: {
    var_typeName_1059 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1059, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfExpression_1219 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  outArgument_outExpression = GGS_extendExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_1059, var_endOfExpression_1219, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i47_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i47_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i48_ (GGS_ast & ioArgument_ioAST,
                                                                        GGS_expressionAST & outArgument_outExpression,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      GGS_location var_operatorLocation_998 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 21)) ;
      GGS_expressionAST var_rightExpression_1076 ;
      nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, var_rightExpression_1076, inCompiler) ;
      GGS_booleanShortCircuitAndOperatorExpressionAST var_andExpression_1155 = GGS_booleanShortCircuitAndOperatorExpressionAST::init_21__21__21_ (GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_998, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 25)), outArgument_outExpression, inCompiler COMMA_HERE), var_operatorLocation_998, GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_998, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 27)), var_rightExpression_1076, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
      outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_998, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 31)), var_andExpression_1155, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i48_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      nt_expression_5F_logical_5F_and_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i48_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      nt_expression_5F_logical_5F_and_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i49_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      GGS_location var_operatorLocation_2456 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 62)) ;
      GGS_expressionAST var_rightExpression_2533 ;
      nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, var_rightExpression_2533, inCompiler) ;
      outArgument_outExpression = GGS_booleanShortCircuitAndOperatorExpressionAST::init_21__21__21_ (outArgument_outExpression, var_operatorLocation_2456, var_rightExpression_2533, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i49_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_or_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      nt_expression_5F_bitwise_5F_or_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i49_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_or_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      nt_expression_5F_bitwise_5F_or_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i50_ (GGS_ast & ioArgument_ioAST,
                                                                                         GGS_expressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      GGS_location var_operatorLocation_3005 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 79)) ;
      GGS_expressionAST var_rightExpression_3083 ;
      nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, var_rightExpression_3083, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3005, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("expression-operator-priority.galgas", 84)), var_rightExpression_3083, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i50_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      nt_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i50_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      nt_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i51_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      GGS_location var_operatorLocation_3568 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 97)) ;
      GGS_expressionAST var_rightExpression_3646 ;
      nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, var_rightExpression_3646, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3568, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("expression-operator-priority.galgas", 102)), var_rightExpression_3646, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i51_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      nt_expression_5F_bitwise_5F_and_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i51_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      nt_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i52_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_equality_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      GGS_location var_operatorLocation_4130 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 115)) ;
      GGS_expressionAST var_rightExpression_4205 ;
      nt_expression_5F_equality_ (ioArgument_ioAST, var_rightExpression_4205, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4130, GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("expression-operator-priority.galgas", 120)), var_rightExpression_4205, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i52_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_equality_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      nt_expression_5F_equality_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i52_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_equality_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      nt_expression_5F_equality_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i53_ (GGS_ast & ioArgument_ioAST,
                                                                                    GGS_expressionAST & outArgument_outExpression,
                                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_comparison_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    GGS_location var_operatorLocation_4685 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 133)) ;
    GGS_expressionAST var_rightExpression_4762 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_4762, inCompiler) ;
    outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4685, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("expression-operator-priority.galgas", 138)), var_rightExpression_4762, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    GGS_location var_operatorLocation_4962 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 143)) ;
    GGS_expressionAST var_rightExpression_5039 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_5039, inCompiler) ;
    GGS_omnibusInfixOperatorExpressionAST var_expression_5065 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4962, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("expression-operator-priority.galgas", 148)), var_rightExpression_5039, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_4962, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 153)), var_expression_5065, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i53_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_comparison_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    nt_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    nt_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i53_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_comparison_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    nt_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    nt_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i54_ (GGS_ast & ioArgument_ioAST,
                                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_shift_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 165)) ;
    GGS_location var_operatorLocation_5632 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 166)) ;
    GGS_expressionAST var_rightExpression_5704 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5704, inCompiler) ;
    outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5632, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("expression-operator-priority.galgas", 171)), var_rightExpression_5704, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 175)) ;
    GGS_location var_operatorLocation_5907 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 176)) ;
    GGS_expressionAST var_rightExpression_5979 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5979, inCompiler) ;
    GGS_omnibusInfixOperatorExpressionAST var_expression_6005 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5907, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("expression-operator-priority.galgas", 181)), var_rightExpression_5979, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_5907, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 186)), var_expression_6005, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    GGS_location var_operatorLocation_6306 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 191)) ;
    GGS_expressionAST var_rightExpression_6378 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6378, inCompiler) ;
    outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6306, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("expression-operator-priority.galgas", 196)), var_rightExpression_6378, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 200)) ;
    GGS_location var_operatorLocation_6581 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 201)) ;
    GGS_expressionAST var_rightExpression_6653 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6653, inCompiler) ;
    GGS_omnibusInfixOperatorExpressionAST var_expression_6679 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6581, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("expression-operator-priority.galgas", 206)), var_rightExpression_6653, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_6581, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 211)), var_expression_6679, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i54_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_shift_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 165)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 175)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 200)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i54_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_shift_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 165)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 175)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 200)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i55_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_expressionAST & outArgument_outExpression,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_addition_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_67 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 223)) ;
      GGS_location var_operatorLocation_7251 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 224)) ;
      GGS_expressionAST var_rightExpression_7326 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_7326, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7251, GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 229)), var_rightExpression_7326, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 233)) ;
      GGS_location var_operatorLocation_7536 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 234)) ;
      GGS_expressionAST var_rightExpression_7611 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_7611, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7536, GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 239)), var_rightExpression_7611, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i55_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_addition_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_67 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 223)) ;
      nt_expression_5F_addition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 233)) ;
      nt_expression_5F_addition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i55_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_addition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_67 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 223)) ;
      nt_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 233)) ;
      nt_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i56_ (GGS_ast & ioArgument_ioAST,
                                                                                    GGS_expressionAST & outArgument_outExpression,
                                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_product_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 251)) ;
      GGS_location var_operatorLocation_8090 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 252)) ;
      GGS_expressionAST var_rightExpression_8164 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8164, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8090, GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("expression-operator-priority.galgas", 257)), var_rightExpression_8164, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 261)) ;
      GGS_location var_operatorLocation_8368 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 262)) ;
      GGS_expressionAST var_rightExpression_8442 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8442, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8368, GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 267)), var_rightExpression_8442, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 271)) ;
      GGS_location var_operatorLocation_8650 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 272)) ;
      GGS_expressionAST var_rightExpression_8724 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8724, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8650, GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("expression-operator-priority.galgas", 277)), var_rightExpression_8724, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 281)) ;
      GGS_location var_operatorLocation_8928 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 282)) ;
      GGS_expressionAST var_rightExpression_9002 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_9002, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8928, GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 287)), var_rightExpression_9002, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i56_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_product_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 251)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 261)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 271)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 281)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i56_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_product_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 251)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 261)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 271)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 281)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i57_ (GGS_ast & ioArgument_ioAST,
                                                                                   GGS_expressionAST & outArgument_outExpression,
                                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_69 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 299)) ;
      GGS_location var_operatorLocation_9467 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 300)) ;
      GGS_expressionAST var_rightExpression_9530 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9530, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9467, GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("expression-operator-priority.galgas", 305)), var_rightExpression_9530, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 309)) ;
      GGS_location var_operatorLocation_9734 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 310)) ;
      GGS_expressionAST var_rightExpression_9797 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9797, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9734, GGS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 315)), var_rightExpression_9797, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 319)) ;
      GGS_location var_operatorLocation_10005 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 320)) ;
      GGS_expressionAST var_rightExpression_10068 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10068, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10005, GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("expression-operator-priority.galgas", 325)), var_rightExpression_10068, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 329)) ;
      GGS_location var_operatorLocation_10272 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 330)) ;
      GGS_expressionAST var_rightExpression_10335 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10335, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10272, GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 335)), var_rightExpression_10335, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 339)) ;
      GGS_location var_operatorLocation_10543 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 340)) ;
      GGS_expressionAST var_rightExpression_10606 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10606, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10543, GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("expression-operator-priority.galgas", 345)), var_rightExpression_10606, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
      GGS_location var_operatorLocation_10810 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 350)) ;
      GGS_expressionAST var_rightExpression_10873 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10873, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10810, GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 355)), var_rightExpression_10873, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i57_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_69 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 299)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 309)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 319)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 329)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 339)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i57_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_69 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 299)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 309)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 319)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 329)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 339)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i58_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 364)) ;
  GGS_location var_operatorLocation_11265 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 365)) ;
  GGS_expressionAST var_expression_11326 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11326, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_11265, GGS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("expression-operator-priority.galgas", 369)), var_expression_11326, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i58_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 364)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i58_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 364)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i59_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 377)) ;
  GGS_location var_operatorLocation_11670 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 378)) ;
  GGS_expressionAST var_expression_11731 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11731, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_11670, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 382)), var_expression_11731, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i59_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 377)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i59_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 377)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i60_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 390)) ;
  GGS_location var_operatorLocation_12061 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 391)) ;
  GGS_expressionAST var_expression_12122 ;
  nt_primary_ (ioArgument_ioAST, var_expression_12122, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_12061, GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("expression-operator-priority.galgas", 395)), var_expression_12122, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i60_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 390)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i60_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 390)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i61_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  GGS_location var_operatorLocation_12455 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 404)) ;
  GGS_expressionAST var_expression_12516 ;
  nt_primary_ (ioArgument_ioAST, var_expression_12516, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_12455, GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 408)), var_expression_12516, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i61_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i61_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i62_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 416)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 418)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i62_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 416)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 418)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i62_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 416)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 418)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i63_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 28)) ;
  GGS_lstringlist var_attributeList_1388 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_70 (inCompiler) == 2) {
      GGS_lstring var_attribute_1453 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 31)) ;
      var_attributeList_1388.addAssignOperation (var_attribute_1453  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 32)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstring var_constantName_1527 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  GGS_lstring var_typeName_1557 ;
  switch (select_omnibus_5F_syntax_71 (inCompiler)) {
  case 1: {
    var_typeName_1557 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 37)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1557, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  GGS_expressionAST var_expression_1717 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1717, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_globalConstantDeclarationAST::init_21__21__21__21_ (var_constantName_1527, var_attributeList_1388, var_typeName_1557, var_expression_1717, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i63_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i63_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i64_ (GGS_ast & ioArgument_ioAST,
                                                                                           GGS_controlRegisterLValueAST & outArgument_outRegisterLValue,
                                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outRegisterLValue.drop () ; // Release 'out' argument
  GGS_lstring var_registerGroupName_1651 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  GGS_registerGroupIndexAST var_groupIndex_1700 ;
  switch (select_omnibus_5F_syntax_72 (inCompiler)) {
  case 1: {
    var_groupIndex_1700 = GGS_registerGroupIndexAST::class_func_noIndex (SOURCE_FILE ("lvalue-control-register.galgas", 38)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    GGS_expressionAST var_expression_1799 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1799, inCompiler) ;
    GGS_location var_endOfIndex_1820 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 42)) ;
    GGS_bool var_checkIndexExpression_1864 ;
    switch (select_omnibus_5F_syntax_73 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
      var_checkIndexExpression_1864 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
      var_checkIndexExpression_1864 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    var_groupIndex_1700 = GGS_registerGroupIndexAST::class_func_index (var_expression_1799, var_endOfIndex_1820, var_checkIndexExpression_1864  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  GGS_lstring var_registerName_2164 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  GGS_registerIndexAST var_registerIndex_2203 ;
  switch (select_omnibus_5F_syntax_74 (inCompiler)) {
  case 1: {
    var_registerIndex_2203 = GGS_registerIndexAST::class_func_noIndex (SOURCE_FILE ("lvalue-control-register.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    GGS_expressionAST var_expression_2308 ;
    nt_expression_ (ioArgument_ioAST, var_expression_2308, inCompiler) ;
    GGS_location var_endOfIndex_2329 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 61)) ;
    GGS_bool var_checkIndexExpression_2373 ;
    switch (select_omnibus_5F_syntax_75 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
      var_checkIndexExpression_2373 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
      var_checkIndexExpression_2373 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    var_registerIndex_2203 = GGS_registerIndexAST::class_func_index (var_expression_2308, var_endOfIndex_2329, var_checkIndexExpression_2373  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outRegisterLValue = GGS_controlRegisterLValueAST::init_21__21__21__21_ (var_registerGroupName_1651, var_groupIndex_1700, var_registerName_2164, var_registerIndex_2203, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i64_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  switch (select_omnibus_5F_syntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_73 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  switch (select_omnibus_5F_syntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_75 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i64_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  switch (select_omnibus_5F_syntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_73 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  switch (select_omnibus_5F_syntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_75 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i65_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_76 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 59)) ;
      GGS_location var_operatorLocation_2471 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 60)) ;
      GGS_ctExpressionAST var_rightExpression_2554 ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (var_rightExpression_2554, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_2471, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 65)), var_rightExpression_2554, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i65_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_76 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 59)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i65_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_76 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 59)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i66_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_77 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 77)) ;
      GGS_location var_operatorLocation_3033 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 78)) ;
      GGS_ctExpressionAST var_rightExpression_3116 ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (var_rightExpression_3116, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3033, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-expression.galgas", 83)), var_rightExpression_3116, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i66_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_77 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 77)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i66_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_77 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 77)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i67_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_equality_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_78 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 95)) ;
      GGS_location var_operatorLocation_3594 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 96)) ;
      GGS_ctExpressionAST var_rightExpression_3674 ;
      nt_compile_5F_time_5F_expression_5F_equality_ (var_rightExpression_3674, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3594, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseAndOp (SOURCE_FILE ("compile-time-expression.galgas", 101)), var_rightExpression_3674, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i67_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_equality_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_78 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 95)) ;
      nt_compile_5F_time_5F_expression_5F_equality_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i67_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_equality_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_78 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 95)) ;
      nt_compile_5F_time_5F_expression_5F_equality_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i68_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_comparison_ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 113)) ;
    GGS_location var_operatorLocation_4148 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 114)) ;
    GGS_ctExpressionAST var_rightExpression_4230 ;
    nt_compile_5F_time_5F_expression_5F_comparison_ (var_rightExpression_4230, inCompiler) ;
    outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4148, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 119)), var_rightExpression_4230, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 123)) ;
    GGS_location var_operatorLocation_4455 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 124)) ;
    GGS_ctExpressionAST var_rightExpression_4537 ;
    nt_compile_5F_time_5F_expression_5F_comparison_ (var_rightExpression_4537, inCompiler) ;
    GGS_ctInfixExpressionAST var_expression_4563 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4455, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 129)), var_rightExpression_4537, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_4455, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 134)), var_expression_4563, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i68_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_comparison_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 113)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 123)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i68_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 113)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 123)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i69_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_shift_ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_80 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 146)) ;
    GGS_location var_operatorLocation_5162 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 147)) ;
    GGS_ctExpressionAST var_rightExpression_5239 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_5239, inCompiler) ;
    GGS_ctInfixExpressionAST var_lessThanExpression_5265 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5162, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 152)), var_rightExpression_5239, inCompiler COMMA_HERE) ;
    GGS_ctInfixExpressionAST var_equalExpression_5421 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5162, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 158)), var_rightExpression_5239, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (var_lessThanExpression_5265, var_operatorLocation_5162, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 164)), var_equalExpression_5421, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 168)) ;
    GGS_location var_operatorLocation_5780 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 169)) ;
    GGS_ctExpressionAST var_rightExpression_5857 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_5857, inCompiler) ;
    GGS_ctInfixExpressionAST var_expression_5883 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5780, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 174)), var_rightExpression_5857, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_5780, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 179)), var_expression_5883, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 183)) ;
    GGS_location var_operatorLocation_6165 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 184)) ;
    GGS_ctExpressionAST var_rightExpression_6242 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_6242, inCompiler) ;
    outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6165, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 189)), var_rightExpression_6242, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 193)) ;
    GGS_location var_operatorLocation_6482 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 194)) ;
    GGS_ctExpressionAST var_rightExpression_6559 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_6559, inCompiler) ;
    GGS_ctInfixExpressionAST var_lessThanExpression_6584 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6482, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 199)), var_rightExpression_6559, inCompiler COMMA_HERE) ;
    GGS_ctInfixExpressionAST var_equalExpression_6740 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6482, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 205)), var_rightExpression_6559, inCompiler COMMA_HERE) ;
    GGS_ctInfixExpressionAST var_lessThanOrEqualExpression_6890 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (var_lessThanExpression_6584, var_operatorLocation_6482, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 211)), var_equalExpression_6740, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_6482, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 216)), var_lessThanOrEqualExpression_6890, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i69_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_80 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 146)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 168)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 183)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 193)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i69_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_80 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 146)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 168)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 183)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 193)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i70_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_addition_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_81 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 228)) ;
      GGS_location var_operatorLocation_7488 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 229)) ;
      GGS_ctExpressionAST var_rightExpression_7568 ;
      nt_compile_5F_time_5F_expression_5F_addition_ (var_rightExpression_7568, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7488, GGS_compileTimeInfixOperatorEnumeration::class_func_leftShift (SOURCE_FILE ("compile-time-expression.galgas", 234)), var_rightExpression_7568, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 238)) ;
      GGS_location var_operatorLocation_7763 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 239)) ;
      GGS_ctExpressionAST var_rightExpression_7843 ;
      nt_compile_5F_time_5F_expression_5F_addition_ (var_rightExpression_7843, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7763, GGS_compileTimeInfixOperatorEnumeration::class_func_rightShift (SOURCE_FILE ("compile-time-expression.galgas", 244)), var_rightExpression_7843, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i70_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_addition_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_81 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 228)) ;
      nt_compile_5F_time_5F_expression_5F_addition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 238)) ;
      nt_compile_5F_time_5F_expression_5F_addition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i70_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_81 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 228)) ;
      nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 238)) ;
      nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i71_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_product_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_82 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 256)) ;
      GGS_location var_operatorLocation_8314 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 257)) ;
      GGS_ctExpressionAST var_rightExpression_8393 ;
      nt_compile_5F_time_5F_expression_5F_product_ (var_rightExpression_8393, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8314, GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("compile-time-expression.galgas", 262)), var_rightExpression_8393, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 266)) ;
      GGS_location var_operatorLocation_8583 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 267)) ;
      GGS_ctExpressionAST var_rightExpression_8662 ;
      nt_compile_5F_time_5F_expression_5F_product_ (var_rightExpression_8662, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8583, GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("compile-time-expression.galgas", 272)), GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_8583, GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("compile-time-expression.galgas", 273)), var_rightExpression_8662, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i71_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_product_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_82 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 256)) ;
      nt_compile_5F_time_5F_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 266)) ;
      nt_compile_5F_time_5F_expression_5F_product_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i71_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_82 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 256)) ;
      nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 266)) ;
      nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i72_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_83 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 284)) ;
      GGS_location var_operatorLocation_9170 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 285)) ;
      GGS_ctExpressionAST var_rightExpression_9238 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9238, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9170, GGS_compileTimeInfixOperatorEnumeration::class_func_mulOp (SOURCE_FILE ("compile-time-expression.galgas", 290)), var_rightExpression_9238, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 294)) ;
      GGS_location var_operatorLocation_9427 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 295)) ;
      GGS_ctExpressionAST var_rightExpression_9495 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9495, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9427, GGS_compileTimeInfixOperatorEnumeration::class_func_modOp (SOURCE_FILE ("compile-time-expression.galgas", 300)), var_rightExpression_9495, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 304)) ;
      GGS_location var_operatorLocation_9686 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 305)) ;
      GGS_ctExpressionAST var_rightExpression_9754 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9754, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9686, GGS_compileTimeInfixOperatorEnumeration::class_func_moduloNoOvf (SOURCE_FILE ("compile-time-expression.galgas", 310)), var_rightExpression_9754, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 314)) ;
      GGS_location var_operatorLocation_9950 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 315)) ;
      GGS_ctExpressionAST var_rightExpression_10018 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_10018, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9950, GGS_compileTimeInfixOperatorEnumeration::class_func_divOp (SOURCE_FILE ("compile-time-expression.galgas", 320)), var_rightExpression_10018, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 324)) ;
      GGS_location var_operatorLocation_10209 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 325)) ;
      GGS_ctExpressionAST var_rightExpression_10277 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_10277, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10209, GGS_compileTimeInfixOperatorEnumeration::class_func_divNoOvf (SOURCE_FILE ("compile-time-expression.galgas", 330)), var_rightExpression_10277, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i72_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_83 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 284)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 294)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 304)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 314)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 324)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i72_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_83 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 284)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 294)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 304)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 314)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 324)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i73_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas", 339)) ;
  GGS_location var_operatorLocation_10658 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 340)) ;
  GGS_ctExpressionAST var_expression_10724 ;
  nt_compile_5F_time_5F_primary_ (var_expression_10724, inCompiler) ;
  outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_10658, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 344)), var_expression_10724, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i73_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas", 339)) ;
  nt_compile_5F_time_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i73_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas", 339)) ;
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i74_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 352)) ;
  GGS_location var_operatorLocation_11050 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 353)) ;
  GGS_ctExpressionAST var_expression_11116 ;
  nt_compile_5F_time_5F_primary_ (var_expression_11116, inCompiler) ;
  outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_11050, GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("compile-time-expression.galgas", 357)), var_expression_11116, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i74_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 352)) ;
  nt_compile_5F_time_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i74_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 352)) ;
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i75_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 365)) ;
  nt_compile_5F_time_5F_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 367)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i75_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 365)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 367)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i75_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 365)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 367)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i76_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas", 373)) ;
  outArgument_outExpression = GGS_ctTrueExpressionAST::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i76_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas", 373)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i76_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas", 373)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i77_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas", 380)) ;
  outArgument_outExpression = GGS_ctFalseExpressionAST::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i77_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas", 380)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i77_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas", 380)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i78_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_value_12192 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas", 387)) ;
  outArgument_outExpression = GGS_ctIntExpressionAST::init_21_ (var_value_12192, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i78_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas", 387)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i78_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas", 387)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i79_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_name_12461 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas", 394)) ;
  outArgument_outExpression = GGS_ctIdentifierExpressionAST::init_21_ (var_name_12461, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i79_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas", 394)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i79_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas", 394)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i80_ (GGS_ast & /* ioArgument_ioAST */,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  GGS_lstring var_constantName_558 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 12)) ;
  GGS_stringlist var_suggestionList_591 = temp_0 ;
  GGS_bool var_found_620 = GGS_bool (false) ;
  UpEnumerator__32_stringlist enumerator_650 (GGS_application::class_func_boolOptionNameList (SOURCE_FILE ("declaration-option.galgas", 14))) ;
  bool bool_1 = var_found_620.operator_not (SOURCE_FILE ("declaration-option.galgas", 14)).isValidAndTrue () ;
  if (enumerator_650.hasCurrentObject () && bool_1) {
    while (enumerator_650.hasCurrentObject () && bool_1) {
      GGS_string var_invocationString_726 = GGS_application::class_func_boolOptionInvocationString (enumerator_650.current_mValue_30_ (HERE), enumerator_650.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("declaration-option.galgas", 15)) ;
      var_suggestionList_591.addAssignOperation (GGS_string ("\"").add_operation (var_invocationString_726, inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 16)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 16))  COMMA_SOURCE_FILE ("declaration-option.galgas", 16)) ;
      var_found_620 = GGS_bool (ComparisonKind::equal, var_invocationString_726.objectCompare (var_constantName_558.readProperty_string ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_found_620.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          GGS_application::class_method_setBoolOptionValue (enumerator_650.current_mValue_30_ (HERE), enumerator_650.current_mValue_31_ (HERE), GGS_bool (true) COMMA_SOURCE_FILE ("declaration-option.galgas", 19)) ;
          }
        }
      }
      enumerator_650.gotoNextObject () ;
      if (enumerator_650.hasCurrentObject ()) {
        bool_1 = var_found_620.operator_not (SOURCE_FILE ("declaration-option.galgas", 14)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_620.operator_not (SOURCE_FILE ("declaration-option.galgas", 22)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      appendFixItActions (fixItArray4, EnumFixItKind::fixItReplace, var_suggestionList_591) ;
      inCompiler->emitSemanticError (var_constantName_558.readProperty_location (), GGS_string ("unknown command line option"), fixItArray4  COMMA_SOURCE_FILE ("declaration-option.galgas", 23)) ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i80_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i80_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  GGS_lstring var_typeName_1340 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  GGS_integerSliceFieldListAST temp_0 = GGS_integerSliceFieldListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 30)) ;
  GGS_integerSliceFieldListAST var_integerFieldValues_1383 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_sliceWidth_1443 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    GGS_expressionAST var_expression_1486 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1486, inCompiler) ;
    var_integerFieldValues_1383.addAssignOperation (var_sliceWidth_1443, var_expression_1486, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 34))  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 34)) ;
    if (select_omnibus_5F_syntax_84 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::lowerThan, var_integerFieldValues_1383.getter_count (SOURCE_FILE ("expression-integer-slice.galgas", 37)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 38)), GGS_string ("this expression should contain two bit slices or more"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 38)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outExpression = GGS_integerSliceExpressionAST::init_21__21__21_ (var_typeName_1340, var_integerFieldValues_1383, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 40)), inCompiler COMMA_HERE) ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    nt_expression_parse (inCompiler) ;
    if (select_omnibus_5F_syntax_84 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    nt_expression_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_84 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i82_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ifExpressionAST var_if_5F_expression_1268 ;
  nt_expression_5F_if_ (ioArgument_ioAST, var_if_5F_expression_1268, inCompiler) ;
  outArgument_outExpression = var_if_5F_expression_1268 ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i82_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_if_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i82_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_if_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i83_ (GGS_ast & ioArgument_ioAST,
                                                                              GGS_ifExpressionAST & outArgument_outExpression,
                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  GGS_expressionAST var_ifExpression_1557 ;
  nt_expression_ (ioArgument_ioAST, var_ifExpression_1557, inCompiler) ;
  GGS_location var_ifExpressionEndLocation_1588 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 32)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  GGS_expressionAST var_thenExpression_1658 ;
  nt_expression_ (ioArgument_ioAST, var_thenExpression_1658, inCompiler) ;
  GGS_location var_thenExpressionEndLocation_1691 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  GGS_expressionAST var_elseExpression_1767 ;
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_ (ioArgument_ioAST, var_elseExpression_1767, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    GGS_ifExpressionAST var_else_5F_if_5F_expression_1898 ;
    nt_expression_5F_if_ (ioArgument_ioAST, var_else_5F_if_5F_expression_1898, inCompiler) ;
    var_elseExpression_1767 = var_else_5F_if_5F_expression_1898 ;
  } break ;
  default:
    break ;
  }
  GGS_location var_elseExpressionEndLocation_1985 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 47)) ;
  outArgument_outExpression = GGS_ifExpressionAST::init_21__21__21__21__21__21_ (var_ifExpression_1557, var_ifExpressionEndLocation_1588, var_thenExpression_1658, var_thenExpressionEndLocation_1691, var_elseExpression_1767, var_elseExpressionEndLocation_1985, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i83_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    nt_expression_5F_if_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i83_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    nt_expression_5F_if_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i84_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_ifInstructionAST var_ifInstruction_1345 ;
  nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_1345, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_ifInstruction_1345  COMMA_SOURCE_FILE ("instruction-if.galgas", 26)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i84_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_if_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i84_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_if_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i85_ (GGS_ast & ioArgument_ioAST,
                                                                               GGS_ifInstructionAST & outArgument_outIfInstruction,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outIfInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  GGS_location var_instructionLocation_1621 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 33)) ;
  GGS_bool var_staticIfExpression_1672 ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    GGS_lstring var_attributeValue_1727 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_attributeValue_1727.readProperty_string ().objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 37)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_staticIfExpression_1672 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 42))) ;
      inCompiler->emitSemanticError (var_attributeValue_1727.readProperty_location (), GGS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 40)) ;
      var_staticIfExpression_1672.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    var_staticIfExpression_1672 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_expressionAST var_testExpression_2116 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_2116, inCompiler) ;
  GGS_location var_testExpressionEndLocation_2139 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  GGS_instructionListAST var_thenInstructionList_2225 ;
  nt_instructionList_ (ioArgument_ioAST, var_thenInstructionList_2225, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  GGS_location var_endOfThenBranch_2261 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
  GGS_instructionListAST var_elseInstructionList_2322 ;
  switch (select_omnibus_5F_syntax_87 (inCompiler)) {
  case 1: {
    GGS_instructionListAST temp_2 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 55)) ;
    var_elseInstructionList_2322 = temp_2 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_ (ioArgument_ioAST, var_elseInstructionList_2322, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    GGS_ifInstructionAST var_ifInstruction_2534 ;
    nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_2534, inCompiler) ;
    GGS_instructionListAST temp_3 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
    temp_3.plusPlusAssignOperation (GGS_instructionListAST_2E_element::init_21_ (var_ifInstruction_2534, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
    var_elseInstructionList_2322 = temp_3 ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElseBranch_2612 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 66)) ;
  outArgument_outIfInstruction = GGS_ifInstructionAST::init_21__21__21__21__21__21__21__21__21_ (var_instructionLocation_1621, var_testExpression_2116, var_testExpressionEndLocation_2139, var_staticIfExpression_1672, var_thenInstructionList_2225, var_endOfThenBranch_2261, var_elseInstructionList_2322, var_endOfElseBranch_2612, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 76)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i85_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  switch (select_omnibus_5F_syntax_87 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    nt_if_5F_instruction_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i85_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  switch (select_omnibus_5F_syntax_87 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    nt_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i86_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  GGS_location var_instructionLocation_1158 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 23)) ;
  GGS_expressionAST var_testExpression_1240 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_1240, inCompiler) ;
  GGS_location var_testExpressionEndLocation_1263 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  GGS_instructionListAST var_instructionList_1349 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1349, inCompiler) ;
  GGS_location var_endOfInstruction_1373 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_whileInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1158, var_testExpression_1240, var_testExpressionEndLocation_1263, var_instructionList_1349, var_endOfInstruction_1373, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-while.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i86_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i86_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i87_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  GGS_location var_loc_994 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 19)) ;
  GGS_expressionAST var_codeExpression_1060 ;
  nt_expression_ (ioArgument_ioAST, var_codeExpression_1060, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_panicInstructionAST::init_21__21_ (var_loc_994, var_codeExpression_1060, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i87_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i87_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i88_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_controlRegisterLValueAST var_registerLValue_1476 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1476, inCompiler) ;
  GGS_controlRegisterAssignmentOperatorKind var_assignmentKind_1580 ;
  switch (select_omnibus_5F_syntax_88 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
    var_assignmentKind_1580 = GGS_controlRegisterAssignmentOperatorKind::class_func_assignment (SOURCE_FILE ("instruction-assignment-control-register.galgas", 32)) ;
  } break ;
  case 2: {
    GGS_omnibusInfixOperator var_infixOperator_1705 ;
    GGS_location var_operatorLocation_1724 ;
    nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1705, var_operatorLocation_1724, inCompiler) ;
    var_assignmentKind_1580 = GGS_controlRegisterAssignmentOperatorKind::class_func_assignmentWithOperator (var_infixOperator_1705, var_operatorLocation_1724  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  GGS_expressionAST var_sourceExpression_1918 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1918, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_controlRegisterAssignmentInstructionAST::init_21__21__21__21_ (var_registerLValue_1476.readProperty_mRegisterGroupName ().readProperty_location (), var_registerLValue_1476, var_assignmentKind_1580, var_sourceExpression_1918, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i88_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_88 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
  } break ;
  case 2: {
    nt_assignment_5F_combined_5F_with_5F_operator_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i88_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_88 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
  } break ;
  case 2: {
    nt_assignment_5F_combined_5F_with_5F_operator_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i89_ (GGS_genericFormalParameterList & outArgument_outGenericFormalParameterList,
                                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGenericFormalParameterList.drop () ; // Release 'out' argument
  GGS_genericFormalParameterList temp_0 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 70)) ;
  outArgument_outGenericFormalParameterList = temp_0 ;
  switch (select_omnibus_5F_syntax_89 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 73)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_omnibus_5F_syntax_91 (inCompiler)) {
      case 1: {
        GGS_lstring var_constantName_2916 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 76)) ;
        outArgument_outGenericFormalParameterList.addAssignOperation (GGS_genericFormalParameter::class_func_constant (var_constantName_2916  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 77))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 77)) ;
      } break ;
      case 2: {
        GGS_lstring var_typeName_3040 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 79)) ;
        outArgument_outGenericFormalParameterList.addAssignOperation (GGS_genericFormalParameter::class_func_type (var_typeName_3040  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 80))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 80)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_90 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 83)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i89_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_89 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 73)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_91 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 76)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 79)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_90 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i89_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_89 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 73)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_91 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 76)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 79)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_90 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i90_ (GGS_ctExpressionAST & outArgument_outWhereClause,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outWhereClause.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_92 (inCompiler)) {
  case 1: {
    outArgument_outWhereClause = GGS_ctTrueExpressionAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 95)) ;
    nt_compile_5F_time_5F_expression_ (outArgument_outWhereClause, inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i90_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_92 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 95)) ;
    nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i90_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_92 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 95)) ;
    nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i91_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 103)) ;
  GGS_lstring var_typeName_3704 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 104)) ;
  GGS_genericFormalParameterList var_genericFormalParameterList_3749 ;
  nt_generic_5F_formal_5F_arguments_ (var_genericFormalParameterList_3749, inCompiler) ;
  GGS_ctExpressionAST var_whereClause_3808 ;
  nt_generic_5F_where_5F_clause_ (var_whereClause_3808, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 107)) ;
  GGS_lstring var_sizeKey_3850 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sizeKey_3850.readProperty_string ().objectCompare (GGS_string ("size"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_sizeKey_3850.readProperty_location (), GGS_string ("this identifier should be 'size'"), fixItArray1  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 110)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 112)) ;
  GGS_lbigint var_bitSize_3987 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 125)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmGenericType::init_21__21__21__21_ (var_typeName_3704, var_genericFormalParameterList_3749, var_whereClause_3808, var_bitSize_3987.readProperty_bigint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i91_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 104)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  nt_generic_5F_where_5F_clause_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 125)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i91_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 104)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  nt_generic_5F_where_5F_clause_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 125)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i92_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_LValueAST var_assignmentTargetAST_1064 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_1064, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  GGS_expressionAST var_sourceExpression_1148 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1148, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_assignmentInstructionAST::init_21__21__21_ (var_assignmentTargetAST_1064.readProperty_mIdentifier ().readProperty_location (), var_assignmentTargetAST_1064, var_sourceExpression_1148, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i92_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i92_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i93_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  GGS_location var_instructionLocation_1391 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 29)) ;
  GGS_expressionAST var_switchExpression_1473 ;
  nt_expression_ (ioArgument_ioAST, var_switchExpression_1473, inCompiler) ;
  GGS_location var_switchExpressionEndLocation_1498 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  GGS_switchCaseListAST temp_0 = GGS_switchCaseListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 33)) ;
  GGS_switchCaseListAST var_switchCaseList_1578 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 36)) ;
    GGS_lstringlist var_caseIdentifiers_1646 = temp_2 ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_caseIdf_1707 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      var_caseIdentifiers_1646.addAssignOperation (var_caseIdf_1707  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
      if (select_omnibus_5F_syntax_94 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    GGS_instructionListAST var_instructionList_1832 ;
    nt_instructionList_ (ioArgument_ioAST, var_instructionList_1832, inCompiler) ;
    var_switchCaseList_1578.addAssignOperation (var_caseIdentifiers_1646, var_instructionList_1832  COMMA_SOURCE_FILE ("instruction-switch.galgas", 45)) ;
    if (select_omnibus_5F_syntax_93 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_location var_endOfInstruction_1932 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1391, var_switchExpression_1473, var_switchExpressionEndLocation_1498, var_switchCaseList_1578, var_endOfInstruction_1932, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i93_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      if (select_omnibus_5F_syntax_94 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    nt_instructionList_parse (inCompiler) ;
    if (select_omnibus_5F_syntax_93 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i93_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      if (select_omnibus_5F_syntax_94 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    nt_instructionList_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_93 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i94_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  GGS_lstring var_enumerationName_1256 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  GGS_enumerationConstantList temp_0 = GGS_enumerationConstantList::init (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 29)) ;
  GGS_enumerationConstantList var_enumCaseList_1313 = temp_0 ;
  GGS_bigint var_idx_1340 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 30)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    GGS_lstring var_constantName_1396 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    var_enumCaseList_1313.addAssignOperation (var_constantName_1396, var_idx_1340  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 34)) ;
    var_idx_1340 = var_idx_1340.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 35)) ;
    if (select_omnibus_5F_syntax_95 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_enumerationDeclarationAST::init_21__21_ (var_enumerationName_1256, var_enumCaseList_1313, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i94_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    if (select_omnibus_5F_syntax_95 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i94_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    if (select_omnibus_5F_syntax_95 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i95_ (GGS_compileTimePrefixOperatorEnumeration & outArgument_outOperator,
                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_96 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 55)) ;
    outArgument_outOperator = GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 56)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 58)) ;
    outArgument_outOperator = GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i95_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_96 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i95_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_96 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i96_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 67)) ;
  GGS_location var_operationLocation_2598 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 68)) ;
  GGS_compileTimePrefixOperatorEnumeration var_prefixOperator_2670 ;
  nt_compileTimePrefixOperator_ (var_prefixOperator_2670, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 70)) ;
  GGS_lstring var_receiverName_2715 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 71)) ;
  GGS_lstring var_receiverType_2746 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 73)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 74)) ;
  GGS_lstring var_resultType_2794 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 76)) ;
  GGS_ctExpressionAST var_expression_2865 ;
  nt_compile_5F_time_5F_expression_ (var_expression_2865, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 78)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_compiletimePrefixOperatorAST::init_21__21__21__21__21__21_ (var_prefixOperator_2670, var_operationLocation_2598, var_receiverName_2715, var_receiverType_2746, var_expression_2865, var_resultType_2794, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i96_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 67)) ;
  nt_compileTimePrefixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 73)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 74)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 76)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 78)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i96_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 67)) ;
  nt_compileTimePrefixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 73)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 74)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 76)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i97_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  GGS_lstring var_varName_1260 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  GGS_lstring var_iteratedObject_1299 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  GGS_bool var_staticWhileExpression_1322 = GGS_bool (false) ;
  GGS_expressionAST var_whileExpression_1375 ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
    var_whileExpression_1375 = GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (true), inCompiler COMMA_HERE) ;
    var_staticWhileExpression_1322 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_98 (inCompiler)) {
    case 1: {
      GGS_lstring var_attributeValue_1561 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::equal, var_attributeValue_1561.readProperty_string ().objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 37)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          var_staticWhileExpression_1322 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41))) ;
        inCompiler->emitSemanticError (var_attributeValue_1561.readProperty_location (), GGS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)) ;
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_ (ioArgument_ioAST, var_whileExpression_1375, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOf_5F_whileExpression_5F_instruction_1924 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  GGS_instructionListAST var_instructionList_2018 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2018, inCompiler) ;
  GGS_location var_endOfInstruction_2042 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_forInstructionAST::init_21__21__21__21__21__21__21__21_ (var_varName_1260.readProperty_location (), var_varName_1260, var_iteratedObject_1299, var_whileExpression_1375, var_endOf_5F_whileExpression_5F_instruction_1924, var_staticWhileExpression_1322, var_instructionList_2018, var_endOfInstruction_2042, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i97_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_98 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i97_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_98 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i98_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_1207 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1207, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  GGS_functionCallEffectiveParameterListAST temp_0 = GGS_functionCallEffectiveParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 27)) ;
  GGS_functionCallEffectiveParameterListAST var_parameterList_1271 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_99 (inCompiler) == 2) {
      GGS_lstring var_selector_1336 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      GGS_expressionAST var_expression_1377 ;
      nt_expression_ (ioArgument_ioAST, var_expression_1377, inCompiler) ;
      var_parameterList_1271.addAssignOperation (var_selector_1336, var_expression_1377  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 32)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_location var_errorLocation_1449 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 34)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  outArgument_outExpression = GGS_constructorCallAST::init_21__21__21_ (var_typeName_1207, var_parameterList_1271, var_errorLocation_1449, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i98_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_99 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      nt_expression_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i98_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_99 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      nt_expression_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i99_ (GGS_ast & ioArgument_ioAST,
                                                                             GGS_instructionListAST & outArgument_outInstructionList,
                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  GGS_instructionListAST temp_0 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 24)) ;
  outArgument_outInstructionList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_100 (inCompiler) == 2) {
      nt_instruction_ (ioArgument_ioAST, outArgument_outInstructionList, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i99_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_100 (inCompiler) == 2) {
      nt_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i99_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_100 (inCompiler) == 2) {
      nt_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i100_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  GGS_mode var_mode_1157 ;
  GGS_lstring var_procName_1178 ;
  GGS_lstringlist var_attributeList_1209 ;
  GGS_routineFormalArgumentListAST var_procFormalArgumentList_1250 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1157, var_procName_1178, var_attributeList_1209, var_procFormalArgumentList_1250, inCompiler) ;
  GGS_bool var_isGlobal_1281 = GGS_bool (false) ;
  UpEnumerator_lstringlist enumerator_1307 (var_attributeList_1209) ;
  while (enumerator_1307.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_1307.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_isGlobal_1281.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_1307.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 33)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          var_isGlobal_1281 = GGS_bool (true) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray3 ;
      fixItArray3.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
      appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, GGS_string ("@").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38))) ;
      inCompiler->emitSemanticError (enumerator_1307.current_mValue (HERE).readProperty_location (), GGS_string ("invalid attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)) ;
    }
    enumerator_1307.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mRequiredFunctionListAST.addAssignOperation (var_procName_1178, var_mode_1157, var_isGlobal_1281, var_procFormalArgumentList_1250, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46))  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i100_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  nt_function_5F_header_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i100_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  nt_function_5F_header_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i101_ (GGS_ast & /* ioArgument_ioAST */,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_stringLiteral_997 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  outArgument_outExpression = GGS_literalStringInExpressionAST::init_21_ (var_stringLiteral_997, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i101_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i101_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i102_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  GGS_lstring var_varName_1314 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 29)) ;
  GGS_expressionAST var_expression_1375 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1375, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_varInstructionWithAssignmentAST::init_21__21__21__21_ (var_varName_1314.readProperty_location (), var_varName_1314, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 34)), var_expression_1375, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas", 31)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i102_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i102_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i103_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
  GGS_lstring var_varName_2475 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
  GGS_lstring var_typeName_2518 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_2518, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_varDeclarationInstructionAST::init_21__21__21_ (var_varName_2475.readProperty_location (), var_varName_2475, var_typeName_2518, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
    GGS_expressionAST var_sourceExpression_2721 ;
    nt_expression_ (ioArgument_ioAST, var_sourceExpression_2721, inCompiler) ;
    GGS_LValueAST var_assignmentTargetAST_2748 = GGS_LValueAST::init_21__21_ (var_varName_2475, GGS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("instruction-var.galgas", 78)), inCompiler COMMA_HERE) ;
    ioArgument_ioInstructionList.addAssignOperation (GGS_assignmentInstructionAST::init_21__21__21_ (var_assignmentTargetAST_2748.readProperty_mIdentifier ().readProperty_location (), var_assignmentTargetAST_2748, var_sourceExpression_2721, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i103_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i103_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i104_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  GGS_location var_targetConstructLocation_553 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 12)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-check-target.galgas", 13)) ;
  GGS_lstringlist var_acceptedTargetList_615 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_targetName_673 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    var_acceptedTargetList_615.addAssignOperation (var_targetName_673  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 16)) ;
    if (select_omnibus_5F_syntax_102 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  ioArgument_ioAST.mProperty_mCheckTargetListAST.addAssignOperation (var_targetConstructLocation_553, var_acceptedTargetList_615  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 20)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i104_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    if (select_omnibus_5F_syntax_102 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i104_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    if (select_omnibus_5F_syntax_102 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i105_ (GGS_compileTimeInfixOperatorEnumeration & outArgument_outOperator,
                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_103 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 96)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 99)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 100)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 102)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseAndOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 103)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 105)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 106)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 108)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseXorOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 109)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 111)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 112)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 114)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_subOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 115)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 117)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_mulOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 118)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 120)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_divOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 121)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 123)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_divNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 124)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 126)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_modOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 127)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 129)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_moduloNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 130)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 132)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_leftShift (SOURCE_FILE ("infix-operator-compile-time.galgas", 133)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 135)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_rightShift (SOURCE_FILE ("infix-operator-compile-time.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i105_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_103 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 96)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 99)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 102)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 105)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 108)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 111)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 114)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 117)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 120)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 123)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 126)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 129)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 132)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i105_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_103 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 96)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 99)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 102)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 105)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 108)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 111)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 114)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 117)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 120)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 123)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 126)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 129)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 132)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i106_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 145)) ;
  GGS_lstring var_leftArgument_4469 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 146)) ;
  GGS_lstring var_leftType_4500 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 148)) ;
  GGS_location var_operationLocation_4525 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 149)) ;
  GGS_compileTimeInfixOperatorEnumeration var_infixOperator_4596 ;
  nt_compileTimeInfixOperator_ (var_infixOperator_4596, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 151)) ;
  GGS_lstring var_rightArgument_4640 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 152)) ;
  GGS_lstring var_rightType_4672 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 155)) ;
  GGS_lstring var_resultType_4717 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 157)) ;
  GGS_ctExpressionAST var_expression_4788 ;
  nt_compile_5F_time_5F_expression_ (var_expression_4788, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 159)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_compileTimeInfixOperatorAST::init_21__21__21__21__21__21__21__21_ (var_infixOperator_4596, var_operationLocation_4525, var_leftArgument_4469, var_leftType_4500, var_rightArgument_4640, var_rightType_4672, var_expression_4788, var_resultType_4717, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i106_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 148)) ;
  nt_compileTimeInfixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 151)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 155)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 157)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 159)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i106_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 148)) ;
  nt_compileTimeInfixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 151)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 155)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 157)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 159)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i107_ (GGS_ast & ioArgument_ioAST,
                                                                                  const GGS_lstring constinArgument_inDriverName,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  GGS_mode var_mode_1142 ;
  switch (select_omnibus_5F_syntax_104 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
    var_mode_1142 = GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
    var_mode_1142 = GGS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-isr.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_isrName_1280 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  GGS_instructionListAST var_instructionList_1331 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1331, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_isrDeclarationAST::init_21__21__21__21__21_ (var_isrName_1280, var_mode_1142, constinArgument_inDriverName, var_instructionList_1331, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 40)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i107_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  switch (select_omnibus_5F_syntax_104 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i107_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  switch (select_omnibus_5F_syntax_104 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i108_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_controlRegisterLValueAST var_registerLValue_1160 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1160, inCompiler) ;
  GGS_lstring var_fieldName_1192 ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
    var_fieldName_1192 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("expression-control-register.galgas", 22)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    var_fieldName_1192 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_registerInExpressionAST::init_21__21_ (var_registerLValue_1160, var_fieldName_1192, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i108_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i108_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i109_ (GGS_ast & ioArgument_ioAST,
                                                                                      GGS_effectiveArgumentListAST & outArgument_outEffectiveParameterList,
                                                                                      GGS_location & outArgument_outEndOfArgs,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outEndOfArgs.drop () ; // Release 'out' argument
  GGS_effectiveArgumentListAST temp_0 = GGS_effectiveArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 59)) ;
  outArgument_outEffectiveParameterList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_106 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_2648 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      GGS_expressionAST var_expression_2689 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2689, inCompiler) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_output (var_expression_2689, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65)), var_selector_2648  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65)) ;
    } break ;
    case 3: {
      GGS_lstring var_selector_2822 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      GGS_lstring var_effectiveParameterName_2855 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_outputInput (var_effectiveParameterName_2855  COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)), var_selector_2822  COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)) ;
    } break ;
    case 4: {
      GGS_lstring var_selector_3002 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 73)) ;
      GGS_lstring var_effectiveParameterName_3058 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_outputInputSelfVariable (var_effectiveParameterName_3058  COMMA_SOURCE_FILE ("effective-parameters.galgas", 75)), var_selector_3002  COMMA_SOURCE_FILE ("effective-parameters.galgas", 75)) ;
    } break ;
    case 5: {
      GGS_lstring var_selector_3216 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      GGS_lstring var_effectiveParameterName_3249 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 78)) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_input (var_effectiveParameterName_3249  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)), var_selector_3216  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)) ;
    } break ;
    case 6: {
      GGS_lstring var_selector_3389 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 81)) ;
      GGS_bool var_constant_3414 ;
      switch (select_omnibus_5F_syntax_107 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
        var_constant_3414 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 87)) ;
        var_constant_3414 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_effectiveParameterName_3556 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
      GGS_lstring var_typeName_3598 ;
      switch (select_omnibus_5F_syntax_108 (inCompiler)) {
      case 1: {
        var_typeName_3598 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 93)) ;
      } break ;
      case 2: {
        nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3598, inCompiler) ;
      } break ;
      default:
        break ;
      }
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_inputWithType (var_constant_3414, var_typeName_3598, var_effectiveParameterName_3556  COMMA_SOURCE_FILE ("effective-parameters.galgas", 98)), var_selector_3389  COMMA_SOURCE_FILE ("effective-parameters.galgas", 97)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  outArgument_outEndOfArgs = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i109_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_106 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 78)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 81)) ;
      switch (select_omnibus_5F_syntax_107 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 87)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
      switch (select_omnibus_5F_syntax_108 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        nt_type_5F_definition_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i109_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_106 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 78)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 81)) ;
      switch (select_omnibus_5F_syntax_107 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 87)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
      switch (select_omnibus_5F_syntax_108 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        nt_type_5F_definition_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i110_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  GGS_lstring var_registerGroupName_1361 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  GGS_lstring var_registerName_1409 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  GGS_registerIntegerFieldListAST temp_0 = GGS_registerIntegerFieldListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 32)) ;
  GGS_registerIntegerFieldListAST var_integerFieldValues_1459 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_registerFieldName_1519 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    GGS_expressionAST var_expression_1569 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1569, inCompiler) ;
    var_integerFieldValues_1459.addAssignOperation (var_registerFieldName_1519, var_expression_1569, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 36))  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 36)) ;
    if (select_omnibus_5F_syntax_109 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
  outArgument_outExpression = GGS_registerConstantExpressionAST::init_21__21__21_ (var_registerGroupName_1361, var_registerName_1409, var_integerFieldValues_1459, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i110_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    nt_expression_parse (inCompiler) ;
    if (select_omnibus_5F_syntax_109 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i110_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    nt_expression_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_109 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i111_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 21)) ;
  GGS_expressionAST var_sizeExpression_1147 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1147, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 23)) ;
  GGS_lstring var_elementTypeName_1205 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_1205, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 25)) ;
  GGS_location var_sizeExpressionLocation_1237 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 26)) ;
  outArgument_outTypeName = GGS_string ("anonymous.").add_operation (ioArgument_ioAST.readProperty_mTypeDeclarationIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 27)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 27)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 28)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_fixedSizeArrayTypeDeclarationAST::init_21__21__21__21_ (outArgument_outTypeName, var_elementTypeName_1205, var_sizeExpression_1147, var_sizeExpressionLocation_1237, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i111_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 23)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i111_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 23)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 25)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i112_ (GGS_omnibusInfixOperator & outArgument_outInfixOperator,
                                                                                                         GGS_location & outArgument_outOperatorLocation,
                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInfixOperator.drop () ; // Release 'out' argument
  outArgument_outOperatorLocation.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_110 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 12)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 15)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 18)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 21)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 24)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 27)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 30)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 33)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 36)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 39)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 42)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outOperatorLocation = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i112_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_110 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i112_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_110 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i113_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_LValueAST var_lvalue_1489 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1489, inCompiler) ;
  GGS_location var_instructionLocation_1504 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 52)) ;
  GGS_omnibusInfixOperator var_infixOperator_1614 ;
  GGS_location var_operatorLocation_1633 ;
  nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1614, var_operatorLocation_1633, inCompiler) ;
  GGS_expressionAST var_rightExpression_1720 ;
  nt_expression_ (ioArgument_ioAST, var_rightExpression_1720, inCompiler) ;
  GGS_primaryInExpressionAccessListAST temp_0 = GGS_primaryInExpressionAccessListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 58)) ;
  GGS_primaryInExpressionAccessListAST var_expressionAccessList_1810 = temp_0 ;
  extensionMethod_buildExpressionAccessList (var_lvalue_1489.readProperty_mOperand (), var_expressionAccessList_1810, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 59)) ;
  GGS_primaryInExpressionAST var_leftExpression_2323 = GGS_primaryInExpressionAST::init_21__21_ (var_lvalue_1489.readProperty_mIdentifier (), var_expressionAccessList_1810, inCompiler COMMA_HERE) ;
  GGS_omnibusInfixOperatorExpressionAST var_expression_2416 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (var_leftExpression_2323, var_operatorLocation_1633, var_infixOperator_1614, var_rightExpression_1720, inCompiler COMMA_HERE) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_assignmentInstructionAST::init_21__21__21_ (var_instructionLocation_1504, var_lvalue_1489, var_expression_2416, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i113_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_assignment_5F_combined_5F_with_5F_operator_parse (inCompiler) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i113_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  nt_assignment_5F_combined_5F_with_5F_operator_indexing (inCompiler) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i114_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_LValueAST & outArgument_outAssignmentTargetAST,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outAssignmentTargetAST.drop () ; // Release 'out' argument
  GGS_lstring var_receiver_1909 ;
  switch (select_omnibus_5F_syntax_111 (inCompiler)) {
  case 1: {
    var_receiver_1909 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
    var_receiver_1909 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 46)) ;
  } break ;
  default:
    break ;
  }
  GGS_LValueOperandAST var_operand_2047 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_2047, inCompiler) ;
  outArgument_outAssignmentTargetAST = GGS_LValueAST::init_21__21_ (var_receiver_1909, var_operand_2047, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i114_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_111 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i114_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_111 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i115_ (GGS_ast & /* ioArgument_ioAST */,
                                                                                GGS_LValueOperandAST & outArgument_outOperand,
                                                                                Lexique_omnibus_5F_lexique * /* inCompiler */) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  outArgument_outOperand = GGS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("lvalue.galgas", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i115_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i115_indexing (Lexique_omnibus_5F_lexique * /* inCompiler */) {
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i116_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_LValueOperandAST & outArgument_outOperand,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
  GGS_lstring var_propertyName_2567 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 62)) ;
  GGS_LValueOperandAST var_operand_2614 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_2614, inCompiler) ;
  outArgument_outOperand = GGS_LValueOperandAST::class_func_property (var_propertyName_2567, var_operand_2614  COMMA_SOURCE_FILE ("lvalue.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i116_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 62)) ;
  nt_lvalue_5F_operand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i116_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 62)) ;
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i117_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_LValueOperandAST & outArgument_outOperand,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
  GGS_expressionAST var_expression_2921 ;
  nt_expression_ (ioArgument_ioAST, var_expression_2921, inCompiler) ;
  GGS_location var_endOfIndex_2940 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 72)) ;
  GGS_bool var_checkIndexExpression_2982 ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 75)) ;
    var_checkIndexExpression_2982 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 78)) ;
    var_checkIndexExpression_2982 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_LValueOperandAST var_operand_3153 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_3153, inCompiler) ;
  outArgument_outOperand = GGS_LValueOperandAST::class_func_arrayAccess (var_expression_2921, var_endOfIndex_2940, var_checkIndexExpression_2982, var_operand_3153  COMMA_SOURCE_FILE ("lvalue.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i117_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i117_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i118_ (GGS_ast & /* ioArgument_ioAST */,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_integerLiteral_998 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  outArgument_outExpression = GGS_literalIntegerInExpressionAST::init_21_ (var_integerLiteral_998, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i118_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i118_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i119_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  GGS_lstring var_varName_1096 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  GGS_lstring var_optionalTypeName_1121 ;
  switch (select_omnibus_5F_syntax_113 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1121 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-let.galgas", 24)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_1121, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  GGS_expressionAST var_expression_1305 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1305, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_letInstructionWithAssignmentAST::init_21__21__21__21_ (var_varName_1096.readProperty_location (), var_varName_1096, var_optionalTypeName_1121, var_expression_1305, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i119_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_113 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i119_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_113 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i120_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_optionalTypeName_1071 ;
  switch (select_omnibus_5F_syntax_114 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1071 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 22)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_1071, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  GGS_lstring var_constantName_1233 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  GGS_primaryInExpressionAccessListAST var_accessList_1318 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1318, inCompiler) ;
  outArgument_outExpression = GGS_typedConstantCallAST::init_21__21__21_ (var_optionalTypeName_1071, var_constantName_1233, var_accessList_1318, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i120_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_114 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i120_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_114 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i121_ (GGS_ast & /* ioArgument_ioAST */,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  outArgument_outExpression = GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (true), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i121_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i121_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i122_ (GGS_ast & /* ioArgument_ioAST */,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  outArgument_outExpression = GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (false), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i122_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i122_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i123_ (GGS_ast & ioArgument_ioAST,
                                                                                               GGS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  GGS_routineFormalArgumentListAST temp_0 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 52)) ;
  outArgument_outProcFormalArgumentList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_115 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_2182 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      GGS_lstring var_formalArgumentName_2215 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      GGS_lstring var_formalArgumentTypeName_2272 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2272, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_output (SOURCE_FILE ("formal-arguments.galgas", 60)), var_selector_2182, var_formalArgumentTypeName_2272, var_formalArgumentName_2215  COMMA_SOURCE_FILE ("formal-arguments.galgas", 59)) ;
    } break ;
    case 3: {
      GGS_lstring var_selector_2490 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      GGS_lstring var_formalArgumentName_2518 ;
      switch (select_omnibus_5F_syntax_116 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
        var_formalArgumentName_2518 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("formal-arguments.galgas", 69)) ;
      } break ;
      case 2: {
        var_formalArgumentName_2518 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 71)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalArgumentTypeName_2701 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2701, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_inputOutput (SOURCE_FILE ("formal-arguments.galgas", 75)), var_selector_2490, var_formalArgumentTypeName_2701, var_formalArgumentName_2518  COMMA_SOURCE_FILE ("formal-arguments.galgas", 74)) ;
    } break ;
    case 4: {
      GGS_lstring var_selector_2923 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 80)) ;
      GGS_lstring var_formalArgumentName_2951 ;
      switch (select_omnibus_5F_syntax_117 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
        var_formalArgumentName_2951 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("formal-arguments.galgas", 84)) ;
      } break ;
      case 2: {
        var_formalArgumentName_2951 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 86)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalArgumentTypeName_3135 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3135, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("formal-arguments.galgas", 90)), var_selector_2923, var_formalArgumentTypeName_3135, var_formalArgumentName_2951  COMMA_SOURCE_FILE ("formal-arguments.galgas", 89)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i123_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_115 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      switch (select_omnibus_5F_syntax_116 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 71)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 80)) ;
      switch (select_omnibus_5F_syntax_117 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 86)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 95)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i123_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_115 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      switch (select_omnibus_5F_syntax_116 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 71)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 80)) ;
      switch (select_omnibus_5F_syntax_117 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 86)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i124_ (GGS_ast & ioArgument_ioAST,
                                                                                                        GGS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  GGS_routineFormalArgumentListAST temp_0 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 101)) ;
  outArgument_outProcFormalArgumentList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_118 (inCompiler) == 2) {
      GGS_lstring var_selector_3664 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 105)) ;
      GGS_lstring var_formalArgumentName_3697 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 106)) ;
      GGS_lstring var_formalArgumentTypeName_3754 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3754, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("formal-arguments.galgas", 109)), var_selector_3664, var_formalArgumentTypeName_3754, var_formalArgumentName_3697  COMMA_SOURCE_FILE ("formal-arguments.galgas", 108)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i124_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_118 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 106)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 114)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i124_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_118 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 106)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i125_ (GGS_ast & ioArgument_ioAST,
                                                                                 const GGS_bool constinArgument_inIsExitCommand,
                                                                                 GGS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  GGS_location var_endOfExp_2044 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 44)) ;
  GGS_lbool var_usesSelf_2097 ;
  switch (select_omnibus_5F_syntax_119 (inCompiler)) {
  case 1: {
    var_usesSelf_2097 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 47)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 49)) ;
    var_usesSelf_2097 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 50)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 53)) ;
  GGS_lstringlist var_nameList_2243 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_name_2293 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 55)) ;
    var_nameList_2243.addAssignOperation (var_name_2293  COMMA_SOURCE_FILE ("instruction-event.galgas", 56)) ;
    if (select_omnibus_5F_syntax_120 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 58)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_effectiveArgumentListAST var_effectiveParameterList_2390 ;
  GGS_location joker_2413 ; // Joker input parameter
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_2390, joker_2413, inCompiler) ;
  joker_2413.drop () ; // Release temporary input variables (joker in source)
  outArgument_outGuardedCommand = GGS_guardedCommandAST::class_func_boolAndSync (constinArgument_inIsExitCommand, GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (true), inCompiler COMMA_HERE), GGS_bool (false), var_endOfExp_2044, var_usesSelf_2097, var_nameList_2243, var_effectiveParameterList_2390  COMMA_SOURCE_FILE ("instruction-event.galgas", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i125_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 44)) ;
  switch (select_omnibus_5F_syntax_119 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 49)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 55)) ;
    if (select_omnibus_5F_syntax_120 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i125_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 44)) ;
  switch (select_omnibus_5F_syntax_119 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 49)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 55)) ;
    if (select_omnibus_5F_syntax_120 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i126_ (GGS_ast & ioArgument_ioAST,
                                                                                 const GGS_bool constinArgument_inIsExitCommand,
                                                                                 GGS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  GGS_expressionAST var_expression_2995 ;
  nt_expression_ (ioArgument_ioAST, var_expression_2995, inCompiler) ;
  GGS_location var_endOfExp_3014 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 76)) ;
  switch (select_omnibus_5F_syntax_121 (inCompiler)) {
  case 1: {
    outArgument_outGuardedCommand = GGS_guardedCommandAST::class_func_boolean (constinArgument_inIsExitCommand, var_expression_2995, var_endOfExp_3014  COMMA_SOURCE_FILE ("instruction-event.galgas", 78)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 84)) ;
    GGS_lbool var_usesSelf_3238 ;
    switch (select_omnibus_5F_syntax_122 (inCompiler)) {
    case 1: {
      var_usesSelf_3238 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 87)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 89)) ;
      var_usesSelf_3238 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 90)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 91)) ;
    } break ;
    default:
      break ;
    }
    GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 93)) ;
    GGS_lstringlist var_nameList_3400 = temp_0 ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_name_3454 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 95)) ;
      var_nameList_3400.addAssignOperation (var_name_3454  COMMA_SOURCE_FILE ("instruction-event.galgas", 96)) ;
      if (select_omnibus_5F_syntax_123 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 98)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GGS_effectiveArgumentListAST var_effectiveParameterList_3561 ;
    GGS_location joker_3584 ; // Joker input parameter
    nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_3561, joker_3584, inCompiler) ;
    joker_3584.drop () ; // Release temporary input variables (joker in source)
    outArgument_outGuardedCommand = GGS_guardedCommandAST::class_func_boolAndSync (constinArgument_inIsExitCommand, var_expression_2995, GGS_bool (true), var_endOfExp_3014, var_usesSelf_3238, var_nameList_3400, var_effectiveParameterList_3561  COMMA_SOURCE_FILE ("instruction-event.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i126_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_121 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 84)) ;
    switch (select_omnibus_5F_syntax_122 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 91)) ;
    } break ;
    default:
      break ;
    }
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 95)) ;
      if (select_omnibus_5F_syntax_123 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 98)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_effective_5F_parameters_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i126_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_121 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 84)) ;
    switch (select_omnibus_5F_syntax_122 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 91)) ;
    } break ;
    default:
      break ;
    }
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 95)) ;
      if (select_omnibus_5F_syntax_123 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 98)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_effective_5F_parameters_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i127_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas", 117)) ;
  GGS_location var_startLocation_4130 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 118)) ;
  GGS_syncInstructionBranchListAST temp_0 = GGS_syncInstructionBranchListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 119)) ;
  GGS_syncInstructionBranchListAST var_instructionBranchList_4199 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_124 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas", 122)) ;
      GGS_guardedCommandAST var_guardedCommand_4323 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, GGS_bool (true), var_guardedCommand_4323, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas", 124)) ;
      GGS_instructionListAST var_instructionList_4385 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_4385, inCompiler) ;
      var_instructionBranchList_4199.addAssignOperation (var_guardedCommand_4323, var_instructionList_4385, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 126))  COMMA_SOURCE_FILE ("instruction-event.galgas", 126)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas", 134)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_syncInstructionAST::init_21__21__21_ (var_startLocation_4130, var_instructionBranchList_4199, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 135)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-event.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i127_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas", 117)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_124 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas", 122)) ;
      nt_guarded_5F_command_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas", 124)) ;
      nt_instructionList_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i127_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas", 117)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_124 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas", 122)) ;
      nt_guarded_5F_command_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas", 124)) ;
      nt_instructionList_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i128_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  GGS_lstring var_syncInstanceName_1064 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  GGS_lstring var_syncTypeName_1098 ;
  switch (select_omnibus_5F_syntax_125 (inCompiler)) {
  case 1: {
    var_syncTypeName_1098 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 24)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_syncTypeName_1098, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  GGS_expressionAST var_expression_1267 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1267, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_syncToolInstanceDeclarationAST::init_21__21__21_ (var_syncTypeName_1098, var_syncInstanceName_1064, var_expression_1267, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i128_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_125 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i128_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_125 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i129_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_ (ioArgument_ioAST, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 26)), inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i129_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i129_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i130_ (GGS_ast & ioArgument_ioAST,
                                                                                      const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_1697 ;
  switch (select_omnibus_5F_syntax_126 (inCompiler)) {
  case 1: {
    var_publicAccess_1697 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas", 37)) ;
    var_publicAccess_1697 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_mode var_mode_1862 ;
  GGS_lstring var_procName_1883 ;
  GGS_lstringlist var_attributeList_1914 ;
  GGS_routineFormalArgumentListAST var_procFormalArgumentList_1955 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1862, var_procName_1883, var_attributeList_1914, var_procFormalArgumentList_1955, inCompiler) ;
  GGS_lstring var_returnTypeName_1995 ;
  switch (select_omnibus_5F_syntax_127 (inCompiler)) {
  case 1: {
    var_returnTypeName_1995 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 48)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas", 50)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1995, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas", 53)) ;
  GGS_instructionListAST var_instructionList_2171 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2171, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas", 55)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_mode_1862, var_publicAccess_1697, constinArgument_inReceiverTypeName, var_procName_1883, var_attributeList_1914, var_procFormalArgumentList_1955, var_returnTypeName_1995, var_instructionList_2171, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 65)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-function.galgas", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i130_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_126 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_127 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas", 50)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas", 53)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas", 55)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i130_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_126 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_function_5F_header_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_127 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas", 50)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas", 53)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i131_ (GGS_mode & outArgument_outMode,
                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_128 (inCompiler)) {
  case 1: {
    outArgument_outMode = GGS_mode::class_func_anyMode (SOURCE_FILE ("declaration-function.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
    outArgument_outMode = GGS_mode::class_func_userMode (SOURCE_FILE ("declaration-function.galgas", 76)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas", 78)) ;
    outArgument_outMode = GGS_mode::class_func_panicMode (SOURCE_FILE ("declaration-function.galgas", 79)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas", 81)) ;
    outArgument_outMode = GGS_mode::class_func_bootMode (SOURCE_FILE ("declaration-function.galgas", 82)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas", 84)) ;
    outArgument_outMode = GGS_mode::class_func_startupMode (SOURCE_FILE ("declaration-function.galgas", 85)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
    outArgument_outMode = GGS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-function.galgas", 88)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 90)) ;
    outArgument_outMode = GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-function.galgas", 91)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 93)) ;
    outArgument_outMode = GGS_mode::class_func_primitiveMode (SOURCE_FILE ("declaration-function.galgas", 94)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 96)) ;
    outArgument_outMode = GGS_mode::class_func_guardMode (SOURCE_FILE ("declaration-function.galgas", 97)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas", 99)) ;
    switch (select_omnibus_5F_syntax_129 (inCompiler)) {
    case 1: {
      outArgument_outMode = GGS_mode::class_func_anySafeMode (SOURCE_FILE ("declaration-function.galgas", 101)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 103)) ;
      outArgument_outMode = GGS_mode::class_func_safeUserMode (SOURCE_FILE ("declaration-function.galgas", 104)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 106)) ;
      outArgument_outMode = GGS_mode::class_func_safeSectionMode (SOURCE_FILE ("declaration-function.galgas", 107)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 109)) ;
      outArgument_outMode = GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("declaration-function.galgas", 110)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
      outArgument_outMode = GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("declaration-function.galgas", 113)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 115)) ;
      outArgument_outMode = GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("declaration-function.galgas", 116)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i131_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_128 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas", 78)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas", 81)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas", 84)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 90)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 93)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 96)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas", 99)) ;
    switch (select_omnibus_5F_syntax_129 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 103)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 106)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 109)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 115)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i131_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_128 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas", 78)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas", 81)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas", 84)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 90)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 93)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 96)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas", 99)) ;
    switch (select_omnibus_5F_syntax_129 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 103)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 106)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 109)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 115)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i132_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_mode & outArgument_outMode,
                                                                                 GGS_lstring & outArgument_outProcName,
                                                                                 GGS_lstringlist & outArgument_outAttributeList,
                                                                                 GGS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  outArgument_outProcName.drop () ; // Release 'out' argument
  outArgument_outAttributeList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas", 130)) ;
  outArgument_outProcName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas", 131)) ;
  nt_mode_ (outArgument_outMode, inCompiler) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 133)) ;
  outArgument_outAttributeList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_130 (inCompiler) == 2) {
      GGS_lstring var_attribute_3910 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
      outArgument_outAttributeList.addAssignOperation (var_attribute_3910  COMMA_SOURCE_FILE ("declaration-function.galgas", 137)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, outArgument_outProcFormalArgumentList, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i132_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas", 130)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas", 131)) ;
  nt_mode_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_130 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i132_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas", 130)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas", 131)) ;
  nt_mode_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_130 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i133_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  GGS_LValueAST var_lvalue_1192 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1192, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  outArgument_outExpression = GGS_sizeofExpressionAST::init_21_ (var_lvalue_1192, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i133_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i133_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i134_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  GGS_lstring var_typeName_1496 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1496, inCompiler) ;
  outArgument_outExpression = GGS_sizeofTypeAST::init_21_ (var_typeName_1496, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i134_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i134_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i135_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_leftVariableName_4993 ;
  GGS_lstring var_leftTypeName_5015 ;
  GGS_genericFormalParameterList var_leftGenericFormalParameterList_5033 ;
  nt_llvm_5F_function_5F_header_ (var_leftVariableName_4993, var_leftTypeName_5015, var_leftGenericFormalParameterList_5033, inCompiler) ;
  GGS_location var_operationLocation_5072 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 122)) ;
  GGS_compileTimeInfixOperatorEnumeration var_infixOperator_5143 ;
  nt_compileTimeInfixOperator_ (var_infixOperator_5143, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 124)) ;
  GGS_lstring var_rightVariableName_5187 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 125)) ;
  GGS_lstring var_rightType_5223 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 126)) ;
  GGS_genericFormalParameterList var_rightGenericFormalParameterList_5269 ;
  nt_generic_5F_formal_5F_arguments_ (var_rightGenericFormalParameterList_5269, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 129)) ;
  GGS_lstring var_resultType_5336 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 130)) ;
  GGS_genericFormalParameterList var_resultGenericFormalParameterList_5383 ;
  nt_generic_5F_formal_5F_arguments_ (var_resultGenericFormalParameterList_5383, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 132)) ;
  GGS_llvmGenerationInstructionList var_instructionList_5457 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5457, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 134)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_omnibusInfixOperator (var_infixOperator_5143, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 136)), var_operationLocation_5072, var_leftVariableName_4993, var_leftTypeName_5015, var_leftGenericFormalParameterList_5033, var_rightVariableName_5187, var_rightType_5223, var_rightGenericFormalParameterList_5269, var_resultType_5336, var_resultGenericFormalParameterList_5383, var_instructionList_5457, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i135_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_parse (inCompiler) ;
  nt_compileTimeInfixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 124)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 125)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 126)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 130)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 132)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i135_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  nt_compileTimeInfixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 124)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 125)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 126)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 130)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 132)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i136_ (GGS_ast & ioArgument_ioAST,
                                                                                                                           GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_propertyVisibility var_visibility_2644 ;
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
    var_visibility_2644 = GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-structure-declaration.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
    var_visibility_2644 = GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-structure-declaration.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_visibility_2644, ioArgument_ioPropertyListAST, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i136_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i136_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i137_ (GGS_ast & ioArgument_ioAST,
                                                                                                           GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-structure-declaration.galgas", 71)), ioArgument_ioPropertyListAST, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i137_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i137_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i138_ (GGS_ast & ioArgument_ioAST,
                                                                                                const GGS_propertyVisibility constinArgument_inVisibility,
                                                                                                GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
  GGS_lstring var_propertyName_3459 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
  GGS_lstring var_typeName_3489 ;
  switch (select_omnibus_5F_syntax_132 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3489, inCompiler) ;
  } break ;
  case 2: {
    var_typeName_3489 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  switch (select_omnibus_5F_syntax_133 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 90)) ;
    GGS_expressionAST var_initExpression_3649 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_3649, inCompiler) ;
    GGS_propertyAttributeList temp_0 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 94)) ;
    ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_3459, temp_0, constinArgument_inVisibility, var_typeName_3489, GGS_propertyKindAST::class_func_initializedConstantProperty (var_initExpression_3649  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 97))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 92)) ;
  } break ;
  case 2: {
    GGS_propertyAttributeList temp_1 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 101)) ;
    ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_3459, temp_1, constinArgument_inVisibility, var_typeName_3489, GGS_propertyKindAST::class_func_uninitializedConstantProperty (SOURCE_FILE ("type-structure-declaration.galgas", 104))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 99)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i138_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
  switch (select_omnibus_5F_syntax_132 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_omnibus_5F_syntax_133 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 90)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i138_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
  switch (select_omnibus_5F_syntax_132 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_omnibus_5F_syntax_133 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 90)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i139_ (GGS_ast & ioArgument_ioAST,
                                                                                                const GGS_propertyVisibility constinArgument_inVisibility,
                                                                                                GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 115)) ;
  GGS_lstring var_propertyName_4305 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
  GGS_propertyAttributeList temp_0 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 117)) ;
  GGS_propertyAttributeList var_propertyAttributeList_4349 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_134 (inCompiler) == 2) {
      GGS_lstring var_attribute_4422 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
      GGS_lbigint var_value_4453 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 121)) ;
      var_propertyAttributeList_4349.addAssignOperation (var_attribute_4422, var_value_4453  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 122)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
    GGS_lstring var_typeName_4565 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_4565, inCompiler) ;
    switch (select_omnibus_5F_syntax_136 (inCompiler)) {
    case 1: {
      GGS_propertyAttributeList temp_2 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 127)) ;
      ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_4305, temp_2, constinArgument_inVisibility, var_typeName_4565, GGS_propertyKindAST::class_func_uninitializedStoredProperty (SOURCE_FILE ("type-structure-declaration.galgas", 127))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 127)) ;
    } break ;
    case 2: {
      nt_propertyGetterSetter_ (ioArgument_ioAST, constinArgument_inVisibility, var_propertyName_4305, var_propertyAttributeList_4349, var_typeName_4565, ioArgument_ioPropertyListAST, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      GGS_expressionAST var_initExpression_4927 ;
      nt_expression_ (ioArgument_ioAST, var_initExpression_4927, inCompiler) ;
      ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_4305, var_propertyAttributeList_4349, constinArgument_inVisibility, var_typeName_4565, GGS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_4927  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 144))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 139)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    GGS_expressionAST var_initExpression_5202 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_5202, inCompiler) ;
    ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_4305, var_propertyAttributeList_4349, constinArgument_inVisibility, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 153)), GGS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_5202  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 154))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i139_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_134 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 121)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_136 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_propertyGetterSetter_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i139_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_134 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 121)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_136 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_propertyGetterSetter_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i140_ (GGS_ast & ioArgument_ioAST,
                                                                                   const GGS_propertyVisibility constinArgument_inVisibility,
                                                                                   const GGS_lstring constinArgument_inPropertyName,
                                                                                   const GGS_propertyAttributeList constinArgument_inPropertyAttributeList,
                                                                                   const GGS_lstring constinArgument_inTypeName,
                                                                                   GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  switch (select_omnibus_5F_syntax_137 (inCompiler)) {
  case 1: {
    GGS_bool var_getterDefined_5837 = GGS_bool (false) ;
    GGS_bool var_setterDefined_5869 = GGS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_getterOrSetter_5930 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      GGS_instructionListAST var_instructionList_5996 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_5996, inCompiler) ;
      GGS_location var_endOfInstructionList_6024 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 176)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_getterOrSetter_5930.readProperty_string ().objectCompare (GGS_string ("get"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          ioArgument_ioPropertyListAST.addAssignOperation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GGS_propertyKindAST::class_func_readOnlyComputedProperty (var_instructionList_5996, var_endOfInstructionList_6024  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 184))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 179)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_getterDefined_5837.boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_getterOrSetter_5930.readProperty_location (), GGS_string ("duplicate getter definition"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 189)) ;
            }
          }
          var_getterDefined_5837 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_getterOrSetter_5930.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            ioArgument_ioPropertyListAST.addAssignOperation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GGS_propertyKindAST::class_func_writeComputedProperty (var_instructionList_5996, var_endOfInstructionList_6024  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 198))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 193)) ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_setterDefined_5869.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_getterOrSetter_5930.readProperty_location (), GGS_string ("duplicate setter definition"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 203)) ;
              }
            }
            var_setterDefined_5869 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GenericArray <FixItDescription> fixItArray7 ;
          fixItArray7.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@set")) ;
          appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@get")) ;
          inCompiler->emitSemanticError (var_getterOrSetter_5930.readProperty_location (), GGS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 207)) ;
        }
      }
      if (select_omnibus_5F_syntax_138 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_bool test_9 = var_setterDefined_5869 ;
      if (GalgasBool::boolTrue == test_9.boolEnum ()) {
        test_9 = var_getterDefined_5837.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 211)) ;
      }
      test_8 = test_9.boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 212)), GGS_string ("a getter should be defined"), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 212)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_bool test_12 = var_setterDefined_5869.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 213)) ;
        if (GalgasBool::boolTrue == test_12.boolEnum ()) {
          test_12 = var_getterDefined_5837.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 213)) ;
        }
        test_11 = test_12.boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 214)), GGS_string ("a getter should be defined, and optionaly a setter"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 214)) ;
        }
      }
    }
  } break ;
  case 2: {
    GGS_instructionListAST var_readInstructionList_7513 ;
    nt_instructionList_ (ioArgument_ioAST, var_readInstructionList_7513, inCompiler) ;
    GGS_location var_endOfReadInstructionList_7543 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 218)) ;
    ioArgument_ioPropertyListAST.addAssignOperation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GGS_propertyKindAST::class_func_readOnlyComputedProperty (var_readInstructionList_7513, var_endOfReadInstructionList_7543  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 224))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 219)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i140_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  switch (select_omnibus_5F_syntax_137 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      if (select_omnibus_5F_syntax_138 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    nt_instructionList_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i140_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  switch (select_omnibus_5F_syntax_137 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      if (select_omnibus_5F_syntax_138 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    nt_instructionList_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i141_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235)) ;
  GGS_lstring var_structureName_8077 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 237)) ;
  GGS_lstringlist var_attributeList_8112 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_139 (inCompiler) == 2) {
      GGS_lstring var_attribute_8177 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
      var_attributeList_8112.addAssignOperation (var_attribute_8177  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 241)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
  GGS_structurePropertyListAST temp_2 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 244)) ;
  GGS_structurePropertyListAST var_fieldList_8272 = temp_2 ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_omnibus_5F_syntax_140 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_8272, inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_ (ioArgument_ioAST, var_structureName_8077, inCompiler) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (var_structureName_8077, var_structureName_8077, var_structureName_8077, var_attributeList_8112, GGS_bool (true), var_fieldList_8272, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 252)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i141_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_139 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_140 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i141_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_139 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_140 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i142_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  GGS_lstring var_varName_1356 ;
  switch (select_omnibus_5F_syntax_141 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
    var_varName_1356 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 29)) ;
  } break ;
  case 2: {
    var_varName_1356 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_typeName_1489 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1489, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  GGS_expressionAST var_lowerBoundExpression_1553 ;
  nt_expression_ (ioArgument_ioAST, var_lowerBoundExpression_1553, inCompiler) ;
  GGS_location var_endOf_5F_lowerBoundExpression_5F_instruction_1582 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  GGS_expressionAST var_upperBoundExpression_1694 ;
  nt_expression_ (ioArgument_ioAST, var_upperBoundExpression_1694, inCompiler) ;
  GGS_location var_endOf_5F_upperBoundExpression_5F_instruction_1723 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  GGS_instructionListAST var_instructionList_1822 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1822, inCompiler) ;
  GGS_location var_endOfInstruction_1846 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_forLowerUpperBoundInstructionAST::init_21__21__21__21__21__21__21__21__21_ (var_varName_1356.readProperty_location (), var_varName_1356, var_typeName_1489, var_lowerBoundExpression_1553, var_endOf_5F_lowerBoundExpression_5F_instruction_1582, var_upperBoundExpression_1694, var_endOf_5F_upperBoundExpression_5F_instruction_1723, var_instructionList_1822, var_endOfInstruction_1846, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i142_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  switch (select_omnibus_5F_syntax_141 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i142_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  switch (select_omnibus_5F_syntax_141 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i143_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  GGS_controlRegisterLValueAST var_registerLValue_1046 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1046, inCompiler) ;
  outArgument_outExpression = GGS_addressofControlRegisterAST::init_21_ (var_registerLValue_1046, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i143_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i143_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
}

