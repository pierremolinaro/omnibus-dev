#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR referenceFromPossibleValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_referenceFromPossibleValue (GGS_instructionListIR & ioObject,
                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                 GGS_objectIR & ioArgument_ioObjectIR,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_performStore_296 ;
  switch (ioArgument_ioObjectIR.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      var_performStore_296 = GGS_bool (false) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_399__0 ;
      GGS_string extractedValue_401__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_reference (extractedValue_399__0, extractedValue_401__1) ;
      var_performStore_296 = GGS_bool (false) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_488__0 ;
      GGS_string extractedValue_490__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmNamedValue (extractedValue_488__0, extractedValue_490__1) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_543__0 ;
      GGS_bigint extractedValue_545__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_literalInteger (extractedValue_543__0, extractedValue_545__1) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_587__0 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_null (extractedValue_587__0) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_643__0 ;
      GGS_sortedOperandIRList extractedValue_645__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmStructureValue (extractedValue_643__0, extractedValue_645__1) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_705__0 ;
      GGS_operandIRList extractedValue_705__1 ;
      GGS_uint extractedValue_705__2 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_705__0, extractedValue_705__1, extractedValue_705__2) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_757__0 ;
      GGS_uint extractedValue_759__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_literalString (extractedValue_757__0, extractedValue_759__1) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_801__0 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_zero (extractedValue_801__0) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_868__0 ;
      GGS_uint extractedValue_868__1 ;
      GGS_objectIR extractedValue_868__2 ;
      GGS_uint extractedValue_868__3 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_868__0, extractedValue_868__1, extractedValue_868__2, extractedValue_868__3) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_936__0 ;
      GGS_uint extractedValue_936__1 ;
      GGS_objectIR extractedValue_936__2 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_936__0, extractedValue_936__1, extractedValue_936__2) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_997__0 ;
      GGS_operandIRList extractedValue_997__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_997__0, extractedValue_997__1) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_performStore_296.boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_string var_llvmTemporaryName_1123 = function_llvmNameForLocalVariable (GGS_string ("temp.").add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 39)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_llvmTemporaryName_1123, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 41)), GGS_bool (false)  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 41)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioObject, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 43)), var_llvmTemporaryName_1123, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 43)) ;
      }
      ioArgument_ioObjectIR = GGS_objectIR::class_func_reference (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 44)), var_llvmTemporaryName_1123  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 44)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetUniversalPropertyReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalPropertyReference (GGS_instructionListIR & ioObject,
                                                          const GGS_omnibusType constinArgument_inType,
                                                          const GGS_string constinArgument_inLLVMName,
                                                          const GGS_string constinArgument_inElementLLVMName,
                                                          const GGS_uint constinArgument_inPropertyIndex,
                                                          const GGS_string constinArgument_inPropertyName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_getUniversalPropertyReferenceIR::init_21__21__21__21__21_ (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementLLVMName, constinArgument_inPropertyIndex, constinArgument_inPropertyName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 9)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getUniversalPropertyReferenceIR_2E_weak::objectCompare (const GGS_getUniversalPropertyReferenceIR_2E_weak & inOperand) const {
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

GGS_getUniversalPropertyReferenceIR_2E_weak::GGS_getUniversalPropertyReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak & GGS_getUniversalPropertyReferenceIR_2E_weak::operator = (const GGS_getUniversalPropertyReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak::GGS_getUniversalPropertyReferenceIR_2E_weak (const GGS_getUniversalPropertyReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak GGS_getUniversalPropertyReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getUniversalPropertyReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR GGS_getUniversalPropertyReferenceIR_2E_weak::bang_getUniversalPropertyReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getUniversalPropertyReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getUniversalPropertyReferenceIR) ;
      result = GGS_getUniversalPropertyReferenceIR ((cPtr_getUniversalPropertyReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @getUniversalPropertyReferenceIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2E_weak ("getUniversalPropertyReferenceIR.weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getUniversalPropertyReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getUniversalPropertyReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getUniversalPropertyReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak GGS_getUniversalPropertyReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_getUniversalPropertyReferenceIR_2E_weak result ;
  const GGS_getUniversalPropertyReferenceIR_2E_weak * p = (const GGS_getUniversalPropertyReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getUniversalPropertyReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalPropertyReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetUniversalArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalArrayElementReference (GGS_instructionListIR & ioObject,
                                                              const GGS_omnibusType constinArgument_inType,
                                                              const GGS_string constinArgument_inLLVMName,
                                                              const GGS_omnibusType constinArgument_inElementType,
                                                              const GGS_string constinArgument_inElementLLVMName,
                                                              const GGS_objectIR constinArgument_inIndexIR,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_getUniversalArrayElementReferenceIR::init_21__21__21__21__21_ (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementType, constinArgument_inElementLLVMName, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 9)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getUniversalArrayElementReferenceIR_2E_weak::objectCompare (const GGS_getUniversalArrayElementReferenceIR_2E_weak & inOperand) const {
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

GGS_getUniversalArrayElementReferenceIR_2E_weak::GGS_getUniversalArrayElementReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak & GGS_getUniversalArrayElementReferenceIR_2E_weak::operator = (const GGS_getUniversalArrayElementReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak::GGS_getUniversalArrayElementReferenceIR_2E_weak (const GGS_getUniversalArrayElementReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak GGS_getUniversalArrayElementReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getUniversalArrayElementReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR GGS_getUniversalArrayElementReferenceIR_2E_weak::bang_getUniversalArrayElementReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getUniversalArrayElementReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getUniversalArrayElementReferenceIR) ;
      result = GGS_getUniversalArrayElementReferenceIR ((cPtr_getUniversalArrayElementReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @getUniversalArrayElementReferenceIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2E_weak ("getUniversalArrayElementReferenceIR.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getUniversalArrayElementReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getUniversalArrayElementReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getUniversalArrayElementReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak GGS_getUniversalArrayElementReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_getUniversalArrayElementReferenceIR_2E_weak result ;
  const GGS_getUniversalArrayElementReferenceIR_2E_weak * p = (const GGS_getUniversalArrayElementReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getUniversalArrayElementReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalArrayElementReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetComputedPropertyValue (GGS_instructionListIR & ioObject,
                                                     GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     const GGS_objectIR constinArgument_inReceiverIR,
                                                     const GGS_string constinArgument_inLLVMGetterName,
                                                     const GGS_omnibusType constinArgument_inResultType,
                                                     GGS_objectIR & outArgument_outResultValueIR,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultValueIR.drop () ; // Release 'out' argument
  GGS_string var_result_5F_llvmName_268 ;
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_result_5F_llvmName_268, inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 9)) ;
  }
  outArgument_outResultValueIR = GGS_objectIR::class_func_llvmNamedValue (constinArgument_inResultType, var_result_5F_llvmName_268  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 10)) ;
  ioObject.addAssign_operation (GGS_getComputedPropertyValueIR::init_21__21__21_ (constinArgument_inReceiverIR, constinArgument_inLLVMGetterName, outArgument_outResultValueIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 11)) ;
}


//--------------------------------------------------------------------------------------------------
// @getComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_getComputedPropertyValueIR::cPtr_getComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMGetterName (),
mProperty_mResultValueIR () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getComputedPropertyValueIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverIR.printNonNullClassInstanceProperties ("mReceiverIR") ;
    mProperty_mLLVMGetterName.printNonNullClassInstanceProperties ("mLLVMGetterName") ;
    mProperty_mResultValueIR.printNonNullClassInstanceProperties ("mResultValueIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getComputedPropertyValueIR::objectCompare (const GGS_getComputedPropertyValueIR & inOperand) const {
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

GGS_getComputedPropertyValueIR::GGS_getComputedPropertyValueIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getComputedPropertyValueIR GGS_getComputedPropertyValueIR::
init_21__21__21_ (const GGS_objectIR & in_mReceiverIR,
                  const GGS_string & in_mLLVMGetterName,
                  const GGS_objectIR & in_mResultValueIR,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_getComputedPropertyValueIR * object = nullptr ;
  macroMyNew (object, cPtr_getComputedPropertyValueIR (inCompiler COMMA_THERE)) ;
  object->getComputedPropertyValueIR_init_21__21__21_ (in_mReceiverIR, in_mLLVMGetterName, in_mResultValueIR, inCompiler) ;
  const GGS_getComputedPropertyValueIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getComputedPropertyValueIR::
getComputedPropertyValueIR_init_21__21__21_ (const GGS_objectIR & in_mReceiverIR,
                                             const GGS_string & in_mLLVMGetterName,
                                             const GGS_objectIR & in_mResultValueIR,
                                             Compiler * /* inCompiler */) {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMGetterName = in_mLLVMGetterName ;
  mProperty_mResultValueIR = in_mResultValueIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR::GGS_getComputedPropertyValueIR (const cPtr_getComputedPropertyValueIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getComputedPropertyValueIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR GGS_getComputedPropertyValueIR::class_func_new (const GGS_objectIR & in_mReceiverIR,
                                                                               const GGS_string & in_mLLVMGetterName,
                                                                               const GGS_objectIR & in_mResultValueIR
                                                                               COMMA_LOCATION_ARGS) {
  GGS_getComputedPropertyValueIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getComputedPropertyValueIR (in_mReceiverIR, in_mLLVMGetterName, in_mResultValueIR COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getComputedPropertyValueIR::readProperty_mReceiverIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mReceiverIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getComputedPropertyValueIR::setProperty_mReceiverIR (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mReceiverIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getComputedPropertyValueIR::readProperty_mLLVMGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mLLVMGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getComputedPropertyValueIR::setProperty_mLLVMGetterName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mLLVMGetterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getComputedPropertyValueIR::readProperty_mResultValueIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mResultValueIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getComputedPropertyValueIR::setProperty_mResultValueIR (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mResultValueIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

cPtr_getComputedPropertyValueIR::cPtr_getComputedPropertyValueIR (const GGS_objectIR & in_mReceiverIR,
                                                                  const GGS_string & in_mLLVMGetterName,
                                                                  const GGS_objectIR & in_mResultValueIR
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMGetterName (),
mProperty_mResultValueIR () {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMGetterName = in_mLLVMGetterName ;
  mProperty_mResultValueIR = in_mResultValueIR ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getComputedPropertyValueIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;
}

void cPtr_getComputedPropertyValueIR::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@getComputedPropertyValueIR:") ;
  mProperty_mReceiverIR.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultValueIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getComputedPropertyValueIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getComputedPropertyValueIR (mProperty_mReceiverIR, mProperty_mLLVMGetterName, mProperty_mResultValueIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @getComputedPropertyValueIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR ("getComputedPropertyValueIR",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getComputedPropertyValueIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getComputedPropertyValueIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getComputedPropertyValueIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR GGS_getComputedPropertyValueIR::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_getComputedPropertyValueIR result ;
  const GGS_getComputedPropertyValueIR * p = (const GGS_getComputedPropertyValueIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getComputedPropertyValueIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getComputedPropertyValueIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getComputedPropertyValueIR_2E_weak::objectCompare (const GGS_getComputedPropertyValueIR_2E_weak & inOperand) const {
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

GGS_getComputedPropertyValueIR_2E_weak::GGS_getComputedPropertyValueIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR_2E_weak & GGS_getComputedPropertyValueIR_2E_weak::operator = (const GGS_getComputedPropertyValueIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR_2E_weak::GGS_getComputedPropertyValueIR_2E_weak (const GGS_getComputedPropertyValueIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR_2E_weak GGS_getComputedPropertyValueIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getComputedPropertyValueIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR GGS_getComputedPropertyValueIR_2E_weak::bang_getComputedPropertyValueIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getComputedPropertyValueIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getComputedPropertyValueIR) ;
      result = GGS_getComputedPropertyValueIR ((cPtr_getComputedPropertyValueIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @getComputedPropertyValueIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2E_weak ("getComputedPropertyValueIR.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getComputedPropertyValueIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getComputedPropertyValueIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getComputedPropertyValueIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR_2E_weak GGS_getComputedPropertyValueIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_getComputedPropertyValueIR_2E_weak result ;
  const GGS_getComputedPropertyValueIR_2E_weak * p = (const GGS_getComputedPropertyValueIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getComputedPropertyValueIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getComputedPropertyValueIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreComputedPropertyValue (GGS_instructionListIR & ioObject,
                                                       const GGS_objectIR constinArgument_inReceiverIR,
                                                       const GGS_string constinArgument_inLLVMSetterName,
                                                       const GGS_objectIR constinArgument_inValueIR,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_storeComputedPropertyValueIR::init_21__21__21_ (constinArgument_inReceiverIR, constinArgument_inLLVMSetterName, constinArgument_inValueIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 7)) ;
}


//--------------------------------------------------------------------------------------------------
// @storeComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_storeComputedPropertyValueIR::cPtr_storeComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMSetterName (),
mProperty_mValueIR () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeComputedPropertyValueIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverIR.printNonNullClassInstanceProperties ("mReceiverIR") ;
    mProperty_mLLVMSetterName.printNonNullClassInstanceProperties ("mLLVMSetterName") ;
    mProperty_mValueIR.printNonNullClassInstanceProperties ("mValueIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeComputedPropertyValueIR::objectCompare (const GGS_storeComputedPropertyValueIR & inOperand) const {
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

GGS_storeComputedPropertyValueIR::GGS_storeComputedPropertyValueIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_storeComputedPropertyValueIR GGS_storeComputedPropertyValueIR::
init_21__21__21_ (const GGS_objectIR & in_mReceiverIR,
                  const GGS_string & in_mLLVMSetterName,
                  const GGS_objectIR & in_mValueIR,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeComputedPropertyValueIR * object = nullptr ;
  macroMyNew (object, cPtr_storeComputedPropertyValueIR (inCompiler COMMA_THERE)) ;
  object->storeComputedPropertyValueIR_init_21__21__21_ (in_mReceiverIR, in_mLLVMSetterName, in_mValueIR, inCompiler) ;
  const GGS_storeComputedPropertyValueIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeComputedPropertyValueIR::
storeComputedPropertyValueIR_init_21__21__21_ (const GGS_objectIR & in_mReceiverIR,
                                               const GGS_string & in_mLLVMSetterName,
                                               const GGS_objectIR & in_mValueIR,
                                               Compiler * /* inCompiler */) {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMSetterName = in_mLLVMSetterName ;
  mProperty_mValueIR = in_mValueIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR::GGS_storeComputedPropertyValueIR (const cPtr_storeComputedPropertyValueIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeComputedPropertyValueIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR GGS_storeComputedPropertyValueIR::class_func_new (const GGS_objectIR & in_mReceiverIR,
                                                                                   const GGS_string & in_mLLVMSetterName,
                                                                                   const GGS_objectIR & in_mValueIR
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_storeComputedPropertyValueIR result ;
  macroMyNew (result.mObjectPtr, cPtr_storeComputedPropertyValueIR (in_mReceiverIR, in_mLLVMSetterName, in_mValueIR COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_storeComputedPropertyValueIR::readProperty_mReceiverIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mReceiverIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeComputedPropertyValueIR::setProperty_mReceiverIR (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mReceiverIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_storeComputedPropertyValueIR::readProperty_mLLVMSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mLLVMSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeComputedPropertyValueIR::setProperty_mLLVMSetterName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mLLVMSetterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_storeComputedPropertyValueIR::readProperty_mValueIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mValueIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeComputedPropertyValueIR::setProperty_mValueIR (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mValueIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeComputedPropertyValueIR::cPtr_storeComputedPropertyValueIR (const GGS_objectIR & in_mReceiverIR,
                                                                      const GGS_string & in_mLLVMSetterName,
                                                                      const GGS_objectIR & in_mValueIR
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMSetterName (),
mProperty_mValueIR () {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMSetterName = in_mLLVMSetterName ;
  mProperty_mValueIR = in_mValueIR ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_storeComputedPropertyValueIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;
}

void cPtr_storeComputedPropertyValueIR::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@storeComputedPropertyValueIR:") ;
  mProperty_mReceiverIR.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValueIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeComputedPropertyValueIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeComputedPropertyValueIR (mProperty_mReceiverIR, mProperty_mLLVMSetterName, mProperty_mValueIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @storeComputedPropertyValueIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ("storeComputedPropertyValueIR",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_storeComputedPropertyValueIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeComputedPropertyValueIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeComputedPropertyValueIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR GGS_storeComputedPropertyValueIR::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_storeComputedPropertyValueIR result ;
  const GGS_storeComputedPropertyValueIR * p = (const GGS_storeComputedPropertyValueIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeComputedPropertyValueIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeComputedPropertyValueIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeComputedPropertyValueIR_2E_weak::objectCompare (const GGS_storeComputedPropertyValueIR_2E_weak & inOperand) const {
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

GGS_storeComputedPropertyValueIR_2E_weak::GGS_storeComputedPropertyValueIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR_2E_weak & GGS_storeComputedPropertyValueIR_2E_weak::operator = (const GGS_storeComputedPropertyValueIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR_2E_weak::GGS_storeComputedPropertyValueIR_2E_weak (const GGS_storeComputedPropertyValueIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR_2E_weak GGS_storeComputedPropertyValueIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_storeComputedPropertyValueIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR GGS_storeComputedPropertyValueIR_2E_weak::bang_storeComputedPropertyValueIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_storeComputedPropertyValueIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeComputedPropertyValueIR) ;
      result = GGS_storeComputedPropertyValueIR ((cPtr_storeComputedPropertyValueIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @storeComputedPropertyValueIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2E_weak ("storeComputedPropertyValueIR.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_storeComputedPropertyValueIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeComputedPropertyValueIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeComputedPropertyValueIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR_2E_weak GGS_storeComputedPropertyValueIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_storeComputedPropertyValueIR_2E_weak result ;
  const GGS_storeComputedPropertyValueIR_2E_weak * p = (const GGS_storeComputedPropertyValueIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeComputedPropertyValueIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeComputedPropertyValueIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetArrayElementReference (GGS_instructionListIR & ioObject,
                                                     GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     const GGS_objectIR constinArgument_inArrayIR,
                                                     const GGS_omnibusType constinArgument_inElementType,
                                                     const GGS_objectIR constinArgument_inIndexIR,
                                                     GGS_objectIR & outArgument_outElementPtr,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outElementPtr.drop () ; // Release 'out' argument
  GGS_string var_llvmName_313 ;
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_313, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 9)) ;
  }
  outArgument_outElementPtr = GGS_objectIR::class_func_reference (constinArgument_inElementType, var_llvmName_313  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 11)) ;
  ioObject.addAssign_operation (GGS_getArrayElementReferenceIR::init_21__21__21_ (outArgument_outElementPtr, constinArgument_inArrayIR, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 12)) ;
}


//--------------------------------------------------------------------------------------------------
// @getArrayElementReferenceIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_getArrayElementReferenceIR::cPtr_getArrayElementReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mArray (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getArrayElementReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mArray.printNonNullClassInstanceProperties ("mArray") ;
    mProperty_mIndex.printNonNullClassInstanceProperties ("mIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getArrayElementReferenceIR::objectCompare (const GGS_getArrayElementReferenceIR & inOperand) const {
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

GGS_getArrayElementReferenceIR::GGS_getArrayElementReferenceIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getArrayElementReferenceIR GGS_getArrayElementReferenceIR::
init_21__21__21_ (const GGS_objectIR & in_mTarget,
                  const GGS_objectIR & in_mArray,
                  const GGS_objectIR & in_mIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_getArrayElementReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_getArrayElementReferenceIR (inCompiler COMMA_THERE)) ;
  object->getArrayElementReferenceIR_init_21__21__21_ (in_mTarget, in_mArray, in_mIndex, inCompiler) ;
  const GGS_getArrayElementReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getArrayElementReferenceIR::
getArrayElementReferenceIR_init_21__21__21_ (const GGS_objectIR & in_mTarget,
                                             const GGS_objectIR & in_mArray,
                                             const GGS_objectIR & in_mIndex,
                                             Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mArray = in_mArray ;
  mProperty_mIndex = in_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR::GGS_getArrayElementReferenceIR (const cPtr_getArrayElementReferenceIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getArrayElementReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR GGS_getArrayElementReferenceIR::class_func_new (const GGS_objectIR & in_mTarget,
                                                                               const GGS_objectIR & in_mArray,
                                                                               const GGS_objectIR & in_mIndex
                                                                               COMMA_LOCATION_ARGS) {
  GGS_getArrayElementReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getArrayElementReferenceIR (in_mTarget, in_mArray, in_mIndex COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getArrayElementReferenceIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getArrayElementReferenceIR::setProperty_mTarget (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getArrayElementReferenceIR::readProperty_mArray (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mArray ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getArrayElementReferenceIR::setProperty_mArray (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mArray = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getArrayElementReferenceIR::readProperty_mIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getArrayElementReferenceIR::setProperty_mIndex (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getArrayElementReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_getArrayElementReferenceIR::cPtr_getArrayElementReferenceIR (const GGS_objectIR & in_mTarget,
                                                                  const GGS_objectIR & in_mArray,
                                                                  const GGS_objectIR & in_mIndex
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (),
mProperty_mArray (),
mProperty_mIndex () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mArray = in_mArray ;
  mProperty_mIndex = in_mIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getArrayElementReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;
}

void cPtr_getArrayElementReferenceIR::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@getArrayElementReferenceIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArray.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getArrayElementReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getArrayElementReferenceIR (mProperty_mTarget, mProperty_mArray, mProperty_mIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @getArrayElementReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR ("getArrayElementReferenceIR",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getArrayElementReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getArrayElementReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getArrayElementReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR GGS_getArrayElementReferenceIR::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_getArrayElementReferenceIR result ;
  const GGS_getArrayElementReferenceIR * p = (const GGS_getArrayElementReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getArrayElementReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getArrayElementReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getArrayElementReferenceIR_2E_weak::objectCompare (const GGS_getArrayElementReferenceIR_2E_weak & inOperand) const {
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

GGS_getArrayElementReferenceIR_2E_weak::GGS_getArrayElementReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR_2E_weak & GGS_getArrayElementReferenceIR_2E_weak::operator = (const GGS_getArrayElementReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR_2E_weak::GGS_getArrayElementReferenceIR_2E_weak (const GGS_getArrayElementReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR_2E_weak GGS_getArrayElementReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getArrayElementReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR GGS_getArrayElementReferenceIR_2E_weak::bang_getArrayElementReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getArrayElementReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getArrayElementReferenceIR) ;
      result = GGS_getArrayElementReferenceIR ((cPtr_getArrayElementReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @getArrayElementReferenceIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2E_weak ("getArrayElementReferenceIR.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getArrayElementReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getArrayElementReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getArrayElementReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR_2E_weak GGS_getArrayElementReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_getArrayElementReferenceIR_2E_weak result ;
  const GGS_getArrayElementReferenceIR_2E_weak * p = (const GGS_getArrayElementReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getArrayElementReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getArrayElementReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendSelectOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSelectOperation (GGS_instructionListIR & ioObject,
                                            const GGS_objectIR constinArgument_inTargetValue,
                                            const GGS_string constinArgument_in_5F_if_5F_variableLLVMName,
                                            const GGS_objectIR constinArgument_in_5F_then_5F_variable,
                                            const GGS_objectIR constinArgument_in_5F_else_5F_variable,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_selectInstructionIR::init_21__21__21__21_ (constinArgument_inTargetValue, constinArgument_in_5F_if_5F_variableLLVMName, constinArgument_in_5F_then_5F_variable, constinArgument_in_5F_else_5F_variable, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 8)) ;
}


//--------------------------------------------------------------------------------------------------
// @selectInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_m_5F_if_5F_variableLLVMName (),
mProperty_m_5F_then_5F_variable (),
mProperty_m_5F_else_5F_variable () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetValue.printNonNullClassInstanceProperties ("mTargetValue") ;
    mProperty_m_5F_if_5F_variableLLVMName.printNonNullClassInstanceProperties ("m_if_variableLLVMName") ;
    mProperty_m_5F_then_5F_variable.printNonNullClassInstanceProperties ("m_then_variable") ;
    mProperty_m_5F_else_5F_variable.printNonNullClassInstanceProperties ("m_else_variable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionIR::objectCompare (const GGS_selectInstructionIR & inOperand) const {
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

GGS_selectInstructionIR::GGS_selectInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::
init_21__21__21__21_ (const GGS_objectIR & in_mTargetValue,
                      const GGS_string & in_m_5F_if_5F_variableLLVMName,
                      const GGS_objectIR & in_m_5F_then_5F_variable,
                      const GGS_objectIR & in_m_5F_else_5F_variable,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionIR (inCompiler COMMA_THERE)) ;
  object->selectInstructionIR_init_21__21__21__21_ (in_mTargetValue, in_m_5F_if_5F_variableLLVMName, in_m_5F_then_5F_variable, in_m_5F_else_5F_variable, inCompiler) ;
  const GGS_selectInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionIR::
selectInstructionIR_init_21__21__21__21_ (const GGS_objectIR & in_mTargetValue,
                                          const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                          const GGS_objectIR & in_m_5F_then_5F_variable,
                                          const GGS_objectIR & in_m_5F_else_5F_variable,
                                          Compiler * /* inCompiler */) {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_m_5F_if_5F_variableLLVMName = in_m_5F_if_5F_variableLLVMName ;
  mProperty_m_5F_then_5F_variable = in_m_5F_then_5F_variable ;
  mProperty_m_5F_else_5F_variable = in_m_5F_else_5F_variable ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR::GGS_selectInstructionIR (const cPtr_selectInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::class_func_new (const GGS_objectIR & in_mTargetValue,
                                                                 const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                                                 const GGS_objectIR & in_m_5F_then_5F_variable,
                                                                 const GGS_objectIR & in_m_5F_else_5F_variable
                                                                 COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstructionIR (in_mTargetValue, in_m_5F_if_5F_variableLLVMName, in_m_5F_then_5F_variable, in_m_5F_else_5F_variable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_mTargetValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_mTargetValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectInstructionIR::readProperty_m_5F_if_5F_variableLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_if_5F_variableLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_if_5F_variableLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_if_5F_variableLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_m_5F_then_5F_variable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_then_5F_variable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_then_5F_variable (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_then_5F_variable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_m_5F_else_5F_variable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_else_5F_variable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_else_5F_variable (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_else_5F_variable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (const GGS_objectIR & in_mTargetValue,
                                                    const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                                    const GGS_objectIR & in_m_5F_then_5F_variable,
                                                    const GGS_objectIR & in_m_5F_else_5F_variable
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetValue (),
mProperty_m_5F_if_5F_variableLLVMName (),
mProperty_m_5F_then_5F_variable (),
mProperty_m_5F_else_5F_variable () {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_m_5F_if_5F_variableLLVMName = in_m_5F_if_5F_variableLLVMName ;
  mProperty_m_5F_then_5F_variable = in_m_5F_then_5F_variable ;
  mProperty_m_5F_else_5F_variable = in_m_5F_else_5F_variable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

void cPtr_selectInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstructionIR:") ;
  mProperty_mTargetValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_if_5F_variableLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_variable.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_variable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionIR (mProperty_mTargetValue, mProperty_m_5F_if_5F_variableLLVMName, mProperty_m_5F_then_5F_variable, mProperty_m_5F_else_5F_variable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selectInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionIR ("selectInstructionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR result ;
  const GGS_selectInstructionIR * p = (const GGS_selectInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionIR_2E_weak::objectCompare (const GGS_selectInstructionIR_2E_weak & inOperand) const {
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

GGS_selectInstructionIR_2E_weak::GGS_selectInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak & GGS_selectInstructionIR_2E_weak::operator = (const GGS_selectInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak::GGS_selectInstructionIR_2E_weak (const GGS_selectInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak GGS_selectInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR_2E_weak::bang_selectInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionIR) ;
      result = GGS_selectInstructionIR ((cPtr_selectInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectInstructionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionIR_2E_weak ("selectInstructionIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak GGS_selectInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR_2E_weak result ;
  const GGS_selectInstructionIR_2E_weak * p = (const GGS_selectInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR testArrayIndex'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_testArrayIndex (GGS_instructionListIR & ioObject,
                                     const GGS_objectIR constinArgument_inIndex,
                                     const GGS_location constinArgument_inErrorLocation,
                                     const GGS_bigint constinArgument_inSize,
                                     GGS_bool & outArgument_outGeneratePanicInstruction,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratePanicInstruction.drop () ; // Release 'out' argument
  GGS_bigint var_max_212 ;
  GGS_bool var_isUnsigned_230 ;
  GGS_bigint joker_199_1 ; // Joker input parameter
  GGS_uint joker_241_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)).readProperty_kind ().method_extractInteger (joker_199_1, var_max_212, var_isUnsigned_230, joker_241_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)) ;
  GGS_bool test_0 = var_isUnsigned_230.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 9)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GGS_bool (ComparisonKind::greaterOrEqual, var_max_212.objectCompare (constinArgument_inSize)) ;
  }
  outArgument_outGeneratePanicInstruction = test_0 ;
  ioObject.addAssign_operation (GGS_testArrayIndexIR::init_21__21__21_ (constinArgument_inIndex, constinArgument_inErrorLocation, constinArgument_inSize, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 10)) ;
}


//--------------------------------------------------------------------------------------------------
// @testArrayIndexIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_testArrayIndexIR::cPtr_testArrayIndexIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mIndex (),
mProperty_mErrorLocation (),
mProperty_mSize () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_testArrayIndexIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mIndex.printNonNullClassInstanceProperties ("mIndex") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
    mProperty_mSize.printNonNullClassInstanceProperties ("mSize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testArrayIndexIR::objectCompare (const GGS_testArrayIndexIR & inOperand) const {
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

GGS_testArrayIndexIR::GGS_testArrayIndexIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_testArrayIndexIR GGS_testArrayIndexIR::
init_21__21__21_ (const GGS_objectIR & in_mIndex,
                  const GGS_location & in_mErrorLocation,
                  const GGS_bigint & in_mSize,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_testArrayIndexIR * object = nullptr ;
  macroMyNew (object, cPtr_testArrayIndexIR (inCompiler COMMA_THERE)) ;
  object->testArrayIndexIR_init_21__21__21_ (in_mIndex, in_mErrorLocation, in_mSize, inCompiler) ;
  const GGS_testArrayIndexIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testArrayIndexIR::
testArrayIndexIR_init_21__21__21_ (const GGS_objectIR & in_mIndex,
                                   const GGS_location & in_mErrorLocation,
                                   const GGS_bigint & in_mSize,
                                   Compiler * /* inCompiler */) {
  mProperty_mIndex = in_mIndex ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR::GGS_testArrayIndexIR (const cPtr_testArrayIndexIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testArrayIndexIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR GGS_testArrayIndexIR::class_func_new (const GGS_objectIR & in_mIndex,
                                                           const GGS_location & in_mErrorLocation,
                                                           const GGS_bigint & in_mSize
                                                           COMMA_LOCATION_ARGS) {
  GGS_testArrayIndexIR result ;
  macroMyNew (result.mObjectPtr, cPtr_testArrayIndexIR (in_mIndex, in_mErrorLocation, in_mSize COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_testArrayIndexIR::readProperty_mIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_testArrayIndexIR::setProperty_mIndex (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_testArrayIndexIR::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_testArrayIndexIR::setProperty_mErrorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_testArrayIndexIR::readProperty_mSize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_testArrayIndexIR::setProperty_mSize (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testArrayIndexIR class
//--------------------------------------------------------------------------------------------------

cPtr_testArrayIndexIR::cPtr_testArrayIndexIR (const GGS_objectIR & in_mIndex,
                                              const GGS_location & in_mErrorLocation,
                                              const GGS_bigint & in_mSize
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mIndex (),
mProperty_mErrorLocation (),
mProperty_mSize () {
  mProperty_mIndex = in_mIndex ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_testArrayIndexIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

void cPtr_testArrayIndexIR::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@testArrayIndexIR:") ;
  mProperty_mIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testArrayIndexIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testArrayIndexIR (mProperty_mIndex, mProperty_mErrorLocation, mProperty_mSize COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @testArrayIndexIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testArrayIndexIR ("testArrayIndexIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_testArrayIndexIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testArrayIndexIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testArrayIndexIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR GGS_testArrayIndexIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_testArrayIndexIR result ;
  const GGS_testArrayIndexIR * p = (const GGS_testArrayIndexIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testArrayIndexIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testArrayIndexIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testArrayIndexIR_2E_weak::objectCompare (const GGS_testArrayIndexIR_2E_weak & inOperand) const {
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

GGS_testArrayIndexIR_2E_weak::GGS_testArrayIndexIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR_2E_weak & GGS_testArrayIndexIR_2E_weak::operator = (const GGS_testArrayIndexIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR_2E_weak::GGS_testArrayIndexIR_2E_weak (const GGS_testArrayIndexIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR_2E_weak GGS_testArrayIndexIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_testArrayIndexIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR GGS_testArrayIndexIR_2E_weak::bang_testArrayIndexIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_testArrayIndexIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testArrayIndexIR) ;
      result = GGS_testArrayIndexIR ((cPtr_testArrayIndexIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @testArrayIndexIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testArrayIndexIR_2E_weak ("testArrayIndexIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_testArrayIndexIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testArrayIndexIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testArrayIndexIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR_2E_weak GGS_testArrayIndexIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_testArrayIndexIR_2E_weak result ;
  const GGS_testArrayIndexIR_2E_weak * p = (const GGS_testArrayIndexIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testArrayIndexIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testArrayIndexIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendSourceLineComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSourceLineComment (GGS_instructionListIR & ioObject,
                                              const GGS_location constinArgument_inSourceLocation,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_sourceLocationIR::init_21_ (constinArgument_inSourceLocation, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------
// @sourceLocationIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_sourceLocationIR::cPtr_sourceLocationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mSourceLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sourceLocationIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mSourceLocation.printNonNullClassInstanceProperties ("mSourceLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sourceLocationIR::objectCompare (const GGS_sourceLocationIR & inOperand) const {
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

GGS_sourceLocationIR::GGS_sourceLocationIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sourceLocationIR GGS_sourceLocationIR::
init_21_ (const GGS_location & in_mSourceLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_sourceLocationIR * object = nullptr ;
  macroMyNew (object, cPtr_sourceLocationIR (inCompiler COMMA_THERE)) ;
  object->sourceLocationIR_init_21_ (in_mSourceLocation, inCompiler) ;
  const GGS_sourceLocationIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sourceLocationIR::
sourceLocationIR_init_21_ (const GGS_location & in_mSourceLocation,
                           Compiler * /* inCompiler */) {
  mProperty_mSourceLocation = in_mSourceLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR::GGS_sourceLocationIR (const cPtr_sourceLocationIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sourceLocationIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR GGS_sourceLocationIR::class_func_new (const GGS_location & in_mSourceLocation
                                                           COMMA_LOCATION_ARGS) {
  GGS_sourceLocationIR result ;
  macroMyNew (result.mObjectPtr, cPtr_sourceLocationIR (in_mSourceLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_sourceLocationIR::readProperty_mSourceLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_sourceLocationIR * p = (cPtr_sourceLocationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sourceLocationIR) ;
    return p->mProperty_mSourceLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sourceLocationIR::setProperty_mSourceLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sourceLocationIR * p = (cPtr_sourceLocationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sourceLocationIR) ;
    p->mProperty_mSourceLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sourceLocationIR class
//--------------------------------------------------------------------------------------------------

cPtr_sourceLocationIR::cPtr_sourceLocationIR (const GGS_location & in_mSourceLocation
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mSourceLocation () {
  mProperty_mSourceLocation = in_mSourceLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sourceLocationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

void cPtr_sourceLocationIR::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@sourceLocationIR:") ;
  mProperty_mSourceLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sourceLocationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sourceLocationIR (mProperty_mSourceLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sourceLocationIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceLocationIR ("sourceLocationIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sourceLocationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sourceLocationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sourceLocationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR GGS_sourceLocationIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_sourceLocationIR result ;
  const GGS_sourceLocationIR * p = (const GGS_sourceLocationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sourceLocationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sourceLocationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sourceLocationIR_2E_weak::objectCompare (const GGS_sourceLocationIR_2E_weak & inOperand) const {
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

GGS_sourceLocationIR_2E_weak::GGS_sourceLocationIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR_2E_weak & GGS_sourceLocationIR_2E_weak::operator = (const GGS_sourceLocationIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR_2E_weak::GGS_sourceLocationIR_2E_weak (const GGS_sourceLocationIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR_2E_weak GGS_sourceLocationIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sourceLocationIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR GGS_sourceLocationIR_2E_weak::bang_sourceLocationIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sourceLocationIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sourceLocationIR) ;
      result = GGS_sourceLocationIR ((cPtr_sourceLocationIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sourceLocationIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceLocationIR_2E_weak ("sourceLocationIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sourceLocationIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sourceLocationIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sourceLocationIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR_2E_weak GGS_sourceLocationIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_sourceLocationIR_2E_weak result ;
  const GGS_sourceLocationIR_2E_weak * p = (const GGS_sourceLocationIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sourceLocationIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sourceLocationIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendFreeComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendFreeComment (GGS_instructionListIR & ioObject,
                                        const GGS_string constinArgument_inComment,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_freeCommentIR::init_21_ (constinArgument_inComment, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------
// @freeCommentIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_freeCommentIR::cPtr_freeCommentIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mComment () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_freeCommentIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mComment.printNonNullClassInstanceProperties ("mComment") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_freeCommentIR::objectCompare (const GGS_freeCommentIR & inOperand) const {
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

GGS_freeCommentIR::GGS_freeCommentIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR::
init_21_ (const GGS_string & in_mComment,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_freeCommentIR * object = nullptr ;
  macroMyNew (object, cPtr_freeCommentIR (inCompiler COMMA_THERE)) ;
  object->freeCommentIR_init_21_ (in_mComment, inCompiler) ;
  const GGS_freeCommentIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_freeCommentIR::
freeCommentIR_init_21_ (const GGS_string & in_mComment,
                        Compiler * /* inCompiler */) {
  mProperty_mComment = in_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR::GGS_freeCommentIR (const cPtr_freeCommentIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_freeCommentIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR::class_func_new (const GGS_string & in_mComment
                                                     COMMA_LOCATION_ARGS) {
  GGS_freeCommentIR result ;
  macroMyNew (result.mObjectPtr, cPtr_freeCommentIR (in_mComment COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_freeCommentIR::readProperty_mComment (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeCommentIR) ;
    return p->mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_freeCommentIR::setProperty_mComment (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeCommentIR) ;
    p->mProperty_mComment = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @freeCommentIR class
//--------------------------------------------------------------------------------------------------

cPtr_freeCommentIR::cPtr_freeCommentIR (const GGS_string & in_mComment
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mComment () {
  mProperty_mComment = in_mComment ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_freeCommentIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR ;
}

void cPtr_freeCommentIR::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@freeCommentIR:") ;
  mProperty_mComment.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_freeCommentIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_freeCommentIR (mProperty_mComment COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @freeCommentIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeCommentIR ("freeCommentIR",
                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_freeCommentIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_freeCommentIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_freeCommentIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_freeCommentIR result ;
  const GGS_freeCommentIR * p = (const GGS_freeCommentIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_freeCommentIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeCommentIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_freeCommentIR_2E_weak::objectCompare (const GGS_freeCommentIR_2E_weak & inOperand) const {
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

GGS_freeCommentIR_2E_weak::GGS_freeCommentIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak & GGS_freeCommentIR_2E_weak::operator = (const GGS_freeCommentIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak::GGS_freeCommentIR_2E_weak (const GGS_freeCommentIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak GGS_freeCommentIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_freeCommentIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR_2E_weak::bang_freeCommentIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_freeCommentIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_freeCommentIR) ;
      result = GGS_freeCommentIR ((cPtr_freeCommentIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @freeCommentIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeCommentIR_2E_weak ("freeCommentIR.weak",
                                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_freeCommentIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_freeCommentIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_freeCommentIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak GGS_freeCommentIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_freeCommentIR_2E_weak result ;
  const GGS_freeCommentIR_2E_weak * p = (const GGS_freeCommentIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_freeCommentIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeCommentIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterAccessibleEntities (const GGS_instructionListIR inObject,
                                              GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                              GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_instructionListIR temp_0 = inObject ;
  cEnumerator_instructionListIR enumerator_715 (temp_0, EnumerationOrder::up) ;
  while (enumerator_715.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_715.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 10)) ;
    enumerator_715.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Class for element of '@routineAccessibilityIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineAccessibilityIR : public cCollectionElement {
  public: GGS_routineAccessibilityIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_routineAccessibilityIR (const GGS_abstractRoutineIR & in_mRoutine,
                                                     const GGS_stringset & in_mAccessibleRoutineSet
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineAccessibilityIR (const GGS_routineAccessibilityIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineAccessibilityIR::cCollectionElement_routineAccessibilityIR (const GGS_abstractRoutineIR & in_mRoutine,
                                                                                      const GGS_stringset & in_mAccessibleRoutineSet
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutine, in_mAccessibleRoutineSet) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineAccessibilityIR::cCollectionElement_routineAccessibilityIR (const GGS_routineAccessibilityIR_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutine, inElement.mProperty_mAccessibleRoutineSet) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_routineAccessibilityIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineAccessibilityIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_routineAccessibilityIR (mObject.mProperty_mRoutine, mObject.mProperty_mAccessibleRoutineSet COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_routineAccessibilityIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutine" ":") ;
  mObject.mProperty_mRoutine.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAccessibleRoutineSet" ":") ;
  mObject.mProperty_mAccessibleRoutineSet.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR::GGS_routineAccessibilityIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR::GGS_routineAccessibilityIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_routineAccessibilityIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_routineAccessibilityIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::enterElement (const GGS_routineAccessibilityIR_2E_element & inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineAccessibilityIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::class_func_listWithValue (const GGS_abstractRoutineIR & inOperand0,
                                                                                 const GGS_stringset & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_routineAccessibilityIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_routineAccessibilityIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_routineAccessibilityIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_abstractRoutineIR & in_mRoutine,
                                                            const GGS_stringset & in_mAccessibleRoutineSet
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_routineAccessibilityIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineAccessibilityIR (in_mRoutine,
                                                            in_mAccessibleRoutineSet COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::addAssign_operation (const GGS_abstractRoutineIR & inOperand0,
                                                      const GGS_stringset & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineAccessibilityIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::setter_append (const GGS_abstractRoutineIR inOperand0,
                                                const GGS_stringset inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineAccessibilityIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::setter_insertAtIndex (const GGS_abstractRoutineIR inOperand0,
                                                       const GGS_stringset inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineAccessibilityIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::setter_removeAtIndex (GGS_abstractRoutineIR & outOperand0,
                                                       GGS_stringset & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
      outOperand0 = p->mObject.mProperty_mRoutine ;
      outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::setter_popFirst (GGS_abstractRoutineIR & outOperand0,
                                                  GGS_stringset & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::setter_popLast (GGS_abstractRoutineIR & outOperand0,
                                                 GGS_stringset & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::method_first (GGS_abstractRoutineIR & outOperand0,
                                               GGS_stringset & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::method_last (GGS_abstractRoutineIR & outOperand0,
                                              GGS_stringset & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::add_operation (const GGS_routineAccessibilityIR & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineAccessibilityIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineAccessibilityIR result = GGS_routineAccessibilityIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineAccessibilityIR result = GGS_routineAccessibilityIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineAccessibilityIR result = GGS_routineAccessibilityIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::plusAssign_operation (const GGS_routineAccessibilityIR inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::setter_setMRoutineAtIndex (GGS_abstractRoutineIR inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutine = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR GGS_routineAccessibilityIR::getter_mRoutineAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  GGS_abstractRoutineIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    result = p->mObject.mProperty_mRoutine ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::setter_setMAccessibleRoutineSetAtIndex (GGS_stringset inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAccessibleRoutineSet = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineAccessibilityIR::getter_mAccessibleRoutineSetAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  GGS_stringset result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    result = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_routineAccessibilityIR::cEnumerator_routineAccessibilityIR (const GGS_routineAccessibilityIR & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR_2E_element cEnumerator_routineAccessibilityIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineAccessibilityIR * p = (const cCollectionElement_routineAccessibilityIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR cEnumerator_routineAccessibilityIR::current_mRoutine (LOCATION_ARGS) const {
  const cCollectionElement_routineAccessibilityIR * p = (const cCollectionElement_routineAccessibilityIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
  return p->mObject.mProperty_mRoutine ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset cEnumerator_routineAccessibilityIR::current_mAccessibleRoutineSet (LOCATION_ARGS) const {
  const cCollectionElement_routineAccessibilityIR * p = (const cCollectionElement_routineAccessibilityIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
  return p->mObject.mProperty_mAccessibleRoutineSet ;
}




//--------------------------------------------------------------------------------------------------
//
//     @routineAccessibilityIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAccessibilityIR ("routineAccessibilityIR",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineAccessibilityIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAccessibilityIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineAccessibilityIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineAccessibilityIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_routineAccessibilityIR result ;
  const GGS_routineAccessibilityIR * p = (const GGS_routineAccessibilityIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineAccessibilityIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAccessibilityIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmInstructionCode (cPtr_abstractInstructionIR * inObject,
                                              GGS_string & io_ioLLVMcode,
                                              const GGS_generationContext constin_inGenerationContext,
                                              GGS_generationAdds & io_ioGenerationAdds,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    inObject->method_llvmInstructionCode (io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractInstructionIR::method_enterAccessibleEntities (GGS_stringset & /* ioArgument_ioInvokedRoutineSet */,
                                                                 GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (cPtr_abstractInstructionIR * inObject,
                                                  GGS_stringset & io_ioInvokedRoutineSet,
                                                  GGS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    inObject->method_enterAccessibleEntities  (io_ioInvokedRoutineSet, io_ioMaxBranchOfOnInstructions, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@instructionListListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_instructionListListIR : public cCollectionElement {
  public: GGS_instructionListListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_instructionListListIR (const GGS_instructionListIR & in_mInstructionList
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_instructionListListIR (const GGS_instructionListListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListListIR::cCollectionElement_instructionListListIR (const GGS_instructionListIR & in_mInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListListIR::cCollectionElement_instructionListListIR (const GGS_instructionListListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_instructionListListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_instructionListListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_instructionListListIR (mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_instructionListListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR::GGS_instructionListListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR::GGS_instructionListListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_instructionListListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_instructionListListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::enterElement (const GGS_instructionListListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::class_func_listWithValue (const GGS_instructionListIR & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  GGS_instructionListListIR result ;
  if (inOperand0.isValid ()) {
    result = GGS_instructionListListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_instructionListListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_instructionListIR & in_mInstructionList
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListListIR (in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::addAssign_operation (const GGS_instructionListIR & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_instructionListListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::setter_append (const GGS_instructionListIR inOperand0,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_instructionListListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::setter_insertAtIndex (const GGS_instructionListIR inOperand0,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_instructionListListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::setter_removeAtIndex (GGS_instructionListIR & outOperand0,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
      outOperand0 = p->mObject.mProperty_mInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::setter_popFirst (GGS_instructionListIR & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::setter_popLast (GGS_instructionListIR & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::method_first (GGS_instructionListIR & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::method_last (GGS_instructionListIR & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::add_operation (const GGS_instructionListListIR & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_instructionListListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_instructionListListIR result = GGS_instructionListListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_instructionListListIR result = GGS_instructionListListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_instructionListListIR result = GGS_instructionListListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::plusAssign_operation (const GGS_instructionListListIR inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::setter_setMInstructionListAtIndex (GGS_instructionListIR inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListListIR::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  GGS_instructionListIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_instructionListListIR::cEnumerator_instructionListListIR (const GGS_instructionListListIR & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR_2E_element cEnumerator_instructionListListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListListIR * p = (const cCollectionElement_instructionListListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_instructionListIR cEnumerator_instructionListListIR::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_instructionListListIR * p = (const cCollectionElement_instructionListListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
  return p->mObject.mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @instructionListListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListListIR ("instructionListListIR",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_instructionListListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionListListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionListListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_instructionListListIR result ;
  const GGS_instructionListListIR * p = (const GGS_instructionListListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionListListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctExpressionAST_2E_weak::objectCompare (const GGS_ctExpressionAST_2E_weak & inOperand) const {
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

GGS_ctExpressionAST_2E_weak::GGS_ctExpressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST_2E_weak & GGS_ctExpressionAST_2E_weak::operator = (const GGS_ctExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST_2E_weak::GGS_ctExpressionAST_2E_weak (const GGS_ctExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST_2E_weak GGS_ctExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctExpressionAST_2E_weak::bang_ctExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctExpressionAST) ;
      result = GGS_ctExpressionAST ((cPtr_ctExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak ("ctExpressionAST.weak",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST_2E_weak GGS_ctExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ctExpressionAST_2E_weak result ;
  const GGS_ctExpressionAST_2E_weak * p = (const GGS_ctExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctInfixExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctInfixExpressionAST::cPtr_ctInfixExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mInfixOperator (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctInfixExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mInfixOperator.printNonNullClassInstanceProperties ("mInfixOperator") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctInfixExpressionAST::objectCompare (const GGS_ctInfixExpressionAST & inOperand) const {
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

GGS_ctInfixExpressionAST::GGS_ctInfixExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctInfixExpressionAST GGS_ctInfixExpressionAST::
init_21__21__21__21_ (const GGS_ctExpressionAST & in_mLeftExpression,
                      const GGS_location & in_mOperatorLocation,
                      const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                      const GGS_ctExpressionAST & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ctInfixExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctInfixExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctInfixExpressionAST_init_21__21__21__21_ (in_mLeftExpression, in_mOperatorLocation, in_mInfixOperator, in_mRightExpression, inCompiler) ;
  const GGS_ctInfixExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctInfixExpressionAST::
ctInfixExpressionAST_init_21__21__21__21_ (const GGS_ctExpressionAST & in_mLeftExpression,
                                           const GGS_location & in_mOperatorLocation,
                                           const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                           const GGS_ctExpressionAST & in_mRightExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST::GGS_ctInfixExpressionAST (const cPtr_ctInfixExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctInfixExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST GGS_ctInfixExpressionAST::class_func_new (const GGS_ctExpressionAST & in_mLeftExpression,
                                                                   const GGS_location & in_mOperatorLocation,
                                                                   const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                   const GGS_ctExpressionAST & in_mRightExpression
                                                                   COMMA_LOCATION_ARGS) {
  GGS_ctInfixExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctInfixExpressionAST (in_mLeftExpression, in_mOperatorLocation, in_mInfixOperator, in_mRightExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctInfixExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctInfixExpressionAST::setProperty_mLeftExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ctInfixExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctInfixExpressionAST::setProperty_mOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_ctInfixExpressionAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimeInfixOperatorEnumeration () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctInfixExpressionAST::setProperty_mInfixOperator (const GGS_compileTimeInfixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctInfixExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctInfixExpressionAST::setProperty_mRightExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctInfixExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctInfixExpressionAST::cPtr_ctInfixExpressionAST (const GGS_ctExpressionAST & in_mLeftExpression,
                                                      const GGS_location & in_mOperatorLocation,
                                                      const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                      const GGS_ctExpressionAST & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE),
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

const C_galgas_type_descriptor * cPtr_ctInfixExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST ;
}

void cPtr_ctInfixExpressionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ctInfixExpressionAST:") ;
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

acPtr_class * cPtr_ctInfixExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctInfixExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mInfixOperator, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctInfixExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctInfixExpressionAST ("ctInfixExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctInfixExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctInfixExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctInfixExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST GGS_ctInfixExpressionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_ctInfixExpressionAST result ;
  const GGS_ctInfixExpressionAST * p = (const GGS_ctInfixExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctInfixExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctInfixExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctInfixExpressionAST_2E_weak::objectCompare (const GGS_ctInfixExpressionAST_2E_weak & inOperand) const {
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

GGS_ctInfixExpressionAST_2E_weak::GGS_ctInfixExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST_2E_weak & GGS_ctInfixExpressionAST_2E_weak::operator = (const GGS_ctInfixExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST_2E_weak::GGS_ctInfixExpressionAST_2E_weak (const GGS_ctInfixExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST_2E_weak GGS_ctInfixExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctInfixExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST GGS_ctInfixExpressionAST_2E_weak::bang_ctInfixExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctInfixExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctInfixExpressionAST) ;
      result = GGS_ctInfixExpressionAST ((cPtr_ctInfixExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctInfixExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctInfixExpressionAST_2E_weak ("ctInfixExpressionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctInfixExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctInfixExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctInfixExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST_2E_weak GGS_ctInfixExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ctInfixExpressionAST_2E_weak result ;
  const GGS_ctInfixExpressionAST_2E_weak * p = (const GGS_ctInfixExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctInfixExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctInfixExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctPrefixExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctPrefixExpressionAST::cPtr_ctPrefixExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mPrefixOperator (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctPrefixExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mPrefixOperator.printNonNullClassInstanceProperties ("mPrefixOperator") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctPrefixExpressionAST::objectCompare (const GGS_ctPrefixExpressionAST & inOperand) const {
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

GGS_ctPrefixExpressionAST::GGS_ctPrefixExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctPrefixExpressionAST GGS_ctPrefixExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                  const GGS_ctExpressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ctPrefixExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctPrefixExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctPrefixExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mPrefixOperator, in_mExpression, inCompiler) ;
  const GGS_ctPrefixExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::
ctPrefixExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                        const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                        const GGS_ctExpressionAST & in_mExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST::GGS_ctPrefixExpressionAST (const cPtr_ctPrefixExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctPrefixExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST GGS_ctPrefixExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                     const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                                     const GGS_ctExpressionAST & in_mExpression
                                                                     COMMA_LOCATION_ARGS) {
  GGS_ctPrefixExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctPrefixExpressionAST (in_mOperatorLocation, in_mPrefixOperator, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ctPrefixExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctPrefixExpressionAST::setProperty_mOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorEnumeration GGS_ctPrefixExpressionAST::readProperty_mPrefixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimePrefixOperatorEnumeration () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctPrefixExpressionAST::setProperty_mPrefixOperator (const GGS_compileTimePrefixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctPrefixExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctPrefixExpressionAST::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctPrefixExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctPrefixExpressionAST::cPtr_ctPrefixExpressionAST (const GGS_location & in_mOperatorLocation,
                                                        const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                        const GGS_ctExpressionAST & in_mExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE),
mProperty_mOperatorLocation (),
mProperty_mPrefixOperator (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctPrefixExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST ;
}

void cPtr_ctPrefixExpressionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@ctPrefixExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctPrefixExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctPrefixExpressionAST (mProperty_mOperatorLocation, mProperty_mPrefixOperator, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctPrefixExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctPrefixExpressionAST ("ctPrefixExpressionAST",
                                                                             & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctPrefixExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctPrefixExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctPrefixExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST GGS_ctPrefixExpressionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_ctPrefixExpressionAST result ;
  const GGS_ctPrefixExpressionAST * p = (const GGS_ctPrefixExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctPrefixExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctPrefixExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctPrefixExpressionAST_2E_weak::objectCompare (const GGS_ctPrefixExpressionAST_2E_weak & inOperand) const {
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

GGS_ctPrefixExpressionAST_2E_weak::GGS_ctPrefixExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST_2E_weak & GGS_ctPrefixExpressionAST_2E_weak::operator = (const GGS_ctPrefixExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST_2E_weak::GGS_ctPrefixExpressionAST_2E_weak (const GGS_ctPrefixExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST_2E_weak GGS_ctPrefixExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctPrefixExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST GGS_ctPrefixExpressionAST_2E_weak::bang_ctPrefixExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctPrefixExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctPrefixExpressionAST) ;
      result = GGS_ctPrefixExpressionAST ((cPtr_ctPrefixExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctPrefixExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctPrefixExpressionAST_2E_weak ("ctPrefixExpressionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctPrefixExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctPrefixExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctPrefixExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST_2E_weak GGS_ctPrefixExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ctPrefixExpressionAST_2E_weak result ;
  const GGS_ctPrefixExpressionAST_2E_weak * p = (const GGS_ctPrefixExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctPrefixExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctPrefixExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctTrueExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctTrueExpressionAST::cPtr_ctTrueExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctTrueExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctTrueExpressionAST::objectCompare (const GGS_ctTrueExpressionAST & inOperand) const {
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

GGS_ctTrueExpressionAST::GGS_ctTrueExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctTrueExpressionAST GGS_ctTrueExpressionAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctTrueExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctTrueExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctTrueExpressionAST_init (inCompiler) ;
  const GGS_ctTrueExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::
ctTrueExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST::GGS_ctTrueExpressionAST (const cPtr_ctTrueExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctTrueExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST GGS_ctTrueExpressionAST::class_func_new (LOCATION_ARGS) {
  GGS_ctTrueExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctTrueExpressionAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctTrueExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctTrueExpressionAST::cPtr_ctTrueExpressionAST (LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctTrueExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST ;
}

void cPtr_ctTrueExpressionAST::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@ctTrueExpressionAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctTrueExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctTrueExpressionAST (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctTrueExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctTrueExpressionAST ("ctTrueExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctTrueExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctTrueExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctTrueExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST GGS_ctTrueExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_ctTrueExpressionAST result ;
  const GGS_ctTrueExpressionAST * p = (const GGS_ctTrueExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctTrueExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctTrueExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctTrueExpressionAST_2E_weak::objectCompare (const GGS_ctTrueExpressionAST_2E_weak & inOperand) const {
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

GGS_ctTrueExpressionAST_2E_weak::GGS_ctTrueExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST_2E_weak & GGS_ctTrueExpressionAST_2E_weak::operator = (const GGS_ctTrueExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST_2E_weak::GGS_ctTrueExpressionAST_2E_weak (const GGS_ctTrueExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST_2E_weak GGS_ctTrueExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctTrueExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST GGS_ctTrueExpressionAST_2E_weak::bang_ctTrueExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctTrueExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctTrueExpressionAST) ;
      result = GGS_ctTrueExpressionAST ((cPtr_ctTrueExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctTrueExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctTrueExpressionAST_2E_weak ("ctTrueExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctTrueExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctTrueExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctTrueExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST_2E_weak GGS_ctTrueExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ctTrueExpressionAST_2E_weak result ;
  const GGS_ctTrueExpressionAST_2E_weak * p = (const GGS_ctTrueExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctTrueExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctTrueExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctFalseExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctFalseExpressionAST::cPtr_ctFalseExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctFalseExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctFalseExpressionAST::objectCompare (const GGS_ctFalseExpressionAST & inOperand) const {
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

GGS_ctFalseExpressionAST::GGS_ctFalseExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctFalseExpressionAST GGS_ctFalseExpressionAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctFalseExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctFalseExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctFalseExpressionAST_init (inCompiler) ;
  const GGS_ctFalseExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::
ctFalseExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST::GGS_ctFalseExpressionAST (const cPtr_ctFalseExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctFalseExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST GGS_ctFalseExpressionAST::class_func_new (LOCATION_ARGS) {
  GGS_ctFalseExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctFalseExpressionAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctFalseExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctFalseExpressionAST::cPtr_ctFalseExpressionAST (LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctFalseExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST ;
}

void cPtr_ctFalseExpressionAST::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@ctFalseExpressionAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctFalseExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctFalseExpressionAST (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctFalseExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctFalseExpressionAST ("ctFalseExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctFalseExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctFalseExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctFalseExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST GGS_ctFalseExpressionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_ctFalseExpressionAST result ;
  const GGS_ctFalseExpressionAST * p = (const GGS_ctFalseExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctFalseExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctFalseExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctFalseExpressionAST_2E_weak::objectCompare (const GGS_ctFalseExpressionAST_2E_weak & inOperand) const {
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

GGS_ctFalseExpressionAST_2E_weak::GGS_ctFalseExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST_2E_weak & GGS_ctFalseExpressionAST_2E_weak::operator = (const GGS_ctFalseExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST_2E_weak::GGS_ctFalseExpressionAST_2E_weak (const GGS_ctFalseExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST_2E_weak GGS_ctFalseExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctFalseExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST GGS_ctFalseExpressionAST_2E_weak::bang_ctFalseExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctFalseExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctFalseExpressionAST) ;
      result = GGS_ctFalseExpressionAST ((cPtr_ctFalseExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctFalseExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctFalseExpressionAST_2E_weak ("ctFalseExpressionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctFalseExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctFalseExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctFalseExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST_2E_weak GGS_ctFalseExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ctFalseExpressionAST_2E_weak result ;
  const GGS_ctFalseExpressionAST_2E_weak * p = (const GGS_ctFalseExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctFalseExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctFalseExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctIntExpressionAST_2E_weak::objectCompare (const GGS_ctIntExpressionAST_2E_weak & inOperand) const {
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

GGS_ctIntExpressionAST_2E_weak::GGS_ctIntExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST_2E_weak & GGS_ctIntExpressionAST_2E_weak::operator = (const GGS_ctIntExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST_2E_weak::GGS_ctIntExpressionAST_2E_weak (const GGS_ctIntExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST_2E_weak GGS_ctIntExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctIntExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST GGS_ctIntExpressionAST_2E_weak::bang_ctIntExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctIntExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctIntExpressionAST) ;
      result = GGS_ctIntExpressionAST ((cPtr_ctIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctIntExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIntExpressionAST_2E_weak ("ctIntExpressionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctIntExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctIntExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctIntExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST_2E_weak GGS_ctIntExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_ctIntExpressionAST_2E_weak result ;
  const GGS_ctIntExpressionAST_2E_weak * p = (const GGS_ctIntExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctIntExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIntExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctIdentifierExpressionAST_2E_weak::objectCompare (const GGS_ctIdentifierExpressionAST_2E_weak & inOperand) const {
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

GGS_ctIdentifierExpressionAST_2E_weak::GGS_ctIdentifierExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST_2E_weak & GGS_ctIdentifierExpressionAST_2E_weak::operator = (const GGS_ctIdentifierExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST_2E_weak::GGS_ctIdentifierExpressionAST_2E_weak (const GGS_ctIdentifierExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST_2E_weak GGS_ctIdentifierExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctIdentifierExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST GGS_ctIdentifierExpressionAST_2E_weak::bang_ctIdentifierExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctIdentifierExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctIdentifierExpressionAST) ;
      result = GGS_ctIdentifierExpressionAST ((cPtr_ctIdentifierExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctIdentifierExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2E_weak ("ctIdentifierExpressionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctIdentifierExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctIdentifierExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctIdentifierExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST_2E_weak GGS_ctIdentifierExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ctIdentifierExpressionAST_2E_weak result ;
  const GGS_ctIdentifierExpressionAST_2E_weak * p = (const GGS_ctIdentifierExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctIdentifierExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIdentifierExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_ctCheckMap::cMapElement_ctCheckMap (const GGS_ctCheckMap_2E_element & inValue
                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_ctCheckMap::cMapElement_ctCheckMap (const GGS_lstring & inKey
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_ctCheckMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_ctCheckMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_ctCheckMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_ctCheckMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap::GGS_ctCheckMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap::GGS_ctCheckMap (const GGS_ctCheckMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap & GGS_ctCheckMap::operator = (const GGS_ctCheckMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_ctCheckMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_ctCheckMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element_3F_ GGS_ctCheckMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ctCheckMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_ctCheckMap * p = (cMapElement_ctCheckMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_ctCheckMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_ctCheckMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::class_func_mapWithMapToOverride (const GGS_ctCheckMap & inMapToOverride
                                                                COMMA_LOCATION_ARGS) {
  GGS_ctCheckMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::getter_overriddenMap (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_ctCheckMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::enterElement (const GGS_ctCheckMap_2E_element & inValue,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctCheckMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ctCheckMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::addAssign_operation (const GGS_lstring & inKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctCheckMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ctCheckMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::add_operation (const GGS_ctCheckMap & inOperand,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_ctCheckMap result = *this ;
  cEnumerator_ctCheckMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::setter_insertKey (GGS_lstring inKey,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctCheckMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_ctCheckMap_searchKey = "there is no '%K' key" ;

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::method_searchKey (GGS_lstring inKey,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_ctCheckMap * p = (const cMapElement_ctCheckMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_ctCheckMap_searchKey
                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_ctCheckMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_ctCheckMap * GGS_ctCheckMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                            const GGS_string & inKey
                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * result = (cMapElement_ctCheckMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_ctCheckMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_ctCheckMap::cEnumerator_ctCheckMap (const GGS_ctCheckMap & inEnumeratedObject,
                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element cEnumerator_ctCheckMap::current (LOCATION_ARGS) const {
  const cMapElement_ctCheckMap * p = (const cMapElement_ctCheckMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ctCheckMap) ;
  return GGS_ctCheckMap_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_ctCheckMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctCheckMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctCheckMap ("ctCheckMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctCheckMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctCheckMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctCheckMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctCheckMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_ctCheckMap result ;
  const GGS_ctCheckMap * p = (const GGS_ctCheckMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctCheckMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctCheckMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ctExpressionAST checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkCompileTimeExpression (cPtr_ctExpressionAST * inObject,
                                                     const GGS_ctCheckMap constin_inMap,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ctExpressionAST) ;
    inObject->method_checkCompileTimeExpression (constin_inMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_ctMap::cMapElement_ctMap (const GGS_ctMap_2E_element & inValue
                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mValue (inValue.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_ctMap::cMapElement_ctMap (const GGS_lstring & inKey,
                                      const GGS_bigint & in_mValue
                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_ctMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_ctMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_ctMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_ctMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap::GGS_ctMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap::GGS_ctMap (const GGS_ctMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap & GGS_ctMap::operator = (const GGS_ctMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_ctMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_ctMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element_3F_ GGS_ctMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ctMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_ctMap * p = (cMapElement_ctMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_ctMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_ctMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mValue = p->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::class_func_mapWithMapToOverride (const GGS_ctMap & inMapToOverride
                                                      COMMA_LOCATION_ARGS) {
  GGS_ctMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::getter_overriddenMap (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  GGS_ctMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::enterElement (const GGS_ctMap_2E_element & inValue,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ctMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::addAssign_operation (const GGS_lstring & inKey,
                                     const GGS_bigint & inArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ctMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::add_operation (const GGS_ctMap & inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  GGS_ctMap result = *this ;
  cEnumerator_ctMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::setter_insertKey (GGS_lstring inKey,
                                  GGS_bigint inArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_ctMap_searchKey = "there is no '%K' key" ;

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::method_searchKey (GGS_lstring inKey,
                                  GGS_bigint & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) performSearch (inKey,
                                                                           inCompiler,
                                                                           kSearchErrorMessage_ctMap_searchKey
                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_ctMap) ;
    outArgument0 = p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_ctMap::getter_mValueForKey (const GGS_string & inKey,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) attributes ;
  GGS_bigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ctMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::setter_setMValueForKey (GGS_bigint inAttributeValue,
                                        GGS_string inKey,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ctMap * p = (cMapElement_ctMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ctMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_ctMap * GGS_ctMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                  const GGS_string & inKey
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * result = (cMapElement_ctMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_ctMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_ctMap::cEnumerator_ctMap (const GGS_ctMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element cEnumerator_ctMap::current (LOCATION_ARGS) const {
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ctMap) ;
  return GGS_ctMap_2E_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_ctMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint cEnumerator_ctMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ctMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctMap ("ctMap",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ctMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_ctMap result ;
  const GGS_ctMap * p = (const GGS_ctMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ctExpressionAST computeCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_computeCompileTimeExpression (cPtr_ctExpressionAST * inObject,
                                                       const GGS_ctMap constin_inMap,
                                                       GGS_bigint & out_outValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outValue.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ctExpressionAST) ;
    inObject->method_computeCompileTimeExpression (constin_inMap, out_outValue, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Enum genericFormalParameter
//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter::GGS_genericFormalParameter (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter GGS_genericFormalParameter::class_func_constant (const GGS_lstring & inAssociatedValue0
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameter result ;
  result.mEnum = Enumeration::enum_constant ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_genericFormalParameter_2E_constant (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter GGS_genericFormalParameter::class_func_type (const GGS_lstring & inAssociatedValue0
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameter result ;
  result.mEnum = Enumeration::enum_type ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_genericFormalParameter_2E_type (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::method_extractConstant (GGS_lstring & outAssociatedValue_name,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_constant) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @genericFormalParameter.constant invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::method_extractType (GGS_lstring & outAssociatedValue_name,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_type) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @genericFormalParameter.type invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant_3F_ GGS_genericFormalParameter::getter_getConstant (UNUSED_LOCATION_ARGS) const {
  GGS_genericFormalParameter_2E_constant_3F_ result ;
  if (mEnum == Enumeration::enum_constant) {
    const auto ptr = (const GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_genericFormalParameter_2E_constant (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::getAssociatedValuesFor_constant (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type_3F_ GGS_genericFormalParameter::getter_getType (UNUSED_LOCATION_ARGS) const {
  GGS_genericFormalParameter_2E_type_3F_ result ;
  if (mEnum == Enumeration::enum_type) {
    const auto ptr = (const GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_genericFormalParameter_2E_type (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::getAssociatedValuesFor_type (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_genericFormalParameter [3] = {
  "(not built)",
  "constant",
  "type"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_genericFormalParameter::getter_isConstant (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_constant == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_genericFormalParameter::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<enum @genericFormalParameter: ") ;
  ioString.appendCString (gEnumNameArrayFor_genericFormalParameter [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_genericFormalParameter::objectCompare (const GGS_genericFormalParameter & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_constant: {
        const auto left = (GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_genericFormalParameter_2E_constant *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_type: {
        const auto left = (GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_genericFormalParameter_2E_type *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @genericFormalParameter generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameter ("genericFormalParameter",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_genericFormalParameter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericFormalParameter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericFormalParameter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter GGS_genericFormalParameter::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_genericFormalParameter result ;
  const GGS_genericFormalParameter * p = (const GGS_genericFormalParameter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericFormalParameter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum llvmStringDefinitionElement
//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement::GGS_llvmStringDefinitionElement (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement GGS_llvmStringDefinitionElement::class_func_variable (const GGS_lstring & inAssociatedValue0
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement result ;
  result.mEnum = Enumeration::enum_variable ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmStringDefinitionElement_2E_variable (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement GGS_llvmStringDefinitionElement::class_func_string (const GGS_lstring & inAssociatedValue0
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement result ;
  result.mEnum = Enumeration::enum_string ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmStringDefinitionElement_2E_string (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::method_extractVariable (GGS_lstring & outAssociatedValue_name,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_variable) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @llvmStringDefinitionElement.variable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::method_extractString (GGS_lstring & outAssociatedValue_value,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_string) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @llvmStringDefinitionElement.string invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable_3F_ GGS_llvmStringDefinitionElement::getter_getVariable (UNUSED_LOCATION_ARGS) const {
  GGS_llvmStringDefinitionElement_2E_variable_3F_ result ;
  if (mEnum == Enumeration::enum_variable) {
    const auto ptr = (const GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmStringDefinitionElement_2E_variable (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::getAssociatedValuesFor_variable (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string_3F_ GGS_llvmStringDefinitionElement::getter_getString (UNUSED_LOCATION_ARGS) const {
  GGS_llvmStringDefinitionElement_2E_string_3F_ result ;
  if (mEnum == Enumeration::enum_string) {
    const auto ptr = (const GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmStringDefinitionElement_2E_string (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::getAssociatedValuesFor_string (GGS_lstring & out_value) const {
  const auto ptr = (const GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmStringDefinitionElement [3] = {
  "(not built)",
  "variable",
  "string"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmStringDefinitionElement::getter_isVariable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_variable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmStringDefinitionElement::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<enum @llvmStringDefinitionElement: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmStringDefinitionElement [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmStringDefinitionElement::objectCompare (const GGS_llvmStringDefinitionElement & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_variable: {
        const auto left = (GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_llvmStringDefinitionElement_2E_variable *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_string: {
        const auto left = (GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_llvmStringDefinitionElement_2E_string *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmStringDefinitionElement generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement ("llvmStringDefinitionElement",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmStringDefinitionElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinitionElement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinitionElement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement GGS_llvmStringDefinitionElement::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement result ;
  const GGS_llvmStringDefinitionElement * p = (const GGS_llvmStringDefinitionElement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinitionElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@llvmStringDefinition' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_llvmStringDefinition : public cCollectionElement {
  public: GGS_llvmStringDefinition_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_llvmStringDefinition (const GGS_llvmStringDefinitionElement & in_mElement
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmStringDefinition (const GGS_llvmStringDefinition_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_llvmStringDefinition::cCollectionElement_llvmStringDefinition (const GGS_llvmStringDefinitionElement & in_mElement
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmStringDefinition::cCollectionElement_llvmStringDefinition (const GGS_llvmStringDefinition_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_llvmStringDefinition::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_llvmStringDefinition::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_llvmStringDefinition (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_llvmStringDefinition::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_llvmStringDefinition::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_llvmStringDefinition * operand = (cCollectionElement_llvmStringDefinition *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_llvmStringDefinition) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition::GGS_llvmStringDefinition (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition::GGS_llvmStringDefinition (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_llvmStringDefinition (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_llvmStringDefinition (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::enterElement (const GGS_llvmStringDefinition_2E_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmStringDefinition (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::class_func_listWithValue (const GGS_llvmStringDefinitionElement & inOperand0
                                                                             COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinition result ;
  if (inOperand0.isValid ()) {
    result = GGS_llvmStringDefinition (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_llvmStringDefinition::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_llvmStringDefinitionElement & in_mElement
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmStringDefinition * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmStringDefinition (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::addAssign_operation (const GGS_llvmStringDefinitionElement & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmStringDefinition (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_append (const GGS_llvmStringDefinitionElement inOperand0,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmStringDefinition (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_insertAtIndex (const GGS_llvmStringDefinitionElement inOperand0,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmStringDefinition (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_removeAtIndex (GGS_llvmStringDefinitionElement & outOperand0,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_popFirst (GGS_llvmStringDefinitionElement & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_popLast (GGS_llvmStringDefinitionElement & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::method_first (GGS_llvmStringDefinitionElement & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::method_last (GGS_llvmStringDefinitionElement & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::add_operation (const GGS_llvmStringDefinition & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result = GGS_llvmStringDefinition::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result = GGS_llvmStringDefinition::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result = GGS_llvmStringDefinition::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::plusAssign_operation (const GGS_llvmStringDefinition inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_setMElementAtIndex (GGS_llvmStringDefinitionElement inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement GGS_llvmStringDefinition::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  GGS_llvmStringDefinitionElement result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_llvmStringDefinition::cEnumerator_llvmStringDefinition (const GGS_llvmStringDefinition & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element cEnumerator_llvmStringDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_llvmStringDefinition * p = (const cCollectionElement_llvmStringDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement cEnumerator_llvmStringDefinition::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_llvmStringDefinition * p = (const cCollectionElement_llvmStringDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
  return p->mObject.mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//
//     @llvmStringDefinition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinition ("llvmStringDefinition",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmStringDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinition result ;
  const GGS_llvmStringDefinition * p = (const GGS_llvmStringDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmGenericType_2E_weak::objectCompare (const GGS_llvmGenericType_2E_weak & inOperand) const {
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

GGS_llvmGenericType_2E_weak::GGS_llvmGenericType_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak & GGS_llvmGenericType_2E_weak::operator = (const GGS_llvmGenericType & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak::GGS_llvmGenericType_2E_weak (const GGS_llvmGenericType & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak GGS_llvmGenericType_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmGenericType_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType GGS_llvmGenericType_2E_weak::bang_llvmGenericType_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmGenericType result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmGenericType) ;
      result = GGS_llvmGenericType ((cPtr_llvmGenericType *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmGenericType.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenericType_2E_weak ("llvmGenericType.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmGenericType_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenericType_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenericType_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak GGS_llvmGenericType_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmGenericType_2E_weak result ;
  const GGS_llvmGenericType_2E_weak * p = (const GGS_llvmGenericType_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenericType_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenericType.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@genericFormalParameterList buildFormalGenericConstantMap'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildFormalGenericConstantMap (const GGS_genericFormalParameterList inObject,
                                                    GGS_ctCheckMap & ioArgument_ioMap,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_genericFormalParameterList temp_0 = inObject ;
  cEnumerator_genericFormalParameterList enumerator_6541 (temp_0, EnumerationOrder::up) ;
  while (enumerator_6541.hasCurrentObject ()) {
    switch (enumerator_6541.current_mParameter (HERE).enumValue ()) {
    case GGS_genericFormalParameter::Enumeration::invalid:
      break ;
    case GGS_genericFormalParameter::Enumeration::enum_type:
      break ;
    case GGS_genericFormalParameter::Enumeration::enum_constant:
      {
        GGS_lstring extractedValue_6620_constantName_0 ;
        enumerator_6541.current_mParameter (HERE).getAssociatedValuesFor_constant (extractedValue_6620_constantName_0) ;
        {
        ioArgument_ioMap.setter_insertKey (extractedValue_6620_constantName_0, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 187)) ;
        }
      }
      break ;
    }
    enumerator_6541.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmStringDefinition checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompileTimeExpression (const GGS_llvmStringDefinition inObject,
                                                 const GGS_ctCheckMap constinArgument_inMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmStringDefinition temp_0 = inObject ;
  cEnumerator_llvmStringDefinition enumerator_6903 (temp_0, EnumerationOrder::up) ;
  while (enumerator_6903.hasCurrentObject ()) {
    switch (enumerator_6903.current_mElement (HERE).enumValue ()) {
    case GGS_llvmStringDefinitionElement::Enumeration::invalid:
      break ;
    case GGS_llvmStringDefinitionElement::Enumeration::enum_string:
      break ;
    case GGS_llvmStringDefinitionElement::Enumeration::enum_variable:
      {
        GGS_lstring extractedValue_6984_name_0 ;
        enumerator_6903.current_mElement (HERE).getAssociatedValuesFor_variable (extractedValue_6984_name_0) ;
        constinArgument_inMap.method_searchKey (extractedValue_6984_name_0, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 199)) ;
      }
      break ;
    }
    enumerator_6903.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::objectCompare (const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak & inOperand) const {
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

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::GGS_llvmAssignmentOperatorDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak & GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::operator = (const GGS_llvmAssignmentOperatorDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::GGS_llvmAssignmentOperatorDeclarationAST_2E_weak (const GGS_llvmAssignmentOperatorDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::bang_llvmAssignmentOperatorDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmAssignmentOperatorDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmAssignmentOperatorDeclarationAST) ;
      result = GGS_llvmAssignmentOperatorDeclarationAST ((cPtr_llvmAssignmentOperatorDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmAssignmentOperatorDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2E_weak ("llvmAssignmentOperatorDeclarationAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmAssignmentOperatorDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorDeclarationAST_2E_weak result ;
  const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak * p = (const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractAssignmentOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractAssignmentOperatorUsage * inObject,
                                       GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       GGS_instructionListIR & io_ioInstructionListIR,
                                       GGS_allocaList & io_ioAllocaList,
                                       const GGS_omnibusType constin_inTargetType,
                                       const GGS_string constin_inTargetLLVMName,
                                       const GGS_objectIR constin_inSourcePossibleReference,
                                       const GGS_location constin_inErrorLocation,
                                       const GGS_bool constin_inTargetIsInitialized,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractAssignmentOperatorUsage) ;
    inObject->method_generateCode (io_ioTemporaries, io_ioInstructionListIR, io_ioAllocaList, constin_inTargetType, constin_inTargetLLVMName, constin_inSourcePossibleReference, constin_inErrorLocation, constin_inTargetIsInitialized, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_llvmAssignmentOperatorUsage_2E_weak & inOperand) const {
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

GGS_llvmAssignmentOperatorUsage_2E_weak::GGS_llvmAssignmentOperatorUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak & GGS_llvmAssignmentOperatorUsage_2E_weak::operator = (const GGS_llvmAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak::GGS_llvmAssignmentOperatorUsage_2E_weak (const GGS_llvmAssignmentOperatorUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak GGS_llvmAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage GGS_llvmAssignmentOperatorUsage_2E_weak::bang_llvmAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmAssignmentOperatorUsage) ;
      result = GGS_llvmAssignmentOperatorUsage ((cPtr_llvmAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmAssignmentOperatorUsage.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2E_weak ("llvmAssignmentOperatorUsage.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak GGS_llvmAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorUsage_2E_weak result ;
  const GGS_llvmAssignmentOperatorUsage_2E_weak * p = (const GGS_llvmAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendAssignmentIR'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendAssignmentIR (GGS_instructionListIR & ioObject,
                                         GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         const GGS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                         GGS_allocaList & ioArgument_ioAllocaList,
                                         const GGS_omnibusType constinArgument_inTargetType,
                                         const GGS_string constinArgument_inTargetLLVMName,
                                         const GGS_objectIR constinArgument_inSourcePossibleReference,
                                         const GGS_location constinArgument_inErrorLocation,
                                         const GGS_bool constinArgument_inTargetIsInitialized,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_key_15783 = function_assignmentOperatorKey (constinArgument_inTargetType, constinArgument_inErrorLocation, extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)) ;
  GGS_abstractAssignmentOperatorUsage var_operatorUsage_15925 ;
  constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_15783, var_operatorUsage_15925, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)) ;
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 347)) ;
  GGS_instructionListIR var_instructions_15965 = temp_0 ;
  callExtensionMethod_generateCode ((cPtr_abstractAssignmentOperatorUsage *) var_operatorUsage_15925.ptr (), ioArgument_ioTemporaries, var_instructions_15965, ioArgument_ioAllocaList, constinArgument_inTargetType, constinArgument_inTargetLLVMName, constinArgument_inSourcePossibleReference, constinArgument_inErrorLocation, constinArgument_inTargetIsInitialized, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 348)) ;
  ioObject.plusAssign_operation(var_instructions_15965, inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 358)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentRoutineIR_2E_weak::objectCompare (const GGS_assignmentRoutineIR_2E_weak & inOperand) const {
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

GGS_assignmentRoutineIR_2E_weak::GGS_assignmentRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak & GGS_assignmentRoutineIR_2E_weak::operator = (const GGS_assignmentRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak::GGS_assignmentRoutineIR_2E_weak (const GGS_assignmentRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak GGS_assignmentRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assignmentRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR GGS_assignmentRoutineIR_2E_weak::bang_assignmentRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assignmentRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentRoutineIR) ;
      result = GGS_assignmentRoutineIR ((cPtr_assignmentRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentRoutineIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentRoutineIR_2E_weak ("assignmentRoutineIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignmentRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak GGS_assignmentRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_assignmentRoutineIR_2E_weak result ;
  const GGS_assignmentRoutineIR_2E_weak * p = (const GGS_assignmentRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_simpleAssignmentCopyRoutineIR_2E_weak::objectCompare (const GGS_simpleAssignmentCopyRoutineIR_2E_weak & inOperand) const {
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

GGS_simpleAssignmentCopyRoutineIR_2E_weak::GGS_simpleAssignmentCopyRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak & GGS_simpleAssignmentCopyRoutineIR_2E_weak::operator = (const GGS_simpleAssignmentCopyRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak::GGS_simpleAssignmentCopyRoutineIR_2E_weak (const GGS_simpleAssignmentCopyRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak GGS_simpleAssignmentCopyRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_simpleAssignmentCopyRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR GGS_simpleAssignmentCopyRoutineIR_2E_weak::bang_simpleAssignmentCopyRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_simpleAssignmentCopyRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_simpleAssignmentCopyRoutineIR) ;
      result = GGS_simpleAssignmentCopyRoutineIR ((cPtr_simpleAssignmentCopyRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @simpleAssignmentCopyRoutineIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2E_weak ("simpleAssignmentCopyRoutineIR.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_simpleAssignmentCopyRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleAssignmentCopyRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleAssignmentCopyRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak GGS_simpleAssignmentCopyRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_simpleAssignmentCopyRoutineIR_2E_weak result ;
  const GGS_simpleAssignmentCopyRoutineIR_2E_weak * p = (const GGS_simpleAssignmentCopyRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleAssignmentCopyRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleAssignmentCopyRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @simpleCopyAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_simpleCopyAssignmentOperatorUsage::cPtr_simpleCopyAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_simpleCopyAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_simpleCopyAssignmentOperatorUsage::objectCompare (const GGS_simpleCopyAssignmentOperatorUsage & inOperand) const {
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

GGS_simpleCopyAssignmentOperatorUsage::GGS_simpleCopyAssignmentOperatorUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_simpleCopyAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_simpleCopyAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->simpleCopyAssignmentOperatorUsage_init (inCompiler) ;
  const GGS_simpleCopyAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_simpleCopyAssignmentOperatorUsage::
simpleCopyAssignmentOperatorUsage_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage::GGS_simpleCopyAssignmentOperatorUsage (const cPtr_simpleCopyAssignmentOperatorUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleCopyAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage::class_func_new (LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_simpleCopyAssignmentOperatorUsage (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @simpleCopyAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_simpleCopyAssignmentOperatorUsage::cPtr_simpleCopyAssignmentOperatorUsage (LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_simpleCopyAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;
}

void cPtr_simpleCopyAssignmentOperatorUsage::description (String & ioString,
                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@simpleCopyAssignmentOperatorUsage]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_simpleCopyAssignmentOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_simpleCopyAssignmentOperatorUsage (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @simpleCopyAssignmentOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ("simpleCopyAssignmentOperatorUsage",
                                                                                         & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_simpleCopyAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleCopyAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleCopyAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage result ;
  const GGS_simpleCopyAssignmentOperatorUsage * p = (const GGS_simpleCopyAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleCopyAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCopyAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_simpleCopyAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_simpleCopyAssignmentOperatorUsage_2E_weak & inOperand) const {
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

GGS_simpleCopyAssignmentOperatorUsage_2E_weak::GGS_simpleCopyAssignmentOperatorUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak & GGS_simpleCopyAssignmentOperatorUsage_2E_weak::operator = (const GGS_simpleCopyAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak::GGS_simpleCopyAssignmentOperatorUsage_2E_weak (const GGS_simpleCopyAssignmentOperatorUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak GGS_simpleCopyAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage_2E_weak::bang_simpleCopyAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_simpleCopyAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_simpleCopyAssignmentOperatorUsage) ;
      result = GGS_simpleCopyAssignmentOperatorUsage ((cPtr_simpleCopyAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @simpleCopyAssignmentOperatorUsage.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2E_weak ("simpleCopyAssignmentOperatorUsage.weak",
                                                                                                 & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_simpleCopyAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleCopyAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleCopyAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak GGS_simpleCopyAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage_2E_weak result ;
  const GGS_simpleCopyAssignmentOperatorUsage_2E_weak * p = (const GGS_simpleCopyAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleCopyAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCopyAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum llvmGenerationInstructionElement
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement::GGS_llvmGenerationInstructionElement (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElement::class_func_string (const GGS_string & inAssociatedValue0
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement result ;
  result.mEnum = Enumeration::enum_string ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmGenerationInstructionElement_2E_string (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElement::class_func_symbol (const GGS_lstring & inAssociatedValue0
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement result ;
  result.mEnum = Enumeration::enum_symbol ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmGenerationInstructionElement_2E_symbol (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElement::class_func_type (const GGS_lstring & inAssociatedValue0
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement result ;
  result.mEnum = Enumeration::enum_type ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmGenerationInstructionElement_2E_type (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::method_extractString (GGS_string & outAssociatedValue_string,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_string) {
    outAssociatedValue_string.drop () ;
    String s ;
    s.appendCString ("method @llvmGenerationInstructionElement.string invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmGenerationInstructionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_string = ptr->mProperty_string ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::method_extractSymbol (GGS_lstring & outAssociatedValue_name,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_symbol) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @llvmGenerationInstructionElement.symbol invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmGenerationInstructionElement_2E_symbol *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::method_extractType (GGS_lstring & outAssociatedValue_name,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_type) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @llvmGenerationInstructionElement.type invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmGenerationInstructionElement_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string_3F_ GGS_llvmGenerationInstructionElement::getter_getString (UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElement_2E_string_3F_ result ;
  if (mEnum == Enumeration::enum_string) {
    const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmGenerationInstructionElement_2E_string (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::getAssociatedValuesFor_string (GGS_string & out_string) const {
  const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
  out_string = ptr->mProperty_string ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol_3F_ GGS_llvmGenerationInstructionElement::getter_getSymbol (UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElement_2E_symbol_3F_ result ;
  if (mEnum == Enumeration::enum_symbol) {
    const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_symbol *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmGenerationInstructionElement_2E_symbol (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::getAssociatedValuesFor_symbol (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_symbol *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type_3F_ GGS_llvmGenerationInstructionElement::getter_getType (UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElement_2E_type_3F_ result ;
  if (mEnum == Enumeration::enum_type) {
    const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmGenerationInstructionElement_2E_type (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::getAssociatedValuesFor_type (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_type *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmGenerationInstructionElement [4] = {
  "(not built)",
  "string",
  "symbol",
  "type"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmGenerationInstructionElement::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmGenerationInstructionElement::getter_isSymbol (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_symbol == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmGenerationInstructionElement::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @llvmGenerationInstructionElement: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmGenerationInstructionElement [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstructionElement generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ("llvmGenerationInstructionElement",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmGenerationInstructionElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElement::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement result ;
  const GGS_llvmGenerationInstructionElement * p = (const GGS_llvmGenerationInstructionElement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@llvmGenerationInstructionElementList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_llvmGenerationInstructionElementList : public cCollectionElement {
  public: GGS_llvmGenerationInstructionElementList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElement & in_mElement
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmGenerationInstructionElementList::cCollectionElement_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElement & in_mElement
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmGenerationInstructionElementList::cCollectionElement_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_llvmGenerationInstructionElementList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_llvmGenerationInstructionElementList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_llvmGenerationInstructionElementList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_llvmGenerationInstructionElementList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList::GGS_llvmGenerationInstructionElementList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList::GGS_llvmGenerationInstructionElementList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_llvmGenerationInstructionElementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_llvmGenerationInstructionElementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::enterElement (const GGS_llvmGenerationInstructionElementList_2E_element & inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::class_func_listWithValue (const GGS_llvmGenerationInstructionElement & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElementList result ;
  if (inOperand0.isValid ()) {
    result = GGS_llvmGenerationInstructionElementList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_llvmGenerationInstructionElementList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_llvmGenerationInstructionElement & in_mElement
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmGenerationInstructionElementList * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::addAssign_operation (const GGS_llvmGenerationInstructionElement & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_append (const GGS_llvmGenerationInstructionElement inOperand0,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_insertAtIndex (const GGS_llvmGenerationInstructionElement inOperand0,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_removeAtIndex (GGS_llvmGenerationInstructionElement & outOperand0,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_popFirst (GGS_llvmGenerationInstructionElement & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_popLast (GGS_llvmGenerationInstructionElement & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::method_first (GGS_llvmGenerationInstructionElement & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::method_last (GGS_llvmGenerationInstructionElement & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::add_operation (const GGS_llvmGenerationInstructionElementList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result = GGS_llvmGenerationInstructionElementList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result = GGS_llvmGenerationInstructionElementList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result = GGS_llvmGenerationInstructionElementList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::plusAssign_operation (const GGS_llvmGenerationInstructionElementList inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_setMElementAtIndex (GGS_llvmGenerationInstructionElement inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElementList::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  GGS_llvmGenerationInstructionElement result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_llvmGenerationInstructionElementList::cEnumerator_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element cEnumerator_llvmGenerationInstructionElementList::current (LOCATION_ARGS) const {
  const cCollectionElement_llvmGenerationInstructionElementList * p = (const cCollectionElement_llvmGenerationInstructionElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement cEnumerator_llvmGenerationInstructionElementList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_llvmGenerationInstructionElementList * p = (const cCollectionElement_llvmGenerationInstructionElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
  return p->mObject.mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstructionElementList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ("llvmGenerationInstructionElementList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmGenerationInstructionElementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElementList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElementList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElementList result ;
  const GGS_llvmGenerationInstructionElementList * p = (const GGS_llvmGenerationInstructionElementList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractLLVMInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractLLVMInstruction::cPtr_abstractLLVMInstruction (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLLVMInstruction::objectCompare (const GGS_abstractLLVMInstruction & inOperand) const {
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

GGS_abstractLLVMInstruction::GGS_abstractLLVMInstruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction::GGS_abstractLLVMInstruction (const cPtr_abstractLLVMInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLLVMInstruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractLLVMInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_abstractLLVMInstruction::cPtr_abstractLLVMInstruction (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractLLVMInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction ("abstractLLVMInstruction",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractLLVMInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLLVMInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLLVMInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLLVMInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction GGS_abstractLLVMInstruction::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractLLVMInstruction result ;
  const GGS_abstractLLVMInstruction * p = (const GGS_abstractLLVMInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLLVMInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLLVMInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLLVMInstruction_2E_weak::objectCompare (const GGS_abstractLLVMInstruction_2E_weak & inOperand) const {
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

GGS_abstractLLVMInstruction_2E_weak::GGS_abstractLLVMInstruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction_2E_weak & GGS_abstractLLVMInstruction_2E_weak::operator = (const GGS_abstractLLVMInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction_2E_weak::GGS_abstractLLVMInstruction_2E_weak (const GGS_abstractLLVMInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction_2E_weak GGS_abstractLLVMInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractLLVMInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction GGS_abstractLLVMInstruction_2E_weak::bang_abstractLLVMInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractLLVMInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLLVMInstruction) ;
      result = GGS_abstractLLVMInstruction ((cPtr_abstractLLVMInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractLLVMInstruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak ("abstractLLVMInstruction.weak",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractLLVMInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLLVMInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLLVMInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction_2E_weak GGS_abstractLLVMInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractLLVMInstruction_2E_weak result ;
  const GGS_abstractLLVMInstruction_2E_weak * p = (const GGS_abstractLLVMInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLLVMInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLLVMInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmGenerationInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmGenerationInstruction::cPtr_llvmGenerationInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (inCompiler COMMA_THERE),
mProperty_mGenerationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmGenerationInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mGenerationList.printNonNullClassInstanceProperties ("mGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmGenerationInstruction::objectCompare (const GGS_llvmGenerationInstruction & inOperand) const {
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

GGS_llvmGenerationInstruction::GGS_llvmGenerationInstruction (void) :
GGS_abstractLLVMInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmGenerationInstruction GGS_llvmGenerationInstruction::
init_21_ (const GGS_llvmGenerationInstructionElementList & in_mGenerationList,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_llvmGenerationInstruction * object = nullptr ;
  macroMyNew (object, cPtr_llvmGenerationInstruction (inCompiler COMMA_THERE)) ;
  object->llvmGenerationInstruction_init_21_ (in_mGenerationList, inCompiler) ;
  const GGS_llvmGenerationInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenerationInstruction::
llvmGenerationInstruction_init_21_ (const GGS_llvmGenerationInstructionElementList & in_mGenerationList,
                                    Compiler * /* inCompiler */) {
  mProperty_mGenerationList = in_mGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction::GGS_llvmGenerationInstruction (const cPtr_llvmGenerationInstruction * inSourcePtr) :
GGS_abstractLLVMInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmGenerationInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction GGS_llvmGenerationInstruction::class_func_new (const GGS_llvmGenerationInstructionElementList & in_mGenerationList
                                                                             COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmGenerationInstruction (in_mGenerationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstruction::readProperty_mGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionElementList () ;
  }else{
    cPtr_llvmGenerationInstruction * p = (cPtr_llvmGenerationInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenerationInstruction) ;
    return p->mProperty_mGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstruction::setProperty_mGenerationList (const GGS_llvmGenerationInstructionElementList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenerationInstruction * p = (cPtr_llvmGenerationInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenerationInstruction) ;
    p->mProperty_mGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmGenerationInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_llvmGenerationInstruction::cPtr_llvmGenerationInstruction (const GGS_llvmGenerationInstructionElementList & in_mGenerationList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (THERE),
mProperty_mGenerationList () {
  mProperty_mGenerationList = in_mGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmGenerationInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction ;
}

void cPtr_llvmGenerationInstruction::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmGenerationInstruction:") ;
  mProperty_mGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmGenerationInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmGenerationInstruction (mProperty_mGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction ("llvmGenerationInstruction",
                                                                                 & kTypeDescriptor_GALGAS_abstractLLVMInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmGenerationInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction GGS_llvmGenerationInstruction::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstruction result ;
  const GGS_llvmGenerationInstruction * p = (const GGS_llvmGenerationInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmGenerationInstruction_2E_weak::objectCompare (const GGS_llvmGenerationInstruction_2E_weak & inOperand) const {
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

GGS_llvmGenerationInstruction_2E_weak::GGS_llvmGenerationInstruction_2E_weak (void) :
GGS_abstractLLVMInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction_2E_weak & GGS_llvmGenerationInstruction_2E_weak::operator = (const GGS_llvmGenerationInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction_2E_weak::GGS_llvmGenerationInstruction_2E_weak (const GGS_llvmGenerationInstruction & inSource) :
GGS_abstractLLVMInstruction_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction_2E_weak GGS_llvmGenerationInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmGenerationInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction GGS_llvmGenerationInstruction_2E_weak::bang_llvmGenerationInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmGenerationInstruction) ;
      result = GGS_llvmGenerationInstruction ((cPtr_llvmGenerationInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction_2E_weak ("llvmGenerationInstruction.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmGenerationInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction_2E_weak GGS_llvmGenerationInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstruction_2E_weak result ;
  const GGS_llvmGenerationInstruction_2E_weak * p = (const GGS_llvmGenerationInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmVarInstruction_2E_weak::objectCompare (const GGS_llvmVarInstruction_2E_weak & inOperand) const {
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

GGS_llvmVarInstruction_2E_weak::GGS_llvmVarInstruction_2E_weak (void) :
GGS_abstractLLVMInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction_2E_weak & GGS_llvmVarInstruction_2E_weak::operator = (const GGS_llvmVarInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction_2E_weak::GGS_llvmVarInstruction_2E_weak (const GGS_llvmVarInstruction & inSource) :
GGS_abstractLLVMInstruction_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction_2E_weak GGS_llvmVarInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmVarInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction GGS_llvmVarInstruction_2E_weak::bang_llvmVarInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmVarInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmVarInstruction) ;
      result = GGS_llvmVarInstruction ((cPtr_llvmVarInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmVarInstruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmVarInstruction_2E_weak ("llvmVarInstruction.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmVarInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmVarInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmVarInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmVarInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction_2E_weak GGS_llvmVarInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_llvmVarInstruction_2E_weak result ;
  const GGS_llvmVarInstruction_2E_weak * p = (const GGS_llvmVarInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmVarInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmVarInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList appendReturn'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendReturn (GGS_llvmGenerationInstructionList & ioObject,
                                   const GGS_lstring constinArgument_inReturnType,
                                   const GGS_lstring constinArgument_inReturnValue,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElementList temp_0 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 43)) ;
  GGS_llvmGenerationInstructionElementList var_elements_1813 = temp_0 ;
  var_elements_1813.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string ("ret ")  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 44))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 44)) ;
  var_elements_1813.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_type (constinArgument_inReturnType  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 45))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 45)) ;
  var_elements_1813.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 46))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 46)) ;
  var_elements_1813.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (constinArgument_inReturnValue  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 47))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 47)) ;
  ioObject.addAssign_operation (GGS_llvmGenerationInstruction::init_21_ (var_elements_1813, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 48)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkInstructionList (const GGS_llvmGenerationInstructionList inObject,
                                           const GGS_ctCheckMap constinArgument_inMap,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ctCheckMap var_currentMap_4245 = constinArgument_inMap ;
  const GGS_llvmGenerationInstructionList temp_0 = inObject ;
  cEnumerator_llvmGenerationInstructionList enumerator_4271 (temp_0, EnumerationOrder::up) ;
  while (enumerator_4271.hasCurrentObject ()) {
    callExtensionMethod_checkInstructionList ((cPtr_abstractLLVMInstruction *) enumerator_4271.current_mInstruction (HERE).ptr (), var_currentMap_4245, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 109)) ;
    enumerator_4271.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkInstructionList (cPtr_abstractLLVMInstruction * inObject,
                                               GGS_ctCheckMap & io_ioMap,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLLVMInstruction) ;
    inObject->method_checkInstructionList (io_ioMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_assignmentGenerationVarMap::cMapElement_assignmentGenerationVarMap (const GGS_assignmentGenerationVarMap_2E_element & inValue
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mValue (inValue.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_assignmentGenerationVarMap::cMapElement_assignmentGenerationVarMap (const GGS_lstring & inKey,
                                                                                const GGS_string & in_mValue
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_assignmentGenerationVarMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_assignmentGenerationVarMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_assignmentGenerationVarMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_assignmentGenerationVarMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap::GGS_assignmentGenerationVarMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap::GGS_assignmentGenerationVarMap (const GGS_assignmentGenerationVarMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap & GGS_assignmentGenerationVarMap::operator = (const GGS_assignmentGenerationVarMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_ GGS_assignmentGenerationVarMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_assignmentGenerationVarMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_assignmentGenerationVarMap * p = (cMapElement_assignmentGenerationVarMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_assignmentGenerationVarMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_assignmentGenerationVarMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mValue = p->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::class_func_mapWithMapToOverride (const GGS_assignmentGenerationVarMap & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_assignmentGenerationVarMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::enterElement (const GGS_assignmentGenerationVarMap_2E_element & inValue,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentGenerationVarMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@assignmentGenerationVarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::addAssign_operation (const GGS_lstring & inKey,
                                                          const GGS_string & inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentGenerationVarMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@assignmentGenerationVarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::add_operation (const GGS_assignmentGenerationVarMap & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_assignmentGenerationVarMap result = *this ;
  cEnumerator_assignmentGenerationVarMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::setter_insertKey (GGS_lstring inKey,
                                                       GGS_string inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentGenerationVarMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_assignmentGenerationVarMap_searchKey = "internal error" ;

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::method_searchKey (GGS_lstring inKey,
                                                       GGS_string & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_assignmentGenerationVarMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
    outArgument0 = p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_assignmentGenerationVarMap::getter_mValueForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::setter_setMValueForKey (GGS_string inAttributeValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_assignmentGenerationVarMap * p = (cMapElement_assignmentGenerationVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_assignmentGenerationVarMap * GGS_assignmentGenerationVarMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                            const GGS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * result = (cMapElement_assignmentGenerationVarMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_assignmentGenerationVarMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_assignmentGenerationVarMap::cEnumerator_assignmentGenerationVarMap (const GGS_assignmentGenerationVarMap & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element cEnumerator_assignmentGenerationVarMap::current (LOCATION_ARGS) const {
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
  return GGS_assignmentGenerationVarMap_2E_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_assignmentGenerationVarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_assignmentGenerationVarMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentGenerationVarMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap ("assignmentGenerationVarMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignmentGenerationVarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentGenerationVarMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentGenerationVarMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap result ;
  const GGS_assignmentGenerationVarMap * p = (const GGS_assignmentGenerationVarMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentGenerationVarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentGenerationVarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateIRCode (const GGS_llvmGenerationInstructionList inObject,
                                     const GGS_assignmentGenerationVarMap constinArgument_inVarMap,
                                     const GGS_assignmentGenerationVarMap constinArgument_inTypeMap,
                                     GGS_stringlist & ioArgument_ioInstructionAsStringListIR,
                                     GGS_uint & ioArgument_ioTemporaryIndex,
                                     GGS_allocaList & ioArgument_ioAllocaList,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap var_varMap_5991 = constinArgument_inVarMap ;
  GGS_assignmentGenerationVarMap var_typeMap_6015 = constinArgument_inTypeMap ;
  const GGS_llvmGenerationInstructionList temp_0 = inObject ;
  cEnumerator_llvmGenerationInstructionList enumerator_6042 (temp_0, EnumerationOrder::up) ;
  while (enumerator_6042.hasCurrentObject ()) {
    callExtensionMethod_generateIRCode ((cPtr_abstractLLVMInstruction *) enumerator_6042.current_mInstruction (HERE).ptr (), var_varMap_5991, var_typeMap_6015, ioArgument_ioInstructionAsStringListIR, ioArgument_ioTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 159)) ;
    enumerator_6042.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateIRCode (cPtr_abstractLLVMInstruction * inObject,
                                         GGS_assignmentGenerationVarMap & io_ioVarMap,
                                         GGS_assignmentGenerationVarMap & io_ioTypeMap,
                                         GGS_stringlist & io_ioInstructionAsStringListIR,
                                         GGS_uint & io_ioTemporaryIndex,
                                         GGS_allocaList & io_ioAllocaList,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLLVMInstruction) ;
    inObject->method_generateIRCode (io_ioVarMap, io_ioTypeMap, io_ioInstructionAsStringListIR, io_ioTemporaryIndex, io_ioAllocaList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::GGS_declarationListAST_2E_element (void) :
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::~ GGS_declarationListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::init_21_ (const GGS_abstractDeclarationAST & in_mDeclaration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::GGS_declarationListAST_2E_element (const GGS_abstractDeclarationAST & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::class_func_new (const GGS_abstractDeclarationAST & in_mDeclaration,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declarationListAST_2E_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declarationListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST_2E_element ("declarationListAST.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  const GGS_declarationListAST_2E_element * p = (const GGS_declarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element::GGS_checkTargetListAST_2E_element (void) :
mProperty_mTargetConstructLocation (),
mProperty_mAcceptedTargetList () {
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element::~ GGS_checkTargetListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_checkTargetListAST_2E_element GGS_checkTargetListAST_2E_element::init_21__21_ (const GGS_location & in_mTargetConstructLocation,
                                                                                   const GGS_lstringlist & in_mAcceptedTargetList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_checkTargetListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetConstructLocation = in_mTargetConstructLocation ;
  result.mProperty_mAcceptedTargetList = in_mAcceptedTargetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element::GGS_checkTargetListAST_2E_element (const GGS_location & inOperand0,
                                                                      const GGS_lstringlist & inOperand1) :
mProperty_mTargetConstructLocation (inOperand0),
mProperty_mAcceptedTargetList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element GGS_checkTargetListAST_2E_element::class_func_new (const GGS_location & in_mTargetConstructLocation,
                                                                                     const GGS_lstringlist & in_mAcceptedTargetList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_checkTargetListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetConstructLocation = in_mTargetConstructLocation ;
  result.mProperty_mAcceptedTargetList = in_mAcceptedTargetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_checkTargetListAST_2E_element::isValid (void) const {
  return mProperty_mTargetConstructLocation.isValid () && mProperty_mAcceptedTargetList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST_2E_element::drop (void) {
  mProperty_mTargetConstructLocation.drop () ;
  mProperty_mAcceptedTargetList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @checkTargetListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetConstructLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAcceptedTargetList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @checkTargetListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkTargetListAST_2E_element ("checkTargetListAST.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_checkTargetListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkTargetListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_checkTargetListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_checkTargetListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element GGS_checkTargetListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_checkTargetListAST_2E_element result ;
  const GGS_checkTargetListAST_2E_element * p = (const GGS_checkTargetListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_checkTargetListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkTargetListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element::GGS_scopeStack_2E_element (void) :
mProperty_mScopeKind (),
mProperty_mFirstBranch (),
mProperty_mInitialStateMap (),
mProperty_mReferenceStateMap (),
mProperty_mObjectList () {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element::~ GGS_scopeStack_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_scopeStack_2E_element GGS_scopeStack_2E_element::init_21__21__21__21__21_ (const GGS_scopeKind & in_mScopeKind,
                                                                               const GGS_bool & in_mFirstBranch,
                                                                               const GGS_referenceStateMap & in_mInitialStateMap,
                                                                               const GGS_referenceStateMap & in_mReferenceStateMap,
                                                                               const GGS_lstringlist & in_mObjectList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_scopeStack_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mScopeKind = in_mScopeKind ;
  result.mProperty_mFirstBranch = in_mFirstBranch ;
  result.mProperty_mInitialStateMap = in_mInitialStateMap ;
  result.mProperty_mReferenceStateMap = in_mReferenceStateMap ;
  result.mProperty_mObjectList = in_mObjectList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element::GGS_scopeStack_2E_element (const GGS_scopeKind & inOperand0,
                                                      const GGS_bool & inOperand1,
                                                      const GGS_referenceStateMap & inOperand2,
                                                      const GGS_referenceStateMap & inOperand3,
                                                      const GGS_lstringlist & inOperand4) :
mProperty_mScopeKind (inOperand0),
mProperty_mFirstBranch (inOperand1),
mProperty_mInitialStateMap (inOperand2),
mProperty_mReferenceStateMap (inOperand3),
mProperty_mObjectList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element GGS_scopeStack_2E_element::class_func_new (const GGS_scopeKind & in_mScopeKind,
                                                                     const GGS_bool & in_mFirstBranch,
                                                                     const GGS_referenceStateMap & in_mInitialStateMap,
                                                                     const GGS_referenceStateMap & in_mReferenceStateMap,
                                                                     const GGS_lstringlist & in_mObjectList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_scopeStack_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mScopeKind = in_mScopeKind ;
  result.mProperty_mFirstBranch = in_mFirstBranch ;
  result.mProperty_mInitialStateMap = in_mInitialStateMap ;
  result.mProperty_mReferenceStateMap = in_mReferenceStateMap ;
  result.mProperty_mObjectList = in_mObjectList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_scopeStack_2E_element::isValid (void) const {
  return mProperty_mScopeKind.isValid () && mProperty_mFirstBranch.isValid () && mProperty_mInitialStateMap.isValid () && mProperty_mReferenceStateMap.isValid () && mProperty_mObjectList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack_2E_element::drop (void) {
  mProperty_mScopeKind.drop () ;
  mProperty_mFirstBranch.drop () ;
  mProperty_mInitialStateMap.drop () ;
  mProperty_mReferenceStateMap.drop () ;
  mProperty_mObjectList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @scopeStack.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mScopeKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFirstBranch.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitialStateMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReferenceStateMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mObjectList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @scopeStack.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeStack_2E_element ("scopeStack.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_scopeStack_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_scopeStack_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_scopeStack_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element GGS_scopeStack_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_scopeStack_2E_element result ;
  const GGS_scopeStack_2E_element * p = (const GGS_scopeStack_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_scopeStack_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeStack.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant::GGS_valuedObject_2E_globalConstant (void) :
mProperty_objectIR () {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant::~ GGS_valuedObject_2E_globalConstant (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant GGS_valuedObject_2E_globalConstant::init_21_ (const GGS_objectIR & in_objectIR,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalConstant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_objectIR = in_objectIR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalConstant::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant::GGS_valuedObject_2E_globalConstant (const GGS_objectIR & inOperand0) :
mProperty_objectIR (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant GGS_valuedObject_2E_globalConstant::class_func_new (const GGS_objectIR & in_objectIR,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalConstant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_objectIR = in_objectIR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_globalConstant::isValid (void) const {
  return mProperty_objectIR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalConstant::drop (void) {
  mProperty_objectIR.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalConstant::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @valuedObject.globalConstant:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_objectIR.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @valuedObject.globalConstant generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant ("valuedObject.globalConstant",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_globalConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_globalConstant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_globalConstant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant GGS_valuedObject_2E_globalConstant::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalConstant result ;
  const GGS_valuedObject_2E_globalConstant * p = (const GGS_valuedObject_2E_globalConstant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_globalConstant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.globalConstant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @valuedObject_2E_globalConstant_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant_3F_::GGS_valuedObject_2E_globalConstant_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant_3F_::GGS_valuedObject_2E_globalConstant_3F_ (const GGS_valuedObject_2E_globalConstant & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant_3F_ GGS_valuedObject_2E_globalConstant_3F_::init_nil (void) {
  GGS_valuedObject_2E_globalConstant_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_globalConstant_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_globalConstant_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalConstant_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_valuedObject_2E_globalConstant () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalConstant_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @valuedObject.globalConstant? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant_3F_ ("valuedObject.globalConstant?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_globalConstant_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_globalConstant_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_globalConstant_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant_3F_ GGS_valuedObject_2E_globalConstant_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalConstant_3F_ result ;
  const GGS_valuedObject_2E_globalConstant_3F_ * p = (const GGS_valuedObject_2E_globalConstant_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_globalConstant_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.globalConstant?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element::GGS_declarationDecorationList_2E_element (void) :
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element::~ GGS_declarationDecorationList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declarationDecorationList_2E_element GGS_declarationDecorationList_2E_element::init_21_ (const GGS_abstractDecoratedDeclaration & in_mDeclaration,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationDecorationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element::GGS_declarationDecorationList_2E_element (const GGS_abstractDecoratedDeclaration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element GGS_declarationDecorationList_2E_element::class_func_new (const GGS_abstractDecoratedDeclaration & in_mDeclaration,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationDecorationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declarationDecorationList_2E_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList_2E_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declarationDecorationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declarationDecorationList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationDecorationList_2E_element ("declarationDecorationList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declarationDecorationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationDecorationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationDecorationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationDecorationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element GGS_declarationDecorationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_declarationDecorationList_2E_element result ;
  const GGS_declarationDecorationList_2E_element * p = (const GGS_declarationDecorationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationDecorationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationDecorationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple::GGS_constructorValue_2E_simple (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple::~ GGS_constructorValue_2E_simple (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constructorValue_2E_simple GGS_constructorValue_2E_simple::init_21_ (const GGS_bigint & in_value,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_simple result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_simple::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple::GGS_constructorValue_2E_simple (const GGS_bigint & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple GGS_constructorValue_2E_simple::class_func_new (const GGS_bigint & in_value,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_simple result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_simple::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_simple::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_simple::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorValue.simple:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorValue.simple generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_simple ("constructorValue.simple",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorValue_2E_simple::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_simple ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_simple::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_simple (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple GGS_constructorValue_2E_simple::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_simple result ;
  const GGS_constructorValue_2E_simple * p = (const GGS_constructorValue_2E_simple *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_simple *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.simple", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @constructorValue_2E_simple_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple_3F_::GGS_constructorValue_2E_simple_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple_3F_::GGS_constructorValue_2E_simple_3F_ (const GGS_constructorValue_2E_simple & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple_3F_ GGS_constructorValue_2E_simple_3F_::init_nil (void) {
  GGS_constructorValue_2E_simple_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_simple_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_simple_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_simple_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constructorValue_2E_simple () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_simple_3F_::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorValue.simple? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_simple_3F_ ("constructorValue.simple?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorValue_2E_simple_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_simple_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_simple_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_simple_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple_3F_ GGS_constructorValue_2E_simple_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_simple_3F_ result ;
  const GGS_constructorValue_2E_simple_3F_ * p = (const GGS_constructorValue_2E_simple_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_simple_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.simple?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure::GGS_constructorValue_2E_structure (void) :
mProperty_sortedOperandList () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure::~ GGS_constructorValue_2E_structure (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constructorValue_2E_structure GGS_constructorValue_2E_structure::init_21_ (const GGS_sortedOperandIRList & in_sortedOperandList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_sortedOperandList = in_sortedOperandList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_structure::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure::GGS_constructorValue_2E_structure (const GGS_sortedOperandIRList & inOperand0) :
mProperty_sortedOperandList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure GGS_constructorValue_2E_structure::class_func_new (const GGS_sortedOperandIRList & in_sortedOperandList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_sortedOperandList = in_sortedOperandList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_structure::isValid (void) const {
  return mProperty_sortedOperandList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_structure::drop (void) {
  mProperty_sortedOperandList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_structure::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorValue.structure:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_sortedOperandList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorValue.structure generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_structure ("constructorValue.structure",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorValue_2E_structure::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_structure ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_structure::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_structure (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure GGS_constructorValue_2E_structure::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_structure result ;
  const GGS_constructorValue_2E_structure * p = (const GGS_constructorValue_2E_structure *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_structure *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.structure", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @constructorValue_2E_structure_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure_3F_::GGS_constructorValue_2E_structure_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure_3F_::GGS_constructorValue_2E_structure_3F_ (const GGS_constructorValue_2E_structure & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure_3F_ GGS_constructorValue_2E_structure_3F_::init_nil (void) {
  GGS_constructorValue_2E_structure_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_structure_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_structure_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_structure_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constructorValue_2E_structure () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_structure_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorValue.structure? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_structure_3F_ ("constructorValue.structure?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorValue_2E_structure_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_structure_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_structure_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_structure_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure_3F_ GGS_constructorValue_2E_structure_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_structure_3F_ result ;
  const GGS_constructorValue_2E_structure_3F_ * p = (const GGS_constructorValue_2E_structure_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_structure_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.structure?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty::GGS_propertyGetterKind_2E_computedProperty (void) :
mProperty_typeProxy (),
mProperty_modeDictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty::~ GGS_propertyGetterKind_2E_computedProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty GGS_propertyGetterKind_2E_computedProperty::init_21__21_ (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                     const GGS_routineLLVMNameDict & in_modeDictionary,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_modeDictionary = in_modeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_computedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty::GGS_propertyGetterKind_2E_computedProperty (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                        const GGS_routineLLVMNameDict & inOperand1) :
mProperty_typeProxy (inOperand0),
mProperty_modeDictionary (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty GGS_propertyGetterKind_2E_computedProperty::class_func_new (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                       const GGS_routineLLVMNameDict & in_modeDictionary,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_modeDictionary = in_modeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_computedProperty::isValid (void) const {
  return mProperty_typeProxy.isValid () && mProperty_modeDictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_computedProperty::drop (void) {
  mProperty_typeProxy.drop () ;
  mProperty_modeDictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_computedProperty::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterKind.computedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeProxy.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_modeDictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterKind.computedProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty ("propertyGetterKind.computedProperty",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGetterKind_2E_computedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_computedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_computedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty GGS_propertyGetterKind_2E_computedProperty::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_computedProperty result ;
  const GGS_propertyGetterKind_2E_computedProperty * p = (const GGS_propertyGetterKind_2E_computedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_computedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.computedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyGetterKind_2E_computedProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty_3F_::GGS_propertyGetterKind_2E_computedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty_3F_::GGS_propertyGetterKind_2E_computedProperty_3F_ (const GGS_propertyGetterKind_2E_computedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty_3F_ GGS_propertyGetterKind_2E_computedProperty_3F_::init_nil (void) {
  GGS_propertyGetterKind_2E_computedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_computedProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_computedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_computedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyGetterKind_2E_computedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_computedProperty_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterKind.computedProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty_3F_ ("propertyGetterKind.computedProperty?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGetterKind_2E_computedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_computedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_computedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty_3F_ GGS_propertyGetterKind_2E_computedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_computedProperty_3F_ result ;
  const GGS_propertyGetterKind_2E_computedProperty_3F_ * p = (const GGS_propertyGetterKind_2E_computedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_computedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.computedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty::GGS_propertyGetterKind_2E_constantProperty (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty::~ GGS_propertyGetterKind_2E_constantProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty GGS_propertyGetterKind_2E_constantProperty::init_21_ (const GGS_objectIR & in_value,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_constantProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_constantProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty::GGS_propertyGetterKind_2E_constantProperty (const GGS_objectIR & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty GGS_propertyGetterKind_2E_constantProperty::class_func_new (const GGS_objectIR & in_value,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_constantProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_constantProperty::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_constantProperty::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_constantProperty::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterKind.constantProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterKind.constantProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty ("propertyGetterKind.constantProperty",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGetterKind_2E_constantProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_constantProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_constantProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty GGS_propertyGetterKind_2E_constantProperty::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_constantProperty result ;
  const GGS_propertyGetterKind_2E_constantProperty * p = (const GGS_propertyGetterKind_2E_constantProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_constantProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.constantProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyGetterKind_2E_constantProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty_3F_::GGS_propertyGetterKind_2E_constantProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty_3F_::GGS_propertyGetterKind_2E_constantProperty_3F_ (const GGS_propertyGetterKind_2E_constantProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty_3F_ GGS_propertyGetterKind_2E_constantProperty_3F_::init_nil (void) {
  GGS_propertyGetterKind_2E_constantProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_constantProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_constantProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_constantProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyGetterKind_2E_constantProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_constantProperty_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterKind.constantProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty_3F_ ("propertyGetterKind.constantProperty?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGetterKind_2E_constantProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_constantProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_constantProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty_3F_ GGS_propertyGetterKind_2E_constantProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_constantProperty_3F_ result ;
  const GGS_propertyGetterKind_2E_constantProperty_3F_ * p = (const GGS_propertyGetterKind_2E_constantProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_constantProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.constantProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty::GGS_propertySetterKind_2E_computedProperty (void) :
mProperty_typeProxy (),
mProperty_getterModeDictionary (),
mProperty_setterModeDictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty::~ GGS_propertySetterKind_2E_computedProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty GGS_propertySetterKind_2E_computedProperty::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                         const GGS_routineLLVMNameDict & in_getterModeDictionary,
                                                                                                         const GGS_routineLLVMNameDict & in_setterModeDictionary,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_getterModeDictionary = in_getterModeDictionary ;
  result.mProperty_setterModeDictionary = in_setterModeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_computedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty::GGS_propertySetterKind_2E_computedProperty (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                        const GGS_routineLLVMNameDict & inOperand1,
                                                                                        const GGS_routineLLVMNameDict & inOperand2) :
mProperty_typeProxy (inOperand0),
mProperty_getterModeDictionary (inOperand1),
mProperty_setterModeDictionary (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty GGS_propertySetterKind_2E_computedProperty::class_func_new (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                       const GGS_routineLLVMNameDict & in_getterModeDictionary,
                                                                                                       const GGS_routineLLVMNameDict & in_setterModeDictionary,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_getterModeDictionary = in_getterModeDictionary ;
  result.mProperty_setterModeDictionary = in_setterModeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterKind_2E_computedProperty::isValid (void) const {
  return mProperty_typeProxy.isValid () && mProperty_getterModeDictionary.isValid () && mProperty_setterModeDictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_computedProperty::drop (void) {
  mProperty_typeProxy.drop () ;
  mProperty_getterModeDictionary.drop () ;
  mProperty_setterModeDictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_computedProperty::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertySetterKind.computedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeProxy.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_getterModeDictionary.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_setterModeDictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertySetterKind.computedProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty ("propertySetterKind.computedProperty",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertySetterKind_2E_computedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterKind_2E_computedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterKind_2E_computedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty GGS_propertySetterKind_2E_computedProperty::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_computedProperty result ;
  const GGS_propertySetterKind_2E_computedProperty * p = (const GGS_propertySetterKind_2E_computedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterKind_2E_computedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind.computedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertySetterKind_2E_computedProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty_3F_::GGS_propertySetterKind_2E_computedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty_3F_::GGS_propertySetterKind_2E_computedProperty_3F_ (const GGS_propertySetterKind_2E_computedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty_3F_ GGS_propertySetterKind_2E_computedProperty_3F_::init_nil (void) {
  GGS_propertySetterKind_2E_computedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterKind_2E_computedProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterKind_2E_computedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_computedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertySetterKind_2E_computedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_computedProperty_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertySetterKind.computedProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty_3F_ ("propertySetterKind.computedProperty?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertySetterKind_2E_computedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterKind_2E_computedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterKind_2E_computedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty_3F_ GGS_propertySetterKind_2E_computedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_computedProperty_3F_ result ;
  const GGS_propertySetterKind_2E_computedProperty_3F_ * p = (const GGS_propertySetterKind_2E_computedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterKind_2E_computedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind.computedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element::GGS_operandIRList_2E_element (void) :
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element::~ GGS_operandIRList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_operandIRList_2E_element GGS_operandIRList_2E_element::init_21_ (const GGS_objectIR & in_mOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_operandIRList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element::GGS_operandIRList_2E_element (const GGS_objectIR & inOperand0) :
mProperty_mOperand (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element GGS_operandIRList_2E_element::class_func_new (const GGS_objectIR & in_mOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_operandIRList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_operandIRList_2E_element::objectCompare (const GGS_operandIRList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_operandIRList_2E_element::isValid (void) const {
  return mProperty_mOperand.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList_2E_element::drop (void) {
  mProperty_mOperand.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @operandIRList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @operandIRList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operandIRList_2E_element ("operandIRList.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_operandIRList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_operandIRList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_operandIRList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element GGS_operandIRList_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_operandIRList_2E_element result ;
  const GGS_operandIRList_2E_element * p = (const GGS_operandIRList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_operandIRList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration::GGS_typeKind_2E_enumeration (void) :
mProperty_bitCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration::~ GGS_typeKind_2E_enumeration (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_enumeration GGS_typeKind_2E_enumeration::init_21_ (const GGS_uint & in_bitCount,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_enumeration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumeration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration::GGS_typeKind_2E_enumeration (const GGS_uint & inOperand0) :
mProperty_bitCount (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration GGS_typeKind_2E_enumeration::class_func_new (const GGS_uint & in_bitCount,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_enumeration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_enumeration::objectCompare (const GGS_typeKind_2E_enumeration & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitCount.objectCompare (inOperand.mProperty_bitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_enumeration::isValid (void) const {
  return mProperty_bitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumeration::drop (void) {
  mProperty_bitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumeration::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.enumeration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.enumeration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_enumeration ("typeKind.enumeration",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_enumeration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_enumeration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_enumeration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_enumeration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration GGS_typeKind_2E_enumeration::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_enumeration result ;
  const GGS_typeKind_2E_enumeration * p = (const GGS_typeKind_2E_enumeration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_enumeration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.enumeration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2E_enumeration_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration_3F_::GGS_typeKind_2E_enumeration_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration_3F_::GGS_typeKind_2E_enumeration_3F_ (const GGS_typeKind_2E_enumeration & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration_3F_ GGS_typeKind_2E_enumeration_3F_::init_nil (void) {
  GGS_typeKind_2E_enumeration_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_enumeration_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_enumeration_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumeration_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_enumeration () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumeration_3F_::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.enumeration? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_enumeration_3F_ ("typeKind.enumeration?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_enumeration_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_enumeration_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_enumeration_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_enumeration_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration_3F_ GGS_typeKind_2E_enumeration_3F_::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_enumeration_3F_ result ;
  const GGS_typeKind_2E_enumeration_3F_ * p = (const GGS_typeKind_2E_enumeration_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_enumeration_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.enumeration?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure::GGS_typeKind_2E_structure (void) :
mProperty_propertyList () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure::~ GGS_typeKind_2E_structure (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_structure GGS_typeKind_2E_structure::init_21_ (const GGS_propertyList & in_propertyList,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyList = in_propertyList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_structure::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure::GGS_typeKind_2E_structure (const GGS_propertyList & inOperand0) :
mProperty_propertyList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure GGS_typeKind_2E_structure::class_func_new (const GGS_propertyList & in_propertyList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyList = in_propertyList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_structure::objectCompare (const GGS_typeKind_2E_structure & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_propertyList.objectCompare (inOperand.mProperty_propertyList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_structure::isValid (void) const {
  return mProperty_propertyList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_structure::drop (void) {
  mProperty_propertyList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_structure::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.structure:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.structure generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_structure ("typeKind.structure",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_structure::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_structure ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_structure::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_structure (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure GGS_typeKind_2E_structure::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_structure result ;
  const GGS_typeKind_2E_structure * p = (const GGS_typeKind_2E_structure *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_structure *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.structure", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2E_structure_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure_3F_::GGS_typeKind_2E_structure_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure_3F_::GGS_typeKind_2E_structure_3F_ (const GGS_typeKind_2E_structure & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure_3F_ GGS_typeKind_2E_structure_3F_::init_nil (void) {
  GGS_typeKind_2E_structure_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_structure_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_structure_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_structure_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_structure () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_structure_3F_::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.structure? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_structure_3F_ ("typeKind.structure?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_structure_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_structure_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_structure_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_structure_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure_3F_ GGS_typeKind_2E_structure_3F_::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_structure_3F_ result ;
  const GGS_typeKind_2E_structure_3F_ * p = (const GGS_typeKind_2E_structure_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_structure_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.structure?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer::GGS_typeKind_2E_integer (void) :
mProperty_min (),
mProperty_max (),
mProperty_unsigned (),
mProperty_bitCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer::~ GGS_typeKind_2E_integer (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_integer GGS_typeKind_2E_integer::init_21__21__21__21_ (const GGS_bigint & in_min,
                                                                       const GGS_bigint & in_max,
                                                                       const GGS_bool & in_unsigned,
                                                                       const GGS_uint & in_bitCount,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_integer result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_min = in_min ;
  result.mProperty_max = in_max ;
  result.mProperty_unsigned = in_unsigned ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_integer::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer::GGS_typeKind_2E_integer (const GGS_bigint & inOperand0,
                                                  const GGS_bigint & inOperand1,
                                                  const GGS_bool & inOperand2,
                                                  const GGS_uint & inOperand3) :
mProperty_min (inOperand0),
mProperty_max (inOperand1),
mProperty_unsigned (inOperand2),
mProperty_bitCount (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer GGS_typeKind_2E_integer::class_func_new (const GGS_bigint & in_min,
                                                                 const GGS_bigint & in_max,
                                                                 const GGS_bool & in_unsigned,
                                                                 const GGS_uint & in_bitCount,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_integer result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_min = in_min ;
  result.mProperty_max = in_max ;
  result.mProperty_unsigned = in_unsigned ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_integer::objectCompare (const GGS_typeKind_2E_integer & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_min.objectCompare (inOperand.mProperty_min) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_max.objectCompare (inOperand.mProperty_max) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_unsigned.objectCompare (inOperand.mProperty_unsigned) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitCount.objectCompare (inOperand.mProperty_bitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_integer::isValid (void) const {
  return mProperty_min.isValid () && mProperty_max.isValid () && mProperty_unsigned.isValid () && mProperty_bitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_integer::drop (void) {
  mProperty_min.drop () ;
  mProperty_max.drop () ;
  mProperty_unsigned.drop () ;
  mProperty_bitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_integer::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.integer:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_min.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_max.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_unsigned.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_bitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.integer generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_integer ("typeKind.integer",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_integer::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_integer ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_integer::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_integer (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer GGS_typeKind_2E_integer::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_integer result ;
  const GGS_typeKind_2E_integer * p = (const GGS_typeKind_2E_integer *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_integer *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.integer", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2E_integer_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer_3F_::GGS_typeKind_2E_integer_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer_3F_::GGS_typeKind_2E_integer_3F_ (const GGS_typeKind_2E_integer & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer_3F_ GGS_typeKind_2E_integer_3F_::init_nil (void) {
  GGS_typeKind_2E_integer_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_integer_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_integer_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_integer_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_integer () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_integer_3F_::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.integer? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_integer_3F_ ("typeKind.integer?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_integer_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_integer_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_integer_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_integer_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer_3F_ GGS_typeKind_2E_integer_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_integer_3F_ result ;
  const GGS_typeKind_2E_integer_3F_ * p = (const GGS_typeKind_2E_integer_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_integer_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.integer?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType::GGS_typeKind_2E_llvmType (void) :
mProperty_bitSize () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType::~ GGS_typeKind_2E_llvmType (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_llvmType GGS_typeKind_2E_llvmType::init_21_ (const GGS_bigint & in_bitSize,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_llvmType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitSize = in_bitSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_llvmType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType::GGS_typeKind_2E_llvmType (const GGS_bigint & inOperand0) :
mProperty_bitSize (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType GGS_typeKind_2E_llvmType::class_func_new (const GGS_bigint & in_bitSize,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_llvmType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitSize = in_bitSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_llvmType::objectCompare (const GGS_typeKind_2E_llvmType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitSize.objectCompare (inOperand.mProperty_bitSize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_llvmType::isValid (void) const {
  return mProperty_bitSize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_llvmType::drop (void) {
  mProperty_bitSize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_llvmType::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.llvmType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bitSize.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.llvmType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_llvmType ("typeKind.llvmType",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_llvmType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_llvmType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_llvmType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_llvmType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType GGS_typeKind_2E_llvmType::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_llvmType result ;
  const GGS_typeKind_2E_llvmType * p = (const GGS_typeKind_2E_llvmType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_llvmType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.llvmType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2E_llvmType_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType_3F_::GGS_typeKind_2E_llvmType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType_3F_::GGS_typeKind_2E_llvmType_3F_ (const GGS_typeKind_2E_llvmType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType_3F_ GGS_typeKind_2E_llvmType_3F_::init_nil (void) {
  GGS_typeKind_2E_llvmType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_llvmType_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_llvmType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_llvmType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_llvmType () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_llvmType_3F_::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.llvmType? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_llvmType_3F_ ("typeKind.llvmType?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_llvmType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_llvmType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_llvmType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_llvmType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType_3F_ GGS_typeKind_2E_llvmType_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_llvmType_3F_ result ;
  const GGS_typeKind_2E_llvmType_3F_ * p = (const GGS_typeKind_2E_llvmType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_llvmType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.llvmType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic::GGS_typeKind_2E_generic (void) :
mProperty_parameters (),
mProperty_whereClause (),
mProperty_llvmNativeTypeNameExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic::~ GGS_typeKind_2E_generic (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_generic GGS_typeKind_2E_generic::init_21__21__21_ (const GGS_genericFormalParameterList & in_parameters,
                                                                   const GGS_ctExpressionAST & in_whereClause,
                                                                   const GGS_llvmStringDefinition & in_llvmNativeTypeNameExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_generic result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_parameters = in_parameters ;
  result.mProperty_whereClause = in_whereClause ;
  result.mProperty_llvmNativeTypeNameExpression = in_llvmNativeTypeNameExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_generic::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic::GGS_typeKind_2E_generic (const GGS_genericFormalParameterList & inOperand0,
                                                  const GGS_ctExpressionAST & inOperand1,
                                                  const GGS_llvmStringDefinition & inOperand2) :
mProperty_parameters (inOperand0),
mProperty_whereClause (inOperand1),
mProperty_llvmNativeTypeNameExpression (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic GGS_typeKind_2E_generic::class_func_new (const GGS_genericFormalParameterList & in_parameters,
                                                                 const GGS_ctExpressionAST & in_whereClause,
                                                                 const GGS_llvmStringDefinition & in_llvmNativeTypeNameExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_generic result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_parameters = in_parameters ;
  result.mProperty_whereClause = in_whereClause ;
  result.mProperty_llvmNativeTypeNameExpression = in_llvmNativeTypeNameExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_generic::objectCompare (const GGS_typeKind_2E_generic & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_parameters.objectCompare (inOperand.mProperty_parameters) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_whereClause.objectCompare (inOperand.mProperty_whereClause) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_llvmNativeTypeNameExpression.objectCompare (inOperand.mProperty_llvmNativeTypeNameExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_generic::isValid (void) const {
  return mProperty_parameters.isValid () && mProperty_whereClause.isValid () && mProperty_llvmNativeTypeNameExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_generic::drop (void) {
  mProperty_parameters.drop () ;
  mProperty_whereClause.drop () ;
  mProperty_llvmNativeTypeNameExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_generic::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.generic:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_parameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_whereClause.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_llvmNativeTypeNameExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.generic generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_generic ("typeKind.generic",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_generic::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_generic ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_generic::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_generic (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic GGS_typeKind_2E_generic::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_generic result ;
  const GGS_typeKind_2E_generic * p = (const GGS_typeKind_2E_generic *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_generic *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.generic", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2E_generic_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic_3F_::GGS_typeKind_2E_generic_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic_3F_::GGS_typeKind_2E_generic_3F_ (const GGS_typeKind_2E_generic & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic_3F_ GGS_typeKind_2E_generic_3F_::init_nil (void) {
  GGS_typeKind_2E_generic_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_generic_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_generic_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_generic_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_generic () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_generic_3F_::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.generic? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_generic_3F_ ("typeKind.generic?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_generic_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_generic_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_generic_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_generic_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic_3F_ GGS_typeKind_2E_generic_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_generic_3F_ result ;
  const GGS_typeKind_2E_generic_3F_ * p = (const GGS_typeKind_2E_generic_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_generic_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.generic?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque::GGS_typeKind_2E_opaque (void) :
mProperty_bitCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque::~ GGS_typeKind_2E_opaque (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_opaque GGS_typeKind_2E_opaque::init_21_ (const GGS_bigint & in_bitCount,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_opaque result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_opaque::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque::GGS_typeKind_2E_opaque (const GGS_bigint & inOperand0) :
mProperty_bitCount (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque GGS_typeKind_2E_opaque::class_func_new (const GGS_bigint & in_bitCount,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_opaque result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_opaque::objectCompare (const GGS_typeKind_2E_opaque & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitCount.objectCompare (inOperand.mProperty_bitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_opaque::isValid (void) const {
  return mProperty_bitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_opaque::drop (void) {
  mProperty_bitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_opaque::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.opaque:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.opaque generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_opaque ("typeKind.opaque",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_opaque::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_opaque ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_opaque::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_opaque (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque GGS_typeKind_2E_opaque::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_opaque result ;
  const GGS_typeKind_2E_opaque * p = (const GGS_typeKind_2E_opaque *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_opaque *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.opaque", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2E_opaque_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque_3F_::GGS_typeKind_2E_opaque_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque_3F_::GGS_typeKind_2E_opaque_3F_ (const GGS_typeKind_2E_opaque & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque_3F_ GGS_typeKind_2E_opaque_3F_::init_nil (void) {
  GGS_typeKind_2E_opaque_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_opaque_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_opaque_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_opaque_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_opaque () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_opaque_3F_::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.opaque? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_opaque_3F_ ("typeKind.opaque?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_opaque_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_opaque_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_opaque_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_opaque_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque_3F_ GGS_typeKind_2E_opaque_3F_::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_opaque_3F_ result ;
  const GGS_typeKind_2E_opaque_3F_ * p = (const GGS_typeKind_2E_opaque_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_opaque_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.opaque?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function::GGS_typeKind_2E_function (void) :
mProperty_mode (),
mProperty_signature (),
mProperty_returnTypeProxy () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function::~ GGS_typeKind_2E_function (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_function GGS_typeKind_2E_function::init_21__21__21_ (const GGS_mode & in_mode,
                                                                     const GGS_routineTypedSignature & in_signature,
                                                                     const GGS_unifiedTypeMapEntry & in_returnTypeProxy,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mode = in_mode ;
  result.mProperty_signature = in_signature ;
  result.mProperty_returnTypeProxy = in_returnTypeProxy ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_function::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function::GGS_typeKind_2E_function (const GGS_mode & inOperand0,
                                                    const GGS_routineTypedSignature & inOperand1,
                                                    const GGS_unifiedTypeMapEntry & inOperand2) :
mProperty_mode (inOperand0),
mProperty_signature (inOperand1),
mProperty_returnTypeProxy (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function GGS_typeKind_2E_function::class_func_new (const GGS_mode & in_mode,
                                                                   const GGS_routineTypedSignature & in_signature,
                                                                   const GGS_unifiedTypeMapEntry & in_returnTypeProxy,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mode = in_mode ;
  result.mProperty_signature = in_signature ;
  result.mProperty_returnTypeProxy = in_returnTypeProxy ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_function::objectCompare (const GGS_typeKind_2E_function & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mode.objectCompare (inOperand.mProperty_mode) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_signature.objectCompare (inOperand.mProperty_signature) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_returnTypeProxy.objectCompare (inOperand.mProperty_returnTypeProxy) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_function::isValid (void) const {
  return mProperty_mode.isValid () && mProperty_signature.isValid () && mProperty_returnTypeProxy.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_function::drop (void) {
  mProperty_mode.drop () ;
  mProperty_signature.drop () ;
  mProperty_returnTypeProxy.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_function::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.function:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_signature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_returnTypeProxy.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.function generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_function ("typeKind.function",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_function::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_function ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_function::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_function (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function GGS_typeKind_2E_function::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_function result ;
  const GGS_typeKind_2E_function * p = (const GGS_typeKind_2E_function *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_function *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.function", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2E_function_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function_3F_::GGS_typeKind_2E_function_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function_3F_::GGS_typeKind_2E_function_3F_ (const GGS_typeKind_2E_function & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function_3F_ GGS_typeKind_2E_function_3F_::init_nil (void) {
  GGS_typeKind_2E_function_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_function_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_function_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_function_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_function () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_function_3F_::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.function? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_function_3F_ ("typeKind.function?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_function_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_function_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_function_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_function_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function_3F_ GGS_typeKind_2E_function_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_function_3F_ result ;
  const GGS_typeKind_2E_function_3F_ * p = (const GGS_typeKind_2E_function_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_function_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.function?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element::GGS_userLLVMTypeDefinitionListIR_2E_element (void) :
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element::~ GGS_userLLVMTypeDefinitionListIR_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element GGS_userLLVMTypeDefinitionListIR_2E_element::init_21_ (const GGS_userLLVMTypeDefinitionIR & in_mType,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element::GGS_userLLVMTypeDefinitionListIR_2E_element (const GGS_userLLVMTypeDefinitionIR & inOperand0) :
mProperty_mType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element GGS_userLLVMTypeDefinitionListIR_2E_element::class_func_new (const GGS_userLLVMTypeDefinitionIR & in_mType,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_userLLVMTypeDefinitionListIR_2E_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR_2E_element::drop (void) {
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @userLLVMTypeDefinitionListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @userLLVMTypeDefinitionListIR.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2E_element ("userLLVMTypeDefinitionListIR.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_userLLVMTypeDefinitionListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMTypeDefinitionListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMTypeDefinitionListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element GGS_userLLVMTypeDefinitionListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR_2E_element result ;
  const GGS_userLLVMTypeDefinitionListIR_2E_element * p = (const GGS_userLLVMTypeDefinitionListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMTypeDefinitionListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (void) :
mProperty_weakElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::~ GGS_unifiedTypeMapEntry_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::init_21_ (const GGS_unifiedTypeMapElementClass_2E_weak & in_weakElement,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand0) :
mProperty_weakElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::class_func_new (const GGS_unifiedTypeMapElementClass_2E_weak & in_weakElement,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry_2E_element::objectCompare (const GGS_unifiedTypeMapEntry_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_weakElement.objectCompare (inOperand.mProperty_weakElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element::isValid (void) const {
  return mProperty_weakElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::drop (void) {
  mProperty_weakElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntry.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_weakElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntry.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ("unifiedTypeMapEntry.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapEntry_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntry_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntry_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  const GGS_unifiedTypeMapEntry_2E_element * p = (const GGS_unifiedTypeMapEntry_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntry_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @unifiedTypeMapEntry_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_::GGS_unifiedTypeMapEntry_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_::GGS_unifiedTypeMapEntry_2E_element_3F_ (const GGS_unifiedTypeMapEntry_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry_2E_element_3F_::init_nil (void) {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unifiedTypeMapEntry_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntry.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ("unifiedTypeMapEntry.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapEntry_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntry_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntry_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  const GGS_unifiedTypeMapEntry_2E_element_3F_ * p = (const GGS_unifiedTypeMapEntry_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntry_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty::GGS_propertyKindAST_2E_initializedStoredProperty (void) :
mProperty_initExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty::~ GGS_propertyKindAST_2E_initializedStoredProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty GGS_propertyKindAST_2E_initializedStoredProperty::init_21_ (const GGS_expressionAST & in_initExpression,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedStoredProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_initExpression = in_initExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedStoredProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty::GGS_propertyKindAST_2E_initializedStoredProperty (const GGS_expressionAST & inOperand0) :
mProperty_initExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty GGS_propertyKindAST_2E_initializedStoredProperty::class_func_new (const GGS_expressionAST & in_initExpression,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedStoredProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_initExpression = in_initExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_initializedStoredProperty::isValid (void) const {
  return mProperty_initExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedStoredProperty::drop (void) {
  mProperty_initExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedStoredProperty::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKindAST.initializedStoredProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_initExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyKindAST.initializedStoredProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedStoredProperty ("propertyKindAST.initializedStoredProperty",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKindAST_2E_initializedStoredProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedStoredProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_initializedStoredProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_initializedStoredProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty GGS_propertyKindAST_2E_initializedStoredProperty::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedStoredProperty result ;
  const GGS_propertyKindAST_2E_initializedStoredProperty * p = (const GGS_propertyKindAST_2E_initializedStoredProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_initializedStoredProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.initializedStoredProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyKindAST_2E_initializedStoredProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty_3F_::GGS_propertyKindAST_2E_initializedStoredProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty_3F_::GGS_propertyKindAST_2E_initializedStoredProperty_3F_ (const GGS_propertyKindAST_2E_initializedStoredProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty_3F_ GGS_propertyKindAST_2E_initializedStoredProperty_3F_::init_nil (void) {
  GGS_propertyKindAST_2E_initializedStoredProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_initializedStoredProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_initializedStoredProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedStoredProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKindAST_2E_initializedStoredProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedStoredProperty_3F_::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyKindAST.initializedStoredProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedStoredProperty_3F_ ("propertyKindAST.initializedStoredProperty?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKindAST_2E_initializedStoredProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedStoredProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_initializedStoredProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_initializedStoredProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty_3F_ GGS_propertyKindAST_2E_initializedStoredProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedStoredProperty_3F_ result ;
  const GGS_propertyKindAST_2E_initializedStoredProperty_3F_ * p = (const GGS_propertyKindAST_2E_initializedStoredProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_initializedStoredProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.initializedStoredProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty::GGS_propertyKindAST_2E_initializedConstantProperty (void) :
mProperty_initExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty::~ GGS_propertyKindAST_2E_initializedConstantProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty GGS_propertyKindAST_2E_initializedConstantProperty::init_21_ (const GGS_expressionAST & in_initExpression,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedConstantProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_initExpression = in_initExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedConstantProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty::GGS_propertyKindAST_2E_initializedConstantProperty (const GGS_expressionAST & inOperand0) :
mProperty_initExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty GGS_propertyKindAST_2E_initializedConstantProperty::class_func_new (const GGS_expressionAST & in_initExpression,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedConstantProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_initExpression = in_initExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_initializedConstantProperty::isValid (void) const {
  return mProperty_initExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedConstantProperty::drop (void) {
  mProperty_initExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedConstantProperty::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKindAST.initializedConstantProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_initExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyKindAST.initializedConstantProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedConstantProperty ("propertyKindAST.initializedConstantProperty",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKindAST_2E_initializedConstantProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedConstantProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_initializedConstantProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_initializedConstantProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty GGS_propertyKindAST_2E_initializedConstantProperty::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedConstantProperty result ;
  const GGS_propertyKindAST_2E_initializedConstantProperty * p = (const GGS_propertyKindAST_2E_initializedConstantProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_initializedConstantProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.initializedConstantProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyKindAST_2E_initializedConstantProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty_3F_::GGS_propertyKindAST_2E_initializedConstantProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty_3F_::GGS_propertyKindAST_2E_initializedConstantProperty_3F_ (const GGS_propertyKindAST_2E_initializedConstantProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty_3F_ GGS_propertyKindAST_2E_initializedConstantProperty_3F_::init_nil (void) {
  GGS_propertyKindAST_2E_initializedConstantProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_initializedConstantProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_initializedConstantProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedConstantProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKindAST_2E_initializedConstantProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedConstantProperty_3F_::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyKindAST.initializedConstantProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedConstantProperty_3F_ ("propertyKindAST.initializedConstantProperty?",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKindAST_2E_initializedConstantProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedConstantProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_initializedConstantProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_initializedConstantProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty_3F_ GGS_propertyKindAST_2E_initializedConstantProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedConstantProperty_3F_ result ;
  const GGS_propertyKindAST_2E_initializedConstantProperty_3F_ * p = (const GGS_propertyKindAST_2E_initializedConstantProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_initializedConstantProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.initializedConstantProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty::GGS_propertyKindAST_2E_readOnlyComputedProperty (void) :
mProperty_instructionList (),
mProperty_endOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty::~ GGS_propertyKindAST_2E_readOnlyComputedProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty GGS_propertyKindAST_2E_readOnlyComputedProperty::init_21__21_ (const GGS_instructionListAST & in_instructionList,
                                                                                                               const GGS_location & in_endOfInstructionList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_readOnlyComputedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfInstructionList = in_endOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_readOnlyComputedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty::GGS_propertyKindAST_2E_readOnlyComputedProperty (const GGS_instructionListAST & inOperand0,
                                                                                                  const GGS_location & inOperand1) :
mProperty_instructionList (inOperand0),
mProperty_endOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty GGS_propertyKindAST_2E_readOnlyComputedProperty::class_func_new (const GGS_instructionListAST & in_instructionList,
                                                                                                                 const GGS_location & in_endOfInstructionList,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_readOnlyComputedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfInstructionList = in_endOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_readOnlyComputedProperty::isValid (void) const {
  return mProperty_instructionList.isValid () && mProperty_endOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_readOnlyComputedProperty::drop (void) {
  mProperty_instructionList.drop () ;
  mProperty_endOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_readOnlyComputedProperty::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKindAST.readOnlyComputedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_instructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyKindAST.readOnlyComputedProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_readOnlyComputedProperty ("propertyKindAST.readOnlyComputedProperty",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKindAST_2E_readOnlyComputedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_readOnlyComputedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_readOnlyComputedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_readOnlyComputedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty GGS_propertyKindAST_2E_readOnlyComputedProperty::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_readOnlyComputedProperty result ;
  const GGS_propertyKindAST_2E_readOnlyComputedProperty * p = (const GGS_propertyKindAST_2E_readOnlyComputedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_readOnlyComputedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.readOnlyComputedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyKindAST_2E_readOnlyComputedProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ (const GGS_propertyKindAST_2E_readOnlyComputedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::init_nil (void) {
  GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKindAST_2E_readOnlyComputedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyKindAST.readOnlyComputedProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_readOnlyComputedProperty_3F_ ("propertyKindAST.readOnlyComputedProperty?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_readOnlyComputedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ result ;
  const GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ * p = (const GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.readOnlyComputedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty::GGS_propertyKindAST_2E_writeComputedProperty (void) :
mProperty_instructionList (),
mProperty_endOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty::~ GGS_propertyKindAST_2E_writeComputedProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty GGS_propertyKindAST_2E_writeComputedProperty::init_21__21_ (const GGS_instructionListAST & in_instructionList,
                                                                                                         const GGS_location & in_endOfInstructionList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_writeComputedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfInstructionList = in_endOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_writeComputedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty::GGS_propertyKindAST_2E_writeComputedProperty (const GGS_instructionListAST & inOperand0,
                                                                                            const GGS_location & inOperand1) :
mProperty_instructionList (inOperand0),
mProperty_endOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty GGS_propertyKindAST_2E_writeComputedProperty::class_func_new (const GGS_instructionListAST & in_instructionList,
                                                                                                           const GGS_location & in_endOfInstructionList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_writeComputedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfInstructionList = in_endOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_writeComputedProperty::isValid (void) const {
  return mProperty_instructionList.isValid () && mProperty_endOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_writeComputedProperty::drop (void) {
  mProperty_instructionList.drop () ;
  mProperty_endOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_writeComputedProperty::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKindAST.writeComputedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_instructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyKindAST.writeComputedProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_writeComputedProperty ("propertyKindAST.writeComputedProperty",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKindAST_2E_writeComputedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_writeComputedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_writeComputedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_writeComputedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty GGS_propertyKindAST_2E_writeComputedProperty::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_writeComputedProperty result ;
  const GGS_propertyKindAST_2E_writeComputedProperty * p = (const GGS_propertyKindAST_2E_writeComputedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_writeComputedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.writeComputedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyKindAST_2E_writeComputedProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty_3F_::GGS_propertyKindAST_2E_writeComputedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty_3F_::GGS_propertyKindAST_2E_writeComputedProperty_3F_ (const GGS_propertyKindAST_2E_writeComputedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty_3F_ GGS_propertyKindAST_2E_writeComputedProperty_3F_::init_nil (void) {
  GGS_propertyKindAST_2E_writeComputedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_writeComputedProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_writeComputedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_writeComputedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKindAST_2E_writeComputedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_writeComputedProperty_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyKindAST.writeComputedProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_writeComputedProperty_3F_ ("propertyKindAST.writeComputedProperty?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKindAST_2E_writeComputedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_writeComputedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_writeComputedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_writeComputedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty_3F_ GGS_propertyKindAST_2E_writeComputedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_writeComputedProperty_3F_ result ;
  const GGS_propertyKindAST_2E_writeComputedProperty_3F_ * p = (const GGS_propertyKindAST_2E_writeComputedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_writeComputedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.writeComputedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element::GGS_sortedOperandIRList_2E_element (void) :
mProperty_mOperand (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element::~ GGS_sortedOperandIRList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element GGS_sortedOperandIRList_2E_element::init_21__21_ (const GGS_objectIR & in_mOperand,
                                                                                     const GGS_uint & in_mIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortedOperandIRList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOperand = in_mOperand ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element::GGS_sortedOperandIRList_2E_element (const GGS_objectIR & inOperand0,
                                                                        const GGS_uint & inOperand1) :
mProperty_mOperand (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element GGS_sortedOperandIRList_2E_element::class_func_new (const GGS_objectIR & in_mOperand,
                                                                                       const GGS_uint & in_mIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortedOperandIRList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOperand = in_mOperand ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sortedOperandIRList_2E_element::objectCompare (const GGS_sortedOperandIRList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sortedOperandIRList_2E_element::isValid (void) const {
  return mProperty_mOperand.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList_2E_element::drop (void) {
  mProperty_mOperand.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sortedOperandIRList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sortedOperandIRList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedOperandIRList_2E_element ("sortedOperandIRList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sortedOperandIRList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedOperandIRList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedOperandIRList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedOperandIRList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element GGS_sortedOperandIRList_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_sortedOperandIRList_2E_element result ;
  const GGS_sortedOperandIRList_2E_element * p = (const GGS_sortedOperandIRList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedOperandIRList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedOperandIRList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray::GGS_controlRegisterKind_2E_registerArray (void) :
mProperty_arraySize (),
mProperty_arraySizeLocation (),
mProperty_arrayElementSize (),
mProperty_arrayElementSizeLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray::~ GGS_controlRegisterKind_2E_registerArray (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray GGS_controlRegisterKind_2E_registerArray::init_21__21__21__21_ (const GGS_expressionAST & in_arraySize,
                                                                                                         const GGS_location & in_arraySizeLocation,
                                                                                                         const GGS_expressionAST & in_arrayElementSize,
                                                                                                         const GGS_location & in_arrayElementSizeLocation,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterKind_2E_registerArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_arraySizeLocation = in_arraySizeLocation ;
  result.mProperty_arrayElementSize = in_arrayElementSize ;
  result.mProperty_arrayElementSizeLocation = in_arrayElementSizeLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind_2E_registerArray::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray::GGS_controlRegisterKind_2E_registerArray (const GGS_expressionAST & inOperand0,
                                                                                    const GGS_location & inOperand1,
                                                                                    const GGS_expressionAST & inOperand2,
                                                                                    const GGS_location & inOperand3) :
mProperty_arraySize (inOperand0),
mProperty_arraySizeLocation (inOperand1),
mProperty_arrayElementSize (inOperand2),
mProperty_arrayElementSizeLocation (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray GGS_controlRegisterKind_2E_registerArray::class_func_new (const GGS_expressionAST & in_arraySize,
                                                                                                   const GGS_location & in_arraySizeLocation,
                                                                                                   const GGS_expressionAST & in_arrayElementSize,
                                                                                                   const GGS_location & in_arrayElementSizeLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterKind_2E_registerArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_arraySizeLocation = in_arraySizeLocation ;
  result.mProperty_arrayElementSize = in_arrayElementSize ;
  result.mProperty_arrayElementSizeLocation = in_arrayElementSizeLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterKind_2E_registerArray::isValid (void) const {
  return mProperty_arraySize.isValid () && mProperty_arraySizeLocation.isValid () && mProperty_arrayElementSize.isValid () && mProperty_arrayElementSizeLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind_2E_registerArray::drop (void) {
  mProperty_arraySize.drop () ;
  mProperty_arraySizeLocation.drop () ;
  mProperty_arrayElementSize.drop () ;
  mProperty_arrayElementSizeLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind_2E_registerArray::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterKind.registerArray:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_arraySize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_arraySizeLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_arrayElementSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_arrayElementSizeLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterKind.registerArray generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterKind_2E_registerArray ("controlRegisterKind.registerArray",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterKind_2E_registerArray::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterKind_2E_registerArray ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterKind_2E_registerArray::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterKind_2E_registerArray (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray GGS_controlRegisterKind_2E_registerArray::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_controlRegisterKind_2E_registerArray result ;
  const GGS_controlRegisterKind_2E_registerArray * p = (const GGS_controlRegisterKind_2E_registerArray *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterKind_2E_registerArray *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterKind.registerArray", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @controlRegisterKind_2E_registerArray_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray_3F_::GGS_controlRegisterKind_2E_registerArray_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray_3F_::GGS_controlRegisterKind_2E_registerArray_3F_ (const GGS_controlRegisterKind_2E_registerArray & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray_3F_ GGS_controlRegisterKind_2E_registerArray_3F_::init_nil (void) {
  GGS_controlRegisterKind_2E_registerArray_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterKind_2E_registerArray_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterKind_2E_registerArray_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind_2E_registerArray_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterKind_2E_registerArray () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind_2E_registerArray_3F_::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterKind.registerArray? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterKind_2E_registerArray_3F_ ("controlRegisterKind.registerArray?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterKind_2E_registerArray_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterKind_2E_registerArray_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterKind_2E_registerArray_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterKind_2E_registerArray_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray_3F_ GGS_controlRegisterKind_2E_registerArray_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterKind_2E_registerArray_3F_ result ;
  const GGS_controlRegisterKind_2E_registerArray_3F_ * p = (const GGS_controlRegisterKind_2E_registerArray_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterKind_2E_registerArray_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterKind.registerArray?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element::GGS_controlRegisterBitSliceList_2E_element (void) :
mProperty_mRegisterBitSlice () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element::~ GGS_controlRegisterBitSliceList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element GGS_controlRegisterBitSliceList_2E_element::init_21_ (const GGS_controlRegisterBitSlice & in_mRegisterBitSlice,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSliceList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterBitSlice = in_mRegisterBitSlice ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element::GGS_controlRegisterBitSliceList_2E_element (const GGS_controlRegisterBitSlice & inOperand0) :
mProperty_mRegisterBitSlice (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element GGS_controlRegisterBitSliceList_2E_element::class_func_new (const GGS_controlRegisterBitSlice & in_mRegisterBitSlice,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSliceList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterBitSlice = in_mRegisterBitSlice ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterBitSliceList_2E_element::isValid (void) const {
  return mProperty_mRegisterBitSlice.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList_2E_element::drop (void) {
  mProperty_mRegisterBitSlice.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterBitSliceList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRegisterBitSlice.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterBitSliceList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2E_element ("controlRegisterBitSliceList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterBitSliceList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterBitSliceList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterBitSliceList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element GGS_controlRegisterBitSliceList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_controlRegisterBitSliceList_2E_element result ;
  const GGS_controlRegisterBitSliceList_2E_element * p = (const GGS_controlRegisterBitSliceList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterBitSliceList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSliceList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray::GGS_controlRegisterGroupKindAST_2E_groupArray (void) :
mProperty_groupSizeExp (),
mProperty_groupSizeExpLocation (),
mProperty_baseAddresses () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray::~ GGS_controlRegisterGroupKindAST_2E_groupArray (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray GGS_controlRegisterGroupKindAST_2E_groupArray::init_21__21__21_ (const GGS_expressionAST & in_groupSizeExp,
                                                                                                               const GGS_location & in_groupSizeExpLocation,
                                                                                                               const GGS_lbigintlist & in_baseAddresses,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_groupArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_groupSizeExp = in_groupSizeExp ;
  result.mProperty_groupSizeExpLocation = in_groupSizeExpLocation ;
  result.mProperty_baseAddresses = in_baseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_groupArray::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray::GGS_controlRegisterGroupKindAST_2E_groupArray (const GGS_expressionAST & inOperand0,
                                                                                              const GGS_location & inOperand1,
                                                                                              const GGS_lbigintlist & inOperand2) :
mProperty_groupSizeExp (inOperand0),
mProperty_groupSizeExpLocation (inOperand1),
mProperty_baseAddresses (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray GGS_controlRegisterGroupKindAST_2E_groupArray::class_func_new (const GGS_expressionAST & in_groupSizeExp,
                                                                                                             const GGS_location & in_groupSizeExpLocation,
                                                                                                             const GGS_lbigintlist & in_baseAddresses,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_groupArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_groupSizeExp = in_groupSizeExp ;
  result.mProperty_groupSizeExpLocation = in_groupSizeExpLocation ;
  result.mProperty_baseAddresses = in_baseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupKindAST_2E_groupArray::isValid (void) const {
  return mProperty_groupSizeExp.isValid () && mProperty_groupSizeExpLocation.isValid () && mProperty_baseAddresses.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_groupArray::drop (void) {
  mProperty_groupSizeExp.drop () ;
  mProperty_groupSizeExpLocation.drop () ;
  mProperty_baseAddresses.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_groupArray::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterGroupKindAST.groupArray:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_groupSizeExp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_groupSizeExpLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_baseAddresses.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupKindAST.groupArray generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_groupArray ("controlRegisterGroupKindAST.groupArray",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterGroupKindAST_2E_groupArray::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_groupArray ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupKindAST_2E_groupArray::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupKindAST_2E_groupArray (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray GGS_controlRegisterGroupKindAST_2E_groupArray::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_groupArray result ;
  const GGS_controlRegisterGroupKindAST_2E_groupArray * p = (const GGS_controlRegisterGroupKindAST_2E_groupArray *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupKindAST_2E_groupArray *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST.groupArray", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @controlRegisterGroupKindAST_2E_groupArray_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ (const GGS_controlRegisterGroupKindAST_2E_groupArray & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::init_nil (void) {
  GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterGroupKindAST_2E_groupArray () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupKindAST.groupArray? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_groupArray_3F_ ("controlRegisterGroupKindAST.groupArray?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_groupArray_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ result ;
  const GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ * p = (const GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST.groupArray?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element::GGS_controlRegisterFieldList_2E_element (void) :
mProperty_mFieldBitCount (),
mProperty_mFieldName () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element::~ GGS_controlRegisterFieldList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element GGS_controlRegisterFieldList_2E_element::init_21__21_ (const GGS_uint & in_mFieldBitCount,
                                                                                               const GGS_string & in_mFieldName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterFieldList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFieldBitCount = in_mFieldBitCount ;
  result.mProperty_mFieldName = in_mFieldName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element::GGS_controlRegisterFieldList_2E_element (const GGS_uint & inOperand0,
                                                                                  const GGS_string & inOperand1) :
mProperty_mFieldBitCount (inOperand0),
mProperty_mFieldName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element GGS_controlRegisterFieldList_2E_element::class_func_new (const GGS_uint & in_mFieldBitCount,
                                                                                                 const GGS_string & in_mFieldName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterFieldList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFieldBitCount = in_mFieldBitCount ;
  result.mProperty_mFieldName = in_mFieldName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterFieldList_2E_element::isValid (void) const {
  return mProperty_mFieldBitCount.isValid () && mProperty_mFieldName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList_2E_element::drop (void) {
  mProperty_mFieldBitCount.drop () ;
  mProperty_mFieldName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterFieldList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFieldBitCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFieldName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterFieldList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldList_2E_element ("controlRegisterFieldList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterFieldList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterFieldList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterFieldList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element GGS_controlRegisterFieldList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterFieldList_2E_element result ;
  const GGS_controlRegisterFieldList_2E_element * p = (const GGS_controlRegisterFieldList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterFieldList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single::GGS_registerGroupKind_2E_single (void) :
mProperty_baseAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single::~ GGS_registerGroupKind_2E_single (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerGroupKind_2E_single GGS_registerGroupKind_2E_single::init_21_ (const GGS_bigint & in_baseAddress,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_single result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_baseAddress = in_baseAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_single::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single::GGS_registerGroupKind_2E_single (const GGS_bigint & inOperand0) :
mProperty_baseAddress (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single GGS_registerGroupKind_2E_single::class_func_new (const GGS_bigint & in_baseAddress,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_single result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_baseAddress = in_baseAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupKind_2E_single::isValid (void) const {
  return mProperty_baseAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_single::drop (void) {
  mProperty_baseAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_single::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerGroupKind.single:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_baseAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerGroupKind.single generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_single ("registerGroupKind.single",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_registerGroupKind_2E_single::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind_2E_single ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupKind_2E_single::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupKind_2E_single (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single GGS_registerGroupKind_2E_single::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_single result ;
  const GGS_registerGroupKind_2E_single * p = (const GGS_registerGroupKind_2E_single *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupKind_2E_single *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind.single", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @registerGroupKind_2E_single_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single_3F_::GGS_registerGroupKind_2E_single_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single_3F_::GGS_registerGroupKind_2E_single_3F_ (const GGS_registerGroupKind_2E_single & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single_3F_ GGS_registerGroupKind_2E_single_3F_::init_nil (void) {
  GGS_registerGroupKind_2E_single_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupKind_2E_single_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupKind_2E_single_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_single_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_registerGroupKind_2E_single () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_single_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerGroupKind.single? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_single_3F_ ("registerGroupKind.single?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_registerGroupKind_2E_single_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind_2E_single_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupKind_2E_single_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupKind_2E_single_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single_3F_ GGS_registerGroupKind_2E_single_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_single_3F_ result ;
  const GGS_registerGroupKind_2E_single_3F_ * p = (const GGS_registerGroupKind_2E_single_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupKind_2E_single_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind.single?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup::GGS_registerGroupKind_2E_arrayGroup (void) :
mProperty_baseAddresses () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup::~ GGS_registerGroupKind_2E_arrayGroup (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup GGS_registerGroupKind_2E_arrayGroup::init_21_ (const GGS_lbigintlist & in_baseAddresses,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_arrayGroup result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_baseAddresses = in_baseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_arrayGroup::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup::GGS_registerGroupKind_2E_arrayGroup (const GGS_lbigintlist & inOperand0) :
mProperty_baseAddresses (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup GGS_registerGroupKind_2E_arrayGroup::class_func_new (const GGS_lbigintlist & in_baseAddresses,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_arrayGroup result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_baseAddresses = in_baseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupKind_2E_arrayGroup::isValid (void) const {
  return mProperty_baseAddresses.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_arrayGroup::drop (void) {
  mProperty_baseAddresses.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_arrayGroup::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerGroupKind.arrayGroup:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_baseAddresses.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerGroupKind.arrayGroup generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup ("registerGroupKind.arrayGroup",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_registerGroupKind_2E_arrayGroup::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupKind_2E_arrayGroup::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupKind_2E_arrayGroup (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup GGS_registerGroupKind_2E_arrayGroup::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_arrayGroup result ;
  const GGS_registerGroupKind_2E_arrayGroup * p = (const GGS_registerGroupKind_2E_arrayGroup *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupKind_2E_arrayGroup *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind.arrayGroup", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @registerGroupKind_2E_arrayGroup_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup_3F_::GGS_registerGroupKind_2E_arrayGroup_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup_3F_::GGS_registerGroupKind_2E_arrayGroup_3F_ (const GGS_registerGroupKind_2E_arrayGroup & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup_3F_ GGS_registerGroupKind_2E_arrayGroup_3F_::init_nil (void) {
  GGS_registerGroupKind_2E_arrayGroup_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupKind_2E_arrayGroup_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupKind_2E_arrayGroup_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_arrayGroup_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_registerGroupKind_2E_arrayGroup () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_arrayGroup_3F_::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerGroupKind.arrayGroup? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup_3F_ ("registerGroupKind.arrayGroup?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_registerGroupKind_2E_arrayGroup_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupKind_2E_arrayGroup_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupKind_2E_arrayGroup_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup_3F_ GGS_registerGroupKind_2E_arrayGroup_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_arrayGroup_3F_ result ;
  const GGS_registerGroupKind_2E_arrayGroup_3F_ * p = (const GGS_registerGroupKind_2E_arrayGroup_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupKind_2E_arrayGroup_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind.arrayGroup?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element::GGS_controlRegisterByAddress_2E_element (void) :
mProperty_mAddress (),
mProperty_mHTML () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element::~ GGS_controlRegisterByAddress_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element GGS_controlRegisterByAddress_2E_element::init_21__21_ (const GGS_bigint & in_mAddress,
                                                                                               const GGS_string & in_mHTML,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByAddress_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAddress = in_mAddress ;
  result.mProperty_mHTML = in_mHTML ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element::GGS_controlRegisterByAddress_2E_element (const GGS_bigint & inOperand0,
                                                                                  const GGS_string & inOperand1) :
mProperty_mAddress (inOperand0),
mProperty_mHTML (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element GGS_controlRegisterByAddress_2E_element::class_func_new (const GGS_bigint & in_mAddress,
                                                                                                 const GGS_string & in_mHTML,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByAddress_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAddress = in_mAddress ;
  result.mProperty_mHTML = in_mHTML ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterByAddress_2E_element::isValid (void) const {
  return mProperty_mAddress.isValid () && mProperty_mHTML.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress_2E_element::drop (void) {
  mProperty_mAddress.drop () ;
  mProperty_mHTML.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterByAddress.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHTML.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterByAddress.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterByAddress_2E_element ("controlRegisterByAddress.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterByAddress_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByAddress_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterByAddress_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterByAddress_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element GGS_controlRegisterByAddress_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByAddress_2E_element result ;
  const GGS_controlRegisterByAddress_2E_element * p = (const GGS_controlRegisterByAddress_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterByAddress_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByAddress.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element::GGS_controlRegisterByName_2E_element (void) :
mProperty_mAddress (),
mProperty_mHTML (),
mProperty_mName () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element::~ GGS_controlRegisterByName_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterByName_2E_element GGS_controlRegisterByName_2E_element::init_21__21__21_ (const GGS_bigint & in_mAddress,
                                                                                             const GGS_string & in_mHTML,
                                                                                             const GGS_string & in_mName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByName_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAddress = in_mAddress ;
  result.mProperty_mHTML = in_mHTML ;
  result.mProperty_mName = in_mName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element::GGS_controlRegisterByName_2E_element (const GGS_bigint & inOperand0,
                                                                            const GGS_string & inOperand1,
                                                                            const GGS_string & inOperand2) :
mProperty_mAddress (inOperand0),
mProperty_mHTML (inOperand1),
mProperty_mName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element GGS_controlRegisterByName_2E_element::class_func_new (const GGS_bigint & in_mAddress,
                                                                                           const GGS_string & in_mHTML,
                                                                                           const GGS_string & in_mName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByName_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAddress = in_mAddress ;
  result.mProperty_mHTML = in_mHTML ;
  result.mProperty_mName = in_mName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterByName_2E_element::isValid (void) const {
  return mProperty_mAddress.isValid () && mProperty_mHTML.isValid () && mProperty_mName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName_2E_element::drop (void) {
  mProperty_mAddress.drop () ;
  mProperty_mHTML.drop () ;
  mProperty_mName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterByName.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHTML.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterByName.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterByName_2E_element ("controlRegisterByName.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterByName_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByName_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterByName_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterByName_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element GGS_controlRegisterByName_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByName_2E_element result ;
  const GGS_controlRegisterByName_2E_element * p = (const GGS_controlRegisterByName_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterByName_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByName.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element::GGS_staticListValueListAST_2E_element (void) :
mProperty_mElement (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element::~ GGS_staticListValueListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticListValueListAST_2E_element GGS_staticListValueListAST_2E_element::init_21__21_ (const GGS_extendStaticListElementAST & in_mElement,
                                                                                           const GGS_location & in_mLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListValueListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element::GGS_staticListValueListAST_2E_element (const GGS_extendStaticListElementAST & inOperand0,
                                                                              const GGS_location & inOperand1) :
mProperty_mElement (inOperand0),
mProperty_mLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element GGS_staticListValueListAST_2E_element::class_func_new (const GGS_extendStaticListElementAST & in_mElement,
                                                                                             const GGS_location & in_mLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListValueListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListValueListAST_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () && mProperty_mLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST_2E_element::drop (void) {
  mProperty_mElement.drop () ;
  mProperty_mLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListValueListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListValueListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListValueListAST_2E_element ("staticListValueListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticListValueListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListValueListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListValueListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListValueListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element GGS_staticListValueListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_staticListValueListAST_2E_element result ;
  const GGS_staticListValueListAST_2E_element * p = (const GGS_staticListValueListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListValueListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListValueListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression::GGS_extendStaticListExpressionAST_2E_expression (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression::~ GGS_extendStaticListExpressionAST_2E_expression (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression GGS_extendStaticListExpressionAST_2E_expression::init_21_ (const GGS_expressionAST & in_exp,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_expression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_expression::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression::GGS_extendStaticListExpressionAST_2E_expression (const GGS_expressionAST & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression GGS_extendStaticListExpressionAST_2E_expression::class_func_new (const GGS_expressionAST & in_exp,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_expression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticListExpressionAST_2E_expression::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_expression::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_expression::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extendStaticListExpressionAST.expression:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendStaticListExpressionAST.expression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression ("extendStaticListExpressionAST.expression",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extendStaticListExpressionAST_2E_expression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListExpressionAST_2E_expression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListExpressionAST_2E_expression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression GGS_extendStaticListExpressionAST_2E_expression::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_expression result ;
  const GGS_extendStaticListExpressionAST_2E_expression * p = (const GGS_extendStaticListExpressionAST_2E_expression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListExpressionAST_2E_expression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST.expression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @extendStaticListExpressionAST_2E_expression_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression_3F_::GGS_extendStaticListExpressionAST_2E_expression_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression_3F_::GGS_extendStaticListExpressionAST_2E_expression_3F_ (const GGS_extendStaticListExpressionAST_2E_expression & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression_3F_ GGS_extendStaticListExpressionAST_2E_expression_3F_::init_nil (void) {
  GGS_extendStaticListExpressionAST_2E_expression_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticListExpressionAST_2E_expression_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticListExpressionAST_2E_expression_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_expression_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extendStaticListExpressionAST_2E_expression () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_expression_3F_::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendStaticListExpressionAST.expression? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression_3F_ ("extendStaticListExpressionAST.expression?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extendStaticListExpressionAST_2E_expression_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListExpressionAST_2E_expression_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListExpressionAST_2E_expression_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression_3F_ GGS_extendStaticListExpressionAST_2E_expression_3F_::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_expression_3F_ result ;
  const GGS_extendStaticListExpressionAST_2E_expression_3F_ * p = (const GGS_extendStaticListExpressionAST_2E_expression_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListExpressionAST_2E_expression_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST.expression?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element::GGS_extendStaticListElementAST_2E_element (void) :
mProperty_mExpression (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element::~ GGS_extendStaticListElementAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element GGS_extendStaticListElementAST_2E_element::init_21__21_ (const GGS_extendStaticListExpressionAST & in_mExpression,
                                                                                                   const GGS_location & in_mEndOfExpression,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListElementAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mEndOfExpression = in_mEndOfExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element::GGS_extendStaticListElementAST_2E_element (const GGS_extendStaticListExpressionAST & inOperand0,
                                                                                      const GGS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mEndOfExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element GGS_extendStaticListElementAST_2E_element::class_func_new (const GGS_extendStaticListExpressionAST & in_mExpression,
                                                                                                     const GGS_location & in_mEndOfExpression,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListElementAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mEndOfExpression = in_mEndOfExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticListElementAST_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mEndOfExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mEndOfExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extendStaticListElementAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendStaticListElementAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListElementAST_2E_element ("extendStaticListElementAST.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extendStaticListElementAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListElementAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListElementAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListElementAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element GGS_extendStaticListElementAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extendStaticListElementAST_2E_element result ;
  const GGS_extendStaticListElementAST_2E_element * p = (const GGS_extendStaticListElementAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListElementAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListElementAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element::GGS_extendStaticArrayDeclarationDictAST_2E_element (void) :
mProperty_key (),
mProperty_mStaticList () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element::~ GGS_extendStaticArrayDeclarationDictAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element GGS_extendStaticArrayDeclarationDictAST_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                                     const GGS_staticListValueListAST & in_mStaticList,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mStaticList = in_mStaticList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element::GGS_extendStaticArrayDeclarationDictAST_2E_element (const GGS_string & inOperand0,
                                                                                                        const GGS_staticListValueListAST & inOperand1) :
mProperty_key (inOperand0),
mProperty_mStaticList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element GGS_extendStaticArrayDeclarationDictAST_2E_element::class_func_new (const GGS_string & in_key,
                                                                                                                       const GGS_staticListValueListAST & in_mStaticList,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mStaticList = in_mStaticList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticArrayDeclarationDictAST_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mStaticList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mStaticList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extendStaticArrayDeclarationDictAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendStaticArrayDeclarationDictAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2E_element ("extendStaticArrayDeclarationDictAST.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extendStaticArrayDeclarationDictAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticArrayDeclarationDictAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticArrayDeclarationDictAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element GGS_extendStaticArrayDeclarationDictAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element result ;
  const GGS_extendStaticArrayDeclarationDictAST_2E_element * p = (const GGS_extendStaticArrayDeclarationDictAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticArrayDeclarationDictAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayDeclarationDictAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @extendStaticArrayDeclarationDictAST_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::init_nil (void) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extendStaticArrayDeclarationDictAST_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendStaticArrayDeclarationDictAST.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2E_element_3F_ ("extendStaticArrayDeclarationDictAST.element?",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ result ;
  const GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ * p = (const GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayDeclarationDictAST.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element::GGS_taskSortedListIR_2E_element (void) :
mProperty_mTaskName (),
mProperty_mPriority (),
mProperty_mStackSize (),
mProperty_mSetupOrderedList (),
mProperty_mActivateOrderedList (),
mProperty_mDeactivateOrderedList (),
mProperty_mTaskNameStringIndex (),
mProperty_mActivate () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element::~ GGS_taskSortedListIR_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_taskSortedListIR_2E_element GGS_taskSortedListIR_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_string & in_mTaskName,
                                                                                                       const GGS_uint & in_mPriority,
                                                                                                       const GGS_bigint & in_mStackSize,
                                                                                                       const GGS_stringlist & in_mSetupOrderedList,
                                                                                                       const GGS_stringlist & in_mActivateOrderedList,
                                                                                                       const GGS_stringlist & in_mDeactivateOrderedList,
                                                                                                       const GGS_uint & in_mTaskNameStringIndex,
                                                                                                       const GGS_bool & in_mActivate,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskSortedListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mPriority = in_mPriority ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mSetupOrderedList = in_mSetupOrderedList ;
  result.mProperty_mActivateOrderedList = in_mActivateOrderedList ;
  result.mProperty_mDeactivateOrderedList = in_mDeactivateOrderedList ;
  result.mProperty_mTaskNameStringIndex = in_mTaskNameStringIndex ;
  result.mProperty_mActivate = in_mActivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element::GGS_taskSortedListIR_2E_element (const GGS_string & inOperand0,
                                                                  const GGS_uint & inOperand1,
                                                                  const GGS_bigint & inOperand2,
                                                                  const GGS_stringlist & inOperand3,
                                                                  const GGS_stringlist & inOperand4,
                                                                  const GGS_stringlist & inOperand5,
                                                                  const GGS_uint & inOperand6,
                                                                  const GGS_bool & inOperand7) :
mProperty_mTaskName (inOperand0),
mProperty_mPriority (inOperand1),
mProperty_mStackSize (inOperand2),
mProperty_mSetupOrderedList (inOperand3),
mProperty_mActivateOrderedList (inOperand4),
mProperty_mDeactivateOrderedList (inOperand5),
mProperty_mTaskNameStringIndex (inOperand6),
mProperty_mActivate (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element GGS_taskSortedListIR_2E_element::class_func_new (const GGS_string & in_mTaskName,
                                                                                 const GGS_uint & in_mPriority,
                                                                                 const GGS_bigint & in_mStackSize,
                                                                                 const GGS_stringlist & in_mSetupOrderedList,
                                                                                 const GGS_stringlist & in_mActivateOrderedList,
                                                                                 const GGS_stringlist & in_mDeactivateOrderedList,
                                                                                 const GGS_uint & in_mTaskNameStringIndex,
                                                                                 const GGS_bool & in_mActivate,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskSortedListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mPriority = in_mPriority ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mSetupOrderedList = in_mSetupOrderedList ;
  result.mProperty_mActivateOrderedList = in_mActivateOrderedList ;
  result.mProperty_mDeactivateOrderedList = in_mDeactivateOrderedList ;
  result.mProperty_mTaskNameStringIndex = in_mTaskNameStringIndex ;
  result.mProperty_mActivate = in_mActivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_taskSortedListIR_2E_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mSetupOrderedList.isValid () && mProperty_mActivateOrderedList.isValid () && mProperty_mDeactivateOrderedList.isValid () && mProperty_mTaskNameStringIndex.isValid () && mProperty_mActivate.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR_2E_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mSetupOrderedList.drop () ;
  mProperty_mActivateOrderedList.drop () ;
  mProperty_mDeactivateOrderedList.drop () ;
  mProperty_mTaskNameStringIndex.drop () ;
  mProperty_mActivate.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @taskSortedListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSetupOrderedList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActivateOrderedList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeactivateOrderedList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskNameStringIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActivate.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskSortedListIR.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSortedListIR_2E_element ("taskSortedListIR.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_taskSortedListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSortedListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSortedListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element GGS_taskSortedListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_taskSortedListIR_2E_element result ;
  const GGS_taskSortedListIR_2E_element * p = (const GGS_taskSortedListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSortedListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSortedListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element::GGS_globalTaskVariableList_2E_element (void) :
mProperty_mTaskName (),
mProperty_mTaskTypeName (),
mProperty_mInitialValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element::~ GGS_globalTaskVariableList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element GGS_globalTaskVariableList_2E_element::init_21__21__21_ (const GGS_string & in_mTaskName,
                                                                                               const GGS_string & in_mTaskTypeName,
                                                                                               const GGS_objectIR & in_mInitialValue,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalTaskVariableList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mTaskTypeName = in_mTaskTypeName ;
  result.mProperty_mInitialValue = in_mInitialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element::GGS_globalTaskVariableList_2E_element (const GGS_string & inOperand0,
                                                                              const GGS_string & inOperand1,
                                                                              const GGS_objectIR & inOperand2) :
mProperty_mTaskName (inOperand0),
mProperty_mTaskTypeName (inOperand1),
mProperty_mInitialValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element GGS_globalTaskVariableList_2E_element::class_func_new (const GGS_string & in_mTaskName,
                                                                                             const GGS_string & in_mTaskTypeName,
                                                                                             const GGS_objectIR & in_mInitialValue,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalTaskVariableList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mTaskTypeName = in_mTaskTypeName ;
  result.mProperty_mInitialValue = in_mInitialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalTaskVariableList_2E_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mTaskTypeName.isValid () && mProperty_mInitialValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList_2E_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mTaskTypeName.drop () ;
  mProperty_mInitialValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalTaskVariableList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalTaskVariableList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList_2E_element ("globalTaskVariableList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_globalTaskVariableList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalTaskVariableList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalTaskVariableList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element GGS_globalTaskVariableList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_globalTaskVariableList_2E_element result ;
  const GGS_globalTaskVariableList_2E_element * p = (const GGS_globalTaskVariableList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalTaskVariableList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

