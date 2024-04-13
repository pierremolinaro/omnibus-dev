#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_infixOperatorRoutineIR_2D_weak::objectCompare (const GALGAS_infixOperatorRoutineIR_2D_weak & inOperand) const {
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

GALGAS_infixOperatorRoutineIR_2D_weak::GALGAS_infixOperatorRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR_2D_weak & GALGAS_infixOperatorRoutineIR_2D_weak::operator = (const GALGAS_infixOperatorRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR_2D_weak::GALGAS_infixOperatorRoutineIR_2D_weak (const GALGAS_infixOperatorRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR_2D_weak GALGAS_infixOperatorRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_infixOperatorRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR GALGAS_infixOperatorRoutineIR_2D_weak::bang_infixOperatorRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_infixOperatorRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_infixOperatorRoutineIR) ;
      result = GALGAS_infixOperatorRoutineIR ((cPtr_infixOperatorRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @infixOperatorRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR_2D_weak ("infixOperatorRoutineIR-weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_infixOperatorRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_infixOperatorRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorRoutineIR_2D_weak GALGAS_infixOperatorRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorRoutineIR_2D_weak result ;
  const GALGAS_infixOperatorRoutineIR_2D_weak * p = (const GALGAS_infixOperatorRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_infixOperatorRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@omnibusInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_omnibusInfixOperatorUsage * inObject,
                                       const GALGAS_objectIR constin_inLeftOperand,
                                       const GALGAS_location constin_inOperatorLocation,
                                       const GALGAS_objectIR constin_inRightOperand,
                                       const GALGAS_omnibusType constin_inResultType,
                                       GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       GALGAS_allocaList & io_ioAllocaList,
                                       GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                       GALGAS_objectIR & out_outResultValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResultValue.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusInfixOperatorUsage) ;
    inObject->method_generateCode (constin_inLeftOperand, constin_inOperatorLocation, constin_inRightOperand, constin_inResultType, io_ioTemporaries, io_ioAllocaList, io_ioInstructionGenerationList, out_outResultValue, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@infixOperatorMap generateInfixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInfixOperatorCode (const GALGAS_infixOperatorMap inObject,
                                                const GALGAS_objectIR constinArgument_inLeftOperand,
                                                const GALGAS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                const GALGAS_location constinArgument_inOperatorLocation,
                                                const GALGAS_objectIR constinArgument_inRightOperand,
                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                GALGAS_objectIR & outArgument_outResultValue,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultValue.drop () ; // Release 'out' argument
  GALGAS_lstring var_key_1652 = function_infixOperatorMapKey (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 41)), constinArgument_inInfixOperator, constinArgument_inOperatorLocation, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 41)) ;
  GALGAS_omnibusType var_resultType_1790 ;
  GALGAS_omnibusInfixOperatorUsage var_operatorUsage_1806 ;
  const GALGAS_infixOperatorMap temp_0 = inObject ;
  temp_0.method_searchKey (var_key_1652, var_resultType_1790, var_operatorUsage_1806, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 42)) ;
  callExtensionMethod_generateCode ((cPtr_omnibusInfixOperatorUsage *) var_operatorUsage_1806.ptr (), constinArgument_inLeftOperand, constinArgument_inOperatorLocation, constinArgument_inRightOperand, var_resultType_1790, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 43)) ;
}


//--------------------------------------------------------------------------------------------------
// @inlineInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_inlineInfixOperatorUsage::cPtr_inlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLLVMOperation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inlineInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMOperation.printNonNullClassInstanceProperties ("mLLVMOperation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inlineInfixOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inlineInfixOperatorUsage * p = (const cPtr_inlineInfixOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inlineInfixOperatorUsage) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLLVMOperation.objectCompare (p->mProperty_mLLVMOperation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inlineInfixOperatorUsage::objectCompare (const GALGAS_inlineInfixOperatorUsage & inOperand) const {
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

