#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_prefixOperatorExpressionAST_2D_weak::objectCompare (const GALGAS_prefixOperatorExpressionAST_2D_weak & inOperand) const {
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

GALGAS_prefixOperatorExpressionAST_2D_weak::GALGAS_prefixOperatorExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST_2D_weak & GALGAS_prefixOperatorExpressionAST_2D_weak::operator = (const GALGAS_prefixOperatorExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST_2D_weak::GALGAS_prefixOperatorExpressionAST_2D_weak (const GALGAS_prefixOperatorExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST_2D_weak GALGAS_prefixOperatorExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST GALGAS_prefixOperatorExpressionAST_2D_weak::bang_prefixOperatorExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefixOperatorExpressionAST) ;
      result = GALGAS_prefixOperatorExpressionAST ((cPtr_prefixOperatorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST_2D_weak ("prefixOperatorExpressionAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST_2D_weak GALGAS_prefixOperatorExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionAST_2D_weak result ;
  const GALGAS_prefixOperatorExpressionAST_2D_weak * p = (const GALGAS_prefixOperatorExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperatorExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @instructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_instructionAST::cPtr_instructionAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_instructionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_instructionAST::objectCompare (const GALGAS_instructionAST & inOperand) const {
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

GALGAS_instructionAST::GALGAS_instructionAST (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_instructionAST GALGAS_instructionAST::init_28__29_ (const GALGAS_location & in_mInstructionLocation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cPtr_instructionAST * object = nullptr ;
  macroMyNew (object, cPtr_instructionAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  const GALGAS_instructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_instructionAST::GALGAS_instructionAST (const cPtr_instructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instructionAST) ;
}
//--------------------------------------------------------------------------------------------------

void GALGAS_instructionAST::setter_setMInstructionLocation (GALGAS_location inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_instructionAST * p = (cPtr_instructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_instructionAST) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_instructionAST::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_instructionAST * p = (cPtr_instructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_instructionAST) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @instructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_instructionAST::cPtr_instructionAST (const GALGAS_location & in_mInstructionLocation
                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//--------------------------------------------------------------------------------------------------
//
//     @instructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionAST ("instructionAST",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionAST GALGAS_instructionAST::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instructionAST result ;
  const GALGAS_instructionAST * p = (const GALGAS_instructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_instructionAST_2D_weak::objectCompare (const GALGAS_instructionAST_2D_weak & inOperand) const {
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

GALGAS_instructionAST_2D_weak::GALGAS_instructionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionAST_2D_weak & GALGAS_instructionAST_2D_weak::operator = (const GALGAS_instructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionAST_2D_weak::GALGAS_instructionAST_2D_weak (const GALGAS_instructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionAST_2D_weak GALGAS_instructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_instructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionAST GALGAS_instructionAST_2D_weak::bang_instructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_instructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_instructionAST) ;
      result = GALGAS_instructionAST ((cPtr_instructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @instructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionAST_2D_weak ("instructionAST-weak",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionAST_2D_weak GALGAS_instructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instructionAST_2D_weak result ;
  const GALGAS_instructionAST_2D_weak * p = (const GALGAS_instructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (cPtr_instructionAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_instructionAST) ;
    inObject->method_noteInstructionTypesInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST noteInstructionListTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const GALGAS_instructionListAST inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_2445 (temp_0, EnumerationOrder::up) ;
  while (enumerator_2445.hasCurrentObject ()) {
    callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((cPtr_instructionAST *) enumerator_2445.current_mInstruction (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 56)) ;
    enumerator_2445.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionSemanticAnalysis (cPtr_instructionAST * inObject,
                                                      const GALGAS_omnibusType constin_inSelfType,
                                                      const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                      const GALGAS_semanticContext constin_inContext,
                                                      const GALGAS_mode constin_inMode,
                                                      GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                      GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                      GALGAS_allocaList & io_ioAllocaList,
                                                      GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_instructionAST) ;
    inObject->method_instructionSemanticAnalysis (constin_inSelfType, constin_inRoutineAttributes, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeBranchInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeBranchInstructionList (const GALGAS_instructionListAST inObject,
                                                   const GALGAS_omnibusType constinArgument_inSelfType,
                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                   GALGAS_location inArgument_inEndOfInstructionList,
                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                   const GALGAS_mode constinArgument_inMode,
                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openBranch (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 97)) ;
  }
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_4325 (temp_0, EnumerationOrder::up) ;
  while (enumerator_4325.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_4325.current_mInstruction (HERE).readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 99)) ;
    }
    callExtensionMethod_instructionSemanticAnalysis ((cPtr_instructionAST *) enumerator_4325.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 100)) ;
    enumerator_4325.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioUniversalMap, inArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 113)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeRoutineInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineInstructionList (const GALGAS_instructionListAST inObject,
                                                    const GALGAS_omnibusType constinArgument_inSelfType,
                                                    const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                    const GALGAS_mode constinArgument_inMode,
                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                    GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_5506 (temp_0, EnumerationOrder::up) ;
  while (enumerator_5506.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_5506.current_mInstruction (HERE).readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 130)) ;
    }
    callExtensionMethod_instructionSemanticAnalysis ((cPtr_instructionAST *) enumerator_5506.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 131)) ;
    enumerator_5506.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR instructionListLLVMCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_instructionListLLVMCode (const GALGAS_instructionListIR inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              const GALGAS_generationContext constinArgument_inGenerationContext,
                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListIR temp_0 = inObject ;
  cEnumerator_instructionListIR enumerator_6521 (temp_0, EnumerationOrder::up) ;
  while (enumerator_6521.hasCurrentObject ()) {
    callExtensionMethod_llvmInstructionCode ((cPtr_abstractInstructionIR *) enumerator_6521.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 155)) ;
    enumerator_6521.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_checkInstructionAST_2D_weak::objectCompare (const GALGAS_checkInstructionAST_2D_weak & inOperand) const {
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

GALGAS_checkInstructionAST_2D_weak::GALGAS_checkInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST_2D_weak & GALGAS_checkInstructionAST_2D_weak::operator = (const GALGAS_checkInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST_2D_weak::GALGAS_checkInstructionAST_2D_weak (const GALGAS_checkInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST_2D_weak GALGAS_checkInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_checkInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST GALGAS_checkInstructionAST_2D_weak::bang_checkInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_checkInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_checkInstructionAST) ;
      result = GALGAS_checkInstructionAST ((cPtr_checkInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @checkInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkInstructionAST_2D_weak ("checkInstructionAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkInstructionAST_2D_weak GALGAS_checkInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST_2D_weak result ;
  const GALGAS_checkInstructionAST_2D_weak * p = (const GALGAS_checkInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_checkInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assertInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionAST::cPtr_assertInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assertInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_assertInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_assertInstructionAST::objectCompare (const GALGAS_assertInstructionAST & inOperand) const {
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

GALGAS_assertInstructionAST::GALGAS_assertInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_assertInstructionAST GALGAS_assertInstructionAST::init_28__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_expressionAST & in_mExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cPtr_assertInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_assertInstructionAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_mExpression = in_mExpression ;
  const GALGAS_assertInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST::GALGAS_assertInstructionAST (const cPtr_assertInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST GALGAS_assertInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                         const GALGAS_expressionAST & inAttribute_mExpression
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertInstructionAST (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assertInstructionAST::setter_setMExpression (GALGAS_expressionAST inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionAST * p = (cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_assertInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_assertInstructionAST * p = (cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assertInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionAST::cPtr_assertInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_expressionAST & in_mExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assertInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

void cPtr_assertInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@assertInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assertInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assertInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @assertInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionAST ("assertInstructionAST",
                                                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assertInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assertInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST GALGAS_assertInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionAST result ;
  const GALGAS_assertInstructionAST * p = (const GALGAS_assertInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assertInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assertInstructionAST_2D_weak::objectCompare (const GALGAS_assertInstructionAST_2D_weak & inOperand) const {
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

GALGAS_assertInstructionAST_2D_weak::GALGAS_assertInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST_2D_weak & GALGAS_assertInstructionAST_2D_weak::operator = (const GALGAS_assertInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST_2D_weak::GALGAS_assertInstructionAST_2D_weak (const GALGAS_assertInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST_2D_weak GALGAS_assertInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assertInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST GALGAS_assertInstructionAST_2D_weak::bang_assertInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assertInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assertInstructionAST) ;
      result = GALGAS_assertInstructionAST ((cPtr_assertInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assertInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionAST_2D_weak ("assertInstructionAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assertInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assertInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST_2D_weak GALGAS_assertInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionAST_2D_weak result ;
  const GALGAS_assertInstructionAST_2D_weak * p = (const GALGAS_assertInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assertInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assertInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionIR::cPtr_assertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mAssertInstructionLocation (),
mProperty_mInstructionList (),
mProperty_mExpressionValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assertInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mAssertInstructionLocation.printNonNullClassInstanceProperties ("mAssertInstructionLocation") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mExpressionValue.printNonNullClassInstanceProperties ("mExpressionValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_assertInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertInstructionIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAssertInstructionLocation.objectCompare (p->mProperty_mAssertInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExpressionValue.objectCompare (p->mProperty_mExpressionValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_assertInstructionIR::objectCompare (const GALGAS_assertInstructionIR & inOperand) const {
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

GALGAS_assertInstructionIR::GALGAS_assertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_assertInstructionIR GALGAS_assertInstructionIR::init_28__2C__2C__29_ (const GALGAS_location & in_mAssertInstructionLocation,
                                                                                const GALGAS_instructionListIR & in_mInstructionList,
                                                                                const GALGAS_objectIR & in_mExpressionValue,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cPtr_assertInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_assertInstructionIR (inCompiler COMMA_THERE)) ;
  object->mProperty_mAssertInstructionLocation = in_mAssertInstructionLocation ;
  object->mProperty_mInstructionList = in_mInstructionList ;
  object->mProperty_mExpressionValue = in_mExpressionValue ;
  const GALGAS_assertInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR::GALGAS_assertInstructionIR (const cPtr_assertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::class_func_new (const GALGAS_location & inAttribute_mAssertInstructionLocation,
                                                                       const GALGAS_instructionListIR & inAttribute_mInstructionList,
                                                                       const GALGAS_objectIR & inAttribute_mExpressionValue
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR result ;
  if (inAttribute_mAssertInstructionLocation.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mExpressionValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertInstructionIR (inAttribute_mAssertInstructionLocation, inAttribute_mInstructionList, inAttribute_mExpressionValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assertInstructionIR::setter_setMAssertInstructionLocation (GALGAS_location inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mAssertInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assertInstructionIR::setter_setMInstructionList (GALGAS_instructionListIR inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assertInstructionIR::setter_setMExpressionValue (GALGAS_objectIR inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mExpressionValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_assertInstructionIR::readProperty_mAssertInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mAssertInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_assertInstructionIR::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_assertInstructionIR::readProperty_mExpressionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mExpressionValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assertInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionIR::cPtr_assertInstructionIR (const GALGAS_location & in_mAssertInstructionLocation,
                                                    const GALGAS_instructionListIR & in_mInstructionList,
                                                    const GALGAS_objectIR & in_mExpressionValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mAssertInstructionLocation (in_mAssertInstructionLocation),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mExpressionValue (in_mExpressionValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

void cPtr_assertInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@assertInstructionIR:") ;
  mProperty_mAssertInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assertInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assertInstructionIR (mProperty_mAssertInstructionLocation, mProperty_mInstructionList, mProperty_mExpressionValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @assertInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR ("assertInstructionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR result ;
  const GALGAS_assertInstructionIR * p = (const GALGAS_assertInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assertInstructionIR_2D_weak::objectCompare (const GALGAS_assertInstructionIR_2D_weak & inOperand) const {
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

GALGAS_assertInstructionIR_2D_weak::GALGAS_assertInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR_2D_weak & GALGAS_assertInstructionIR_2D_weak::operator = (const GALGAS_assertInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR_2D_weak::GALGAS_assertInstructionIR_2D_weak (const GALGAS_assertInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR_2D_weak GALGAS_assertInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assertInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR GALGAS_assertInstructionIR_2D_weak::bang_assertInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assertInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assertInstructionIR) ;
      result = GALGAS_assertInstructionIR ((cPtr_assertInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assertInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR_2D_weak ("assertInstructionIR-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assertInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assertInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR_2D_weak GALGAS_assertInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR_2D_weak result ;
  const GALGAS_assertInstructionIR_2D_weak * p = (const GALGAS_assertInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assertInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assignmentInstructionAST_2D_weak::objectCompare (const GALGAS_assignmentInstructionAST_2D_weak & inOperand) const {
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

GALGAS_assignmentInstructionAST_2D_weak::GALGAS_assignmentInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak & GALGAS_assignmentInstructionAST_2D_weak::operator = (const GALGAS_assignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak::GALGAS_assignmentInstructionAST_2D_weak (const GALGAS_assignmentInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak GALGAS_assignmentInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST_2D_weak::bang_assignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentInstructionAST) ;
      result = GALGAS_assignmentInstructionAST ((cPtr_assignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ("assignmentInstructionAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak GALGAS_assignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST_2D_weak result ;
  const GALGAS_assignmentInstructionAST_2D_weak * p = (const GALGAS_assignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator::cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator (const GALGAS_omnibusInfixOperator inAssociatedValue0,
                                                                                                                                                                        const GALGAS_location inAssociatedValue1
                                                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator::description (String & ioString,
                                                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind::GALGAS_controlRegisterAssignmentOperatorKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind GALGAS_controlRegisterAssignmentOperatorKind::class_func_assignment (UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentOperatorKind result ;
  result.mEnum = kEnum_assignment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind GALGAS_controlRegisterAssignmentOperatorKind::class_func_assignmentWithOperator (const GALGAS_omnibusInfixOperator & inAssociatedValue0,
                                                                                                                              const GALGAS_location & inAssociatedValue1
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentOperatorKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_assignmentWithOperator ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentOperatorKind::method_assignmentWithOperator (GALGAS_omnibusInfixOperator & outAssociatedValue0,
                                                                                  GALGAS_location & outAssociatedValue1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_assignmentWithOperator) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @controlRegisterAssignmentOperatorKind assignmentWithOperator invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator * ptr = (const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterAssignmentOperatorKind::optional_assignment () const {
  const bool ok = mEnum == kEnum_assignment ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterAssignmentOperatorKind::optional_assignmentWithOperator (GALGAS_omnibusInfixOperator & outAssociatedValue0,
                                                                                    GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_assignmentWithOperator ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_controlRegisterAssignmentOperatorKind [3] = {
  "(not built)",
  "assignment",
  "assignmentWithOperator"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterAssignmentOperatorKind::getter_isAssignment (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_assignment == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterAssignmentOperatorKind::getter_isAssignmentWithOperator (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_assignmentWithOperator == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentOperatorKind::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @controlRegisterAssignmentOperatorKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_controlRegisterAssignmentOperatorKind [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_controlRegisterAssignmentOperatorKind::objectCompare (const GALGAS_controlRegisterAssignmentOperatorKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterAssignmentOperatorKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind ("controlRegisterAssignmentOperatorKind",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterAssignmentOperatorKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterAssignmentOperatorKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterAssignmentOperatorKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind GALGAS_controlRegisterAssignmentOperatorKind::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentOperatorKind result ;
  const GALGAS_controlRegisterAssignmentOperatorKind * p = (const GALGAS_controlRegisterAssignmentOperatorKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterAssignmentOperatorKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentOperatorKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::objectCompare (const GALGAS_controlRegisterAssignmentInstructionAST_2D_weak & inOperand) const {
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

GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::GALGAS_controlRegisterAssignmentInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST_2D_weak & GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::operator = (const GALGAS_controlRegisterAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::GALGAS_controlRegisterAssignmentInstructionAST_2D_weak (const GALGAS_controlRegisterAssignmentInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST_2D_weak GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::bang_controlRegisterAssignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_controlRegisterAssignmentInstructionAST) ;
      result = GALGAS_controlRegisterAssignmentInstructionAST ((cPtr_controlRegisterAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterAssignmentInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2D_weak ("controlRegisterAssignmentInstructionAST-weak",
                                                                                                       & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterAssignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST_2D_weak GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST_2D_weak result ;
  const GALGAS_controlRegisterAssignmentInstructionAST_2D_weak * p = (const GALGAS_controlRegisterAssignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterAssignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@sliceAssignmentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sliceAssignmentListAST : public cCollectionElement {
  public: GALGAS_sliceAssignmentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_sliceAssignmentListAST (const GALGAS_lstring & in_mSliceWidth,
                                                     const GALGAS_sliceTargetAST & in_mSliceKind
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sliceAssignmentListAST (const GALGAS_sliceAssignmentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_sliceAssignmentListAST::cCollectionElement_sliceAssignmentListAST (const GALGAS_lstring & in_mSliceWidth,
                                                                                      const GALGAS_sliceTargetAST & in_mSliceKind
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSliceWidth, in_mSliceKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sliceAssignmentListAST::cCollectionElement_sliceAssignmentListAST (const GALGAS_sliceAssignmentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSliceWidth, inElement.mProperty_mSliceKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_sliceAssignmentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sliceAssignmentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_sliceAssignmentListAST (mObject.mProperty_mSliceWidth, mObject.mProperty_mSliceKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_sliceAssignmentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSliceWidth" ":") ;
  mObject.mProperty_mSliceWidth.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSliceKind" ":") ;
  mObject.mProperty_mSliceKind.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_sliceAssignmentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sliceAssignmentListAST * operand = (cCollectionElement_sliceAssignmentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sliceAssignmentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST::GALGAS_sliceAssignmentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST::GALGAS_sliceAssignmentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sliceAssignmentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                       const GALGAS_sliceTargetAST & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sliceAssignmentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sliceAssignmentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mSliceWidth,
                                                               const GALGAS_sliceTargetAST & in_mSliceKind
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_sliceAssignmentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_sliceAssignmentListAST (in_mSliceWidth,
                                                            in_mSliceKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_sliceTargetAST & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sliceAssignmentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_sliceTargetAST inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sliceAssignmentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_sliceTargetAST inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_sliceAssignmentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_sliceTargetAST & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
        outOperand0 = p->mObject.mProperty_mSliceWidth ;
        outOperand1 = p->mObject.mProperty_mSliceKind ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_sliceTargetAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mSliceKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_sliceTargetAST & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mSliceKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_sliceTargetAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mSliceKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_sliceTargetAST & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mSliceKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::add_operation (const GALGAS_sliceAssignmentListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentListAST result = GALGAS_sliceAssignmentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentListAST result = GALGAS_sliceAssignmentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentListAST result = GALGAS_sliceAssignmentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::plusAssign_operation (const GALGAS_sliceAssignmentListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_setMSliceWidthAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSliceWidth = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sliceAssignmentListAST::getter_mSliceWidthAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    result = p->mObject.mProperty_mSliceWidth ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_setMSliceKindAtIndex (GALGAS_sliceTargetAST inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSliceKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceAssignmentListAST::getter_mSliceKindAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  GALGAS_sliceTargetAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    result = p->mObject.mProperty_mSliceKind ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_sliceAssignmentListAST::cEnumerator_sliceAssignmentListAST (const GALGAS_sliceAssignmentListAST & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element cEnumerator_sliceAssignmentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sliceAssignmentListAST * p = (const cCollectionElement_sliceAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sliceAssignmentListAST::current_mSliceWidth (LOCATION_ARGS) const {
  const cCollectionElement_sliceAssignmentListAST * p = (const cCollectionElement_sliceAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
  return p->mObject.mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST cEnumerator_sliceAssignmentListAST::current_mSliceKind (LOCATION_ARGS) const {
  const cCollectionElement_sliceAssignmentListAST * p = (const cCollectionElement_sliceAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
  return p->mObject.mProperty_mSliceKind ;
}




//--------------------------------------------------------------------------------------------------
//
//     @sliceAssignmentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST ("sliceAssignmentListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceAssignmentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceAssignmentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST result ;
  const GALGAS_sliceAssignmentListAST * p = (const GALGAS_sliceAssignmentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceAssignmentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sliceAssignmentInstructionAST_2D_weak::objectCompare (const GALGAS_sliceAssignmentInstructionAST_2D_weak & inOperand) const {
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

GALGAS_sliceAssignmentInstructionAST_2D_weak::GALGAS_sliceAssignmentInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST_2D_weak & GALGAS_sliceAssignmentInstructionAST_2D_weak::operator = (const GALGAS_sliceAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST_2D_weak::GALGAS_sliceAssignmentInstructionAST_2D_weak (const GALGAS_sliceAssignmentInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST_2D_weak GALGAS_sliceAssignmentInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST_2D_weak::bang_sliceAssignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sliceAssignmentInstructionAST) ;
      result = GALGAS_sliceAssignmentInstructionAST ((cPtr_sliceAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceAssignmentInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2D_weak ("sliceAssignmentInstructionAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceAssignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceAssignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST_2D_weak GALGAS_sliceAssignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST_2D_weak result ;
  const GALGAS_sliceAssignmentInstructionAST_2D_weak * p = (const GALGAS_sliceAssignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceAssignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_sliceTargetAST_varDeclaration::cEnumAssociatedValues_sliceTargetAST_varDeclaration (const GALGAS_lstring inAssociatedValue0
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_sliceTargetAST_varDeclaration::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_sliceTargetAST_varDeclaration::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_sliceTargetAST_varDeclaration * ptr = dynamic_cast<const cEnumAssociatedValues_sliceTargetAST_varDeclaration *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_sliceTargetAST_letDeclaration::cEnumAssociatedValues_sliceTargetAST_letDeclaration (const GALGAS_lstring inAssociatedValue0
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_sliceTargetAST_letDeclaration::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_sliceTargetAST_letDeclaration::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_sliceTargetAST_letDeclaration * ptr = dynamic_cast<const cEnumAssociatedValues_sliceTargetAST_letDeclaration *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_sliceTargetAST_lValue::cEnumAssociatedValues_sliceTargetAST_lValue (const GALGAS_LValueAST inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_sliceTargetAST_lValue::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_sliceTargetAST_lValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_sliceTargetAST_lValue * ptr = dynamic_cast<const cEnumAssociatedValues_sliceTargetAST_lValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST::GALGAS_sliceTargetAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceTargetAST::class_func_discarded (UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST result ;
  result.mEnum = kEnum_discarded ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceTargetAST::class_func_varDeclaration (const GALGAS_lstring & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_varDeclaration ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_sliceTargetAST_varDeclaration (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceTargetAST::class_func_letDeclaration (const GALGAS_lstring & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_letDeclaration ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_sliceTargetAST_letDeclaration (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceTargetAST::class_func_lValue (const GALGAS_LValueAST & inAssociatedValue0
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_lValue ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_sliceTargetAST_lValue (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::method_varDeclaration (GALGAS_lstring & outAssociatedValue0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_varDeclaration) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST varDeclaration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_sliceTargetAST_varDeclaration * ptr = (const cEnumAssociatedValues_sliceTargetAST_varDeclaration *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::method_letDeclaration (GALGAS_lstring & outAssociatedValue0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_letDeclaration) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST letDeclaration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_sliceTargetAST_letDeclaration * ptr = (const cEnumAssociatedValues_sliceTargetAST_letDeclaration *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::method_lValue (GALGAS_LValueAST & outAssociatedValue0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_lValue) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST lValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_sliceTargetAST_lValue * ptr = (const cEnumAssociatedValues_sliceTargetAST_lValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST::optional_discarded () const {
  const bool ok = mEnum == kEnum_discarded ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST::optional_varDeclaration (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_varDeclaration ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_sliceTargetAST_varDeclaration *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST::optional_letDeclaration (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_letDeclaration ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_sliceTargetAST_letDeclaration *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST::optional_lValue (GALGAS_LValueAST & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_lValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_sliceTargetAST_lValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_sliceTargetAST [5] = {
  "(not built)",
  "discarded",
  "varDeclaration",
  "letDeclaration",
  "lValue"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sliceTargetAST::getter_isDiscarded (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_discarded == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sliceTargetAST::getter_isVarDeclaration (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_varDeclaration == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sliceTargetAST::getter_isLetDeclaration (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_letDeclaration == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sliceTargetAST::getter_isLValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @sliceTargetAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_sliceTargetAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sliceTargetAST::objectCompare (const GALGAS_sliceTargetAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceTargetAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST ("sliceTargetAST",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceTargetAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceTargetAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceTargetAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceTargetAST::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST result ;
  const GALGAS_sliceTargetAST * p = (const GALGAS_sliceTargetAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceTargetAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_bitbandInstructionAST_2D_weak::objectCompare (const GALGAS_bitbandInstructionAST_2D_weak & inOperand) const {
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

GALGAS_bitbandInstructionAST_2D_weak::GALGAS_bitbandInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST_2D_weak & GALGAS_bitbandInstructionAST_2D_weak::operator = (const GALGAS_bitbandInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST_2D_weak::GALGAS_bitbandInstructionAST_2D_weak (const GALGAS_bitbandInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST_2D_weak GALGAS_bitbandInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST_2D_weak::bang_bitbandInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bitbandInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitbandInstructionAST) ;
      result = GALGAS_bitbandInstructionAST ((cPtr_bitbandInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bitbandInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionAST_2D_weak ("bitbandInstructionAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitbandInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitbandInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitbandInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST_2D_weak GALGAS_bitbandInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST_2D_weak result ;
  const GALGAS_bitbandInstructionAST_2D_weak * p = (const GALGAS_bitbandInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitbandInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitbandInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionIR::cPtr_bitbandInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mRegisterAddressLLVMname (),
mProperty_mBitExpressionOperand (),
mProperty_mSourceExpressionOperand (),
mProperty_mBitbandRegisterBaseAddress (),
mProperty_mBitbandRegisterRelocationAddress (),
mProperty_mBitbandRegisterOffsetMultiplier (),
mProperty_mBitbandRegisterBitMultiplier () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitbandInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterAddressLLVMname.printNonNullClassInstanceProperties ("mRegisterAddressLLVMname") ;
    mProperty_mBitExpressionOperand.printNonNullClassInstanceProperties ("mBitExpressionOperand") ;
    mProperty_mSourceExpressionOperand.printNonNullClassInstanceProperties ("mSourceExpressionOperand") ;
    mProperty_mBitbandRegisterBaseAddress.printNonNullClassInstanceProperties ("mBitbandRegisterBaseAddress") ;
    mProperty_mBitbandRegisterRelocationAddress.printNonNullClassInstanceProperties ("mBitbandRegisterRelocationAddress") ;
    mProperty_mBitbandRegisterOffsetMultiplier.printNonNullClassInstanceProperties ("mBitbandRegisterOffsetMultiplier") ;
    mProperty_mBitbandRegisterBitMultiplier.printNonNullClassInstanceProperties ("mBitbandRegisterBitMultiplier") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_bitbandInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_bitbandInstructionIR * p = (const cPtr_bitbandInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterAddressLLVMname.objectCompare (p->mProperty_mRegisterAddressLLVMname) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitExpressionOperand.objectCompare (p->mProperty_mBitExpressionOperand) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceExpressionOperand.objectCompare (p->mProperty_mSourceExpressionOperand) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitbandRegisterBaseAddress.objectCompare (p->mProperty_mBitbandRegisterBaseAddress) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitbandRegisterRelocationAddress.objectCompare (p->mProperty_mBitbandRegisterRelocationAddress) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitbandRegisterOffsetMultiplier.objectCompare (p->mProperty_mBitbandRegisterOffsetMultiplier) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitbandRegisterBitMultiplier.objectCompare (p->mProperty_mBitbandRegisterBitMultiplier) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_bitbandInstructionIR::objectCompare (const GALGAS_bitbandInstructionIR & inOperand) const {
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

GALGAS_bitbandInstructionIR::GALGAS_bitbandInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_bitbandInstructionIR GALGAS_bitbandInstructionIR::init_28__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_string & in_mRegisterAddressLLVMname,
                                                                                                  const GALGAS_objectIR & in_mBitExpressionOperand,
                                                                                                  const GALGAS_objectIR & in_mSourceExpressionOperand,
                                                                                                  const GALGAS_bigint & in_mBitbandRegisterBaseAddress,
                                                                                                  const GALGAS_bigint & in_mBitbandRegisterRelocationAddress,
                                                                                                  const GALGAS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                                                                  const GALGAS_bigint & in_mBitbandRegisterBitMultiplier,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cPtr_bitbandInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_bitbandInstructionIR (inCompiler COMMA_THERE)) ;
  object->mProperty_mRegisterAddressLLVMname = in_mRegisterAddressLLVMname ;
  object->mProperty_mBitExpressionOperand = in_mBitExpressionOperand ;
  object->mProperty_mSourceExpressionOperand = in_mSourceExpressionOperand ;
  object->mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  object->mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  object->mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  object->mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
  const GALGAS_bitbandInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR::GALGAS_bitbandInstructionIR (const cPtr_bitbandInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR GALGAS_bitbandInstructionIR::class_func_new (const GALGAS_string & inAttribute_mRegisterAddressLLVMname,
                                                                         const GALGAS_objectIR & inAttribute_mBitExpressionOperand,
                                                                         const GALGAS_objectIR & inAttribute_mSourceExpressionOperand,
                                                                         const GALGAS_bigint & inAttribute_mBitbandRegisterBaseAddress,
                                                                         const GALGAS_bigint & inAttribute_mBitbandRegisterRelocationAddress,
                                                                         const GALGAS_bigint & inAttribute_mBitbandRegisterOffsetMultiplier,
                                                                         const GALGAS_bigint & inAttribute_mBitbandRegisterBitMultiplier
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionIR result ;
  if (inAttribute_mRegisterAddressLLVMname.isValid () && inAttribute_mBitExpressionOperand.isValid () && inAttribute_mSourceExpressionOperand.isValid () && inAttribute_mBitbandRegisterBaseAddress.isValid () && inAttribute_mBitbandRegisterRelocationAddress.isValid () && inAttribute_mBitbandRegisterOffsetMultiplier.isValid () && inAttribute_mBitbandRegisterBitMultiplier.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bitbandInstructionIR (inAttribute_mRegisterAddressLLVMname, inAttribute_mBitExpressionOperand, inAttribute_mSourceExpressionOperand, inAttribute_mBitbandRegisterBaseAddress, inAttribute_mBitbandRegisterRelocationAddress, inAttribute_mBitbandRegisterOffsetMultiplier, inAttribute_mBitbandRegisterBitMultiplier COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setter_setMRegisterAddressLLVMname (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mRegisterAddressLLVMname = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setter_setMBitExpressionOperand (GALGAS_objectIR inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitExpressionOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setter_setMSourceExpressionOperand (GALGAS_objectIR inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mSourceExpressionOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setter_setMBitbandRegisterBaseAddress (GALGAS_bigint inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterBaseAddress = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setter_setMBitbandRegisterRelocationAddress (GALGAS_bigint inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterRelocationAddress = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setter_setMBitbandRegisterOffsetMultiplier (GALGAS_bigint inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterOffsetMultiplier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setter_setMBitbandRegisterBitMultiplier (GALGAS_bigint inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterBitMultiplier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_bitbandInstructionIR::readProperty_mRegisterAddressLLVMname (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mRegisterAddressLLVMname ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_bitbandInstructionIR::readProperty_mBitExpressionOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitExpressionOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_bitbandInstructionIR::readProperty_mSourceExpressionOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mSourceExpressionOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_bitbandInstructionIR::readProperty_mBitbandRegisterBaseAddress (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterBaseAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_bitbandInstructionIR::readProperty_mBitbandRegisterRelocationAddress (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterRelocationAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_bitbandInstructionIR::readProperty_mBitbandRegisterOffsetMultiplier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterOffsetMultiplier ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_bitbandInstructionIR::readProperty_mBitbandRegisterBitMultiplier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterBitMultiplier ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitbandInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionIR::cPtr_bitbandInstructionIR (const GALGAS_string & in_mRegisterAddressLLVMname,
                                                      const GALGAS_objectIR & in_mBitExpressionOperand,
                                                      const GALGAS_objectIR & in_mSourceExpressionOperand,
                                                      const GALGAS_bigint & in_mBitbandRegisterBaseAddress,
                                                      const GALGAS_bigint & in_mBitbandRegisterRelocationAddress,
                                                      const GALGAS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                      const GALGAS_bigint & in_mBitbandRegisterBitMultiplier
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mRegisterAddressLLVMname (in_mRegisterAddressLLVMname),
mProperty_mBitExpressionOperand (in_mBitExpressionOperand),
mProperty_mSourceExpressionOperand (in_mSourceExpressionOperand),
mProperty_mBitbandRegisterBaseAddress (in_mBitbandRegisterBaseAddress),
mProperty_mBitbandRegisterRelocationAddress (in_mBitbandRegisterRelocationAddress),
mProperty_mBitbandRegisterOffsetMultiplier (in_mBitbandRegisterOffsetMultiplier),
mProperty_mBitbandRegisterBitMultiplier (in_mBitbandRegisterBitMultiplier) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitbandInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionIR ;
}

void cPtr_bitbandInstructionIR::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@bitbandInstructionIR:") ;
  mProperty_mRegisterAddressLLVMname.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitExpressionOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpressionOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterBaseAddress.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterRelocationAddress.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterOffsetMultiplier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterBitMultiplier.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitbandInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitbandInstructionIR (mProperty_mRegisterAddressLLVMname, mProperty_mBitExpressionOperand, mProperty_mSourceExpressionOperand, mProperty_mBitbandRegisterBaseAddress, mProperty_mBitbandRegisterRelocationAddress, mProperty_mBitbandRegisterOffsetMultiplier, mProperty_mBitbandRegisterBitMultiplier COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bitbandInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionIR ("bitbandInstructionIR",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitbandInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitbandInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitbandInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR GALGAS_bitbandInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionIR result ;
  const GALGAS_bitbandInstructionIR * p = (const GALGAS_bitbandInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitbandInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_bitbandInstructionIR_2D_weak::objectCompare (const GALGAS_bitbandInstructionIR_2D_weak & inOperand) const {
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

GALGAS_bitbandInstructionIR_2D_weak::GALGAS_bitbandInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR_2D_weak & GALGAS_bitbandInstructionIR_2D_weak::operator = (const GALGAS_bitbandInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR_2D_weak::GALGAS_bitbandInstructionIR_2D_weak (const GALGAS_bitbandInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR_2D_weak GALGAS_bitbandInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_bitbandInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR GALGAS_bitbandInstructionIR_2D_weak::bang_bitbandInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bitbandInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitbandInstructionIR) ;
      result = GALGAS_bitbandInstructionIR ((cPtr_bitbandInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bitbandInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionIR_2D_weak ("bitbandInstructionIR-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitbandInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitbandInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitbandInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR_2D_weak GALGAS_bitbandInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionIR_2D_weak result ;
  const GALGAS_bitbandInstructionIR_2D_weak * p = (const GALGAS_bitbandInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitbandInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST buildExpressionAccessList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildExpressionAccessList (const GALGAS_LValueOperandAST inObject,
                                                GALGAS_primaryInExpressionAccessListAST & ioArgument_ioExpressionAccessList,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_LValueOperandAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_3323 = (const cEnumAssociatedValues_LValueOperandAST_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_3178_name = extractPtr_3323->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_3201_next = extractPtr_3323->mAssociatedValue1 ;
      ioArgument_ioExpressionAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::class_func_property (extractedValue_3178_name  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93)) ;
      extensionMethod_buildExpressionAccessList (extractedValue_3201_next, ioArgument_ioExpressionAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 94)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_3625 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_3360_index = extractPtr_3625->mAssociatedValue0 ;
      const GALGAS_location extractedValue_3376_endOfIndex = extractPtr_3625->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_3393_checkIndexExpression = extractPtr_3625->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_3432_next = extractPtr_3625->mAssociatedValue3 ;
      ioArgument_ioExpressionAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::class_func_arrayAccess (extractedValue_3360_index, extractedValue_3376_endOfIndex, extractedValue_3393_checkIndexExpression  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 96))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 96)) ;
      extensionMethod_buildExpressionAccessList (extractedValue_3432_next, ioArgument_ioExpressionAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 97)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_varInstructionWithAssignmentAST_2D_weak::objectCompare (const GALGAS_varInstructionWithAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_varInstructionWithAssignmentAST_2D_weak::GALGAS_varInstructionWithAssignmentAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST_2D_weak & GALGAS_varInstructionWithAssignmentAST_2D_weak::operator = (const GALGAS_varInstructionWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST_2D_weak::GALGAS_varInstructionWithAssignmentAST_2D_weak (const GALGAS_varInstructionWithAssignmentAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST_2D_weak GALGAS_varInstructionWithAssignmentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST_2D_weak::bang_varInstructionWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varInstructionWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInstructionWithAssignmentAST) ;
      result = GALGAS_varInstructionWithAssignmentAST ((cPtr_varInstructionWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varInstructionWithAssignmentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2D_weak ("varInstructionWithAssignmentAST-weak",
                                                                                               & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInstructionWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInstructionWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST_2D_weak GALGAS_varInstructionWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST_2D_weak result ;
  const GALGAS_varInstructionWithAssignmentAST_2D_weak * p = (const GALGAS_varInstructionWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varInstructionWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_varDeclarationInstructionAST_2D_weak::objectCompare (const GALGAS_varDeclarationInstructionAST_2D_weak & inOperand) const {
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

GALGAS_varDeclarationInstructionAST_2D_weak::GALGAS_varDeclarationInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST_2D_weak & GALGAS_varDeclarationInstructionAST_2D_weak::operator = (const GALGAS_varDeclarationInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST_2D_weak::GALGAS_varDeclarationInstructionAST_2D_weak (const GALGAS_varDeclarationInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST_2D_weak GALGAS_varDeclarationInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_varDeclarationInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST GALGAS_varDeclarationInstructionAST_2D_weak::bang_varDeclarationInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varDeclarationInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varDeclarationInstructionAST) ;
      result = GALGAS_varDeclarationInstructionAST ((cPtr_varDeclarationInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varDeclarationInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2D_weak ("varDeclarationInstructionAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varDeclarationInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varDeclarationInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varDeclarationInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST_2D_weak GALGAS_varDeclarationInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varDeclarationInstructionAST_2D_weak result ;
  const GALGAS_varDeclarationInstructionAST_2D_weak * p = (const GALGAS_varDeclarationInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varDeclarationInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varDeclarationInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_letInstructionWithAssignmentAST_2D_weak::objectCompare (const GALGAS_letInstructionWithAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_letInstructionWithAssignmentAST_2D_weak::GALGAS_letInstructionWithAssignmentAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST_2D_weak & GALGAS_letInstructionWithAssignmentAST_2D_weak::operator = (const GALGAS_letInstructionWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST_2D_weak::GALGAS_letInstructionWithAssignmentAST_2D_weak (const GALGAS_letInstructionWithAssignmentAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST_2D_weak GALGAS_letInstructionWithAssignmentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST_2D_weak::bang_letInstructionWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_letInstructionWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_letInstructionWithAssignmentAST) ;
      result = GALGAS_letInstructionWithAssignmentAST ((cPtr_letInstructionWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @letInstructionWithAssignmentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2D_weak ("letInstructionWithAssignmentAST-weak",
                                                                                               & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_letInstructionWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_letInstructionWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST_2D_weak GALGAS_letInstructionWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST_2D_weak result ;
  const GALGAS_letInstructionWithAssignmentAST_2D_weak * p = (const GALGAS_letInstructionWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_letInstructionWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @instructionNOP reference class
//--------------------------------------------------------------------------------------------------

cPtr_instructionNOP::cPtr_instructionNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_instructionNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_instructionNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_instructionNOP * p = (const cPtr_instructionNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_instructionNOP) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_instructionNOP::objectCompare (const GALGAS_instructionNOP & inOperand) const {
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

GALGAS_instructionNOP::GALGAS_instructionNOP (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_instructionNOP GALGAS_instructionNOP::init_28__29_ (const GALGAS_location & in_mInstructionLocation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cPtr_instructionNOP * object = nullptr ;
  macroMyNew (object, cPtr_instructionNOP (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  const GALGAS_instructionNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP::GALGAS_instructionNOP (const cPtr_instructionNOP * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instructionNOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP GALGAS_instructionNOP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_instructionNOP result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_instructionNOP (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @instructionNOP class
//--------------------------------------------------------------------------------------------------

cPtr_instructionNOP::cPtr_instructionNOP (const GALGAS_location & in_mInstructionLocation
                                          COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_instructionNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionNOP ;
}

void cPtr_instructionNOP::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@instructionNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_instructionNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_instructionNOP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @instructionNOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionNOP ("instructionNOP",
                                                                      & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP GALGAS_instructionNOP::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instructionNOP result ;
  const GALGAS_instructionNOP * p = (const GALGAS_instructionNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instructionNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_instructionNOP_2D_weak::objectCompare (const GALGAS_instructionNOP_2D_weak & inOperand) const {
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

GALGAS_instructionNOP_2D_weak::GALGAS_instructionNOP_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP_2D_weak & GALGAS_instructionNOP_2D_weak::operator = (const GALGAS_instructionNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP_2D_weak::GALGAS_instructionNOP_2D_weak (const GALGAS_instructionNOP & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP_2D_weak GALGAS_instructionNOP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_instructionNOP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP GALGAS_instructionNOP_2D_weak::bang_instructionNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_instructionNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_instructionNOP) ;
      result = GALGAS_instructionNOP ((cPtr_instructionNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @instructionNOP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionNOP_2D_weak ("instructionNOP-weak",
                                                                              & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionNOP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionNOP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionNOP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionNOP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP_2D_weak GALGAS_instructionNOP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instructionNOP_2D_weak result ;
  const GALGAS_instructionNOP_2D_weak * p = (const GALGAS_instructionNOP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instructionNOP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionNOP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @panicInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionAST::cPtr_panicInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mCodeExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCodeExpression.printNonNullClassInstanceProperties ("mCodeExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_panicInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_panicInstructionAST * p = (const cPtr_panicInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCodeExpression.objectCompare (p->mProperty_mCodeExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_panicInstructionAST::objectCompare (const GALGAS_panicInstructionAST & inOperand) const {
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

GALGAS_panicInstructionAST::GALGAS_panicInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_panicInstructionAST GALGAS_panicInstructionAST::init_28__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_expressionAST & in_mCodeExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cPtr_panicInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_panicInstructionAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_mCodeExpression = in_mCodeExpression ;
  const GALGAS_panicInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST::GALGAS_panicInstructionAST (const cPtr_panicInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST GALGAS_panicInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                       const GALGAS_expressionAST & inAttribute_mCodeExpression
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCodeExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicInstructionAST (inAttribute_mInstructionLocation, inAttribute_mCodeExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicInstructionAST::setter_setMCodeExpression (GALGAS_expressionAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    p->mProperty_mCodeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_panicInstructionAST::readProperty_mCodeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    return p->mProperty_mCodeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionAST::cPtr_panicInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_expressionAST & in_mCodeExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCodeExpression (in_mCodeExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_panicInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST ;
}

void cPtr_panicInstructionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@panicInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCodeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_panicInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicInstructionAST (mProperty_mInstructionLocation, mProperty_mCodeExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @panicInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionAST ("panicInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST GALGAS_panicInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionAST result ;
  const GALGAS_panicInstructionAST * p = (const GALGAS_panicInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_panicInstructionAST_2D_weak::objectCompare (const GALGAS_panicInstructionAST_2D_weak & inOperand) const {
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

GALGAS_panicInstructionAST_2D_weak::GALGAS_panicInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST_2D_weak & GALGAS_panicInstructionAST_2D_weak::operator = (const GALGAS_panicInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST_2D_weak::GALGAS_panicInstructionAST_2D_weak (const GALGAS_panicInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST_2D_weak GALGAS_panicInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_panicInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST GALGAS_panicInstructionAST_2D_weak::bang_panicInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_panicInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_panicInstructionAST) ;
      result = GALGAS_panicInstructionAST ((cPtr_panicInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionAST_2D_weak ("panicInstructionAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST_2D_weak GALGAS_panicInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionAST_2D_weak result ;
  const GALGAS_panicInstructionAST_2D_weak * p = (const GALGAS_panicInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @panicInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionIR::cPtr_panicInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mThrowLocation (),
mProperty_mPanicCode () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mThrowLocation.printNonNullClassInstanceProperties ("mThrowLocation") ;
    mProperty_mPanicCode.printNonNullClassInstanceProperties ("mPanicCode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_panicInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_panicInstructionIR * p = (const cPtr_panicInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicInstructionIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mThrowLocation.objectCompare (p->mProperty_mThrowLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPanicCode.objectCompare (p->mProperty_mPanicCode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_panicInstructionIR::objectCompare (const GALGAS_panicInstructionIR & inOperand) const {
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

GALGAS_panicInstructionIR::GALGAS_panicInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_panicInstructionIR GALGAS_panicInstructionIR::init_28__2C__29_ (const GALGAS_location & in_mThrowLocation,
                                                                          const GALGAS_bigint & in_mPanicCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cPtr_panicInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_panicInstructionIR (inCompiler COMMA_THERE)) ;
  object->mProperty_mThrowLocation = in_mThrowLocation ;
  object->mProperty_mPanicCode = in_mPanicCode ;
  const GALGAS_panicInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR::GALGAS_panicInstructionIR (const cPtr_panicInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::class_func_new (const GALGAS_location & inAttribute_mThrowLocation,
                                                                     const GALGAS_bigint & inAttribute_mPanicCode
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR result ;
  if (inAttribute_mThrowLocation.isValid () && inAttribute_mPanicCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicInstructionIR (inAttribute_mThrowLocation, inAttribute_mPanicCode COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicInstructionIR::setter_setMThrowLocation (GALGAS_location inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    p->mProperty_mThrowLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicInstructionIR::setter_setMPanicCode (GALGAS_bigint inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    p->mProperty_mPanicCode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_panicInstructionIR::readProperty_mThrowLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    return p->mProperty_mThrowLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_panicInstructionIR::readProperty_mPanicCode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    return p->mProperty_mPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionIR::cPtr_panicInstructionIR (const GALGAS_location & in_mThrowLocation,
                                                  const GALGAS_bigint & in_mPanicCode
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mThrowLocation (in_mThrowLocation),
mProperty_mPanicCode (in_mPanicCode) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_panicInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

void cPtr_panicInstructionIR::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@panicInstructionIR:") ;
  mProperty_mThrowLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicCode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_panicInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicInstructionIR (mProperty_mThrowLocation, mProperty_mPanicCode COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @panicInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionIR ("panicInstructionIR",
                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR result ;
  const GALGAS_panicInstructionIR * p = (const GALGAS_panicInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_panicInstructionIR_2D_weak::objectCompare (const GALGAS_panicInstructionIR_2D_weak & inOperand) const {
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

GALGAS_panicInstructionIR_2D_weak::GALGAS_panicInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR_2D_weak & GALGAS_panicInstructionIR_2D_weak::operator = (const GALGAS_panicInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR_2D_weak::GALGAS_panicInstructionIR_2D_weak (const GALGAS_panicInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR_2D_weak GALGAS_panicInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_panicInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR GALGAS_panicInstructionIR_2D_weak::bang_panicInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_panicInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_panicInstructionIR) ;
      result = GALGAS_panicInstructionIR ((cPtr_panicInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionIR_2D_weak ("panicInstructionIR-weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR_2D_weak GALGAS_panicInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR_2D_weak result ;
  const GALGAS_panicInstructionIR_2D_weak * p = (const GALGAS_panicInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTestExpression (),
mProperty_mTestExpressionEndLocation (),
mProperty_mStaticIfExpression (),
mProperty_mThenInstructionList (),
mProperty_mEndOfThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTestExpression.printNonNullClassInstanceProperties ("mTestExpression") ;
    mProperty_mTestExpressionEndLocation.printNonNullClassInstanceProperties ("mTestExpressionEndLocation") ;
    mProperty_mStaticIfExpression.printNonNullClassInstanceProperties ("mStaticIfExpression") ;
    mProperty_mThenInstructionList.printNonNullClassInstanceProperties ("mThenInstructionList") ;
    mProperty_mEndOfThenInstructionList.printNonNullClassInstanceProperties ("mEndOfThenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElseInstructionList.printNonNullClassInstanceProperties ("mEndOfElseInstructionList") ;
    mProperty_mEndOf_5F_if_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_if_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ifInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTestExpression.objectCompare (p->mProperty_mTestExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTestExpressionEndLocation.objectCompare (p->mProperty_mTestExpressionEndLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStaticIfExpression.objectCompare (p->mProperty_mStaticIfExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mThenInstructionList.objectCompare (p->mProperty_mThenInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfThenInstructionList.objectCompare (p->mProperty_mEndOfThenInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfElseInstructionList.objectCompare (p->mProperty_mEndOfElseInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_if_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_if_5F_instruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ifInstructionAST::objectCompare (const GALGAS_ifInstructionAST & inOperand) const {
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

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_ifInstructionAST GALGAS_ifInstructionAST::init_28__2C__2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_expressionAST & in_mTestExpression,
                                                                                                  const GALGAS_location & in_mTestExpressionEndLocation,
                                                                                                  const GALGAS_bool & in_mStaticIfExpression,
                                                                                                  const GALGAS_instructionListAST & in_mThenInstructionList,
                                                                                                  const GALGAS_location & in_mEndOfThenInstructionList,
                                                                                                  const GALGAS_instructionListAST & in_mElseInstructionList,
                                                                                                  const GALGAS_location & in_mEndOfElseInstructionList,
                                                                                                  const GALGAS_location & in_mEndOf_5F_if_5F_instruction,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_mTestExpression = in_mTestExpression ;
  object->mProperty_mTestExpressionEndLocation = in_mTestExpressionEndLocation ;
  object->mProperty_mStaticIfExpression = in_mStaticIfExpression ;
  object->mProperty_mThenInstructionList = in_mThenInstructionList ;
  object->mProperty_mEndOfThenInstructionList = in_mEndOfThenInstructionList ;
  object->mProperty_mElseInstructionList = in_mElseInstructionList ;
  object->mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
  object->mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
  const GALGAS_ifInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                 const GALGAS_expressionAST & inAttribute_mTestExpression,
                                                                 const GALGAS_location & inAttribute_mTestExpressionEndLocation,
                                                                 const GALGAS_bool & inAttribute_mStaticIfExpression,
                                                                 const GALGAS_instructionListAST & inAttribute_mThenInstructionList,
                                                                 const GALGAS_location & inAttribute_mEndOfThenInstructionList,
                                                                 const GALGAS_instructionListAST & inAttribute_mElseInstructionList,
                                                                 const GALGAS_location & inAttribute_mEndOfElseInstructionList,
                                                                 const GALGAS_location & inAttribute_mEndOf_5F_if_5F_instruction
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTestExpression.isValid () && inAttribute_mTestExpressionEndLocation.isValid () && inAttribute_mStaticIfExpression.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mEndOfThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElseInstructionList.isValid () && inAttribute_mEndOf_5F_if_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTestExpression, inAttribute_mTestExpressionEndLocation, inAttribute_mStaticIfExpression, inAttribute_mThenInstructionList, inAttribute_mEndOfThenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElseInstructionList, inAttribute_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setter_setMTestExpression (GALGAS_expressionAST inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mTestExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setter_setMTestExpressionEndLocation (GALGAS_location inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mTestExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setter_setMStaticIfExpression (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mStaticIfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setter_setMThenInstructionList (GALGAS_instructionListAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setter_setMEndOfThenInstructionList (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOfThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setter_setMElseInstructionList (GALGAS_instructionListAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setter_setMEndOfElseInstructionList (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOfElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setter_setMEndOf_5F_if_5F_instruction (GALGAS_location inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOf_5F_if_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_ifInstructionAST::readProperty_mTestExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mTestExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mTestExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mTestExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifInstructionAST::readProperty_mStaticIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mStaticIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_ifInstructionAST::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mEndOfThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOfThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_ifInstructionAST::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mEndOfElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOfElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mEndOf_5F_if_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_expressionAST & in_mTestExpression,
                                              const GALGAS_location & in_mTestExpressionEndLocation,
                                              const GALGAS_bool & in_mStaticIfExpression,
                                              const GALGAS_instructionListAST & in_mThenInstructionList,
                                              const GALGAS_location & in_mEndOfThenInstructionList,
                                              const GALGAS_instructionListAST & in_mElseInstructionList,
                                              const GALGAS_location & in_mEndOfElseInstructionList,
                                              const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTestExpression (in_mTestExpression),
mProperty_mTestExpressionEndLocation (in_mTestExpressionEndLocation),
mProperty_mStaticIfExpression (in_mStaticIfExpression),
mProperty_mThenInstructionList (in_mThenInstructionList),
mProperty_mEndOfThenInstructionList (in_mEndOfThenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfElseInstructionList (in_mEndOfElseInstructionList),
mProperty_mEndOf_5F_if_5F_instruction (in_mEndOf_5F_if_5F_instruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTestExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTestExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStaticIfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfThenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mTestExpression, mProperty_mTestExpressionEndLocation, mProperty_mStaticIfExpression, mProperty_mThenInstructionList, mProperty_mEndOfThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList, mProperty_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  const GALGAS_ifInstructionAST * p = (const GALGAS_ifInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionAST_2D_weak::objectCompare (const GALGAS_ifInstructionAST_2D_weak & inOperand) const {
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

GALGAS_ifInstructionAST_2D_weak::GALGAS_ifInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak & GALGAS_ifInstructionAST_2D_weak::operator = (const GALGAS_ifInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak::GALGAS_ifInstructionAST_2D_weak (const GALGAS_ifInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak GALGAS_ifInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ifInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST_2D_weak::bang_ifInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionAST) ;
      result = GALGAS_ifInstructionAST ((cPtr_ifInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST_2D_weak ("ifInstructionAST-weak",
                                                                                & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak GALGAS_ifInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST_2D_weak result ;
  const GALGAS_ifInstructionAST_2D_weak * p = (const GALGAS_ifInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionIR::cPtr_ifInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMTestName (),
mProperty_mLocation (),
mProperty_mThenInstructionGenerationList (),
mProperty_mElseInstructionGenerationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMTestName.printNonNullClassInstanceProperties ("mLLVMTestName") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mThenInstructionGenerationList.printNonNullClassInstanceProperties ("mThenInstructionGenerationList") ;
    mProperty_mElseInstructionGenerationList.printNonNullClassInstanceProperties ("mElseInstructionGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ifInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLLVMTestName.objectCompare (p->mProperty_mLLVMTestName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mThenInstructionGenerationList.objectCompare (p->mProperty_mThenInstructionGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElseInstructionGenerationList.objectCompare (p->mProperty_mElseInstructionGenerationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ifInstructionIR::objectCompare (const GALGAS_ifInstructionIR & inOperand) const {
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

GALGAS_ifInstructionIR::GALGAS_ifInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_ifInstructionIR GALGAS_ifInstructionIR::init_28__2C__2C__2C__29_ (const GALGAS_string & in_mLLVMTestName,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                                                            const GALGAS_instructionListIR & in_mElseInstructionGenerationList,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionIR (inCompiler COMMA_THERE)) ;
  object->mProperty_mLLVMTestName = in_mLLVMTestName ;
  object->mProperty_mLocation = in_mLocation ;
  object->mProperty_mThenInstructionGenerationList = in_mThenInstructionGenerationList ;
  object->mProperty_mElseInstructionGenerationList = in_mElseInstructionGenerationList ;
  const GALGAS_ifInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR::GALGAS_ifInstructionIR (const cPtr_ifInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::class_func_new (const GALGAS_string & inAttribute_mLLVMTestName,
                                                               const GALGAS_location & inAttribute_mLocation,
                                                               const GALGAS_instructionListIR & inAttribute_mThenInstructionGenerationList,
                                                               const GALGAS_instructionListIR & inAttribute_mElseInstructionGenerationList
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR result ;
  if (inAttribute_mLLVMTestName.isValid () && inAttribute_mLocation.isValid () && inAttribute_mThenInstructionGenerationList.isValid () && inAttribute_mElseInstructionGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionIR (inAttribute_mLLVMTestName, inAttribute_mLocation, inAttribute_mThenInstructionGenerationList, inAttribute_mElseInstructionGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionIR::setter_setMLLVMTestName (GALGAS_string inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mLLVMTestName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionIR::setter_setMLocation (GALGAS_location inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionIR::setter_setMThenInstructionGenerationList (GALGAS_instructionListIR inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mThenInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionIR::setter_setMElseInstructionGenerationList (GALGAS_instructionListIR inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mElseInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ifInstructionIR::readProperty_mLLVMTestName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mLLVMTestName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_ifInstructionIR::readProperty_mThenInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mThenInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_ifInstructionIR::readProperty_mElseInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mElseInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionIR::cPtr_ifInstructionIR (const GALGAS_string & in_mLLVMTestName,
                                            const GALGAS_location & in_mLocation,
                                            const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                            const GALGAS_instructionListIR & in_mElseInstructionGenerationList
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMTestName (in_mLLVMTestName),
mProperty_mLocation (in_mLocation),
mProperty_mThenInstructionGenerationList (in_mThenInstructionGenerationList),
mProperty_mElseInstructionGenerationList (in_mElseInstructionGenerationList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

void cPtr_ifInstructionIR::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionIR:") ;
  mProperty_mLLVMTestName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionIR (mProperty_mLLVMTestName, mProperty_mLocation, mProperty_mThenInstructionGenerationList, mProperty_mElseInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR ("ifInstructionIR",
                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR result ;
  const GALGAS_ifInstructionIR * p = (const GALGAS_ifInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionIR_2D_weak::objectCompare (const GALGAS_ifInstructionIR_2D_weak & inOperand) const {
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

GALGAS_ifInstructionIR_2D_weak::GALGAS_ifInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR_2D_weak & GALGAS_ifInstructionIR_2D_weak::operator = (const GALGAS_ifInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR_2D_weak::GALGAS_ifInstructionIR_2D_weak (const GALGAS_ifInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR_2D_weak GALGAS_ifInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ifInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR GALGAS_ifInstructionIR_2D_weak::bang_ifInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionIR) ;
      result = GALGAS_ifInstructionIR ((cPtr_ifInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR_2D_weak ("ifInstructionIR-weak",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR_2D_weak GALGAS_ifInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR_2D_weak result ;
  const GALGAS_ifInstructionIR_2D_weak * p = (const GALGAS_ifInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_guardedCommandAST_boolean::cEnumAssociatedValues_guardedCommandAST_boolean (const GALGAS_bool inAssociatedValue0,
                                                                                                  const GALGAS_expressionAST inAssociatedValue1,
                                                                                                  const GALGAS_location inAssociatedValue2
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_guardedCommandAST_boolean::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_guardedCommandAST_boolean::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandAST_boolean * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandAST_boolean *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_guardedCommandAST_boolAndSync::cEnumAssociatedValues_guardedCommandAST_boolAndSync (const GALGAS_bool inAssociatedValue0,
                                                                                                          const GALGAS_expressionAST inAssociatedValue1,
                                                                                                          const GALGAS_bool inAssociatedValue2,
                                                                                                          const GALGAS_location inAssociatedValue3,
                                                                                                          const GALGAS_lbool inAssociatedValue4,
                                                                                                          const GALGAS_lstringlist inAssociatedValue5,
                                                                                                          const GALGAS_effectiveArgumentListAST inAssociatedValue6
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4),
mAssociatedValue5 (inAssociatedValue5),
mAssociatedValue6 (inAssociatedValue6) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_guardedCommandAST_boolAndSync::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  mAssociatedValue4.description (ioString, inIndentation) ;
  mAssociatedValue5.description (ioString, inIndentation) ;
  mAssociatedValue6.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_guardedCommandAST_boolAndSync::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandAST_boolAndSync * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandAST_boolAndSync *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue4.objectCompare (ptr->mAssociatedValue4) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue5.objectCompare (ptr->mAssociatedValue5) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue6.objectCompare (ptr->mAssociatedValue6) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST::GALGAS_guardedCommandAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST GALGAS_guardedCommandAST::class_func_boolean (const GALGAS_bool & inAssociatedValue0,
                                                                       const GALGAS_expressionAST & inAssociatedValue1,
                                                                       const GALGAS_location & inAssociatedValue2
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_boolean ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandAST_boolean (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST GALGAS_guardedCommandAST::class_func_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                           const GALGAS_expressionAST & inAssociatedValue1,
                                                                           const GALGAS_bool & inAssociatedValue2,
                                                                           const GALGAS_location & inAssociatedValue3,
                                                                           const GALGAS_lbool & inAssociatedValue4,
                                                                           const GALGAS_lstringlist & inAssociatedValue5,
                                                                           const GALGAS_effectiveArgumentListAST & inAssociatedValue6
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid () && inAssociatedValue5.isValid () && inAssociatedValue6.isValid ()) {
    result.mEnum = kEnum_boolAndSync ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandAST_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5, inAssociatedValue6 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandAST::method_boolean (GALGAS_bool & outAssociatedValue0,
                                               GALGAS_expressionAST & outAssociatedValue1,
                                               GALGAS_location & outAssociatedValue2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_boolean) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @guardedCommandAST boolean invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandAST_boolean * ptr = (const cEnumAssociatedValues_guardedCommandAST_boolean *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandAST::method_boolAndSync (GALGAS_bool & outAssociatedValue0,
                                                   GALGAS_expressionAST & outAssociatedValue1,
                                                   GALGAS_bool & outAssociatedValue2,
                                                   GALGAS_location & outAssociatedValue3,
                                                   GALGAS_lbool & outAssociatedValue4,
                                                   GALGAS_lstringlist & outAssociatedValue5,
                                                   GALGAS_effectiveArgumentListAST & outAssociatedValue6,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_boolAndSync) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    outAssociatedValue4.drop () ;
    outAssociatedValue5.drop () ;
    outAssociatedValue6.drop () ;
    String s ;
    s.appendCString ("method @guardedCommandAST boolAndSync invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandAST_boolAndSync * ptr = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
    outAssociatedValue5 = ptr->mAssociatedValue5 ;
    outAssociatedValue6 = ptr->mAssociatedValue6 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardedCommandAST::optional_boolean (GALGAS_bool & outAssociatedValue0,
                                                 GALGAS_expressionAST & outAssociatedValue1,
                                                 GALGAS_location & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_boolean ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_guardedCommandAST_boolean *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardedCommandAST::optional_boolAndSync (GALGAS_bool & outAssociatedValue0,
                                                     GALGAS_expressionAST & outAssociatedValue1,
                                                     GALGAS_bool & outAssociatedValue2,
                                                     GALGAS_location & outAssociatedValue3,
                                                     GALGAS_lbool & outAssociatedValue4,
                                                     GALGAS_lstringlist & outAssociatedValue5,
                                                     GALGAS_effectiveArgumentListAST & outAssociatedValue6) const {
  const bool ok = mEnum == kEnum_boolAndSync ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
    outAssociatedValue5 = ptr->mAssociatedValue5 ;
    outAssociatedValue6 = ptr->mAssociatedValue6 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_guardedCommandAST [3] = {
  "(not built)",
  "boolean",
  "boolAndSync"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardedCommandAST::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolean == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardedCommandAST::getter_isBoolAndSync (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolAndSync == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardedCommandAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardedCommandAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guardedCommandAST::objectCompare (const GALGAS_guardedCommandAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardedCommandAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST ("guardedCommandAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardedCommandAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardedCommandAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST GALGAS_guardedCommandAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandAST result ;
  const GALGAS_guardedCommandAST * p = (const GALGAS_guardedCommandAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardedCommandAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syncInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionAST::cPtr_syncInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mBranchList (),
mProperty_mEndOf_5F_on_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syncInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mBranchList.printNonNullClassInstanceProperties ("mBranchList") ;
    mProperty_mEndOf_5F_on_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_on_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_syncInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_syncInstructionAST * p = (const cPtr_syncInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syncInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBranchList.objectCompare (p->mProperty_mBranchList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_on_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_on_5F_instruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_syncInstructionAST::objectCompare (const GALGAS_syncInstructionAST & inOperand) const {
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

GALGAS_syncInstructionAST::GALGAS_syncInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_syncInstructionAST GALGAS_syncInstructionAST::init_28__2C__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                                                                              const GALGAS_location & in_mEndOf_5F_on_5F_instruction,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cPtr_syncInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_syncInstructionAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_mBranchList = in_mBranchList ;
  object->mProperty_mEndOf_5F_on_5F_instruction = in_mEndOf_5F_on_5F_instruction ;
  const GALGAS_syncInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST::GALGAS_syncInstructionAST (const cPtr_syncInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                     const GALGAS_syncInstructionBranchListAST & inAttribute_mBranchList,
                                                                     const GALGAS_location & inAttribute_mEndOf_5F_on_5F_instruction
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBranchList.isValid () && inAttribute_mEndOf_5F_on_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncInstructionAST (inAttribute_mInstructionLocation, inAttribute_mBranchList, inAttribute_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionAST::setter_setMBranchList (GALGAS_syncInstructionBranchListAST inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    p->mProperty_mBranchList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionAST::setter_setMEndOf_5F_on_5F_instruction (GALGAS_location inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    p->mProperty_mEndOf_5F_on_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionAST::readProperty_mBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_syncInstructionBranchListAST () ;
  }else{
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    return p->mProperty_mBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syncInstructionAST::readProperty_mEndOf_5F_on_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    return p->mProperty_mEndOf_5F_on_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionAST::cPtr_syncInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                                                  const GALGAS_location & in_mEndOf_5F_on_5F_instruction
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mBranchList (in_mBranchList),
mProperty_mEndOf_5F_on_5F_instruction (in_mEndOf_5F_on_5F_instruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syncInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST ;
}

void cPtr_syncInstructionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@syncInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_on_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syncInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncInstructionAST (mProperty_mInstructionLocation, mProperty_mBranchList, mProperty_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionAST ("syncInstructionAST",
                                                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionAST result ;
  const GALGAS_syncInstructionAST * p = (const GALGAS_syncInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syncInstructionAST_2D_weak::objectCompare (const GALGAS_syncInstructionAST_2D_weak & inOperand) const {
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

GALGAS_syncInstructionAST_2D_weak::GALGAS_syncInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST_2D_weak & GALGAS_syncInstructionAST_2D_weak::operator = (const GALGAS_syncInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST_2D_weak::GALGAS_syncInstructionAST_2D_weak (const GALGAS_syncInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST_2D_weak GALGAS_syncInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_syncInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST GALGAS_syncInstructionAST_2D_weak::bang_syncInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncInstructionAST) ;
      result = GALGAS_syncInstructionAST ((cPtr_syncInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionAST_2D_weak ("syncInstructionAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST_2D_weak GALGAS_syncInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionAST_2D_weak result ;
  const GALGAS_syncInstructionAST_2D_weak * p = (const GALGAS_syncInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_guardedCommandIR_booleanGuard::cEnumAssociatedValues_guardedCommandIR_booleanGuard (const GALGAS_bool inAssociatedValue0,
                                                                                                          const GALGAS_instructionListIR inAssociatedValue1,
                                                                                                          const GALGAS_string inAssociatedValue2
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_guardedCommandIR_booleanGuard::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_guardedCommandIR_booleanGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandIR_booleanGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandIR_booleanGuard *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_guardedCommandIR_sync::cEnumAssociatedValues_guardedCommandIR_sync (const GALGAS_bool inAssociatedValue0,
                                                                                          const GALGAS_string inAssociatedValue1,
                                                                                          const GALGAS_instructionListIR inAssociatedValue2,
                                                                                          const GALGAS_procCallEffectiveParameterListIR inAssociatedValue3
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_guardedCommandIR_sync::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_guardedCommandIR_sync::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandIR_sync * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandIR_sync *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_guardedCommandIR_boolAndSync::cEnumAssociatedValues_guardedCommandIR_boolAndSync (const GALGAS_bool inAssociatedValue0,
                                                                                                        const GALGAS_instructionListIR inAssociatedValue1,
                                                                                                        const GALGAS_string inAssociatedValue2,
                                                                                                        const GALGAS_string inAssociatedValue3,
                                                                                                        const GALGAS_instructionListIR inAssociatedValue4,
                                                                                                        const GALGAS_procCallEffectiveParameterListIR inAssociatedValue5
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4),
mAssociatedValue5 (inAssociatedValue5) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_guardedCommandIR_boolAndSync::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  mAssociatedValue4.description (ioString, inIndentation) ;
  mAssociatedValue5.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_guardedCommandIR_boolAndSync::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandIR_boolAndSync * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandIR_boolAndSync *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue4.objectCompare (ptr->mAssociatedValue4) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue5.objectCompare (ptr->mAssociatedValue5) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR::GALGAS_guardedCommandIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::class_func_booleanGuard (const GALGAS_bool & inAssociatedValue0,
                                                                          const GALGAS_instructionListIR & inAssociatedValue1,
                                                                          const GALGAS_string & inAssociatedValue2
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_booleanGuard ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandIR_booleanGuard (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::class_func_sync (const GALGAS_bool & inAssociatedValue0,
                                                                  const GALGAS_string & inAssociatedValue1,
                                                                  const GALGAS_instructionListIR & inAssociatedValue2,
                                                                  const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_sync ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandIR_sync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::class_func_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                         const GALGAS_instructionListIR & inAssociatedValue1,
                                                                         const GALGAS_string & inAssociatedValue2,
                                                                         const GALGAS_string & inAssociatedValue3,
                                                                         const GALGAS_instructionListIR & inAssociatedValue4,
                                                                         const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue5
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid () && inAssociatedValue5.isValid ()) {
    result.mEnum = kEnum_boolAndSync ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandIR_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::method_booleanGuard (GALGAS_bool & outAssociatedValue0,
                                                   GALGAS_instructionListIR & outAssociatedValue1,
                                                   GALGAS_string & outAssociatedValue2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_booleanGuard) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @guardedCommandIR booleanGuard invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandIR_booleanGuard * ptr = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::method_sync (GALGAS_bool & outAssociatedValue0,
                                           GALGAS_string & outAssociatedValue1,
                                           GALGAS_instructionListIR & outAssociatedValue2,
                                           GALGAS_procCallEffectiveParameterListIR & outAssociatedValue3,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_sync) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    String s ;
    s.appendCString ("method @guardedCommandIR sync invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandIR_sync * ptr = (const cEnumAssociatedValues_guardedCommandIR_sync *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::method_boolAndSync (GALGAS_bool & outAssociatedValue0,
                                                  GALGAS_instructionListIR & outAssociatedValue1,
                                                  GALGAS_string & outAssociatedValue2,
                                                  GALGAS_string & outAssociatedValue3,
                                                  GALGAS_instructionListIR & outAssociatedValue4,
                                                  GALGAS_procCallEffectiveParameterListIR & outAssociatedValue5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_boolAndSync) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    outAssociatedValue4.drop () ;
    outAssociatedValue5.drop () ;
    String s ;
    s.appendCString ("method @guardedCommandIR boolAndSync invoked with an invalid enum value") ;
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

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardedCommandIR::optional_booleanGuard (GALGAS_bool & outAssociatedValue0,
                                                     GALGAS_instructionListIR & outAssociatedValue1,
                                                     GALGAS_string & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_booleanGuard ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardedCommandIR::optional_sync (GALGAS_bool & outAssociatedValue0,
                                             GALGAS_string & outAssociatedValue1,
                                             GALGAS_instructionListIR & outAssociatedValue2,
                                             GALGAS_procCallEffectiveParameterListIR & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_sync ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_guardedCommandIR_sync *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardedCommandIR::optional_boolAndSync (GALGAS_bool & outAssociatedValue0,
                                                    GALGAS_instructionListIR & outAssociatedValue1,
                                                    GALGAS_string & outAssociatedValue2,
                                                    GALGAS_string & outAssociatedValue3,
                                                    GALGAS_instructionListIR & outAssociatedValue4,
                                                    GALGAS_procCallEffectiveParameterListIR & outAssociatedValue5) const {
  const bool ok = mEnum == kEnum_boolAndSync ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
    outAssociatedValue5 = ptr->mAssociatedValue5 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_guardedCommandIR [4] = {
  "(not built)",
  "booleanGuard",
  "sync",
  "boolAndSync"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardedCommandIR::getter_isBooleanGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_booleanGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardedCommandIR::getter_isSync (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sync == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardedCommandIR::getter_isBoolAndSync (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolAndSync == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardedCommandIR: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardedCommandIR [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guardedCommandIR::objectCompare (const GALGAS_guardedCommandIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardedCommandIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR ("guardedCommandIR",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardedCommandIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardedCommandIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  const GALGAS_guardedCommandIR * p = (const GALGAS_guardedCommandIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardedCommandIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@syncInstructionBranchListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syncInstructionBranchListIR : public cCollectionElement {
  public: GALGAS_syncInstructionBranchListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_syncInstructionBranchListIR (const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                          const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListIR::cCollectionElement_syncInstructionBranchListIR (const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                                                                const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionGenerationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListIR::cCollectionElement_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGuardedCommand, inElement.mProperty_mInstructionGenerationList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syncInstructionBranchListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syncInstructionBranchListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchListIR (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionGenerationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_syncInstructionBranchListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGuardedCommand" ":") ;
  mObject.mProperty_mGuardedCommand.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionGenerationList" ":") ;
  mObject.mProperty_mInstructionGenerationList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_syncInstructionBranchListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syncInstructionBranchListIR * operand = (cCollectionElement_syncInstructionBranchListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syncInstructionBranchListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR::GALGAS_syncInstructionBranchListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR::GALGAS_syncInstructionBranchListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::class_func_listWithValue (const GALGAS_guardedCommandIR & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                                    const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (in_mGuardedCommand,
                                                                 in_mInstructionGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::addAssign_operation (const GALGAS_guardedCommandIR & inOperand0,
                                                              const GALGAS_instructionListIR & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_append (const GALGAS_guardedCommandIR inOperand0,
                                                        const GALGAS_instructionListIR inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_insertAtIndex (const GALGAS_guardedCommandIR inOperand0,
                                                               const GALGAS_instructionListIR inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_removeAtIndex (GALGAS_guardedCommandIR & outOperand0,
                                                               GALGAS_instructionListIR & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
        outOperand0 = p->mObject.mProperty_mGuardedCommand ;
        outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_popFirst (GALGAS_guardedCommandIR & outOperand0,
                                                          GALGAS_instructionListIR & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_popLast (GALGAS_guardedCommandIR & outOperand0,
                                                         GALGAS_instructionListIR & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::method_first (GALGAS_guardedCommandIR & outOperand0,
                                                       GALGAS_instructionListIR & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::method_last (GALGAS_guardedCommandIR & outOperand0,
                                                      GALGAS_instructionListIR & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::add_operation (const GALGAS_syncInstructionBranchListIR & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::plusAssign_operation (const GALGAS_syncInstructionBranchListIR inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_setMGuardedCommandAtIndex (GALGAS_guardedCommandIR inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGuardedCommand = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_syncInstructionBranchListIR::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  GALGAS_guardedCommandIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_setMInstructionGenerationListAtIndex (GALGAS_instructionListIR inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionGenerationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_syncInstructionBranchListIR::getter_mInstructionGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    result = p->mObject.mProperty_mInstructionGenerationList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_syncInstructionBranchListIR::cEnumerator_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR_2D_element cEnumerator_syncInstructionBranchListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR cEnumerator_syncInstructionBranchListIR::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR cEnumerator_syncInstructionBranchListIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject.mProperty_mInstructionGenerationList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionBranchListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR ("syncInstructionBranchListIR",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionBranchListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR result ;
  const GALGAS_syncInstructionBranchListIR * p = (const GALGAS_syncInstructionBranchListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionBranchListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@guardedCommandIRList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guardedCommandIRList : public cCollectionElement {
  public: GALGAS_guardedCommandIRList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_guardedCommandIRList (const GALGAS_guardedCommandIR & in_mGuardedCommand
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_guardedCommandIRList (const GALGAS_guardedCommandIRList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_guardedCommandIRList::cCollectionElement_guardedCommandIRList (const GALGAS_guardedCommandIR & in_mGuardedCommand
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_guardedCommandIRList::cCollectionElement_guardedCommandIRList (const GALGAS_guardedCommandIRList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGuardedCommand) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_guardedCommandIRList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guardedCommandIRList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_guardedCommandIRList (mObject.mProperty_mGuardedCommand COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_guardedCommandIRList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGuardedCommand" ":") ;
  mObject.mProperty_mGuardedCommand.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_guardedCommandIRList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guardedCommandIRList * operand = (cCollectionElement_guardedCommandIRList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guardedCommandIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList::GALGAS_guardedCommandIRList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList::GALGAS_guardedCommandIRList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guardedCommandIRList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::class_func_listWithValue (const GALGAS_guardedCommandIR & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_guardedCommandIR & in_mGuardedCommand
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_guardedCommandIRList * p = nullptr ;
  macroMyNew (p, cCollectionElement_guardedCommandIRList (in_mGuardedCommand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::addAssign_operation (const GALGAS_guardedCommandIR & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guardedCommandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_append (const GALGAS_guardedCommandIR inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guardedCommandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_insertAtIndex (const GALGAS_guardedCommandIR inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_guardedCommandIRList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_removeAtIndex (GALGAS_guardedCommandIR & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
        outOperand0 = p->mObject.mProperty_mGuardedCommand ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_popFirst (GALGAS_guardedCommandIR & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_popLast (GALGAS_guardedCommandIR & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::method_first (GALGAS_guardedCommandIR & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::method_last (GALGAS_guardedCommandIR & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::add_operation (const GALGAS_guardedCommandIRList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result = GALGAS_guardedCommandIRList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result = GALGAS_guardedCommandIRList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result = GALGAS_guardedCommandIRList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::plusAssign_operation (const GALGAS_guardedCommandIRList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_setMGuardedCommandAtIndex (GALGAS_guardedCommandIR inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGuardedCommand = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_guardedCommandIRList::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  GALGAS_guardedCommandIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_guardedCommandIRList::cEnumerator_guardedCommandIRList (const GALGAS_guardedCommandIRList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList_2D_element cEnumerator_guardedCommandIRList::current (LOCATION_ARGS) const {
  const cCollectionElement_guardedCommandIRList * p = (const cCollectionElement_guardedCommandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR cEnumerator_guardedCommandIRList::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_guardedCommandIRList * p = (const cCollectionElement_guardedCommandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
  return p->mObject.mProperty_mGuardedCommand ;
}




//--------------------------------------------------------------------------------------------------
//
//     @guardedCommandIRList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIRList ("guardedCommandIRList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardedCommandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIRList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardedCommandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandIRList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIRList result ;
  const GALGAS_guardedCommandIRList * p = (const GALGAS_guardedCommandIRList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardedCommandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syncInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionIR::cPtr_syncInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mSelectInstructionLocation (),
mProperty_mOnInstructionBranchListIR () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syncInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mSelectInstructionLocation.printNonNullClassInstanceProperties ("mSelectInstructionLocation") ;
    mProperty_mOnInstructionBranchListIR.printNonNullClassInstanceProperties ("mOnInstructionBranchListIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_syncInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_syncInstructionIR * p = (const cPtr_syncInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syncInstructionIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSelectInstructionLocation.objectCompare (p->mProperty_mSelectInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOnInstructionBranchListIR.objectCompare (p->mProperty_mOnInstructionBranchListIR) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_syncInstructionIR::objectCompare (const GALGAS_syncInstructionIR & inOperand) const {
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

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_syncInstructionIR GALGAS_syncInstructionIR::init_28__2C__29_ (const GALGAS_location & in_mSelectInstructionLocation,
                                                                        const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cPtr_syncInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_syncInstructionIR (inCompiler COMMA_THERE)) ;
  object->mProperty_mSelectInstructionLocation = in_mSelectInstructionLocation ;
  object->mProperty_mOnInstructionBranchListIR = in_mOnInstructionBranchListIR ;
  const GALGAS_syncInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (const cPtr_syncInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::class_func_new (const GALGAS_location & inAttribute_mSelectInstructionLocation,
                                                                   const GALGAS_syncInstructionBranchListIR & inAttribute_mOnInstructionBranchListIR
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR result ;
  if (inAttribute_mSelectInstructionLocation.isValid () && inAttribute_mOnInstructionBranchListIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncInstructionIR (inAttribute_mSelectInstructionLocation, inAttribute_mOnInstructionBranchListIR COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionIR::setter_setMSelectInstructionLocation (GALGAS_location inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    p->mProperty_mSelectInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionIR::setter_setMOnInstructionBranchListIR (GALGAS_syncInstructionBranchListIR inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    p->mProperty_mOnInstructionBranchListIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syncInstructionIR::readProperty_mSelectInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    return p->mProperty_mSelectInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionIR::readProperty_mOnInstructionBranchListIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_syncInstructionBranchListIR () ;
  }else{
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    return p->mProperty_mOnInstructionBranchListIR ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionIR::cPtr_syncInstructionIR (const GALGAS_location & in_mSelectInstructionLocation,
                                                const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mSelectInstructionLocation (in_mSelectInstructionLocation),
mProperty_mOnInstructionBranchListIR (in_mOnInstructionBranchListIR) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syncInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

void cPtr_syncInstructionIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@syncInstructionIR:") ;
  mProperty_mSelectInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOnInstructionBranchListIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syncInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncInstructionIR (mProperty_mSelectInstructionLocation, mProperty_mOnInstructionBranchListIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionIR ("syncInstructionIR",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR result ;
  const GALGAS_syncInstructionIR * p = (const GALGAS_syncInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syncInstructionIR_2D_weak::objectCompare (const GALGAS_syncInstructionIR_2D_weak & inOperand) const {
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

GALGAS_syncInstructionIR_2D_weak::GALGAS_syncInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR_2D_weak & GALGAS_syncInstructionIR_2D_weak::operator = (const GALGAS_syncInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR_2D_weak::GALGAS_syncInstructionIR_2D_weak (const GALGAS_syncInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR_2D_weak GALGAS_syncInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_syncInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR GALGAS_syncInstructionIR_2D_weak::bang_syncInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncInstructionIR) ;
      result = GALGAS_syncInstructionIR ((cPtr_syncInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionIR_2D_weak ("syncInstructionIR-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR_2D_weak GALGAS_syncInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR_2D_weak result ;
  const GALGAS_syncInstructionIR_2D_weak * p = (const GALGAS_syncInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @whileInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionAST::cPtr_whileInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_m_5F_while_5F_Expression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mWhileInstructionList (),
mProperty_mEndOf_5F_while_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_whileInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_m_5F_while_5F_Expression.printNonNullClassInstanceProperties ("m_while_Expression") ;
    mProperty_mEndOf_5F_test_5F_expression.printNonNullClassInstanceProperties ("mEndOf_test_expression") ;
    mProperty_mWhileInstructionList.printNonNullClassInstanceProperties ("mWhileInstructionList") ;
    mProperty_mEndOf_5F_while_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_while_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_whileInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_whileInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_while_5F_Expression.objectCompare (p->mProperty_m_5F_while_5F_Expression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_test_5F_expression.objectCompare (p->mProperty_mEndOf_5F_test_5F_expression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWhileInstructionList.objectCompare (p->mProperty_mWhileInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_while_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_while_5F_instruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_whileInstructionAST::objectCompare (const GALGAS_whileInstructionAST & inOperand) const {
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

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_whileInstructionAST GALGAS_whileInstructionAST::init_28__2C__2C__2C__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_expressionAST & in_m_5F_while_5F_Expression,
                                                                                        const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                                                        const GALGAS_instructionListAST & in_mWhileInstructionList,
                                                                                        const GALGAS_location & in_mEndOf_5F_while_5F_instruction,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_whileInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_whileInstructionAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_m_5F_while_5F_Expression = in_m_5F_while_5F_Expression ;
  object->mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  object->mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  object->mProperty_mEndOf_5F_while_5F_instruction = in_mEndOf_5F_while_5F_instruction ;
  const GALGAS_whileInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (const cPtr_whileInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionAST::setter_setM_5F_while_5F_Expression (GALGAS_expressionAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_m_5F_while_5F_Expression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionAST::setter_setMEndOf_5F_test_5F_expression (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mEndOf_5F_test_5F_expression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionAST::setter_setMWhileInstructionList (GALGAS_instructionListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mWhileInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionAST::setter_setMEndOf_5F_while_5F_instruction (GALGAS_location inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mEndOf_5F_while_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_whileInstructionAST::readProperty_m_5F_while_5F_Expression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_m_5F_while_5F_Expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_whileInstructionAST::readProperty_mEndOf_5F_test_5F_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_mEndOf_5F_test_5F_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_whileInstructionAST::readProperty_mWhileInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_whileInstructionAST::readProperty_mEndOf_5F_while_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_mEndOf_5F_while_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @whileInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_whileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

void cPtr_whileInstructionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@whileInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_while_5F_Expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_while_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_whileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_whileInstructionAST (mProperty_mInstructionLocation, mProperty_m_5F_while_5F_Expression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mWhileInstructionList, mProperty_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @whileInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionAST ("whileInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_whileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_whileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST result ;
  const GALGAS_whileInstructionAST * p = (const GALGAS_whileInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_whileInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_whileInstructionAST_2D_weak::objectCompare (const GALGAS_whileInstructionAST_2D_weak & inOperand) const {
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

GALGAS_whileInstructionAST_2D_weak::GALGAS_whileInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST_2D_weak & GALGAS_whileInstructionAST_2D_weak::operator = (const GALGAS_whileInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST_2D_weak::GALGAS_whileInstructionAST_2D_weak (const GALGAS_whileInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST_2D_weak GALGAS_whileInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_whileInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST GALGAS_whileInstructionAST_2D_weak::bang_whileInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_whileInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_whileInstructionAST) ;
      result = GALGAS_whileInstructionAST ((cPtr_whileInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @whileInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionAST_2D_weak ("whileInstructionAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_whileInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_whileInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST_2D_weak GALGAS_whileInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST_2D_weak result ;
  const GALGAS_whileInstructionAST_2D_weak * p = (const GALGAS_whileInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_whileInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @whileInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionIR::cPtr_whileInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLabelIndex (),
mProperty_mTestInstructionGenerationList (),
mProperty_m_5F_while_5F_llvmName (),
mProperty_mInstructionGenerationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_whileInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLabelIndex.printNonNullClassInstanceProperties ("mLabelIndex") ;
    mProperty_mTestInstructionGenerationList.printNonNullClassInstanceProperties ("mTestInstructionGenerationList") ;
    mProperty_m_5F_while_5F_llvmName.printNonNullClassInstanceProperties ("m_while_llvmName") ;
    mProperty_mInstructionGenerationList.printNonNullClassInstanceProperties ("mInstructionGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_whileInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_whileInstructionIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLabelIndex.objectCompare (p->mProperty_mLabelIndex) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTestInstructionGenerationList.objectCompare (p->mProperty_mTestInstructionGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_while_5F_llvmName.objectCompare (p->mProperty_m_5F_while_5F_llvmName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionGenerationList.objectCompare (p->mProperty_mInstructionGenerationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_whileInstructionIR::objectCompare (const GALGAS_whileInstructionIR & inOperand) const {
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

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_whileInstructionIR GALGAS_whileInstructionIR::init_28__2C__2C__2C__29_ (const GALGAS_uint & in_mLabelIndex,
                                                                                  const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                                                                  const GALGAS_string & in_m_5F_while_5F_llvmName,
                                                                                  const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cPtr_whileInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_whileInstructionIR (inCompiler COMMA_THERE)) ;
  object->mProperty_mLabelIndex = in_mLabelIndex ;
  object->mProperty_mTestInstructionGenerationList = in_mTestInstructionGenerationList ;
  object->mProperty_m_5F_while_5F_llvmName = in_m_5F_while_5F_llvmName ;
  object->mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
  const GALGAS_whileInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (const cPtr_whileInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::class_func_new (const GALGAS_uint & inAttribute_mLabelIndex,
                                                                     const GALGAS_instructionListIR & inAttribute_mTestInstructionGenerationList,
                                                                     const GALGAS_string & inAttribute_m_5F_while_5F_llvmName,
                                                                     const GALGAS_instructionListIR & inAttribute_mInstructionGenerationList
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR result ;
  if (inAttribute_mLabelIndex.isValid () && inAttribute_mTestInstructionGenerationList.isValid () && inAttribute_m_5F_while_5F_llvmName.isValid () && inAttribute_mInstructionGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_whileInstructionIR (inAttribute_mLabelIndex, inAttribute_mTestInstructionGenerationList, inAttribute_m_5F_while_5F_llvmName, inAttribute_mInstructionGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionIR::setter_setMLabelIndex (GALGAS_uint inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mLabelIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionIR::setter_setMTestInstructionGenerationList (GALGAS_instructionListIR inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mTestInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionIR::setter_setM_5F_while_5F_llvmName (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_m_5F_while_5F_llvmName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionIR::setter_setMInstructionGenerationList (GALGAS_instructionListIR inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_whileInstructionIR::readProperty_mLabelIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_mLabelIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_whileInstructionIR::readProperty_mTestInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_mTestInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_whileInstructionIR::readProperty_m_5F_while_5F_llvmName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_m_5F_while_5F_llvmName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_whileInstructionIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @whileInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionIR::cPtr_whileInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                                  const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                                  const GALGAS_string & in_m_5F_while_5F_llvmName,
                                                  const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLabelIndex (in_mLabelIndex),
mProperty_mTestInstructionGenerationList (in_mTestInstructionGenerationList),
mProperty_m_5F_while_5F_llvmName (in_m_5F_while_5F_llvmName),
mProperty_mInstructionGenerationList (in_mInstructionGenerationList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_whileInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR ;
}

void cPtr_whileInstructionIR::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@whileInstructionIR:") ;
  mProperty_mLabelIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTestInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_while_5F_llvmName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_whileInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_whileInstructionIR (mProperty_mLabelIndex, mProperty_mTestInstructionGenerationList, mProperty_m_5F_while_5F_llvmName, mProperty_mInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @whileInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR ("whileInstructionIR",
                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_whileInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_whileInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR result ;
  const GALGAS_whileInstructionIR * p = (const GALGAS_whileInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_whileInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_whileInstructionIR_2D_weak::objectCompare (const GALGAS_whileInstructionIR_2D_weak & inOperand) const {
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

GALGAS_whileInstructionIR_2D_weak::GALGAS_whileInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR_2D_weak & GALGAS_whileInstructionIR_2D_weak::operator = (const GALGAS_whileInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR_2D_weak::GALGAS_whileInstructionIR_2D_weak (const GALGAS_whileInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR_2D_weak GALGAS_whileInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_whileInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR GALGAS_whileInstructionIR_2D_weak::bang_whileInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_whileInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_whileInstructionIR) ;
      result = GALGAS_whileInstructionIR ((cPtr_whileInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @whileInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR_2D_weak ("whileInstructionIR-weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_whileInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_whileInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR_2D_weak GALGAS_whileInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR_2D_weak result ;
  const GALGAS_whileInstructionIR_2D_weak * p = (const GALGAS_whileInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_whileInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionAST_2D_weak::objectCompare (const GALGAS_forInstructionAST_2D_weak & inOperand) const {
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

GALGAS_forInstructionAST_2D_weak::GALGAS_forInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak & GALGAS_forInstructionAST_2D_weak::operator = (const GALGAS_forInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak::GALGAS_forInstructionAST_2D_weak (const GALGAS_forInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak GALGAS_forInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST_2D_weak::bang_forInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionAST) ;
      result = GALGAS_forInstructionAST ((cPtr_forInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ("forInstructionAST-weak",
                                                                                 & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak GALGAS_forInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST_2D_weak result ;
  const GALGAS_forInstructionAST_2D_weak * p = (const GALGAS_forInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionOnArrayIR_2D_weak::objectCompare (const GALGAS_forInstructionOnArrayIR_2D_weak & inOperand) const {
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

GALGAS_forInstructionOnArrayIR_2D_weak::GALGAS_forInstructionOnArrayIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR_2D_weak & GALGAS_forInstructionOnArrayIR_2D_weak::operator = (const GALGAS_forInstructionOnArrayIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR_2D_weak::GALGAS_forInstructionOnArrayIR_2D_weak (const GALGAS_forInstructionOnArrayIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR_2D_weak GALGAS_forInstructionOnArrayIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR_2D_weak::bang_forInstructionOnArrayIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionOnArrayIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionOnArrayIR) ;
      result = GALGAS_forInstructionOnArrayIR ((cPtr_forInstructionOnArrayIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionOnArrayIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2D_weak ("forInstructionOnArrayIR-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionOnArrayIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionOnArrayIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnArrayIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR_2D_weak GALGAS_forInstructionOnArrayIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR_2D_weak result ;
  const GALGAS_forInstructionOnArrayIR_2D_weak * p = (const GALGAS_forInstructionOnArrayIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionOnArrayIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnArrayIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionOnLiteralStringIR_2D_weak::objectCompare (const GALGAS_forInstructionOnLiteralStringIR_2D_weak & inOperand) const {
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

GALGAS_forInstructionOnLiteralStringIR_2D_weak::GALGAS_forInstructionOnLiteralStringIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR_2D_weak & GALGAS_forInstructionOnLiteralStringIR_2D_weak::operator = (const GALGAS_forInstructionOnLiteralStringIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR_2D_weak::GALGAS_forInstructionOnLiteralStringIR_2D_weak (const GALGAS_forInstructionOnLiteralStringIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR_2D_weak GALGAS_forInstructionOnLiteralStringIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forInstructionOnLiteralStringIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR GALGAS_forInstructionOnLiteralStringIR_2D_weak::bang_forInstructionOnLiteralStringIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionOnLiteralStringIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionOnLiteralStringIR) ;
      result = GALGAS_forInstructionOnLiteralStringIR ((cPtr_forInstructionOnLiteralStringIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionOnLiteralStringIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2D_weak ("forInstructionOnLiteralStringIR-weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionOnLiteralStringIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionOnLiteralStringIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnLiteralStringIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR_2D_weak GALGAS_forInstructionOnLiteralStringIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnLiteralStringIR_2D_weak result ;
  const GALGAS_forInstructionOnLiteralStringIR_2D_weak * p = (const GALGAS_forInstructionOnLiteralStringIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionOnLiteralStringIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnLiteralStringIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forLowerUpperBoundInstructionAST_2D_weak::objectCompare (const GALGAS_forLowerUpperBoundInstructionAST_2D_weak & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionAST_2D_weak::GALGAS_forLowerUpperBoundInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST_2D_weak & GALGAS_forLowerUpperBoundInstructionAST_2D_weak::operator = (const GALGAS_forLowerUpperBoundInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST_2D_weak::GALGAS_forLowerUpperBoundInstructionAST_2D_weak (const GALGAS_forLowerUpperBoundInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST_2D_weak GALGAS_forLowerUpperBoundInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST_2D_weak::bang_forLowerUpperBoundInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forLowerUpperBoundInstructionAST) ;
      result = GALGAS_forLowerUpperBoundInstructionAST ((cPtr_forLowerUpperBoundInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forLowerUpperBoundInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2D_weak ("forLowerUpperBoundInstructionAST-weak",
                                                                                                & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST_2D_weak GALGAS_forLowerUpperBoundInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST_2D_weak result ;
  const GALGAS_forLowerUpperBoundInstructionAST_2D_weak * p = (const GALGAS_forLowerUpperBoundInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forLowerUpperBoundInstructionIR_2D_weak::objectCompare (const GALGAS_forLowerUpperBoundInstructionIR_2D_weak & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionIR_2D_weak::GALGAS_forLowerUpperBoundInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR_2D_weak & GALGAS_forLowerUpperBoundInstructionIR_2D_weak::operator = (const GALGAS_forLowerUpperBoundInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR_2D_weak::GALGAS_forLowerUpperBoundInstructionIR_2D_weak (const GALGAS_forLowerUpperBoundInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR_2D_weak GALGAS_forLowerUpperBoundInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR_2D_weak::bang_forLowerUpperBoundInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forLowerUpperBoundInstructionIR) ;
      result = GALGAS_forLowerUpperBoundInstructionIR ((cPtr_forLowerUpperBoundInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forLowerUpperBoundInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2D_weak ("forLowerUpperBoundInstructionIR-weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR_2D_weak GALGAS_forLowerUpperBoundInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR_2D_weak result ;
  const GALGAS_forLowerUpperBoundInstructionIR_2D_weak * p = (const GALGAS_forLowerUpperBoundInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_callInstructionAST_2D_weak::objectCompare (const GALGAS_callInstructionAST_2D_weak & inOperand) const {
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

GALGAS_callInstructionAST_2D_weak::GALGAS_callInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST_2D_weak & GALGAS_callInstructionAST_2D_weak::operator = (const GALGAS_callInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST_2D_weak::GALGAS_callInstructionAST_2D_weak (const GALGAS_callInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST_2D_weak GALGAS_callInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_callInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST GALGAS_callInstructionAST_2D_weak::bang_callInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_callInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_callInstructionAST) ;
      result = GALGAS_callInstructionAST ((cPtr_callInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @callInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_callInstructionAST_2D_weak ("callInstructionAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_callInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_callInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_callInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_callInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST_2D_weak GALGAS_callInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_callInstructionAST_2D_weak result ;
  const GALGAS_callInstructionAST_2D_weak * p = (const GALGAS_callInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_callInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("callInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_standAloneProcedureCallInstructionAST_2D_weak::objectCompare (const GALGAS_standAloneProcedureCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_standAloneProcedureCallInstructionAST_2D_weak::GALGAS_standAloneProcedureCallInstructionAST_2D_weak (void) :
GALGAS_callInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST_2D_weak & GALGAS_standAloneProcedureCallInstructionAST_2D_weak::operator = (const GALGAS_standAloneProcedureCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST_2D_weak::GALGAS_standAloneProcedureCallInstructionAST_2D_weak (const GALGAS_standAloneProcedureCallInstructionAST & inSource) :
GALGAS_callInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST_2D_weak GALGAS_standAloneProcedureCallInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST_2D_weak::bang_standAloneProcedureCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_standAloneProcedureCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_standAloneProcedureCallInstructionAST) ;
      result = GALGAS_standAloneProcedureCallInstructionAST ((cPtr_standAloneProcedureCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @standAloneProcedureCallInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2D_weak ("standAloneProcedureCallInstructionAST-weak",
                                                                                                     & kTypeDescriptor_GALGAS_callInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_standAloneProcedureCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_standAloneProcedureCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standAloneProcedureCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST_2D_weak GALGAS_standAloneProcedureCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST_2D_weak result ;
  const GALGAS_standAloneProcedureCallInstructionAST_2D_weak * p = (const GALGAS_standAloneProcedureCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_standAloneProcedureCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standAloneProcedureCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@accessInAssignmentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_accessInAssignmentListAST : public cCollectionElement {
  public: GALGAS_accessInAssignmentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentAST & in_mAccess
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_accessInAssignmentListAST::cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentAST & in_mAccess
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAccess) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_accessInAssignmentListAST::cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAccess) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_accessInAssignmentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_accessInAssignmentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_accessInAssignmentListAST (mObject.mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_accessInAssignmentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAccess" ":") ;
  mObject.mProperty_mAccess.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_accessInAssignmentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_accessInAssignmentListAST * operand = (cCollectionElement_accessInAssignmentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_accessInAssignmentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST::GALGAS_accessInAssignmentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST::GALGAS_accessInAssignmentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_accessInAssignmentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::class_func_listWithValue (const GALGAS_accessInAssignmentAST & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_accessInAssignmentAST & in_mAccess
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_accessInAssignmentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_accessInAssignmentListAST (in_mAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::addAssign_operation (const GALGAS_accessInAssignmentAST & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_append (const GALGAS_accessInAssignmentAST inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_insertAtIndex (const GALGAS_accessInAssignmentAST inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_removeAtIndex (GALGAS_accessInAssignmentAST & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
        outOperand0 = p->mObject.mProperty_mAccess ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_popFirst (GALGAS_accessInAssignmentAST & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_popLast (GALGAS_accessInAssignmentAST & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::method_first (GALGAS_accessInAssignmentAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::method_last (GALGAS_accessInAssignmentAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::add_operation (const GALGAS_accessInAssignmentListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::plusAssign_operation (const GALGAS_accessInAssignmentListAST inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_setMAccessAtIndex (GALGAS_accessInAssignmentAST inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAccess = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentListAST::getter_mAccessAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  GALGAS_accessInAssignmentAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    result = p->mObject.mProperty_mAccess ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_accessInAssignmentListAST::cEnumerator_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST_2D_element cEnumerator_accessInAssignmentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListAST * p = (const cCollectionElement_accessInAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST cEnumerator_accessInAssignmentListAST::current_mAccess (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListAST * p = (const cCollectionElement_accessInAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
  return p->mObject.mProperty_mAccess ;
}




//--------------------------------------------------------------------------------------------------
//
//     @accessInAssignmentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST ("accessInAssignmentListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_accessInAssignmentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_accessInAssignmentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST result ;
  const GALGAS_accessInAssignmentListAST * p = (const GALGAS_accessInAssignmentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_accessInAssignmentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_procedureCallInstructionAST_2D_weak::objectCompare (const GALGAS_procedureCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_procedureCallInstructionAST_2D_weak::GALGAS_procedureCallInstructionAST_2D_weak (void) :
GALGAS_callInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST_2D_weak & GALGAS_procedureCallInstructionAST_2D_weak::operator = (const GALGAS_procedureCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST_2D_weak::GALGAS_procedureCallInstructionAST_2D_weak (const GALGAS_procedureCallInstructionAST & inSource) :
GALGAS_callInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST_2D_weak GALGAS_procedureCallInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST_2D_weak::bang_procedureCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_procedureCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procedureCallInstructionAST) ;
      result = GALGAS_procedureCallInstructionAST ((cPtr_procedureCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procedureCallInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST_2D_weak ("procedureCallInstructionAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_callInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procedureCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procedureCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST_2D_weak GALGAS_procedureCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST_2D_weak result ;
  const GALGAS_procedureCallInstructionAST_2D_weak * p = (const GALGAS_procedureCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procedureCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST buildProcedureCallAccessList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildProcedureCallAccessList (const GALGAS_LValueOperandAST inObject,
                                                   GALGAS_accessInAssignmentListAST & ioArgument_ioAccessList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_LValueOperandAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_3276 = (const cEnumAssociatedValues_LValueOperandAST_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_3148_name = extractPtr_3276->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_3171_next = extractPtr_3276->mAssociatedValue1 ;
      ioArgument_ioAccessList.addAssign_operation (GALGAS_accessInAssignmentAST::class_func_property (extractedValue_3148_name  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72)) ;
      extensionMethod_buildProcedureCallAccessList (extractedValue_3171_next, ioArgument_ioAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 73)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_3561 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_3313_index = extractPtr_3561->mAssociatedValue0 ;
      const GALGAS_location extractedValue_3329_endOfIndex = extractPtr_3561->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_3346_checkIndexExpression = extractPtr_3561->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_3385_next = extractPtr_3561->mAssociatedValue3 ;
      ioArgument_ioAccessList.addAssign_operation (GALGAS_accessInAssignmentAST::class_func_arrayAccess (extractedValue_3313_index, extractedValue_3329_endOfIndex, extractedValue_3346_checkIndexExpression  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75)) ;
      extensionMethod_buildProcedureCallAccessList (extractedValue_3385_next, ioArgument_ioAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 76)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_effectiveArgumentPassingModeAST_input::cEnumAssociatedValues_effectiveArgumentPassingModeAST_input (const GALGAS_lstring inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_input::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_input::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType::cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType (const GALGAS_bool inAssociatedValue0,
                                                                                                                                          const GALGAS_lstring inAssociatedValue1,
                                                                                                                                          const GALGAS_lstring inAssociatedValue2
                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType::description (String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_effectiveArgumentPassingModeAST_output::cEnumAssociatedValues_effectiveArgumentPassingModeAST_output (const GALGAS_expressionAST inAssociatedValue0,
                                                                                                                            const GALGAS_location inAssociatedValue1
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_output::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_output::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput::cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput (const GALGAS_lstring inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput::description (String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable::cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable (const GALGAS_lstring inAssociatedValue0
                                                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable::description (String & ioString,
                                                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST::GALGAS_effectiveArgumentPassingModeAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::class_func_input (const GALGAS_lstring & inAssociatedValue0
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_input ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveArgumentPassingModeAST_input (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::class_func_inputWithType (const GALGAS_bool & inAssociatedValue0,
                                                                                                         const GALGAS_lstring & inAssociatedValue1,
                                                                                                         const GALGAS_lstring & inAssociatedValue2
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_inputWithType ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::class_func_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_output ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveArgumentPassingModeAST_output (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::class_func_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_outputInput ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::class_func_outputInputSelfVariable (const GALGAS_lstring & inAssociatedValue0
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_outputInputSelfVariable ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::method_input (GALGAS_lstring & outAssociatedValue0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_input) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST input invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::method_inputWithType (GALGAS_bool & outAssociatedValue0,
                                                                   GALGAS_lstring & outAssociatedValue1,
                                                                   GALGAS_lstring & outAssociatedValue2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_inputWithType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST inputWithType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::method_output (GALGAS_expressionAST & outAssociatedValue0,
                                                            GALGAS_location & outAssociatedValue1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_output) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST output invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::method_outputInput (GALGAS_lstring & outAssociatedValue0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outputInput) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST outputInput invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::method_outputInputSelfVariable (GALGAS_lstring & outAssociatedValue0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outputInputSelfVariable) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST outputInputSelfVariable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST::optional_input (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_input ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST::optional_inputWithType (GALGAS_bool & outAssociatedValue0,
                                                                     GALGAS_lstring & outAssociatedValue1,
                                                                     GALGAS_lstring & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_inputWithType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST::optional_output (GALGAS_expressionAST & outAssociatedValue0,
                                                              GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_output ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST::optional_outputInput (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_outputInput ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST::optional_outputInputSelfVariable (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_outputInputSelfVariable ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_effectiveArgumentPassingModeAST [6] = {
  "(not built)",
  "input",
  "inputWithType",
  "output",
  "outputInput",
  "outputInputSelfVariable"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isInputWithType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_inputWithType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isOutputInputSelfVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInputSelfVariable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<enum @effectiveArgumentPassingModeAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_effectiveArgumentPassingModeAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_effectiveArgumentPassingModeAST::objectCompare (const GALGAS_effectiveArgumentPassingModeAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentPassingModeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ("effectiveArgumentPassingModeAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  const GALGAS_effectiveArgumentPassingModeAST * p = (const GALGAS_effectiveArgumentPassingModeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@procEffectiveParameterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_procEffectiveParameterList : public cCollectionElement {
  public: GALGAS_procEffectiveParameterList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_procEffectiveParameterList (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                         const GALGAS_lstring & in_mSelector,
                                                         const GALGAS_omnibusType & in_mParameterType
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_procEffectiveParameterList (const GALGAS_procEffectiveParameterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_procEffectiveParameterList::cCollectionElement_procEffectiveParameterList (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                              const GALGAS_lstring & in_mSelector,
                                                                                              const GALGAS_omnibusType & in_mParameterType
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mSelector, in_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_procEffectiveParameterList::cCollectionElement_procEffectiveParameterList (const GALGAS_procEffectiveParameterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEffectiveParameterPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_procEffectiveParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_procEffectiveParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_procEffectiveParameterList (mObject.mProperty_mEffectiveParameterPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mParameterType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_procEffectiveParameterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEffectiveParameterPassingMode" ":") ;
  mObject.mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterType" ":") ;
  mObject.mProperty_mParameterType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_procEffectiveParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procEffectiveParameterList * operand = (cCollectionElement_procEffectiveParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procEffectiveParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_procEffectiveParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::class_func_listWithValue (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                               const GALGAS_lstring & inOperand1,
                                                                                               const GALGAS_omnibusType & inOperand2
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

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                   const GALGAS_lstring & in_mSelector,
                                                                   const GALGAS_omnibusType & in_mParameterType
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_procEffectiveParameterList (in_mEffectiveParameterPassingMode,
                                                                in_mSelector,
                                                                in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::addAssign_operation (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_omnibusType & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_append (const GALGAS_effectiveArgumentPassingModeAST inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_omnibusType inOperand2,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_insertAtIndex (const GALGAS_effectiveArgumentPassingModeAST inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_omnibusType inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_removeAtIndex (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_omnibusType & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
        outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
        outOperand1 = p->mObject.mProperty_mSelector ;
        outOperand2 = p->mObject.mProperty_mParameterType ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_popFirst (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_omnibusType & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_popLast (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_omnibusType & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::method_first (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_omnibusType & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::method_last (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_omnibusType & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::add_operation (const GALGAS_procEffectiveParameterList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::plusAssign_operation (const GALGAS_procEffectiveParameterList inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_setMEffectiveParameterPassingModeAtIndex (GALGAS_effectiveArgumentPassingModeAST inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEffectiveParameterPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_procEffectiveParameterList::getter_mEffectiveParameterPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_procEffectiveParameterList::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_setMParameterTypeAtIndex (GALGAS_omnibusType inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_procEffectiveParameterList::getter_mParameterTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mParameterType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_procEffectiveParameterList::cEnumerator_procEffectiveParameterList (const GALGAS_procEffectiveParameterList & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element cEnumerator_procEffectiveParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST cEnumerator_procEffectiveParameterList::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mEffectiveParameterPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_procEffectiveParameterList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_procEffectiveParameterList::current_mParameterType (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mParameterType ;
}




//--------------------------------------------------------------------------------------------------
//
//     @procEffectiveParameterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList ("procEffectiveParameterList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procEffectiveParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList result ;
  const GALGAS_procEffectiveParameterList * p = (const GALGAS_procEffectiveParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procEffectiveParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR::GALGAS_procEffectiveParameterPassingModeIR (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::class_func_input (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_input ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::class_func_output (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_output ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::class_func_outputInput (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_outputInput ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_procEffectiveParameterPassingModeIR::optional_input () const {
  const bool ok = mEnum == kEnum_input ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_procEffectiveParameterPassingModeIR::optional_output () const {
  const bool ok = mEnum == kEnum_output ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_procEffectiveParameterPassingModeIR::optional_outputInput () const {
  const bool ok = mEnum == kEnum_outputInput ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_procEffectiveParameterPassingModeIR [4] = {
  "(not built)",
  "input",
  "output",
  "outputInput"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterPassingModeIR::description (String & ioString,
                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @procEffectiveParameterPassingModeIR: ") ;
  ioString.appendCString (gEnumNameArrayFor_procEffectiveParameterPassingModeIR [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_procEffectiveParameterPassingModeIR::objectCompare (const GALGAS_procEffectiveParameterPassingModeIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procEffectiveParameterPassingModeIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ("procEffectiveParameterPassingModeIR",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterPassingModeIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procEffectiveParameterPassingModeIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterPassingModeIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  const GALGAS_procEffectiveParameterPassingModeIR * p = (const GALGAS_procEffectiveParameterPassingModeIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procEffectiveParameterPassingModeIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterPassingModeIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@procCallEffectiveParameterListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_procCallEffectiveParameterListIR : public cCollectionElement {
  public: GALGAS_procCallEffectiveParameterListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                               const GALGAS_objectIR & in_mParameter
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_procCallEffectiveParameterListIR::cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                                                          const GALGAS_objectIR & in_mParameter
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_procCallEffectiveParameterListIR::cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEffectiveParameterPassingMode, inElement.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_procCallEffectiveParameterListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_procCallEffectiveParameterListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_procCallEffectiveParameterListIR (mObject.mProperty_mEffectiveParameterPassingMode, mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_procCallEffectiveParameterListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEffectiveParameterPassingMode" ":") ;
  mObject.mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameter" ":") ;
  mObject.mProperty_mParameter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_procCallEffectiveParameterListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procCallEffectiveParameterListIR * operand = (cCollectionElement_procCallEffectiveParameterListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procCallEffectiveParameterListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_procCallEffectiveParameterListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::class_func_listWithValue (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                         const GALGAS_objectIR & in_mParameter
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (in_mEffectiveParameterPassingMode,
                                                                      in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::addAssign_operation (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                   const GALGAS_objectIR & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_append (const GALGAS_procEffectiveParameterPassingModeIR inOperand0,
                                                             const GALGAS_objectIR inOperand1,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_insertAtIndex (const GALGAS_procEffectiveParameterPassingModeIR inOperand0,
                                                                    const GALGAS_objectIR inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_removeAtIndex (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                                    GALGAS_objectIR & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
        outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
        outOperand1 = p->mObject.mProperty_mParameter ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_popFirst (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                               GALGAS_objectIR & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_popLast (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                              GALGAS_objectIR & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::method_first (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                            GALGAS_objectIR & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::method_last (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                           GALGAS_objectIR & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::add_operation (const GALGAS_procCallEffectiveParameterListIR & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::plusAssign_operation (const GALGAS_procCallEffectiveParameterListIR inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_setMEffectiveParameterPassingModeAtIndex (GALGAS_procEffectiveParameterPassingModeIR inOperand,
                                                                                               GALGAS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEffectiveParameterPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR::getter_mEffectiveParameterPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_procEffectiveParameterPassingModeIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mProperty_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_setMParameterAtIndex (GALGAS_objectIR inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_procCallEffectiveParameterListIR::getter_mParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mProperty_mParameter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_procCallEffectiveParameterListIR::cEnumerator_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR_2D_element cEnumerator_procCallEffectiveParameterListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR cEnumerator_procCallEffectiveParameterListIR::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mProperty_mEffectiveParameterPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_procCallEffectiveParameterListIR::current_mParameter (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mProperty_mParameter ;
}




//--------------------------------------------------------------------------------------------------
//
//     @procCallEffectiveParameterListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ("procCallEffectiveParameterListIR",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procCallEffectiveParameterListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procCallEffectiveParameterListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallEffectiveParameterListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  const GALGAS_procCallEffectiveParameterListIR * p = (const GALGAS_procCallEffectiveParameterListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procCallEffectiveParameterListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallEffectiveParameterListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@switchCaseListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchCaseListAST : public cCollectionElement {
  public: GALGAS_switchCaseListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_switchCaseListAST (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                const GALGAS_instructionListAST & in_mCaseInstructionList
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchCaseListAST (const GALGAS_switchCaseListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListAST::cCollectionElement_switchCaseListAST (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                                            const GALGAS_instructionListAST & in_mCaseInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifiers, in_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListAST::cCollectionElement_switchCaseListAST (const GALGAS_switchCaseListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCaseIdentifiers, inElement.mProperty_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_switchCaseListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchCaseListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_switchCaseListAST (mObject.mProperty_mCaseIdentifiers, mObject.mProperty_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_switchCaseListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCaseIdentifiers" ":") ;
  mObject.mProperty_mCaseIdentifiers.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCaseInstructionList" ":") ;
  mObject.mProperty_mCaseInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_switchCaseListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchCaseListAST * operand = (cCollectionElement_switchCaseListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchCaseListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST::GALGAS_switchCaseListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST::GALGAS_switchCaseListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::class_func_listWithValue (const GALGAS_lstringlist & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                          const GALGAS_instructionListAST & in_mCaseInstructionList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListAST (in_mCaseIdentifiers,
                                                       in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                    const GALGAS_instructionListAST & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchCaseListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_append (const GALGAS_lstringlist inOperand0,
                                              const GALGAS_instructionListAST inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchCaseListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                     const GALGAS_instructionListAST inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_switchCaseListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                     GALGAS_instructionListAST & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
        outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
        outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                                GALGAS_instructionListAST & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_popLast (GALGAS_lstringlist & outOperand0,
                                               GALGAS_instructionListAST & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::method_first (GALGAS_lstringlist & outOperand0,
                                             GALGAS_instructionListAST & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::method_last (GALGAS_lstringlist & outOperand0,
                                            GALGAS_instructionListAST & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::add_operation (const GALGAS_switchCaseListAST & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result = GALGAS_switchCaseListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result = GALGAS_switchCaseListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result = GALGAS_switchCaseListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::plusAssign_operation (const GALGAS_switchCaseListAST inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_setMCaseIdentifiersAtIndex (GALGAS_lstringlist inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseIdentifiers = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_switchCaseListAST::getter_mCaseIdentifiersAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    result = p->mObject.mProperty_mCaseIdentifiers ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_setMCaseInstructionListAtIndex (GALGAS_instructionListAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_switchCaseListAST::getter_mCaseInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    result = p->mObject.mProperty_mCaseInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_switchCaseListAST::cEnumerator_switchCaseListAST (const GALGAS_switchCaseListAST & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST_2D_element cEnumerator_switchCaseListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_switchCaseListAST::current_mCaseIdentifiers (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject.mProperty_mCaseIdentifiers ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST cEnumerator_switchCaseListAST::current_mCaseInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject.mProperty_mCaseInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @switchCaseListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListAST ("switchCaseListAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchCaseListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchCaseListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListAST result ;
  const GALGAS_switchCaseListAST * p = (const GALGAS_switchCaseListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchCaseListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mSwitchCaseList (),
mProperty_mEndOf_5F_switch_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mEndOf_5F_test_5F_expression.printNonNullClassInstanceProperties ("mEndOf_test_expression") ;
    mProperty_mSwitchCaseList.printNonNullClassInstanceProperties ("mSwitchCaseList") ;
    mProperty_mEndOf_5F_switch_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_switch_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_switchInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_test_5F_expression.objectCompare (p->mProperty_mEndOf_5F_test_5F_expression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSwitchCaseList.objectCompare (p->mProperty_mSwitchCaseList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_switch_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_switch_5F_instruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_switchInstructionAST::objectCompare (const GALGAS_switchInstructionAST & inOperand) const {
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

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_switchInstructionAST GALGAS_switchInstructionAST::init_28__2C__2C__2C__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_expressionAST & in_mSwitchExpression,
                                                                                          const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                                                          const GALGAS_switchCaseListAST & in_mSwitchCaseList,
                                                                                          const GALGAS_location & in_mEndOf_5F_switch_5F_instruction,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_mSwitchExpression = in_mSwitchExpression ;
  object->mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  object->mProperty_mSwitchCaseList = in_mSwitchCaseList ;
  object->mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
  const GALGAS_switchInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setter_setMSwitchExpression (GALGAS_expressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setter_setMEndOf_5F_test_5F_expression (GALGAS_location inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_test_5F_expression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setter_setMSwitchCaseList (GALGAS_switchCaseListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchCaseList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setter_setMEndOf_5F_switch_5F_instruction (GALGAS_location inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_switch_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_switchInstructionAST::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_switchInstructionAST::readProperty_mEndOf_5F_test_5F_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_test_5F_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchInstructionAST::readProperty_mSwitchCaseList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_switchCaseListAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchCaseList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_switchInstructionAST::readProperty_mEndOf_5F_switch_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchCaseList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mSwitchCaseList, mProperty_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  const GALGAS_switchInstructionAST * p = (const GALGAS_switchInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_switchInstructionAST_2D_weak::objectCompare (const GALGAS_switchInstructionAST_2D_weak & inOperand) const {
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

GALGAS_switchInstructionAST_2D_weak::GALGAS_switchInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak & GALGAS_switchInstructionAST_2D_weak::operator = (const GALGAS_switchInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak::GALGAS_switchInstructionAST_2D_weak (const GALGAS_switchInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak GALGAS_switchInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_switchInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST_2D_weak::bang_switchInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_switchInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionAST) ;
      result = GALGAS_switchInstructionAST ((cPtr_switchInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST_2D_weak ("switchInstructionAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak GALGAS_switchInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST_2D_weak result ;
  const GALGAS_switchInstructionAST_2D_weak * p = (const GALGAS_switchInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@switchCaseListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchCaseListIR : public cCollectionElement {
  public: GALGAS_switchCaseListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_switchCaseListIR (const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                               const GALGAS_instructionListIR & in_mCaseInstructionList
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchCaseListIR (const GALGAS_switchCaseListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListIR::cCollectionElement_switchCaseListIR (const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                                                          const GALGAS_instructionListIR & in_mCaseInstructionList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifierIndexes, in_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListIR::cCollectionElement_switchCaseListIR (const GALGAS_switchCaseListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCaseIdentifierIndexes, inElement.mProperty_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_switchCaseListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchCaseListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_switchCaseListIR (mObject.mProperty_mCaseIdentifierIndexes, mObject.mProperty_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_switchCaseListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCaseIdentifierIndexes" ":") ;
  mObject.mProperty_mCaseIdentifierIndexes.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCaseInstructionList" ":") ;
  mObject.mProperty_mCaseInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_switchCaseListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchCaseListIR * operand = (cCollectionElement_switchCaseListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchCaseListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR::GALGAS_switchCaseListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR::GALGAS_switchCaseListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::class_func_listWithValue (const GALGAS_uintlist & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                                         const GALGAS_instructionListIR & in_mCaseInstructionList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListIR (in_mCaseIdentifierIndexes,
                                                      in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::addAssign_operation (const GALGAS_uintlist & inOperand0,
                                                   const GALGAS_instructionListIR & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchCaseListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_append (const GALGAS_uintlist inOperand0,
                                             const GALGAS_instructionListIR inOperand1,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchCaseListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_insertAtIndex (const GALGAS_uintlist inOperand0,
                                                    const GALGAS_instructionListIR inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_switchCaseListIR (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_removeAtIndex (GALGAS_uintlist & outOperand0,
                                                    GALGAS_instructionListIR & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
        outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
        outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_popFirst (GALGAS_uintlist & outOperand0,
                                               GALGAS_instructionListIR & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_popLast (GALGAS_uintlist & outOperand0,
                                              GALGAS_instructionListIR & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::method_first (GALGAS_uintlist & outOperand0,
                                            GALGAS_instructionListIR & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::method_last (GALGAS_uintlist & outOperand0,
                                           GALGAS_instructionListIR & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::add_operation (const GALGAS_switchCaseListIR & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::plusAssign_operation (const GALGAS_switchCaseListIR inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_setMCaseIdentifierIndexesAtIndex (GALGAS_uintlist inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseIdentifierIndexes = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_switchCaseListIR::getter_mCaseIdentifierIndexesAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  GALGAS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    result = p->mObject.mProperty_mCaseIdentifierIndexes ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_setMCaseInstructionListAtIndex (GALGAS_instructionListIR inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_switchCaseListIR::getter_mCaseInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    result = p->mObject.mProperty_mCaseInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_switchCaseListIR::cEnumerator_switchCaseListIR (const GALGAS_switchCaseListIR & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR_2D_element cEnumerator_switchCaseListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_switchCaseListIR::current_mCaseIdentifierIndexes (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject.mProperty_mCaseIdentifierIndexes ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR cEnumerator_switchCaseListIR::current_mCaseInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject.mProperty_mCaseInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @switchCaseListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListIR ("switchCaseListIR",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchCaseListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchCaseListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListIR result ;
  const GALGAS_switchCaseListIR * p = (const GALGAS_switchCaseListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchCaseListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionIR::cPtr_switchInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLabelIndex (),
mProperty_mSwitchExpressionGenerationList (),
mProperty_mSwitchExpression (),
mProperty_mCaseGenerationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLabelIndex.printNonNullClassInstanceProperties ("mLabelIndex") ;
    mProperty_mSwitchExpressionGenerationList.printNonNullClassInstanceProperties ("mSwitchExpressionGenerationList") ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mCaseGenerationList.printNonNullClassInstanceProperties ("mCaseGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_switchInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_switchInstructionIR * p = (const cPtr_switchInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLabelIndex.objectCompare (p->mProperty_mLabelIndex) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSwitchExpressionGenerationList.objectCompare (p->mProperty_mSwitchExpressionGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCaseGenerationList.objectCompare (p->mProperty_mCaseGenerationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_switchInstructionIR::objectCompare (const GALGAS_switchInstructionIR & inOperand) const {
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

GALGAS_switchInstructionIR::GALGAS_switchInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_switchInstructionIR GALGAS_switchInstructionIR::init_28__2C__2C__2C__29_ (const GALGAS_uint & in_mLabelIndex,
                                                                                    const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                                                                                    const GALGAS_objectIR & in_mSwitchExpression,
                                                                                    const GALGAS_switchCaseListIR & in_mCaseGenerationList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionIR (inCompiler COMMA_THERE)) ;
  object->mProperty_mLabelIndex = in_mLabelIndex ;
  object->mProperty_mSwitchExpressionGenerationList = in_mSwitchExpressionGenerationList ;
  object->mProperty_mSwitchExpression = in_mSwitchExpression ;
  object->mProperty_mCaseGenerationList = in_mCaseGenerationList ;
  const GALGAS_switchInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR::GALGAS_switchInstructionIR (const cPtr_switchInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR GALGAS_switchInstructionIR::class_func_new (const GALGAS_uint & inAttribute_mLabelIndex,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionIR::setter_setMLabelIndex (GALGAS_uint inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mLabelIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionIR::setter_setMSwitchExpressionGenerationList (GALGAS_instructionListIR inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mSwitchExpressionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionIR::setter_setMSwitchExpression (GALGAS_objectIR inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionIR::setter_setMCaseGenerationList (GALGAS_switchCaseListIR inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mCaseGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_switchInstructionIR::readProperty_mLabelIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mLabelIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_switchInstructionIR::readProperty_mSwitchExpressionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mSwitchExpressionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_switchInstructionIR::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchInstructionIR::readProperty_mCaseGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_switchCaseListIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mCaseGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionIR class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_switchInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR ;
}

void cPtr_switchInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionIR:") ;
  mProperty_mLabelIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpressionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionIR (mProperty_mLabelIndex, mProperty_mSwitchExpressionGenerationList, mProperty_mSwitchExpression, mProperty_mCaseGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionIR ("switchInstructionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR GALGAS_switchInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionIR result ;
  const GALGAS_switchInstructionIR * p = (const GALGAS_switchInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_switchInstructionIR_2D_weak::objectCompare (const GALGAS_switchInstructionIR_2D_weak & inOperand) const {
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

GALGAS_switchInstructionIR_2D_weak::GALGAS_switchInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR_2D_weak & GALGAS_switchInstructionIR_2D_weak::operator = (const GALGAS_switchInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR_2D_weak::GALGAS_switchInstructionIR_2D_weak (const GALGAS_switchInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR_2D_weak GALGAS_switchInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_switchInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR GALGAS_switchInstructionIR_2D_weak::bang_switchInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_switchInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionIR) ;
      result = GALGAS_switchInstructionIR ((cPtr_switchInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionIR_2D_weak ("switchInstructionIR-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR_2D_weak GALGAS_switchInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionIR_2D_weak result ;
  const GALGAS_switchInstructionIR_2D_weak * p = (const GALGAS_switchInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_accessInAssignmentAST_property::cEnumAssociatedValues_accessInAssignmentAST_property (const GALGAS_lstring inAssociatedValue0
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_accessInAssignmentAST_property::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_accessInAssignmentAST_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_accessInAssignmentAST_property * ptr = dynamic_cast<const cEnumAssociatedValues_accessInAssignmentAST_property *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (const GALGAS_expressionAST inAssociatedValue0,
                                                                                                                  const GALGAS_location inAssociatedValue1,
                                                                                                                  const GALGAS_bool inAssociatedValue2
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * ptr = dynamic_cast<const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST::GALGAS_accessInAssignmentAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::class_func_property (const GALGAS_lstring & inAssociatedValue0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_accessInAssignmentAST_property (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::class_func_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                   const GALGAS_location & inAssociatedValue1,
                                                                                   const GALGAS_bool & inAssociatedValue2
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_arrayAccess ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST::method_property (GALGAS_lstring & outAssociatedValue0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @accessInAssignmentAST property invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_accessInAssignmentAST_property * ptr = (const cEnumAssociatedValues_accessInAssignmentAST_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST::method_arrayAccess (GALGAS_expressionAST & outAssociatedValue0,
                                                       GALGAS_location & outAssociatedValue1,
                                                       GALGAS_bool & outAssociatedValue2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayAccess) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @accessInAssignmentAST arrayAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * ptr = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_accessInAssignmentAST::optional_property (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_property ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_accessInAssignmentAST_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_accessInAssignmentAST::optional_arrayAccess (GALGAS_expressionAST & outAssociatedValue0,
                                                         GALGAS_location & outAssociatedValue1,
                                                         GALGAS_bool & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_arrayAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_accessInAssignmentAST [3] = {
  "(not built)",
  "property",
  "arrayAccess"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_accessInAssignmentAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_accessInAssignmentAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @accessInAssignmentAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_accessInAssignmentAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_accessInAssignmentAST::objectCompare (const GALGAS_accessInAssignmentAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @accessInAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST ("accessInAssignmentAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_accessInAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_accessInAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  const GALGAS_accessInAssignmentAST * p = (const GALGAS_accessInAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_accessInAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_LValueOperandAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_LValueOperandAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_4388 = (const cEnumAssociatedValues_LValueOperandAST_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_LValueOperandAST extractedValue_4323_next = extractPtr_4388->mAssociatedValue1 ;
      extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_4323_next, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 108)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_4596 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_4425_indexExpression = extractPtr_4596->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_4462_next = extractPtr_4596->mAssociatedValue3 ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4425_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 110)) ;
      extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_4462_next, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 111)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_registerGroupIndexAST_index::cEnumAssociatedValues_registerGroupIndexAST_index (const GALGAS_expressionAST inAssociatedValue0,
                                                                                                      const GALGAS_location inAssociatedValue1,
                                                                                                      const GALGAS_bool inAssociatedValue2
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_registerGroupIndexAST_index::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_registerGroupIndexAST_index::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerGroupIndexAST_index * ptr = dynamic_cast<const cEnumAssociatedValues_registerGroupIndexAST_index *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupIndexAST::GALGAS_registerGroupIndexAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupIndexAST GALGAS_registerGroupIndexAST::class_func_noIndex (UNUSED_LOCATION_ARGS) {
  GALGAS_registerGroupIndexAST result ;
  result.mEnum = kEnum_noIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupIndexAST GALGAS_registerGroupIndexAST::class_func_index (const GALGAS_expressionAST & inAssociatedValue0,
                                                                             const GALGAS_location & inAssociatedValue1,
                                                                             const GALGAS_bool & inAssociatedValue2
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupIndexAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_index ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_registerGroupIndexAST_index (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupIndexAST::method_index (GALGAS_expressionAST & outAssociatedValue0,
                                                 GALGAS_location & outAssociatedValue1,
                                                 GALGAS_bool & outAssociatedValue2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_index) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @registerGroupIndexAST index invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerGroupIndexAST_index * ptr = (const cEnumAssociatedValues_registerGroupIndexAST_index *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerGroupIndexAST::optional_noIndex () const {
  const bool ok = mEnum == kEnum_noIndex ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerGroupIndexAST::optional_index (GALGAS_expressionAST & outAssociatedValue0,
                                                   GALGAS_location & outAssociatedValue1,
                                                   GALGAS_bool & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_index ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_registerGroupIndexAST_index *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerGroupIndexAST [3] = {
  "(not built)",
  "noIndex",
  "index"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerGroupIndexAST::getter_isNoIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noIndex == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerGroupIndexAST::getter_isIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_index == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupIndexAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @registerGroupIndexAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_registerGroupIndexAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_registerGroupIndexAST::objectCompare (const GALGAS_registerGroupIndexAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerGroupIndexAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupIndexAST ("registerGroupIndexAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerGroupIndexAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupIndexAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerGroupIndexAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupIndexAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupIndexAST GALGAS_registerGroupIndexAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupIndexAST result ;
  const GALGAS_registerGroupIndexAST * p = (const GALGAS_registerGroupIndexAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerGroupIndexAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupIndexAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_registerIndexAST_index::cEnumAssociatedValues_registerIndexAST_index (const GALGAS_expressionAST inAssociatedValue0,
                                                                                            const GALGAS_location inAssociatedValue1,
                                                                                            const GALGAS_bool inAssociatedValue2
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_registerIndexAST_index::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_registerIndexAST_index::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerIndexAST_index * ptr = dynamic_cast<const cEnumAssociatedValues_registerIndexAST_index *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIndexAST::GALGAS_registerIndexAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIndexAST GALGAS_registerIndexAST::class_func_noIndex (UNUSED_LOCATION_ARGS) {
  GALGAS_registerIndexAST result ;
  result.mEnum = kEnum_noIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIndexAST GALGAS_registerIndexAST::class_func_index (const GALGAS_expressionAST & inAssociatedValue0,
                                                                   const GALGAS_location & inAssociatedValue1,
                                                                   const GALGAS_bool & inAssociatedValue2
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_registerIndexAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_index ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_registerIndexAST_index (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIndexAST::method_index (GALGAS_expressionAST & outAssociatedValue0,
                                            GALGAS_location & outAssociatedValue1,
                                            GALGAS_bool & outAssociatedValue2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_index) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @registerIndexAST index invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerIndexAST_index * ptr = (const cEnumAssociatedValues_registerIndexAST_index *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerIndexAST::optional_noIndex () const {
  const bool ok = mEnum == kEnum_noIndex ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerIndexAST::optional_index (GALGAS_expressionAST & outAssociatedValue0,
                                              GALGAS_location & outAssociatedValue1,
                                              GALGAS_bool & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_index ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_registerIndexAST_index *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerIndexAST [3] = {
  "(not built)",
  "noIndex",
  "index"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerIndexAST::getter_isNoIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noIndex == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerIndexAST::getter_isIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_index == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIndexAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @registerIndexAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_registerIndexAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_registerIndexAST::objectCompare (const GALGAS_registerIndexAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerIndexAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIndexAST ("registerIndexAST",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerIndexAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIndexAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerIndexAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIndexAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIndexAST GALGAS_registerIndexAST::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerIndexAST result ;
  const GALGAS_registerIndexAST * p = (const GALGAS_registerIndexAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerIndexAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIndexAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@effectiveArgumentPassingModeAST matchingFormalArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_matchingFormalArgument (const GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                      Compiler *
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




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@effectiveArgumentListAST mangledName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring extensionGetter_mangledName (const GALGAS_effectiveArgumentListAST & inObject,
                                            const GALGAS_string & constinArgument_inReceiverTypeName,
                                            const GALGAS_lstring & constinArgument_inFunctionName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_1613 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_1613.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 40)) ;
    }
  }
  var_s_1613.plusAssign_operation(constinArgument_inFunctionName.readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  const GALGAS_effectiveArgumentListAST temp_1 = inObject ;
  cEnumerator_effectiveArgumentListAST enumerator_1766 (temp_1, EnumerationOrder::up) ;
  while (enumerator_1766.hasCurrentObject ()) {
    var_s_1613.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_1766.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)).add_operation (enumerator_1766.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)) ;
    enumerator_1766.gotoNextObject () ;
  }
  var_s_1613.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 46)) ;
  result_result = GALGAS_lstring::class_func_new (var_s_1613, constinArgument_inFunctionName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 47)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR llvmName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_llvmName (const GALGAS_objectIR & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 29)), GALGAS_string ("<<@objectIR llvmName void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 29)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      result_result = GALGAS_string ("null") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_1487 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_1456_value = extractPtr_1487->mAssociatedValue1 ;
      result_result = extractedValue_1456_value.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 32)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      const cEnumAssociatedValues_objectIR_llvmNamedValue * extractPtr_1535 = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_1514_llvmName = extractPtr_1535->mAssociatedValue1 ;
      result_result = extractedValue_1514_llvmName ;
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      const cEnumAssociatedValues_objectIR_reference * extractPtr_1585 = (const cEnumAssociatedValues_objectIR_reference *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_1564_llvmName = extractPtr_1585->mAssociatedValue1 ;
      result_result = extractedValue_1564_llvmName ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_1828 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_1644_inValues = extractPtr_1828->mAssociatedValue1 ;
      result_result = GALGAS_string ("{") ;
      cEnumerator_sortedOperandIRList enumerator_1691 (extractedValue_1644_inValues, EnumerationOrder::up) ;
      while (enumerator_1691.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_1691.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)).add_operation (extensionGetter_llvmName (enumerator_1691.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)) ;
        if (enumerator_1691.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 39)) ;
        }
        enumerator_1691.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 41)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_1900 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_1865_index = extractPtr_1900->mAssociatedValue2 ;
      result_result = GALGAS_string ("@gconst.").add_operation (extractedValue_1865_index.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 43)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_1981 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_1946_index = extractPtr_1981->mAssociatedValue3 ;
      result_result = GALGAS_string ("@gconst.").add_operation (extractedValue_1946_index.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 45)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_2207 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_2016_size = extractPtr_2207->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_2027_index = extractPtr_2207->mAssociatedValue1 ;
      GALGAS_string var_sizeStr_2044 = extractedValue_2016_size.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 47)) ;
      result_result = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_2044, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)).add_operation (var_sizeStr_2044, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_2027_index, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 51)), GALGAS_string ("<< ERROR @objectIR llvmName llvmArrayRepeatedDynamicValue >>\n"), fixItArray2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 51)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 53)), GALGAS_string ("<< ERROR @objectIR llvmName llvmArrayDynamicValues >>\n"), fixItArray3  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 53)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR llvmValue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_llvmValue (const GALGAS_objectIR & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 61)), GALGAS_string ("<<@objectIR llvmName void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 61)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      result_result = GALGAS_string ("null") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_2887 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_2856_value = extractPtr_2887->mAssociatedValue1 ;
      result_result = extractedValue_2856_value.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 64)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      const cEnumAssociatedValues_objectIR_llvmNamedValue * extractPtr_2935 = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_2914_llvmName = extractPtr_2935->mAssociatedValue1 ;
      result_result = extractedValue_2914_llvmName ;
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      const cEnumAssociatedValues_objectIR_reference * extractPtr_2985 = (const cEnumAssociatedValues_objectIR_reference *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_2964_llvmName = extractPtr_2985->mAssociatedValue1 ;
      result_result = extractedValue_2964_llvmName ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_3214 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_3023_size = extractPtr_3214->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_3034_index = extractPtr_3214->mAssociatedValue1 ;
      GALGAS_string var_sizeStr_3051 = extractedValue_3023_size.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 68)) ;
      result_result = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_3051, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)).add_operation (var_sizeStr_3051, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_3034_index, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_3467 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_3282_inValues = extractPtr_3467->mAssociatedValue1 ;
      result_result = GALGAS_string ("{") ;
      cEnumerator_sortedOperandIRList enumerator_3329 (extractedValue_3282_inValues, EnumerationOrder::up) ;
      while (enumerator_3329.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_3329.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)).add_operation (extensionGetter_llvmValue (enumerator_3329.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)) ;
        if (enumerator_3329.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 75)) ;
        }
        enumerator_3329.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 77)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_3703 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_3518_inValues = extractPtr_3703->mAssociatedValue1 ;
      result_result = GALGAS_string ("[") ;
      cEnumerator_operandIRList enumerator_3558 (extractedValue_3518_inValues, EnumerationOrder::up) ;
      while (enumerator_3558.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_3558.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)).add_operation (extensionGetter_llvmValue (enumerator_3558.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)) ;
        if (enumerator_3558.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 82)) ;
        }
        enumerator_3558.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 84)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_3920 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_3746_size = extractPtr_3920->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_3751_value = extractPtr_3920->mAssociatedValue2 ;
      result_result = GALGAS_string ("[") ;
      cEnumerator_range enumerator_3798 (GALGAS_range (GALGAS_uint (uint32_t (0U)), extractedValue_3746_size.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 87))), EnumerationOrder::up) ;
      while (enumerator_3798.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (extractedValue_3751_value, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)).add_operation (extensionGetter_llvmValue (extractedValue_3751_value, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)) ;
        if (enumerator_3798.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 89)) ;
        }
        enumerator_3798.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 91)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 93)), GALGAS_string ("<< ERROR @objectIR llvmValue llvmArrayRepeatedDynamicValue >>\n"), fixItArray2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 93)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 95)), GALGAS_string ("<< ERROR @objectIR llvmValue llvmArrayRepeatedDynamicValue >>\n"), fixItArray3  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 95)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType extensionGetter_type (const GALGAS_objectIR & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 103)), GALGAS_string ("<<@objectIR type void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 103)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      const cEnumAssociatedValues_objectIR_reference * extractPtr_4485 = (const cEnumAssociatedValues_objectIR_reference *) (temp_0.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4466_type = extractPtr_4485->mAssociatedValue0 ;
      result_result = extractedValue_4466_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const cEnumAssociatedValues_objectIR_null * extractPtr_4520 = (const cEnumAssociatedValues_objectIR_null *) (temp_0.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4503_type = extractPtr_4520->mAssociatedValue0 ;
      result_result = extractedValue_4503_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      const cEnumAssociatedValues_objectIR_zero * extractPtr_4555 = (const cEnumAssociatedValues_objectIR_zero *) (temp_0.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4538_type = extractPtr_4555->mAssociatedValue0 ;
      result_result = extractedValue_4538_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_4602 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4583_type = extractPtr_4602->mAssociatedValue0 ;
      result_result = extractedValue_4583_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      const cEnumAssociatedValues_objectIR_llvmNamedValue * extractPtr_4649 = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4630_type = extractPtr_4649->mAssociatedValue0 ;
      result_result = extractedValue_4630_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_4700 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4681_type = extractPtr_4700->mAssociatedValue0 ;
      result_result = extractedValue_4681_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_4756 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (temp_0.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4735_type = extractPtr_4756->mAssociatedValue0 ;
      result_result = extractedValue_4735_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      result_result = function_literalStringType (inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 111)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_4878 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4858_type = extractPtr_4878->mAssociatedValue0 ;
      result_result = extractedValue_4858_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_4941 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4921_type = extractPtr_4941->mAssociatedValue0 ;
      result_result = extractedValue_4921_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_4996 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (temp_0.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4977_type = extractPtr_4996->mAssociatedValue0 ;
      result_result = extractedValue_4977_type ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR llvmTypeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_llvmTypeName (const GALGAS_objectIR & inObject,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_result = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 121)).ptr (), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 121)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR omnibusTypeDescriptionName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_omnibusTypeDescriptionName (const GALGAS_objectIR & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_result = extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 127)).readProperty_omnibusTypeDescriptionName () ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR withType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR extensionGetter_withType (const GALGAS_objectIR & inObject,
                                          const GALGAS_omnibusType & constinArgument_inType,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 135)), GALGAS_string ("<<@objectIR withType void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 135)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      const cEnumAssociatedValues_objectIR_reference * extractPtr_5812 = (const cEnumAssociatedValues_objectIR_reference *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_5744_llvmName = extractPtr_5812->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::class_func_reference (constinArgument_inType, extractedValue_5744_llvmName  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 137)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      result_result = GALGAS_objectIR::class_func_null (constinArgument_inType  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 139)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_5966 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_5900_value = extractPtr_5966->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::class_func_literalInteger (constinArgument_inType, extractedValue_5900_value  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 141)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      const cEnumAssociatedValues_objectIR_llvmNamedValue * extractPtr_6067 = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_5993_llvmName = extractPtr_6067->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::class_func_llvmNamedValue (constinArgument_inType, extractedValue_5993_llvmName  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 143)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_objectIR::class_func_zero (constinArgument_inType  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 145)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_6245 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_6172_values = extractPtr_6245->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::class_func_llvmStructureValue (constinArgument_inType, extractedValue_6172_values  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 147)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_6354 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_6276_size = extractPtr_6354->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_6287_index = extractPtr_6354->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::class_func_literalString (extractedValue_6276_size, extractedValue_6287_index  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 149)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_6515 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_6395_size = extractPtr_6515->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_6400_value = extractPtr_6515->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_6406_index = extractPtr_6515->mAssociatedValue3 ;
      result_result = GALGAS_objectIR::class_func_llvmArrayRepeatedStaticValue (constinArgument_inType, extractedValue_6395_size, extractedValue_6400_value, extractedValue_6406_index  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 151)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_6659 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_6557_size = extractPtr_6659->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_6562_value = extractPtr_6659->mAssociatedValue2 ;
      result_result = GALGAS_objectIR::class_func_llvmArrayRepeatedDynamicValue (constinArgument_inType, extractedValue_6557_size, extractedValue_6562_value  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 153)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_6803 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_6708_values = extractPtr_6803->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_6715_index = extractPtr_6803->mAssociatedValue2 ;
      result_result = GALGAS_objectIR::class_func_llvmArrayStaticValues (constinArgument_inType, extractedValue_6708_values, extractedValue_6715_index  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 155)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_6930 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_6853_values = extractPtr_6930->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::class_func_llvmArrayDynamicValues (constinArgument_inType, extractedValue_6853_values  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 157)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR name'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_name (const GALGAS_objectIR & inObject,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 165)), GALGAS_string ("<<@objectIR name void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 165)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      const cEnumAssociatedValues_objectIR_reference * extractPtr_7219 = (const cEnumAssociatedValues_objectIR_reference *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_7198_llvmName = extractPtr_7219->mAssociatedValue1 ;
      result_result = extractedValue_7198_llvmName ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      result_result = GALGAS_string ("null") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_7371 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_7340_value = extractPtr_7371->mAssociatedValue1 ;
      result_result = extractedValue_7340_value.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 169)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      const cEnumAssociatedValues_objectIR_llvmNamedValue * extractPtr_7415 = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_7398_name = extractPtr_7415->mAssociatedValue1 ;
      result_result = extractedValue_7398_name ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      result_result = GALGAS_string ("{...}") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_7919 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_7728_size = extractPtr_7919->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_7739_index = extractPtr_7919->mAssociatedValue1 ;
      GALGAS_string var_sizeStr_7756 = extractedValue_7728_size.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 177)) ;
      result_result = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_7756, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (var_sizeStr_7756, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_7739_index, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR isStatic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isStatic (const GALGAS_objectIR & inObject,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 187)), GALGAS_string ("<<@objectIR isStatic void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 187)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Class for element of '@routineListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineListIR : public cCollectionElement {
  public: GALGAS_routineListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_routineListIR (const GALGAS_abstractRoutineIR & in_mRoutine
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineListIR (const GALGAS_routineListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineListIR::cCollectionElement_routineListIR (const GALGAS_abstractRoutineIR & in_mRoutine
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutine) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineListIR::cCollectionElement_routineListIR (const GALGAS_routineListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutine) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_routineListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_routineListIR (mObject.mProperty_mRoutine COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_routineListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutine" ":") ;
  mObject.mProperty_mRoutine.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_routineListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineListIR * operand = (cCollectionElement_routineListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR::GALGAS_routineListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR::GALGAS_routineListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::class_func_listWithValue (const GALGAS_abstractRoutineIR & inOperand0
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_routineListIR result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_routineListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_abstractRoutineIR & in_mRoutine
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_routineListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineListIR (in_mRoutine COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::addAssign_operation (const GALGAS_abstractRoutineIR & inOperand0
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_append (const GALGAS_abstractRoutineIR inOperand0,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_insertAtIndex (const GALGAS_abstractRoutineIR inOperand0,
                                                 const GALGAS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_routineListIR (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_removeAtIndex (GALGAS_abstractRoutineIR & outOperand0,
                                                 const GALGAS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_routineListIR) ;
        outOperand0 = p->mObject.mProperty_mRoutine ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_popFirst (GALGAS_abstractRoutineIR & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_popLast (GALGAS_abstractRoutineIR & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::method_first (GALGAS_abstractRoutineIR & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::method_last (GALGAS_abstractRoutineIR & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::add_operation (const GALGAS_routineListIR & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineListIR result = GALGAS_routineListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineListIR result = GALGAS_routineListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineListIR result = GALGAS_routineListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::plusAssign_operation (const GALGAS_routineListIR inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_setMRoutineAtIndex (GALGAS_abstractRoutineIR inOperand,
                                                      GALGAS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutine = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR GALGAS_routineListIR::getter_mRoutineAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  GALGAS_abstractRoutineIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    result = p->mObject.mProperty_mRoutine ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_routineListIR::cEnumerator_routineListIR (const GALGAS_routineListIR & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element cEnumerator_routineListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineListIR * p = (const cCollectionElement_routineListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR cEnumerator_routineListIR::current_mRoutine (LOCATION_ARGS) const {
  const cCollectionElement_routineListIR * p = (const cCollectionElement_routineListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineListIR) ;
  return p->mObject.mProperty_mRoutine ;
}




//--------------------------------------------------------------------------------------------------
//
//     @routineListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineListIR ("routineListIR",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineListIR result ;
  const GALGAS_routineListIR * p = (const GALGAS_routineListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineListIR llvmRoutineGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmRoutineGeneration (const GALGAS_routineListIR inObject,
                                            GALGAS_string & ioArgument_ioLLVMcode,
                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineListIR temp_0 = inObject ;
  cEnumerator_routineListIR enumerator_3892 (temp_0, EnumerationOrder::up) ;
  while (enumerator_3892.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Routine ").add_operation (enumerator_3892.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)) ;
    ioArgument_ioGenerationAdds.setter_setMUniqueIndex (GALGAS_uint (uint32_t (0U)) COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 110)) ;
    callExtensionMethod_llvmCodeGeneration ((cPtr_abstractRoutineIR *) enumerator_3892.current (HERE).readProperty_mRoutine ().ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 111)) ;
    enumerator_3892.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendNOP'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendNOP (GALGAS_instructionListIR & ioObject,
                                Compiler * /* inCompiler */
                                COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_nopIR::class_func_new (SOURCE_FILE ("intermediate-nop.galgas", 3))  COMMA_SOURCE_FILE ("intermediate-nop.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------
// @nopIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_nopIR::cPtr_nopIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nopIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_nopIR::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return ComparisonResult::operandEqual ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_nopIR::objectCompare (const GALGAS_nopIR & inOperand) const {
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

GALGAS_nopIR::GALGAS_nopIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_nopIR GALGAS_nopIR::init_28__29_ (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cPtr_nopIR * object = nullptr ;
  macroMyNew (object, cPtr_nopIR (inCompiler COMMA_THERE)) ;
  const GALGAS_nopIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR::GALGAS_nopIR (const cPtr_nopIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nopIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR::class_func_new (LOCATION_ARGS) {
  GALGAS_nopIR result ;
  macroMyNew (result.mObjectPtr, cPtr_nopIR (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nopIR class
//--------------------------------------------------------------------------------------------------

cPtr_nopIR::cPtr_nopIR (LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_nopIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR ;
}

void cPtr_nopIR::description (String & ioString,
                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@nopIR]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_nopIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nopIR (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @nopIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR ("nopIR",
                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nopIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nopIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nopIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR::extractObject (const GALGAS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_nopIR result ;
  const GALGAS_nopIR * p = (const GALGAS_nopIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nopIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nopIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nopIR_2D_weak::objectCompare (const GALGAS_nopIR_2D_weak & inOperand) const {
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

GALGAS_nopIR_2D_weak::GALGAS_nopIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak & GALGAS_nopIR_2D_weak::operator = (const GALGAS_nopIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak::GALGAS_nopIR_2D_weak (const GALGAS_nopIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak GALGAS_nopIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_nopIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR_2D_weak::bang_nopIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_nopIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nopIR) ;
      result = GALGAS_nopIR ((cPtr_nopIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nopIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR_2D_weak ("nopIR-weak",
                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nopIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nopIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nopIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak GALGAS_nopIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_nopIR_2D_weak result ;
  const GALGAS_nopIR_2D_weak * p = (const GALGAS_nopIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nopIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nopIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendInstructionAsFreeString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendInstructionAsFreeString (GALGAS_instructionListIR & ioObject,
                                                    const GALGAS_string constinArgument_inString,
                                                    const GALGAS_stringset constinArgument_inInvokedFunctionSet,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_freeStringIR::class_func_new (constinArgument_inString, constinArgument_inInvokedFunctionSet  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 4))  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 4)) ;
}


//--------------------------------------------------------------------------------------------------
// @freeStringIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_freeStringIR::cPtr_freeStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mInvokedFunctionSet () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_freeStringIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
    mProperty_mInvokedFunctionSet.printNonNullClassInstanceProperties ("mInvokedFunctionSet") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_freeStringIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_freeStringIR * p = (const cPtr_freeStringIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_freeStringIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mString.objectCompare (p->mProperty_mString) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (p->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_freeStringIR::objectCompare (const GALGAS_freeStringIR & inOperand) const {
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

GALGAS_freeStringIR::GALGAS_freeStringIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_freeStringIR GALGAS_freeStringIR::init_28__2C__29_ (const GALGAS_string & in_mString,
                                                              const GALGAS_stringset & in_mInvokedFunctionSet,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cPtr_freeStringIR * object = nullptr ;
  macroMyNew (object, cPtr_freeStringIR (inCompiler COMMA_THERE)) ;
  object->mProperty_mString = in_mString ;
  object->mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
  const GALGAS_freeStringIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR::GALGAS_freeStringIR (const cPtr_freeStringIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_freeStringIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR::class_func_new (const GALGAS_string & inAttribute_mString,
                                                         const GALGAS_stringset & inAttribute_mInvokedFunctionSet
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_freeStringIR result ;
  if (inAttribute_mString.isValid () && inAttribute_mInvokedFunctionSet.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_freeStringIR (inAttribute_mString, inAttribute_mInvokedFunctionSet COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_freeStringIR::setter_setMString (GALGAS_string inValue
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    p->mProperty_mString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_freeStringIR::setter_setMInvokedFunctionSet (GALGAS_stringset inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    p->mProperty_mInvokedFunctionSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_freeStringIR::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_freeStringIR::readProperty_mInvokedFunctionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    return p->mProperty_mInvokedFunctionSet ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @freeStringIR class
//--------------------------------------------------------------------------------------------------

cPtr_freeStringIR::cPtr_freeStringIR (const GALGAS_string & in_mString,
                                      const GALGAS_stringset & in_mInvokedFunctionSet
                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mString (in_mString),
mProperty_mInvokedFunctionSet (in_mInvokedFunctionSet) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_freeStringIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR ;
}

void cPtr_freeStringIR::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@freeStringIR:") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_freeStringIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_freeStringIR (mProperty_mString, mProperty_mInvokedFunctionSet COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @freeStringIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeStringIR ("freeStringIR",
                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_freeStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_freeStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_freeStringIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_freeStringIR result ;
  const GALGAS_freeStringIR * p = (const GALGAS_freeStringIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_freeStringIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeStringIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_freeStringIR_2D_weak::objectCompare (const GALGAS_freeStringIR_2D_weak & inOperand) const {
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

GALGAS_freeStringIR_2D_weak::GALGAS_freeStringIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak & GALGAS_freeStringIR_2D_weak::operator = (const GALGAS_freeStringIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak::GALGAS_freeStringIR_2D_weak (const GALGAS_freeStringIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak GALGAS_freeStringIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_freeStringIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR_2D_weak::bang_freeStringIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_freeStringIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_freeStringIR) ;
      result = GALGAS_freeStringIR ((cPtr_freeStringIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @freeStringIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeStringIR_2D_weak ("freeStringIR-weak",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_freeStringIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_freeStringIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_freeStringIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak GALGAS_freeStringIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_freeStringIR_2D_weak result ;
  const GALGAS_freeStringIR_2D_weak * p = (const GALGAS_freeStringIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_freeStringIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeStringIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendExtend'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendExtend (GALGAS_instructionListIR & ioObject,
                                   const GALGAS_objectIR constinArgument_inResult,
                                   const GALGAS_objectIR constinArgument_inSource,
                                   Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_extendIR::class_func_new (constinArgument_inResult, constinArgument_inSource  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6)) ;
}


//--------------------------------------------------------------------------------------------------
// @extendIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_extendIR::cPtr_extendIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extendIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mSource.printNonNullClassInstanceProperties ("mSource") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_extendIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_extendIR * p = (const cPtr_extendIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extendIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResult.objectCompare (p->mProperty_mResult) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSource.objectCompare (p->mProperty_mSource) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_extendIR::objectCompare (const GALGAS_extendIR & inOperand) const {
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

GALGAS_extendIR::GALGAS_extendIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_extendIR GALGAS_extendIR::init_28__2C__29_ (const GALGAS_objectIR & in_mResult,
                                                      const GALGAS_objectIR & in_mSource,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cPtr_extendIR * object = nullptr ;
  macroMyNew (object, cPtr_extendIR (inCompiler COMMA_THERE)) ;
  object->mProperty_mResult = in_mResult ;
  object->mProperty_mSource = in_mSource ;
  const GALGAS_extendIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_extendIR::GALGAS_extendIR (const cPtr_extendIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_extendIR GALGAS_extendIR::class_func_new (const GALGAS_objectIR & inAttribute_mResult,
                                                 const GALGAS_objectIR & inAttribute_mSource
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_extendIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mSource.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extendIR (inAttribute_mResult, inAttribute_mSource COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendIR::setter_setMResult (GALGAS_objectIR inValue
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendIR::setter_setMSource (GALGAS_objectIR inValue
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_extendIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_extendIR::readProperty_mSource (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    return p->mProperty_mSource ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extendIR class
//--------------------------------------------------------------------------------------------------

cPtr_extendIR::cPtr_extendIR (const GALGAS_objectIR & in_mResult,
                              const GALGAS_objectIR & in_mSource
                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (in_mResult),
mProperty_mSource (in_mSource) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extendIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR ;
}

void cPtr_extendIR::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@extendIR:") ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extendIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extendIR (mProperty_mResult, mProperty_mSource COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @extendIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR ("extendIR",
                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendIR GALGAS_extendIR::extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_extendIR result ;
  const GALGAS_extendIR * p = (const GALGAS_extendIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extendIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