GALGAS_inlineInfixOperatorUsage::GALGAS_inlineInfixOperatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage GALGAS_inlineInfixOperatorUsage::
init_21_ (const GALGAS_string & in_mLLVMOperation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inlineInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_inlineInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->inlineInfixOperatorUsage_init_21_ (in_mLLVMOperation, inCompiler) ;
  const GALGAS_inlineInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfixOperatorUsage::
inlineInfixOperatorUsage_init_21_ (const GALGAS_string & in_mLLVMOperation,
                                   Compiler * /* inCompiler */) {
  mProperty_mLLVMOperation = in_mLLVMOperation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage::GALGAS_inlineInfixOperatorUsage (const cPtr_inlineInfixOperatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inlineInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage GALGAS_inlineInfixOperatorUsage::class_func_new (const GALGAS_string & in_mLLVMOperation
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_inlineInfixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_inlineInfixOperatorUsage (in_mLLVMOperation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_inlineInfixOperatorUsage::readProperty_mLLVMOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_inlineInfixOperatorUsage * p = (cPtr_inlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfixOperatorUsage) ;
    return p->mProperty_mLLVMOperation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_inlineInfixOperatorUsage::setProperty_mLLVMOperation (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_inlineInfixOperatorUsage * p = (cPtr_inlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfixOperatorUsage) ;
    p->mProperty_mLLVMOperation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inlineInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_inlineInfixOperatorUsage::cPtr_inlineInfixOperatorUsage (const GALGAS_string & in_mLLVMOperation
                                                              COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mLLVMOperation () {
  mProperty_mLLVMOperation = in_mLLVMOperation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inlineInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;
}

void cPtr_inlineInfixOperatorUsage::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@inlineInfixOperatorUsage:") ;
  mProperty_mLLVMOperation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inlineInfixOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inlineInfixOperatorUsage (mProperty_mLLVMOperation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inlineInfixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ("inlineInfixOperatorUsage",
                                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inlineInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inlineInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inlineInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage GALGAS_inlineInfixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_inlineInfixOperatorUsage result ;
  const GALGAS_inlineInfixOperatorUsage * p = (const GALGAS_inlineInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inlineInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inlineInfixOperatorUsage_2D_weak::objectCompare (const GALGAS_inlineInfixOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_inlineInfixOperatorUsage_2D_weak::GALGAS_inlineInfixOperatorUsage_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage_2D_weak & GALGAS_inlineInfixOperatorUsage_2D_weak::operator = (const GALGAS_inlineInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage_2D_weak::GALGAS_inlineInfixOperatorUsage_2D_weak (const GALGAS_inlineInfixOperatorUsage & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage_2D_weak GALGAS_inlineInfixOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inlineInfixOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage GALGAS_inlineInfixOperatorUsage_2D_weak::bang_inlineInfixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inlineInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inlineInfixOperatorUsage) ;
      result = GALGAS_inlineInfixOperatorUsage ((cPtr_inlineInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inlineInfixOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2D_weak ("inlineInfixOperatorUsage-weak",
                                                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inlineInfixOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inlineInfixOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inlineInfixOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage_2D_weak GALGAS_inlineInfixOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_inlineInfixOperatorUsage_2D_weak result ;
  const GALGAS_inlineInfixOperatorUsage_2D_weak * p = (const GALGAS_inlineInfixOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inlineInfixOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfixOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@omnibusInfixOperator string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_omnibusInfixOperator & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_omnibusInfixOperator temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_omnibusInfixOperator::kNotBuilt:
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_equal:
    {
      result_result = GALGAS_string ("==") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_lessThan:
    {
      result_result = GALGAS_string ("<") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_infEqual:
    {
      result_result = GALGAS_string ("≤") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_bitWiseAndOp:
    {
      result_result = GALGAS_string ("&") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_bitWiseOrOp:
    {
      result_result = GALGAS_string ("|") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_bitWiseXorOp:
    {
      result_result = GALGAS_string ("^") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_addOp:
    {
      result_result = GALGAS_string ("+") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_addOpNoOvf:
    {
      result_result = GALGAS_string ("+%") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_subOp:
    {
      result_result = GALGAS_string ("-") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_subOpNoOvf:
    {
      result_result = GALGAS_string ("-%") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_mulOp:
    {
      result_result = GALGAS_string ("*") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_mulOpNoOvf:
    {
      result_result = GALGAS_string ("*%") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_divOp:
    {
      result_result = GALGAS_string ("/") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_divOpNoOvf:
    {
      result_result = GALGAS_string ("!/") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_modOp:
    {
      result_result = GALGAS_string ("%") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_modOpNoOvf:
    {
      result_result = GALGAS_string ("!%") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_leftShiftOp:
    {
      result_result = GALGAS_string ("<<") ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_rightShiftOp:
    {
      result_result = GALGAS_string (">>") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @omnibusInfixOperatorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_omnibusInfixOperatorExpressionAST::cPtr_omnibusInfixOperatorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mInfixOperator (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_omnibusInfixOperatorExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mInfixOperator.printNonNullClassInstanceProperties ("mInfixOperator") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_omnibusInfixOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_omnibusInfixOperatorExpressionAST * p = (const cPtr_omnibusInfixOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInfixOperator.objectCompare (p->mProperty_mInfixOperator) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_omnibusInfixOperatorExpressionAST::objectCompare (const GALGAS_omnibusInfixOperatorExpressionAST & inOperand) const {
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

GALGAS_omnibusInfixOperatorExpressionAST::GALGAS_omnibusInfixOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST GALGAS_omnibusInfixOperatorExpressionAST::
init_21__21__21__21_ (const GALGAS_expressionAST & in_mLeftExpression,
                      const GALGAS_location & in_mOperatorLocation,
                      const GALGAS_omnibusInfixOperator & in_mInfixOperator,
                      const GALGAS_expressionAST & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_omnibusInfixOperatorExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_omnibusInfixOperatorExpressionAST (inCompiler COMMA_THERE)) ;
  object->omnibusInfixOperatorExpressionAST_init_21__21__21__21_ (in_mLeftExpression, in_mOperatorLocation, in_mInfixOperator, in_mRightExpression, inCompiler) ;
  const GALGAS_omnibusInfixOperatorExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::
omnibusInfixOperatorExpressionAST_init_21__21__21__21_ (const GALGAS_expressionAST & in_mLeftExpression,
                                                        const GALGAS_location & in_mOperatorLocation,
                                                        const GALGAS_omnibusInfixOperator & in_mInfixOperator,
                                                        const GALGAS_expressionAST & in_mRightExpression,
                                                        Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST::GALGAS_omnibusInfixOperatorExpressionAST (const cPtr_omnibusInfixOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_omnibusInfixOperatorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST GALGAS_omnibusInfixOperatorExpressionAST::class_func_new (const GALGAS_expressionAST & in_mLeftExpression,
                                                                                                   const GALGAS_location & in_mOperatorLocation,
                                                                                                   const GALGAS_omnibusInfixOperator & in_mInfixOperator,
                                                                                                   const GALGAS_expressionAST & in_mRightExpression
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_omnibusInfixOperatorExpressionAST (in_mLeftExpression, in_mOperatorLocation, in_mInfixOperator, in_mRightExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_omnibusInfixOperatorExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_omnibusInfixOperatorExpressionAST::setProperty_mLeftExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_omnibusInfixOperatorExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_omnibusInfixOperatorExpressionAST::setProperty_mOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperatorExpressionAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusInfixOperator () ;
  }else{
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_omnibusInfixOperatorExpressionAST::setProperty_mInfixOperator (const GALGAS_omnibusInfixOperator & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_omnibusInfixOperatorExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_omnibusInfixOperatorExpressionAST::setProperty_mRightExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @omnibusInfixOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_omnibusInfixOperatorExpressionAST::cPtr_omnibusInfixOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                                                                const GALGAS_location & in_mOperatorLocation,
                                                                                const GALGAS_omnibusInfixOperator & in_mInfixOperator,
                                                                                const GALGAS_expressionAST & in_mRightExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mInfixOperator (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_omnibusInfixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST ;
}

void cPtr_omnibusInfixOperatorExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@omnibusInfixOperatorExpressionAST:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInfixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_omnibusInfixOperatorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_omnibusInfixOperatorExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mInfixOperator, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @omnibusInfixOperatorExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST ("omnibusInfixOperatorExpressionAST",
                                                                                         & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusInfixOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusInfixOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusInfixOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST GALGAS_omnibusInfixOperatorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorExpressionAST result ;
  const GALGAS_omnibusInfixOperatorExpressionAST * p = (const GALGAS_omnibusInfixOperatorExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_omnibusInfixOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_omnibusInfixOperatorExpressionAST_2D_weak::objectCompare (const GALGAS_omnibusInfixOperatorExpressionAST_2D_weak & inOperand) const {
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

GALGAS_omnibusInfixOperatorExpressionAST_2D_weak::GALGAS_omnibusInfixOperatorExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST_2D_weak & GALGAS_omnibusInfixOperatorExpressionAST_2D_weak::operator = (const GALGAS_omnibusInfixOperatorExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST_2D_weak::GALGAS_omnibusInfixOperatorExpressionAST_2D_weak (const GALGAS_omnibusInfixOperatorExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST_2D_weak GALGAS_omnibusInfixOperatorExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST GALGAS_omnibusInfixOperatorExpressionAST_2D_weak::bang_omnibusInfixOperatorExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_omnibusInfixOperatorExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusInfixOperatorExpressionAST) ;
      result = GALGAS_omnibusInfixOperatorExpressionAST ((cPtr_omnibusInfixOperatorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @omnibusInfixOperatorExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST_2D_weak ("omnibusInfixOperatorExpressionAST-weak",
                                                                                                 & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusInfixOperatorExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusInfixOperatorExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusInfixOperatorExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST_2D_weak GALGAS_omnibusInfixOperatorExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorExpressionAST_2D_weak result ;
  const GALGAS_omnibusInfixOperatorExpressionAST_2D_weak * p = (const GALGAS_omnibusInfixOperatorExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_omnibusInfixOperatorExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorEnumeration::GALGAS_compileTimePrefixOperatorEnumeration (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorEnumeration GALGAS_compileTimePrefixOperatorEnumeration::class_func_notOp (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimePrefixOperatorEnumeration result ;
  result.mEnum = kEnum_notOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorEnumeration GALGAS_compileTimePrefixOperatorEnumeration::class_func_minusOp (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimePrefixOperatorEnumeration result ;
  result.mEnum = kEnum_minusOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimePrefixOperatorEnumeration::optional_notOp () const {
  const bool ok = mEnum == kEnum_notOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimePrefixOperatorEnumeration::optional_minusOp () const {
  const bool ok = mEnum == kEnum_minusOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_compileTimePrefixOperatorEnumeration [3] = {
  "(not built)",
  "notOp",
  "minusOp"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimePrefixOperatorEnumeration::getter_isNotOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimePrefixOperatorEnumeration::getter_isMinusOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minusOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimePrefixOperatorEnumeration::description (String & ioString,
                                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @compileTimePrefixOperatorEnumeration: ") ;
  ioString.appendCString (gEnumNameArrayFor_compileTimePrefixOperatorEnumeration [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimePrefixOperatorEnumeration::objectCompare (const GALGAS_compileTimePrefixOperatorEnumeration & inOperand) const {
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
//     @compileTimePrefixOperatorEnumeration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorEnumeration ("compileTimePrefixOperatorEnumeration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimePrefixOperatorEnumeration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorEnumeration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimePrefixOperatorEnumeration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimePrefixOperatorEnumeration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorEnumeration GALGAS_compileTimePrefixOperatorEnumeration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimePrefixOperatorEnumeration result ;
  const GALGAS_compileTimePrefixOperatorEnumeration * p = (const GALGAS_compileTimePrefixOperatorEnumeration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimePrefixOperatorEnumeration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimePrefixOperatorEnumeration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@compileTimePrefixOperatorEnumeration string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_compileTimePrefixOperatorEnumeration & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_compileTimePrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_compileTimePrefixOperatorEnumeration::kNotBuilt:
    break ;
  case GALGAS_compileTimePrefixOperatorEnumeration::kEnum_notOp:
    {
      result_result = GALGAS_string ("not") ;
    }
    break ;
  case GALGAS_compileTimePrefixOperatorEnumeration::kEnum_minusOp:
    {
      result_result = GALGAS_string ("-") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@compileTimePrefixOperatorEnumeration prefixOperator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperator extensionGetter_prefixOperator (const GALGAS_compileTimePrefixOperatorEnumeration & inObject,
                                                      Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result_result ; // Returned variable
  const GALGAS_compileTimePrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_compileTimePrefixOperatorEnumeration::kNotBuilt:
    break ;
  case GALGAS_compileTimePrefixOperatorEnumeration::kEnum_notOp:
    {
      result_result = GALGAS_prefixOperator::class_func_notOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 23)) ;
    }
    break ;
  case GALGAS_compileTimePrefixOperatorEnumeration::kEnum_minusOp:
    {
      result_result = GALGAS_prefixOperator::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 24)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compiletimePrefixOperatorAST_2D_weak::objectCompare (const GALGAS_compiletimePrefixOperatorAST_2D_weak & inOperand) const {
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

GALGAS_compiletimePrefixOperatorAST_2D_weak::GALGAS_compiletimePrefixOperatorAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST_2D_weak & GALGAS_compiletimePrefixOperatorAST_2D_weak::operator = (const GALGAS_compiletimePrefixOperatorAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST_2D_weak::GALGAS_compiletimePrefixOperatorAST_2D_weak (const GALGAS_compiletimePrefixOperatorAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST_2D_weak GALGAS_compiletimePrefixOperatorAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compiletimePrefixOperatorAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST GALGAS_compiletimePrefixOperatorAST_2D_weak::bang_compiletimePrefixOperatorAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compiletimePrefixOperatorAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compiletimePrefixOperatorAST) ;
      result = GALGAS_compiletimePrefixOperatorAST ((cPtr_compiletimePrefixOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compiletimePrefixOperatorAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2D_weak ("compiletimePrefixOperatorAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compiletimePrefixOperatorAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compiletimePrefixOperatorAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compiletimePrefixOperatorAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimePrefixOperatorAST_2D_weak GALGAS_compiletimePrefixOperatorAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compiletimePrefixOperatorAST_2D_weak result ;
  const GALGAS_compiletimePrefixOperatorAST_2D_weak * p = (const GALGAS_compiletimePrefixOperatorAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compiletimePrefixOperatorAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimePrefixOperatorAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimePrefixOperatorUsage_2D_weak::objectCompare (const GALGAS_compileTimePrefixOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_compileTimePrefixOperatorUsage_2D_weak::GALGAS_compileTimePrefixOperatorUsage_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage_2D_weak & GALGAS_compileTimePrefixOperatorUsage_2D_weak::operator = (const GALGAS_compileTimePrefixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage_2D_weak::GALGAS_compileTimePrefixOperatorUsage_2D_weak (const GALGAS_compileTimePrefixOperatorUsage & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage_2D_weak GALGAS_compileTimePrefixOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimePrefixOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage GALGAS_compileTimePrefixOperatorUsage_2D_weak::bang_compileTimePrefixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimePrefixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimePrefixOperatorUsage) ;
      result = GALGAS_compileTimePrefixOperatorUsage ((cPtr_compileTimePrefixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimePrefixOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2D_weak ("compileTimePrefixOperatorUsage-weak",
                                                                                              & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimePrefixOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimePrefixOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimePrefixOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorUsage_2D_weak GALGAS_compileTimePrefixOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimePrefixOperatorUsage_2D_weak result ;
  const GALGAS_compileTimePrefixOperatorUsage_2D_weak * p = (const GALGAS_compileTimePrefixOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimePrefixOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimePrefixOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorEnumeration::GALGAS_llvmPrefixOperatorEnumeration (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorEnumeration GALGAS_llvmPrefixOperatorEnumeration::class_func_notOp (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = kEnum_notOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorEnumeration GALGAS_llvmPrefixOperatorEnumeration::class_func_bitWiseComplement (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = kEnum_bitWiseComplement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorEnumeration GALGAS_llvmPrefixOperatorEnumeration::class_func_minusOp (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = kEnum_minusOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorEnumeration GALGAS_llvmPrefixOperatorEnumeration::class_func_minusOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = kEnum_minusOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmPrefixOperatorEnumeration::optional_notOp () const {
  const bool ok = mEnum == kEnum_notOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmPrefixOperatorEnumeration::optional_bitWiseComplement () const {
  const bool ok = mEnum == kEnum_bitWiseComplement ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmPrefixOperatorEnumeration::optional_minusOp () const {
  const bool ok = mEnum == kEnum_minusOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmPrefixOperatorEnumeration::optional_minusOpNoOvf () const {
  const bool ok = mEnum == kEnum_minusOpNoOvf ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmPrefixOperatorEnumeration [5] = {
  "(not built)",
  "notOp",
  "bitWiseComplement",
  "minusOp",
  "minusOpNoOvf"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmPrefixOperatorEnumeration::getter_isNotOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmPrefixOperatorEnumeration::getter_isBitWiseComplement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseComplement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmPrefixOperatorEnumeration::getter_isMinusOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minusOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmPrefixOperatorEnumeration::getter_isMinusOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minusOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmPrefixOperatorEnumeration::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @llvmPrefixOperatorEnumeration: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmPrefixOperatorEnumeration [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmPrefixOperatorEnumeration::objectCompare (const GALGAS_llvmPrefixOperatorEnumeration & inOperand) const {
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
//     @llvmPrefixOperatorEnumeration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorEnumeration ("llvmPrefixOperatorEnumeration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmPrefixOperatorEnumeration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorEnumeration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmPrefixOperatorEnumeration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmPrefixOperatorEnumeration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorEnumeration GALGAS_llvmPrefixOperatorEnumeration::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorEnumeration result ;
  const GALGAS_llvmPrefixOperatorEnumeration * p = (const GALGAS_llvmPrefixOperatorEnumeration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmPrefixOperatorEnumeration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorEnumeration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@llvmPrefixOperatorEnumeration string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_llvmPrefixOperatorEnumeration & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_llvmPrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_llvmPrefixOperatorEnumeration::kNotBuilt:
    break ;
  case GALGAS_llvmPrefixOperatorEnumeration::kEnum_notOp:
    {
      result_result = GALGAS_string ("not") ;
    }
    break ;
  case GALGAS_llvmPrefixOperatorEnumeration::kEnum_minusOp:
    {
      result_result = GALGAS_string ("-") ;
    }
    break ;
  case GALGAS_llvmPrefixOperatorEnumeration::kEnum_minusOpNoOvf:
    {
      result_result = GALGAS_string ("-%") ;
    }
    break ;
  case GALGAS_llvmPrefixOperatorEnumeration::kEnum_bitWiseComplement:
    {
      result_result = GALGAS_string ("~") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@llvmPrefixOperatorEnumeration prefixOperator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperator extensionGetter_prefixOperator (const GALGAS_llvmPrefixOperatorEnumeration & inObject,
                                                      Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result_result ; // Returned variable
  const GALGAS_llvmPrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_llvmPrefixOperatorEnumeration::kNotBuilt:
    break ;
  case GALGAS_llvmPrefixOperatorEnumeration::kEnum_notOp:
    {
      result_result = GALGAS_prefixOperator::class_func_notOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 27)) ;
    }
    break ;
  case GALGAS_llvmPrefixOperatorEnumeration::kEnum_minusOp:
    {
      result_result = GALGAS_prefixOperator::class_func_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 28)) ;
    }
    break ;
  case GALGAS_llvmPrefixOperatorEnumeration::kEnum_minusOpNoOvf:
    {
      result_result = GALGAS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 29)) ;
    }
    break ;
  case GALGAS_llvmPrefixOperatorEnumeration::kEnum_bitWiseComplement:
    {
      result_result = GALGAS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 30)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmPrefixOperatorAST_2D_weak::objectCompare (const GALGAS_llvmPrefixOperatorAST_2D_weak & inOperand) const {
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

GALGAS_llvmPrefixOperatorAST_2D_weak::GALGAS_llvmPrefixOperatorAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST_2D_weak & GALGAS_llvmPrefixOperatorAST_2D_weak::operator = (const GALGAS_llvmPrefixOperatorAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST_2D_weak::GALGAS_llvmPrefixOperatorAST_2D_weak (const GALGAS_llvmPrefixOperatorAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST_2D_weak GALGAS_llvmPrefixOperatorAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST GALGAS_llvmPrefixOperatorAST_2D_weak::bang_llvmPrefixOperatorAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmPrefixOperatorAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmPrefixOperatorAST) ;
      result = GALGAS_llvmPrefixOperatorAST ((cPtr_llvmPrefixOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmPrefixOperatorAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2D_weak ("llvmPrefixOperatorAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmPrefixOperatorAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmPrefixOperatorAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmPrefixOperatorAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorAST_2D_weak GALGAS_llvmPrefixOperatorAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorAST_2D_weak result ;
  const GALGAS_llvmPrefixOperatorAST_2D_weak * p = (const GALGAS_llvmPrefixOperatorAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmPrefixOperatorAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmPrefixOperatorUsage_2D_weak::objectCompare (const GALGAS_llvmPrefixOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_llvmPrefixOperatorUsage_2D_weak::GALGAS_llvmPrefixOperatorUsage_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage_2D_weak & GALGAS_llvmPrefixOperatorUsage_2D_weak::operator = (const GALGAS_llvmPrefixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage_2D_weak::GALGAS_llvmPrefixOperatorUsage_2D_weak (const GALGAS_llvmPrefixOperatorUsage & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage_2D_weak GALGAS_llvmPrefixOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage GALGAS_llvmPrefixOperatorUsage_2D_weak::bang_llvmPrefixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmPrefixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmPrefixOperatorUsage) ;
      result = GALGAS_llvmPrefixOperatorUsage ((cPtr_llvmPrefixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmPrefixOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2D_weak ("llvmPrefixOperatorUsage-weak",
                                                                                       & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmPrefixOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmPrefixOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmPrefixOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmPrefixOperatorUsage_2D_weak GALGAS_llvmPrefixOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmPrefixOperatorUsage_2D_weak result ;
  const GALGAS_llvmPrefixOperatorUsage_2D_weak * p = (const GALGAS_llvmPrefixOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmPrefixOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_prefixOperatorRoutineIR_2D_weak::objectCompare (const GALGAS_prefixOperatorRoutineIR_2D_weak & inOperand) const {
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

GALGAS_prefixOperatorRoutineIR_2D_weak::GALGAS_prefixOperatorRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR_2D_weak & GALGAS_prefixOperatorRoutineIR_2D_weak::operator = (const GALGAS_prefixOperatorRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR_2D_weak::GALGAS_prefixOperatorRoutineIR_2D_weak (const GALGAS_prefixOperatorRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR_2D_weak GALGAS_prefixOperatorRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_prefixOperatorRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR GALGAS_prefixOperatorRoutineIR_2D_weak::bang_prefixOperatorRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefixOperatorRoutineIR) ;
      result = GALGAS_prefixOperatorRoutineIR ((cPtr_prefixOperatorRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2D_weak ("prefixOperatorRoutineIR-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorRoutineIR_2D_weak GALGAS_prefixOperatorRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorRoutineIR_2D_weak result ;
  const GALGAS_prefixOperatorRoutineIR_2D_weak * p = (const GALGAS_prefixOperatorRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperatorRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@prefixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_prefixOperatorUsage * inObject,
                                       const GALGAS_objectIR constin_inReceiverOperand,
                                       const GALGAS_location constin_inOperatorLocation,
                                       const GALGAS_omnibusType constin_inResultType,
                                       const GALGAS_bool constin_inDoNotGeneratePanicCode,
                                       const GALGAS_bool constin_inSafeMode,
                                       GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                       GALGAS_objectIR & out_outResultValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResultValue.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_prefixOperatorUsage) ;
    inObject->method_generateCode (constin_inReceiverOperand, constin_inOperatorLocation, constin_inResultType, constin_inDoNotGeneratePanicCode, constin_inSafeMode, io_ioTemporaries, io_ioInstructionGenerationList, out_outResultValue, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@prefixOperatorMap generatePrefixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generatePrefixOperatorCode (const GALGAS_prefixOperatorMap inObject,
                                                 const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                 const GALGAS_prefixOperator constinArgument_inPrefixOperator,
                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                 const GALGAS_bool constinArgument_inSafeMode,
                                                 const GALGAS_bool constinArgument_inDoNotGeneratePanicCode,
                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                 GALGAS_objectIR & outArgument_outResultValue,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultValue.drop () ; // Release 'out' argument
  GALGAS_lstring var_key_2248 = function_prefixOperatorMapKey (extensionGetter_type (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 59)), constinArgument_inPrefixOperator, constinArgument_inOperatorLocation, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 59)) ;
  GALGAS_omnibusType var_resultType_2373 ;
  GALGAS_prefixOperatorUsage var_operatorUsage_2389 ;
  const GALGAS_prefixOperatorMap temp_0 = inObject ;
  GALGAS_omnibusType joker_2364_1 ; // Joker input parameter
  temp_0.method_searchKey (var_key_2248, joker_2364_1, var_resultType_2373, var_operatorUsage_2389, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 60)) ;
  callExtensionMethod_generateCode ((cPtr_prefixOperatorUsage *) var_operatorUsage_2389.ptr (), constinArgument_inReceiverOperand, constinArgument_inOperatorLocation, var_resultType_2373, constinArgument_inDoNotGeneratePanicCode, constinArgument_inSafeMode, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 61)) ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperator::GALGAS_prefixOperator (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperator GALGAS_prefixOperator::class_func_notOp (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_notOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperator GALGAS_prefixOperator::class_func_minusOp (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_minusOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperator GALGAS_prefixOperator::class_func_bitWiseComplement (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_bitWiseComplement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperator GALGAS_prefixOperator::class_func_minusNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_minusNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_prefixOperator::optional_notOp () const {
  const bool ok = mEnum == kEnum_notOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_prefixOperator::optional_minusOp () const {
  const bool ok = mEnum == kEnum_minusOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_prefixOperator::optional_bitWiseComplement () const {
  const bool ok = mEnum == kEnum_bitWiseComplement ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_prefixOperator::optional_minusNoOvf () const {
  const bool ok = mEnum == kEnum_minusNoOvf ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_prefixOperator [5] = {
  "(not built)",
  "notOp",
  "minusOp",
  "bitWiseComplement",
  "minusNoOvf"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_prefixOperator::getter_isNotOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_prefixOperator::getter_isMinusOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minusOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_prefixOperator::getter_isBitWiseComplement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseComplement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_prefixOperator::getter_isMinusNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minusNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperator::description (String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @prefixOperator: ") ;
  ioString.appendCString (gEnumNameArrayFor_prefixOperator [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_prefixOperator::objectCompare (const GALGAS_prefixOperator & inOperand) const {
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
//     @prefixOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperator ("prefixOperator",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperator GALGAS_prefixOperator::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  const GALGAS_prefixOperator * p = (const GALGAS_prefixOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefixOperatorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorExpressionAST::cPtr_prefixOperatorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mOp (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefixOperatorExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mOp.printNonNullClassInstanceProperties ("mOp") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_prefixOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOp.objectCompare (p->mProperty_mOp) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_prefixOperatorExpressionAST::objectCompare (const GALGAS_prefixOperatorExpressionAST & inOperand) const {
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

GALGAS_prefixOperatorExpressionAST::GALGAS_prefixOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST GALGAS_prefixOperatorExpressionAST::
init_21__21__21_ (const GALGAS_location & in_mOperatorLocation,
                  const GALGAS_prefixOperator & in_mOp,
                  const GALGAS_expressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_prefixOperatorExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_prefixOperatorExpressionAST (inCompiler COMMA_THERE)) ;
  object->prefixOperatorExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mOp, in_mExpression, inCompiler) ;
  const GALGAS_prefixOperatorExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::
prefixOperatorExpressionAST_init_21__21__21_ (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_prefixOperator & in_mOp,
                                              const GALGAS_expressionAST & in_mExpression,
                                              Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mOp = in_mOp ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST::GALGAS_prefixOperatorExpressionAST (const cPtr_prefixOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST GALGAS_prefixOperatorExpressionAST::class_func_new (const GALGAS_location & in_mOperatorLocation,
                                                                                       const GALGAS_prefixOperator & in_mOp,
                                                                                       const GALGAS_expressionAST & in_mExpression
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_prefixOperatorExpressionAST (in_mOperatorLocation, in_mOp, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_prefixOperatorExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorExpressionAST::setProperty_mOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperator GALGAS_prefixOperatorExpressionAST::readProperty_mOp (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_prefixOperator () ;
  }else{
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    return p->mProperty_mOp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorExpressionAST::setProperty_mOp (const GALGAS_prefixOperator & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    p->mProperty_mOp = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_prefixOperatorExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorExpressionAST::setProperty_mExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefixOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorExpressionAST::cPtr_prefixOperatorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                    const GALGAS_prefixOperator & in_mOp,
                                                                    const GALGAS_expressionAST & in_mExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mOperatorLocation (),
mProperty_mOp (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mOp = in_mOp ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;
}

void cPtr_prefixOperatorExpressionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@prefixOperatorExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOp.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefixOperatorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefixOperatorExpressionAST (mProperty_mOperatorLocation, mProperty_mOp, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ("prefixOperatorExpressionAST",
                                                                                   & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST GALGAS_prefixOperatorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionAST result ;
  const GALGAS_prefixOperatorExpressionAST * p = (const GALGAS_prefixOperatorExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

//--------------------------------------------------------------------------------------------------

GALGAS_instructionAST::GALGAS_instructionAST (const cPtr_instructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instructionAST) ;
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

void GALGAS_instructionAST::setProperty_mInstructionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_instructionAST * p = (cPtr_instructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_instructionAST) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @instructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_instructionAST::cPtr_instructionAST (const GALGAS_location & in_mInstructionLocation
                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
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
  cEnumerator_instructionListAST enumerator_2446 (temp_0, EnumerationOrder::up) ;
  while (enumerator_2446.hasCurrentObject ()) {
    callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((cPtr_instructionAST *) enumerator_2446.current_mInstruction (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 56)) ;
    enumerator_2446.gotoNextObject () ;
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
  cEnumerator_instructionListAST enumerator_4326 (temp_0, EnumerationOrder::up) ;
  while (enumerator_4326.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_4326.current_mInstruction (HERE).readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 99)) ;
    }
    callExtensionMethod_instructionSemanticAnalysis ((cPtr_instructionAST *) enumerator_4326.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 100)) ;
    enumerator_4326.gotoNextObject () ;
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
  cEnumerator_instructionListAST enumerator_5507 (temp_0, EnumerationOrder::up) ;
  while (enumerator_5507.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_5507.current_mInstruction (HERE).readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 130)) ;
    }
    callExtensionMethod_instructionSemanticAnalysis ((cPtr_instructionAST *) enumerator_5507.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 131)) ;
    enumerator_5507.gotoNextObject () ;
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
  cEnumerator_instructionListIR enumerator_6522 (temp_0, EnumerationOrder::up) ;
  while (enumerator_6522.hasCurrentObject ()) {
    callExtensionMethod_llvmInstructionCode ((cPtr_abstractInstructionIR *) enumerator_6522.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 155)) ;
    enumerator_6522.gotoNextObject () ;
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

GALGAS_assertInstructionAST GALGAS_assertInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_expressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_assertInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_assertInstructionAST (inCompiler COMMA_THERE)) ;
  object->assertInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GALGAS_assertInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionAST::
assertInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_expressionAST & in_mExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST::GALGAS_assertInstructionAST (const cPtr_assertInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST GALGAS_assertInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                         const GALGAS_expressionAST & in_mExpression
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_assertInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
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

void GALGAS_assertInstructionAST::setProperty_mExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionAST * p = (cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assertInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionAST::cPtr_assertInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_expressionAST & in_mExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
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

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::
init_21__21__21_ (const GALGAS_location & in_mAssertInstructionLocation,
                  const GALGAS_instructionListIR & in_mInstructionList,
                  const GALGAS_objectIR & in_mExpressionValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_assertInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_assertInstructionIR (inCompiler COMMA_THERE)) ;
  object->assertInstructionIR_init_21__21__21_ (in_mAssertInstructionLocation, in_mInstructionList, in_mExpressionValue, inCompiler) ;
  const GALGAS_assertInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::
assertInstructionIR_init_21__21__21_ (const GALGAS_location & in_mAssertInstructionLocation,
                                      const GALGAS_instructionListIR & in_mInstructionList,
                                      const GALGAS_objectIR & in_mExpressionValue,
                                      Compiler * /* inCompiler */) {
  mProperty_mAssertInstructionLocation = in_mAssertInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mExpressionValue = in_mExpressionValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR::GALGAS_assertInstructionIR (const cPtr_assertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::class_func_new (const GALGAS_location & in_mAssertInstructionLocation,
                                                                       const GALGAS_instructionListIR & in_mInstructionList,
                                                                       const GALGAS_objectIR & in_mExpressionValue
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_assertInstructionIR (in_mAssertInstructionLocation, in_mInstructionList, in_mExpressionValue COMMA_THERE)) ;
  return result ;
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

void GALGAS_assertInstructionIR::setProperty_mAssertInstructionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mAssertInstructionLocation = inValue ;
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

void GALGAS_assertInstructionIR::setProperty_mInstructionList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mInstructionList = inValue ;
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

void GALGAS_assertInstructionIR::setProperty_mExpressionValue (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mExpressionValue = inValue ;
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
mProperty_mAssertInstructionLocation (),
mProperty_mInstructionList (),
mProperty_mExpressionValue () {
  mProperty_mAssertInstructionLocation = in_mAssertInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mExpressionValue = in_mExpressionValue ;
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

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_sliceAssignmentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::enterElement (const GALGAS_sliceAssignmentListAST_2D_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_sliceAssignmentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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

GALGAS_bitbandInstructionIR GALGAS_bitbandInstructionIR::
init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mRegisterAddressLLVMname,
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
  object->bitbandInstructionIR_init_21__21__21__21__21__21__21_ (in_mRegisterAddressLLVMname, in_mBitExpressionOperand, in_mSourceExpressionOperand, in_mBitbandRegisterBaseAddress, in_mBitbandRegisterRelocationAddress, in_mBitbandRegisterOffsetMultiplier, in_mBitbandRegisterBitMultiplier, inCompiler) ;
  const GALGAS_bitbandInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionIR::
bitbandInstructionIR_init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mRegisterAddressLLVMname,
                                                       const GALGAS_objectIR & in_mBitExpressionOperand,
                                                       const GALGAS_objectIR & in_mSourceExpressionOperand,
                                                       const GALGAS_bigint & in_mBitbandRegisterBaseAddress,
                                                       const GALGAS_bigint & in_mBitbandRegisterRelocationAddress,
                                                       const GALGAS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                       const GALGAS_bigint & in_mBitbandRegisterBitMultiplier,
                                                       Compiler * /* inCompiler */) {
  mProperty_mRegisterAddressLLVMname = in_mRegisterAddressLLVMname ;
  mProperty_mBitExpressionOperand = in_mBitExpressionOperand ;
  mProperty_mSourceExpressionOperand = in_mSourceExpressionOperand ;
  mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR::GALGAS_bitbandInstructionIR (const cPtr_bitbandInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR GALGAS_bitbandInstructionIR::class_func_new (const GALGAS_string & in_mRegisterAddressLLVMname,
                                                                         const GALGAS_objectIR & in_mBitExpressionOperand,
                                                                         const GALGAS_objectIR & in_mSourceExpressionOperand,
                                                                         const GALGAS_bigint & in_mBitbandRegisterBaseAddress,
                                                                         const GALGAS_bigint & in_mBitbandRegisterRelocationAddress,
                                                                         const GALGAS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                                         const GALGAS_bigint & in_mBitbandRegisterBitMultiplier
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_bitbandInstructionIR (in_mRegisterAddressLLVMname, in_mBitExpressionOperand, in_mSourceExpressionOperand, in_mBitbandRegisterBaseAddress, in_mBitbandRegisterRelocationAddress, in_mBitbandRegisterOffsetMultiplier, in_mBitbandRegisterBitMultiplier COMMA_THERE)) ;
  return result ;
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

void GALGAS_bitbandInstructionIR::setProperty_mRegisterAddressLLVMname (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mRegisterAddressLLVMname = inValue ;
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

void GALGAS_bitbandInstructionIR::setProperty_mBitExpressionOperand (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitExpressionOperand = inValue ;
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

void GALGAS_bitbandInstructionIR::setProperty_mSourceExpressionOperand (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mSourceExpressionOperand = inValue ;
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

void GALGAS_bitbandInstructionIR::setProperty_mBitbandRegisterBaseAddress (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterBaseAddress = inValue ;
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

void GALGAS_bitbandInstructionIR::setProperty_mBitbandRegisterRelocationAddress (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterRelocationAddress = inValue ;
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

void GALGAS_bitbandInstructionIR::setProperty_mBitbandRegisterOffsetMultiplier (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterOffsetMultiplier = inValue ;
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

void GALGAS_bitbandInstructionIR::setProperty_mBitbandRegisterBitMultiplier (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterBitMultiplier = inValue ;
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
mProperty_mRegisterAddressLLVMname (),
mProperty_mBitExpressionOperand (),
mProperty_mSourceExpressionOperand (),
mProperty_mBitbandRegisterBaseAddress (),
mProperty_mBitbandRegisterRelocationAddress (),
mProperty_mBitbandRegisterOffsetMultiplier (),
mProperty_mBitbandRegisterBitMultiplier () {
  mProperty_mRegisterAddressLLVMname = in_mRegisterAddressLLVMname ;
  mProperty_mBitExpressionOperand = in_mBitExpressionOperand ;
  mProperty_mSourceExpressionOperand = in_mSourceExpressionOperand ;
  mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
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
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_3327 = (const cEnumAssociatedValues_LValueOperandAST_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_3182_name = extractPtr_3327->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_3205_next = extractPtr_3327->mAssociatedValue1 ;
      ioArgument_ioExpressionAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::class_func_property (extractedValue_3182_name  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93)) ;
      extensionMethod_buildExpressionAccessList (extractedValue_3205_next, ioArgument_ioExpressionAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 94)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_3629 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_3364_index = extractPtr_3629->mAssociatedValue0 ;
      const GALGAS_location extractedValue_3380_endOfIndex = extractPtr_3629->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_3397_checkIndexExpression = extractPtr_3629->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_3436_next = extractPtr_3629->mAssociatedValue3 ;
      ioArgument_ioExpressionAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::class_func_arrayAccess (extractedValue_3364_index, extractedValue_3380_endOfIndex, extractedValue_3397_checkIndexExpression  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 96))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 96)) ;
      extensionMethod_buildExpressionAccessList (extractedValue_3436_next, ioArgument_ioExpressionAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 97)) ;
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

GALGAS_instructionNOP GALGAS_instructionNOP::
init_21_ (const GALGAS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_instructionNOP * object = nullptr ;
  macroMyNew (object, cPtr_instructionNOP (inCompiler COMMA_THERE)) ;
  object->instructionNOP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GALGAS_instructionNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_instructionNOP::
instructionNOP_init_21_ (const GALGAS_location & in_mInstructionLocation,
                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP::GALGAS_instructionNOP (const cPtr_instructionNOP * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instructionNOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP GALGAS_instructionNOP::class_func_new (const GALGAS_location & in_mInstructionLocation
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_instructionNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_instructionNOP (in_mInstructionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @instructionNOP class
//--------------------------------------------------------------------------------------------------

cPtr_instructionNOP::cPtr_instructionNOP (const GALGAS_location & in_mInstructionLocation
                                          COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
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

GALGAS_panicInstructionAST GALGAS_panicInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_expressionAST & in_mCodeExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_panicInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_panicInstructionAST (inCompiler COMMA_THERE)) ;
  object->panicInstructionAST_init_21__21_ (in_mInstructionLocation, in_mCodeExpression, inCompiler) ;
  const GALGAS_panicInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionAST::
panicInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_expressionAST & in_mCodeExpression,
                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCodeExpression = in_mCodeExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST::GALGAS_panicInstructionAST (const cPtr_panicInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST GALGAS_panicInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_expressionAST & in_mCodeExpression
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_panicInstructionAST (in_mInstructionLocation, in_mCodeExpression COMMA_THERE)) ;
  return result ;
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

void GALGAS_panicInstructionAST::setProperty_mCodeExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    p->mProperty_mCodeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionAST::cPtr_panicInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_expressionAST & in_mCodeExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCodeExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCodeExpression = in_mCodeExpression ;
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

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::
init_21__21_ (const GALGAS_location & in_mThrowLocation,
              const GALGAS_bigint & in_mPanicCode,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_panicInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_panicInstructionIR (inCompiler COMMA_THERE)) ;
  object->panicInstructionIR_init_21__21_ (in_mThrowLocation, in_mPanicCode, inCompiler) ;
  const GALGAS_panicInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionIR::
panicInstructionIR_init_21__21_ (const GALGAS_location & in_mThrowLocation,
                                 const GALGAS_bigint & in_mPanicCode,
                                 Compiler * /* inCompiler */) {
  mProperty_mThrowLocation = in_mThrowLocation ;
  mProperty_mPanicCode = in_mPanicCode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR::GALGAS_panicInstructionIR (const cPtr_panicInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::class_func_new (const GALGAS_location & in_mThrowLocation,
                                                                     const GALGAS_bigint & in_mPanicCode
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_panicInstructionIR (in_mThrowLocation, in_mPanicCode COMMA_THERE)) ;
  return result ;
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

void GALGAS_panicInstructionIR::setProperty_mThrowLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    p->mProperty_mThrowLocation = inValue ;
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

void GALGAS_panicInstructionIR::setProperty_mPanicCode (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    p->mProperty_mPanicCode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionIR::cPtr_panicInstructionIR (const GALGAS_location & in_mThrowLocation,
                                                  const GALGAS_bigint & in_mPanicCode
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mThrowLocation (),
mProperty_mPanicCode () {
  mProperty_mThrowLocation = in_mThrowLocation ;
  mProperty_mPanicCode = in_mPanicCode ;
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

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
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
  object->ifInstructionAST_init_21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mTestExpression, in_mTestExpressionEndLocation, in_mStaticIfExpression, in_mThenInstructionList, in_mEndOfThenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, in_mEndOf_5F_if_5F_instruction, inCompiler) ;
  const GALGAS_ifInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::
ifInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_expressionAST & in_mTestExpression,
                                                           const GALGAS_location & in_mTestExpressionEndLocation,
                                                           const GALGAS_bool & in_mStaticIfExpression,
                                                           const GALGAS_instructionListAST & in_mThenInstructionList,
                                                           const GALGAS_location & in_mEndOfThenInstructionList,
                                                           const GALGAS_instructionListAST & in_mElseInstructionList,
                                                           const GALGAS_location & in_mEndOfElseInstructionList,
                                                           const GALGAS_location & in_mEndOf_5F_if_5F_instruction,
                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTestExpression = in_mTestExpression ;
  mProperty_mTestExpressionEndLocation = in_mTestExpressionEndLocation ;
  mProperty_mStaticIfExpression = in_mStaticIfExpression ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mEndOfThenInstructionList = in_mEndOfThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                 const GALGAS_expressionAST & in_mTestExpression,
                                                                 const GALGAS_location & in_mTestExpressionEndLocation,
                                                                 const GALGAS_bool & in_mStaticIfExpression,
                                                                 const GALGAS_instructionListAST & in_mThenInstructionList,
                                                                 const GALGAS_location & in_mEndOfThenInstructionList,
                                                                 const GALGAS_instructionListAST & in_mElseInstructionList,
                                                                 const GALGAS_location & in_mEndOfElseInstructionList,
                                                                 const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (in_mInstructionLocation, in_mTestExpression, in_mTestExpressionEndLocation, in_mStaticIfExpression, in_mThenInstructionList, in_mEndOfThenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, in_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return result ;
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

void GALGAS_ifInstructionAST::setProperty_mTestExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mTestExpression = inValue ;
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

void GALGAS_ifInstructionAST::setProperty_mTestExpressionEndLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mTestExpressionEndLocation = inValue ;
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

void GALGAS_ifInstructionAST::setProperty_mStaticIfExpression (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mStaticIfExpression = inValue ;
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

void GALGAS_ifInstructionAST::setProperty_mThenInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mThenInstructionList = inValue ;
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

void GALGAS_ifInstructionAST::setProperty_mEndOfThenInstructionList (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOfThenInstructionList = inValue ;
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

void GALGAS_ifInstructionAST::setProperty_mElseInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mElseInstructionList = inValue ;
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

void GALGAS_ifInstructionAST::setProperty_mEndOfElseInstructionList (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOfElseInstructionList = inValue ;
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

void GALGAS_ifInstructionAST::setProperty_mEndOf_5F_if_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOf_5F_if_5F_instruction = inValue ;
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
mProperty_mTestExpression (),
mProperty_mTestExpressionEndLocation (),
mProperty_mStaticIfExpression (),
mProperty_mThenInstructionList (),
mProperty_mEndOfThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTestExpression = in_mTestExpression ;
  mProperty_mTestExpressionEndLocation = in_mTestExpressionEndLocation ;
  mProperty_mStaticIfExpression = in_mStaticIfExpression ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mEndOfThenInstructionList = in_mEndOfThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
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

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::
init_21__21__21__21_ (const GALGAS_string & in_mLLVMTestName,
                      const GALGAS_location & in_mLocation,
                      const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                      const GALGAS_instructionListIR & in_mElseInstructionGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionIR (inCompiler COMMA_THERE)) ;
  object->ifInstructionIR_init_21__21__21__21_ (in_mLLVMTestName, in_mLocation, in_mThenInstructionGenerationList, in_mElseInstructionGenerationList, inCompiler) ;
  const GALGAS_ifInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::
ifInstructionIR_init_21__21__21__21_ (const GALGAS_string & in_mLLVMTestName,
                                      const GALGAS_location & in_mLocation,
                                      const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                      const GALGAS_instructionListIR & in_mElseInstructionGenerationList,
                                      Compiler * /* inCompiler */) {
  mProperty_mLLVMTestName = in_mLLVMTestName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mThenInstructionGenerationList = in_mThenInstructionGenerationList ;
  mProperty_mElseInstructionGenerationList = in_mElseInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR::GALGAS_ifInstructionIR (const cPtr_ifInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::class_func_new (const GALGAS_string & in_mLLVMTestName,
                                                               const GALGAS_location & in_mLocation,
                                                               const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                                               const GALGAS_instructionListIR & in_mElseInstructionGenerationList
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionIR (in_mLLVMTestName, in_mLocation, in_mThenInstructionGenerationList, in_mElseInstructionGenerationList COMMA_THERE)) ;
  return result ;
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

void GALGAS_ifInstructionIR::setProperty_mLLVMTestName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mLLVMTestName = inValue ;
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

void GALGAS_ifInstructionIR::setProperty_mLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mLocation = inValue ;
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

void GALGAS_ifInstructionIR::setProperty_mThenInstructionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mThenInstructionGenerationList = inValue ;
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

void GALGAS_ifInstructionIR::setProperty_mElseInstructionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mElseInstructionGenerationList = inValue ;
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
mProperty_mLLVMTestName (),
mProperty_mLocation (),
mProperty_mThenInstructionGenerationList (),
mProperty_mElseInstructionGenerationList () {
  mProperty_mLLVMTestName = in_mLLVMTestName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mThenInstructionGenerationList = in_mThenInstructionGenerationList ;
  mProperty_mElseInstructionGenerationList = in_mElseInstructionGenerationList ;
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

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                  const GALGAS_location & in_mEndOf_5F_on_5F_instruction,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_syncInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_syncInstructionAST (inCompiler COMMA_THERE)) ;
  object->syncInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mBranchList, in_mEndOf_5F_on_5F_instruction, inCompiler) ;
  const GALGAS_syncInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionAST::
syncInstructionAST_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                                     const GALGAS_location & in_mEndOf_5F_on_5F_instruction,
                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBranchList = in_mBranchList ;
  mProperty_mEndOf_5F_on_5F_instruction = in_mEndOf_5F_on_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST::GALGAS_syncInstructionAST (const cPtr_syncInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                                                                     const GALGAS_location & in_mEndOf_5F_on_5F_instruction
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syncInstructionAST (in_mInstructionLocation, in_mBranchList, in_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  return result ;
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

void GALGAS_syncInstructionAST::setProperty_mBranchList (const GALGAS_syncInstructionBranchListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    p->mProperty_mBranchList = inValue ;
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

void GALGAS_syncInstructionAST::setProperty_mEndOf_5F_on_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    p->mProperty_mEndOf_5F_on_5F_instruction = inValue ;
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
mProperty_mBranchList (),
mProperty_mEndOf_5F_on_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBranchList = in_mBranchList ;
  mProperty_mEndOf_5F_on_5F_instruction = in_mEndOf_5F_on_5F_instruction ;
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

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::enterElement (const GALGAS_syncInstructionBranchListIR_2D_element & inValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_guardedCommandIRList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::enterElement (const GALGAS_guardedCommandIRList_2D_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_guardedCommandIRList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::
init_21__21_ (const GALGAS_location & in_mSelectInstructionLocation,
              const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syncInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_syncInstructionIR (inCompiler COMMA_THERE)) ;
  object->syncInstructionIR_init_21__21_ (in_mSelectInstructionLocation, in_mOnInstructionBranchListIR, inCompiler) ;
  const GALGAS_syncInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionIR::
syncInstructionIR_init_21__21_ (const GALGAS_location & in_mSelectInstructionLocation,
                                const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
                                Compiler * /* inCompiler */) {
  mProperty_mSelectInstructionLocation = in_mSelectInstructionLocation ;
  mProperty_mOnInstructionBranchListIR = in_mOnInstructionBranchListIR ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (const cPtr_syncInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::class_func_new (const GALGAS_location & in_mSelectInstructionLocation,
                                                                   const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_syncInstructionIR (in_mSelectInstructionLocation, in_mOnInstructionBranchListIR COMMA_THERE)) ;
  return result ;
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

void GALGAS_syncInstructionIR::setProperty_mSelectInstructionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    p->mProperty_mSelectInstructionLocation = inValue ;
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

void GALGAS_syncInstructionIR::setProperty_mOnInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    p->mProperty_mOnInstructionBranchListIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionIR::cPtr_syncInstructionIR (const GALGAS_location & in_mSelectInstructionLocation,
                                                const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mSelectInstructionLocation (),
mProperty_mOnInstructionBranchListIR () {
  mProperty_mSelectInstructionLocation = in_mSelectInstructionLocation ;
  mProperty_mOnInstructionBranchListIR = in_mOnInstructionBranchListIR ;
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

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_expressionAST & in_m_5F_while_5F_Expression,
                          const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                          const GALGAS_instructionListAST & in_mWhileInstructionList,
                          const GALGAS_location & in_mEndOf_5F_while_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_whileInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_whileInstructionAST (inCompiler COMMA_THERE)) ;
  object->whileInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_m_5F_while_5F_Expression, in_mEndOf_5F_test_5F_expression, in_mWhileInstructionList, in_mEndOf_5F_while_5F_instruction, inCompiler) ;
  const GALGAS_whileInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::
whileInstructionAST_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_expressionAST & in_m_5F_while_5F_Expression,
                                              const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                              const GALGAS_instructionListAST & in_mWhileInstructionList,
                                              const GALGAS_location & in_mEndOf_5F_while_5F_instruction,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_m_5F_while_5F_Expression = in_m_5F_while_5F_Expression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mEndOf_5F_while_5F_instruction = in_mEndOf_5F_while_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (const cPtr_whileInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_expressionAST & in_m_5F_while_5F_Expression,
                                                                       const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                                       const GALGAS_instructionListAST & in_mWhileInstructionList,
                                                                       const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_whileInstructionAST (in_mInstructionLocation, in_m_5F_while_5F_Expression, in_mEndOf_5F_test_5F_expression, in_mWhileInstructionList, in_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  return result ;
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

void GALGAS_whileInstructionAST::setProperty_m_5F_while_5F_Expression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_m_5F_while_5F_Expression = inValue ;
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

void GALGAS_whileInstructionAST::setProperty_mEndOf_5F_test_5F_expression (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mEndOf_5F_test_5F_expression = inValue ;
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

void GALGAS_whileInstructionAST::setProperty_mWhileInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mWhileInstructionList = inValue ;
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

void GALGAS_whileInstructionAST::setProperty_mEndOf_5F_while_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mEndOf_5F_while_5F_instruction = inValue ;
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
mProperty_m_5F_while_5F_Expression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mWhileInstructionList (),
mProperty_mEndOf_5F_while_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_m_5F_while_5F_Expression = in_m_5F_while_5F_Expression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mEndOf_5F_while_5F_instruction = in_mEndOf_5F_while_5F_instruction ;
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

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::
init_21__21__21__21_ (const GALGAS_uint & in_mLabelIndex,
                      const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                      const GALGAS_string & in_m_5F_while_5F_llvmName,
                      const GALGAS_instructionListIR & in_mInstructionGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_whileInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_whileInstructionIR (inCompiler COMMA_THERE)) ;
  object->whileInstructionIR_init_21__21__21__21_ (in_mLabelIndex, in_mTestInstructionGenerationList, in_m_5F_while_5F_llvmName, in_mInstructionGenerationList, inCompiler) ;
  const GALGAS_whileInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::
whileInstructionIR_init_21__21__21__21_ (const GALGAS_uint & in_mLabelIndex,
                                         const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                         const GALGAS_string & in_m_5F_while_5F_llvmName,
                                         const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                         Compiler * /* inCompiler */) {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mTestInstructionGenerationList = in_mTestInstructionGenerationList ;
  mProperty_m_5F_while_5F_llvmName = in_m_5F_while_5F_llvmName ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (const cPtr_whileInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::class_func_new (const GALGAS_uint & in_mLabelIndex,
                                                                     const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                                                     const GALGAS_string & in_m_5F_while_5F_llvmName,
                                                                     const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_whileInstructionIR (in_mLabelIndex, in_mTestInstructionGenerationList, in_m_5F_while_5F_llvmName, in_mInstructionGenerationList COMMA_THERE)) ;
  return result ;
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

void GALGAS_whileInstructionIR::setProperty_mLabelIndex (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mLabelIndex = inValue ;
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

void GALGAS_whileInstructionIR::setProperty_mTestInstructionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mTestInstructionGenerationList = inValue ;
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

void GALGAS_whileInstructionIR::setProperty_m_5F_while_5F_llvmName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_m_5F_while_5F_llvmName = inValue ;
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

void GALGAS_whileInstructionIR::setProperty_mInstructionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
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
mProperty_mLabelIndex (),
mProperty_mTestInstructionGenerationList (),
mProperty_m_5F_while_5F_llvmName (),
mProperty_mInstructionGenerationList () {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mTestInstructionGenerationList = in_mTestInstructionGenerationList ;
  mProperty_m_5F_while_5F_llvmName = in_m_5F_while_5F_llvmName ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
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

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_accessInAssignmentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::enterElement (const GALGAS_accessInAssignmentListAST_2D_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_3279 = (const cEnumAssociatedValues_LValueOperandAST_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_3151_name = extractPtr_3279->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_3174_next = extractPtr_3279->mAssociatedValue1 ;
      ioArgument_ioAccessList.addAssign_operation (GALGAS_accessInAssignmentAST::class_func_property (extractedValue_3151_name  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72)) ;
      extensionMethod_buildProcedureCallAccessList (extractedValue_3174_next, ioArgument_ioAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 73)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_3564 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_3316_index = extractPtr_3564->mAssociatedValue0 ;
      const GALGAS_location extractedValue_3332_endOfIndex = extractPtr_3564->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_3349_checkIndexExpression = extractPtr_3564->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_3388_next = extractPtr_3564->mAssociatedValue3 ;
      ioArgument_ioAccessList.addAssign_operation (GALGAS_accessInAssignmentAST::class_func_arrayAccess (extractedValue_3316_index, extractedValue_3332_endOfIndex, extractedValue_3349_checkIndexExpression  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75)) ;
      extensionMethod_buildProcedureCallAccessList (extractedValue_3388_next, ioArgument_ioAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 76)) ;
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

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_procEffectiveParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::enterElement (const GALGAS_procEffectiveParameterList_2D_element & inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_procEffectiveParameterList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_procCallEffectiveParameterListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::enterElement (const GALGAS_procCallEffectiveParameterListIR_2D_element & inValue,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::enterElement (const GALGAS_switchCaseListAST_2D_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_expressionAST & in_mSwitchExpression,
                          const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                          const GALGAS_switchCaseListAST & in_mSwitchCaseList,
                          const GALGAS_location & in_mEndOf_5F_switch_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionAST (inCompiler COMMA_THERE)) ;
  object->switchInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSwitchExpression, in_mEndOf_5F_test_5F_expression, in_mSwitchCaseList, in_mEndOf_5F_switch_5F_instruction, inCompiler) ;
  const GALGAS_switchInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::
switchInstructionAST_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_expressionAST & in_mSwitchExpression,
                                               const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                               const GALGAS_switchCaseListAST & in_mSwitchCaseList,
                                               const GALGAS_location & in_mEndOf_5F_switch_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mSwitchCaseList = in_mSwitchCaseList ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                         const GALGAS_expressionAST & in_mSwitchExpression,
                                                                         const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                                         const GALGAS_switchCaseListAST & in_mSwitchCaseList,
                                                                         const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (in_mInstructionLocation, in_mSwitchExpression, in_mEndOf_5F_test_5F_expression, in_mSwitchCaseList, in_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return result ;
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

void GALGAS_switchInstructionAST::setProperty_mSwitchExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchExpression = inValue ;
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

void GALGAS_switchInstructionAST::setProperty_mEndOf_5F_test_5F_expression (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_test_5F_expression = inValue ;
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

void GALGAS_switchInstructionAST::setProperty_mSwitchCaseList (const GALGAS_switchCaseListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchCaseList = inValue ;
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

void GALGAS_switchInstructionAST::setProperty_mEndOf_5F_switch_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_switch_5F_instruction = inValue ;
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
mProperty_mSwitchExpression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mSwitchCaseList (),
mProperty_mEndOf_5F_switch_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mSwitchCaseList = in_mSwitchCaseList ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
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

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::enterElement (const GALGAS_switchCaseListIR_2D_element & inValue,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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

GALGAS_switchInstructionIR GALGAS_switchInstructionIR::
init_21__21__21__21_ (const GALGAS_uint & in_mLabelIndex,
                      const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                      const GALGAS_objectIR & in_mSwitchExpression,
                      const GALGAS_switchCaseListIR & in_mCaseGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionIR (inCompiler COMMA_THERE)) ;
  object->switchInstructionIR_init_21__21__21__21_ (in_mLabelIndex, in_mSwitchExpressionGenerationList, in_mSwitchExpression, in_mCaseGenerationList, inCompiler) ;
  const GALGAS_switchInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionIR::
switchInstructionIR_init_21__21__21__21_ (const GALGAS_uint & in_mLabelIndex,
                                          const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                                          const GALGAS_objectIR & in_mSwitchExpression,
                                          const GALGAS_switchCaseListIR & in_mCaseGenerationList,
                                          Compiler * /* inCompiler */) {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mSwitchExpressionGenerationList = in_mSwitchExpressionGenerationList ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mCaseGenerationList = in_mCaseGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR::GALGAS_switchInstructionIR (const cPtr_switchInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR GALGAS_switchInstructionIR::class_func_new (const GALGAS_uint & in_mLabelIndex,
                                                                       const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                                                                       const GALGAS_objectIR & in_mSwitchExpression,
                                                                       const GALGAS_switchCaseListIR & in_mCaseGenerationList
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionIR (in_mLabelIndex, in_mSwitchExpressionGenerationList, in_mSwitchExpression, in_mCaseGenerationList COMMA_THERE)) ;
  return result ;
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

void GALGAS_switchInstructionIR::setProperty_mLabelIndex (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mLabelIndex = inValue ;
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

void GALGAS_switchInstructionIR::setProperty_mSwitchExpressionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mSwitchExpressionGenerationList = inValue ;
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

void GALGAS_switchInstructionIR::setProperty_mSwitchExpression (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mSwitchExpression = inValue ;
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

void GALGAS_switchInstructionIR::setProperty_mCaseGenerationList (const GALGAS_switchCaseListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mCaseGenerationList = inValue ;
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
mProperty_mLabelIndex (),
mProperty_mSwitchExpressionGenerationList (),
mProperty_mSwitchExpression (),
mProperty_mCaseGenerationList () {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mSwitchExpressionGenerationList = in_mSwitchExpressionGenerationList ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mCaseGenerationList = in_mCaseGenerationList ;
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

