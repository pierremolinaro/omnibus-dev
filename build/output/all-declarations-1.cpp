#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_omnibusInfixOperatorUsage_2E_weak::objectCompare (const GGS_omnibusInfixOperatorUsage_2E_weak & inOperand) const {
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

GGS_omnibusInfixOperatorUsage_2E_weak::GGS_omnibusInfixOperatorUsage_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage_2E_weak & GGS_omnibusInfixOperatorUsage_2E_weak::operator = (const GGS_omnibusInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage_2E_weak::GGS_omnibusInfixOperatorUsage_2E_weak (const GGS_omnibusInfixOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage_2E_weak GGS_omnibusInfixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_omnibusInfixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage GGS_omnibusInfixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_omnibusInfixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_omnibusInfixOperatorUsage * p = (cPtr_omnibusInfixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_omnibusInfixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage GGS_omnibusInfixOperatorUsage_2E_weak::bang_omnibusInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_omnibusInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusInfixOperatorUsage) ;
      result = GGS_omnibusInfixOperatorUsage ((cPtr_omnibusInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @omnibusInfixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak ("omnibusInfixOperatorUsage.weak",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusInfixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusInfixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusInfixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage_2E_weak GGS_omnibusInfixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_omnibusInfixOperatorUsage_2E_weak result ;
  const GGS_omnibusInfixOperatorUsage_2E_weak * p = (const GGS_omnibusInfixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusInfixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                       const GGS_objectIR constin_inLeftOperand,
                                       const GGS_location constin_inOperatorLocation,
                                       const GGS_objectIR constin_inRightOperand,
                                       const GGS_omnibusType constin_inResultType,
                                       GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       GGS_allocaList & io_ioAllocaList,
                                       GGS_instructionListIR & io_ioInstructionGenerationList,
                                       GGS_objectIR & out_outResultValue,
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

void extensionMethod_generateInfixOperatorCode (const GGS_infixOperatorMap inObject,
                                                const GGS_objectIR constinArgument_inLeftOperand,
                                                const GGS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                const GGS_location constinArgument_inOperatorLocation,
                                                const GGS_objectIR constinArgument_inRightOperand,
                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                GGS_objectIR & outArgument_outResultValue,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultValue.drop () ; // Release 'out' argument
  GGS_lstring var_key_1589 = function_infixOperatorMapKey (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 41)), constinArgument_inInfixOperator, constinArgument_inOperatorLocation, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 41)) ;
  GGS_omnibusType var_resultType_1727 ;
  GGS_omnibusInfixOperatorUsage var_operatorUsage_1743 ;
  const GGS_infixOperatorMap temp_0 = inObject ;
  temp_0.method_searchKey (var_key_1589, var_resultType_1727, var_operatorUsage_1743, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 42)) ;
  callExtensionMethod_generateCode ((cPtr_omnibusInfixOperatorUsage *) var_operatorUsage_1743.ptr (), constinArgument_inLeftOperand, constinArgument_inOperatorLocation, constinArgument_inRightOperand, var_resultType_1727, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 43)) ;
}


//--------------------------------------------------------------------------------------------------
// @inlineInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inlineInfixOperatorUsage::objectCompare (const GGS_inlineInfixOperatorUsage & inOperand) const {
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

GGS_inlineInfixOperatorUsage::GGS_inlineInfixOperatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inlineInfixOperatorUsage GGS_inlineInfixOperatorUsage::
init_21_ (const GGS_string & in_mLLVMOperation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inlineInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_inlineInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->inlineInfixOperatorUsage_init_21_ (in_mLLVMOperation, inCompiler) ;
  const GGS_inlineInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfixOperatorUsage::
inlineInfixOperatorUsage_init_21_ (const GGS_string & in_mLLVMOperation,
                                   Compiler * /* inCompiler */) {
  mProperty_mLLVMOperation = in_mLLVMOperation ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage::GGS_inlineInfixOperatorUsage (const cPtr_inlineInfixOperatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inlineInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_inlineInfixOperatorUsage::readProperty_mLLVMOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_inlineInfixOperatorUsage * p = (cPtr_inlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfixOperatorUsage) ;
    return p->mProperty_mLLVMOperation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_inlineInfixOperatorUsage::setProperty_mLLVMOperation (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_inlineInfixOperatorUsage * p = (cPtr_inlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfixOperatorUsage) ;
    p->mProperty_mLLVMOperation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inlineInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_inlineInfixOperatorUsage::cPtr_inlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLLVMOperation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inlineInfixOperatorUsage::cPtr_inlineInfixOperatorUsage (const GGS_string & in_mLLVMOperation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLLVMOperation () {
  mProperty_mLLVMOperation = in_mLLVMOperation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inlineInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;
}

void cPtr_inlineInfixOperatorUsage::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@inlineInfixOperatorUsage:") ;
  mProperty_mLLVMOperation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inlineInfixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inlineInfixOperatorUsage (mProperty_mLLVMOperation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inlineInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMOperation.printNonNullClassInstanceProperties ("mLLVMOperation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inlineInfixOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ("inlineInfixOperatorUsage",
                                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inlineInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inlineInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inlineInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage GGS_inlineInfixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_inlineInfixOperatorUsage result ;
  const GGS_inlineInfixOperatorUsage * p = (const GGS_inlineInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inlineInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inlineInfixOperatorUsage_2E_weak::objectCompare (const GGS_inlineInfixOperatorUsage_2E_weak & inOperand) const {
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

GGS_inlineInfixOperatorUsage_2E_weak::GGS_inlineInfixOperatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage_2E_weak & GGS_inlineInfixOperatorUsage_2E_weak::operator = (const GGS_inlineInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage_2E_weak::GGS_inlineInfixOperatorUsage_2E_weak (const GGS_inlineInfixOperatorUsage & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage_2E_weak GGS_inlineInfixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inlineInfixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage GGS_inlineInfixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_inlineInfixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_inlineInfixOperatorUsage * p = (cPtr_inlineInfixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_inlineInfixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage GGS_inlineInfixOperatorUsage_2E_weak::bang_inlineInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inlineInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inlineInfixOperatorUsage) ;
      result = GGS_inlineInfixOperatorUsage ((cPtr_inlineInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inlineInfixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2E_weak ("inlineInfixOperatorUsage.weak",
                                                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inlineInfixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inlineInfixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inlineInfixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage_2E_weak GGS_inlineInfixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_inlineInfixOperatorUsage_2E_weak result ;
  const GGS_inlineInfixOperatorUsage_2E_weak * p = (const GGS_inlineInfixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inlineInfixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@driverDeclarationListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverDeclarationListAST : public cCollectionElement {
  public: GGS_driverDeclarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_driverDeclarationListAST (const GGS_driverDeclarationAST & in_mDriver
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverDeclarationListAST (const GGS_driverDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverDeclarationListAST::cCollectionElement_driverDeclarationListAST (const GGS_driverDeclarationAST & in_mDriver
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriver) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverDeclarationListAST::cCollectionElement_driverDeclarationListAST (const GGS_driverDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriver) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_driverDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_driverDeclarationListAST (mObject.mProperty_mDriver COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @driverDeclarationListAST
//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST::GGS_driverDeclarationListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST::GGS_driverDeclarationListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    const GGS_driverDeclarationListAST_2E_element element (p->mObject.mProperty_mDriver) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_driverDeclarationAST & in_mDriver
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_driverDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverDeclarationListAST (in_mDriver COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_driverDeclarationListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_driverDeclarationListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDriver:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDriver.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverDeclarationListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::plusPlusAssignOperation (const GGS_driverDeclarationListAST_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::class_func_listWithValue (const GGS_driverDeclarationAST & inOperand0
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_driverDeclarationListAST_2E_element element (inOperand0) ;
  GGS_driverDeclarationListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::addAssignOperation (const GGS_driverDeclarationAST & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  const GGS_driverDeclarationListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_append (const GGS_driverDeclarationAST inOperand0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_driverDeclarationListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_insertAtIndex (const GGS_driverDeclarationAST inOperand0,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_driverDeclarationListAST_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_removeAtIndex (GGS_driverDeclarationAST & outOperand0,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDriver ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_popFirst (GGS_driverDeclarationAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDriver ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_popLast (GGS_driverDeclarationAST & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDriver ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::method_first (GGS_driverDeclarationAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDriver ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::method_last (GGS_driverDeclarationAST & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDriver ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::add_operation (const GGS_driverDeclarationListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_driverDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_driverDeclarationListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_driverDeclarationListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_driverDeclarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_driverDeclarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::plusAssignOperation (const GGS_driverDeclarationListAST inList,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_setMDriverAtIndex (GGS_driverDeclarationAST inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDriver = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_driverDeclarationAST GGS_driverDeclarationListAST::getter_mDriverAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_driverDeclarationAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDriver ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @driverDeclarationListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_driverDeclarationListAST::DownEnumerator_driverDeclarationListAST (const GGS_driverDeclarationListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST_2E_element DownEnumerator_driverDeclarationListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST DownEnumerator_driverDeclarationListAST::current_mDriver (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDriver ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @driverDeclarationListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_driverDeclarationListAST::UpEnumerator_driverDeclarationListAST (const GGS_driverDeclarationListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST_2E_element UpEnumerator_driverDeclarationListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST UpEnumerator_driverDeclarationListAST::current_mDriver (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDriver ;
}




//--------------------------------------------------------------------------------------------------
//     @driverDeclarationListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverDeclarationListAST ("driverDeclarationListAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_driverDeclarationListAST result ;
  const GGS_driverDeclarationListAST * p = (const GGS_driverDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@driverInstanciationArgumentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverInstanciationArgumentListAST : public cCollectionElement {
  public: GGS_driverInstanciationArgumentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_driverInstanciationArgumentListAST (const GGS_lstring & in_mSelector,
                                                                 const GGS_expressionAST & in_mExpression
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverInstanciationArgumentListAST (const GGS_driverInstanciationArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationArgumentListAST::cCollectionElement_driverInstanciationArgumentListAST (const GGS_lstring & in_mSelector,
                                                                                                              const GGS_expressionAST & in_mExpression
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationArgumentListAST::cCollectionElement_driverInstanciationArgumentListAST (const GGS_driverInstanciationArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelector, inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_driverInstanciationArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverInstanciationArgumentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_driverInstanciationArgumentListAST (mObject.mProperty_mSelector, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @driverInstanciationArgumentListAST
//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST::GGS_driverInstanciationArgumentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST::GGS_driverInstanciationArgumentListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    const GGS_driverInstanciationArgumentListAST_2E_element element (p->mObject.mProperty_mSelector, p->mObject.mProperty_mExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GGS_lstring & in_mSelector,
                                                                        const GGS_expressionAST & in_mExpression
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (in_mSelector, in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_driverInstanciationArgumentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_driverInstanciationArgumentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::plusPlusAssignOperation (const GGS_driverInstanciationArgumentListAST_2E_element & inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                         const GGS_expressionAST & inOperand1
                                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationArgumentListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_driverInstanciationArgumentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                                 const GGS_expressionAST & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::setter_append (const GGS_lstring inOperand0,
                                                            const GGS_expressionAST inOperand1,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                   const GGS_expressionAST inOperand1,
                                                                   const GGS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                   GGS_expressionAST & outOperand1,
                                                                   const GGS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                              GGS_expressionAST & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::setter_popLast (GGS_lstring & outOperand0,
                                                             GGS_expressionAST & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::method_first (GGS_lstring & outOperand0,
                                                           GGS_expressionAST & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::method_last (GGS_lstring & outOperand0,
                                                          GGS_expressionAST & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::add_operation (const GGS_driverInstanciationArgumentListAST & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::subList (const int32_t inStart,
                                                                                        const int32_t inLength,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::plusAssignOperation (const GGS_driverInstanciationArgumentListAST inList,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::setter_setMSelectorAtIndex (GGS_lstring inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSelector = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_driverInstanciationArgumentListAST::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSelector ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::setter_setMExpressionAtIndex (GGS_expressionAST inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_expressionAST GGS_driverInstanciationArgumentListAST::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_expressionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @driverInstanciationArgumentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_driverInstanciationArgumentListAST::DownEnumerator_driverInstanciationArgumentListAST (const GGS_driverInstanciationArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element DownEnumerator_driverInstanciationArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_driverInstanciationArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST DownEnumerator_driverInstanciationArgumentListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @driverInstanciationArgumentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_driverInstanciationArgumentListAST::UpEnumerator_driverInstanciationArgumentListAST (const GGS_driverInstanciationArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element UpEnumerator_driverInstanciationArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_driverInstanciationArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST UpEnumerator_driverInstanciationArgumentListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @driverInstanciationArgumentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ("driverInstanciationArgumentListAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverInstanciationArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverInstanciationArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverInstanciationArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentListAST result ;
  const GGS_driverInstanciationArgumentListAST * p = (const GGS_driverInstanciationArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverInstanciationArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @expressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expressionAST::objectCompare (const GGS_expressionAST & inOperand) const {
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

GGS_expressionAST::GGS_expressionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_expressionAST::
expressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST::GGS_expressionAST (const cPtr_expressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @expressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_expressionAST::cPtr_expressionAST (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @expressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionAST ("expressionAST",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_expressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_expressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_expressionAST::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_expressionAST result ;
  const GGS_expressionAST * p = (const GGS_expressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_expressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@driverInstanciationListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverInstanciationListAST : public cCollectionElement {
  public: GGS_driverInstanciationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_driverInstanciationListAST (const GGS_lstring & in_mDriverName,
                                                         const GGS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverInstanciationListAST (const GGS_driverInstanciationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationListAST::cCollectionElement_driverInstanciationListAST (const GGS_lstring & in_mDriverName,
                                                                                              const GGS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriverName, in_mDriverInstanciationArgumentList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationListAST::cCollectionElement_driverInstanciationListAST (const GGS_driverInstanciationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriverName, inElement.mProperty_mDriverInstanciationArgumentList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_driverInstanciationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverInstanciationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_driverInstanciationListAST (mObject.mProperty_mDriverName, mObject.mProperty_mDriverInstanciationArgumentList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @driverInstanciationListAST
//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST::GGS_driverInstanciationListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST::GGS_driverInstanciationListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    const GGS_driverInstanciationListAST_2E_element element (p->mObject.mProperty_mDriverName, p->mObject.mProperty_mDriverInstanciationArgumentList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_lstring & in_mDriverName,
                                                                const GGS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverInstanciationListAST (in_mDriverName, in_mDriverInstanciationArgumentList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_driverInstanciationListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_driverInstanciationListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDriverName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDriverName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDriverInstanciationArgumentList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDriverInstanciationArgumentList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverInstanciationListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::plusPlusAssignOperation (const GGS_driverInstanciationListAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_driverInstanciationArgumentListAST & inOperand1
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_driverInstanciationListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                         const GGS_driverInstanciationArgumentListAST & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_driverInstanciationArgumentListAST inOperand1,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_driverInstanciationArgumentListAST inOperand1,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_driverInstanciationArgumentListAST & outOperand1,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDriverName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mDriverInstanciationArgumentList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_driverInstanciationArgumentListAST & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDriverName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDriverInstanciationArgumentList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_driverInstanciationArgumentListAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDriverName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDriverInstanciationArgumentList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_driverInstanciationArgumentListAST & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDriverName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDriverInstanciationArgumentList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_driverInstanciationArgumentListAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDriverName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDriverInstanciationArgumentList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::add_operation (const GGS_driverInstanciationListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_driverInstanciationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::plusAssignOperation (const GGS_driverInstanciationListAST inList,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_setMDriverNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDriverName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_driverInstanciationListAST::getter_mDriverNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDriverName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_setMDriverInstanciationArgumentListAtIndex (GGS_driverInstanciationArgumentListAST inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDriverInstanciationArgumentList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_driverInstanciationArgumentListAST GGS_driverInstanciationListAST::getter_mDriverInstanciationArgumentListAtIndex (const GGS_uint & inIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDriverInstanciationArgumentList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @driverInstanciationListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_driverInstanciationListAST::DownEnumerator_driverInstanciationListAST (const GGS_driverInstanciationListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST_2E_element DownEnumerator_driverInstanciationListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_driverInstanciationListAST::current_mDriverName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST DownEnumerator_driverInstanciationListAST::current_mDriverInstanciationArgumentList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDriverInstanciationArgumentList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @driverInstanciationListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_driverInstanciationListAST::UpEnumerator_driverInstanciationListAST (const GGS_driverInstanciationListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST_2E_element UpEnumerator_driverInstanciationListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_driverInstanciationListAST::current_mDriverName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST UpEnumerator_driverInstanciationListAST::current_mDriverInstanciationArgumentList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDriverInstanciationArgumentList ;
}




//--------------------------------------------------------------------------------------------------
//     @driverInstanciationListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationListAST ("driverInstanciationListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverInstanciationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverInstanciationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverInstanciationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationListAST result ;
  const GGS_driverInstanciationListAST * p = (const GGS_driverInstanciationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverInstanciationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_implementedDriverAST_2E_weak::objectCompare (const GGS_implementedDriverAST_2E_weak & inOperand) const {
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

GGS_implementedDriverAST_2E_weak::GGS_implementedDriverAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST_2E_weak & GGS_implementedDriverAST_2E_weak::operator = (const GGS_implementedDriverAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST_2E_weak::GGS_implementedDriverAST_2E_weak (const GGS_implementedDriverAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST_2E_weak GGS_implementedDriverAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_implementedDriverAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST GGS_implementedDriverAST_2E_weak::unwrappedValue (void) const {
  GGS_implementedDriverAST result ;
  if (isValid ()) {
    const cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_implementedDriverAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST GGS_implementedDriverAST_2E_weak::bang_implementedDriverAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_implementedDriverAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_implementedDriverAST) ;
      result = GGS_implementedDriverAST ((cPtr_implementedDriverAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @implementedDriverAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implementedDriverAST_2E_weak ("implementedDriverAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implementedDriverAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implementedDriverAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implementedDriverAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST_2E_weak GGS_implementedDriverAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_implementedDriverAST_2E_weak result ;
  const GGS_implementedDriverAST_2E_weak * p = (const GGS_implementedDriverAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implementedDriverAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementedDriverAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @driverInstanciationArgumentMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap::GGS_driverInstanciationArgumentMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap::~ GGS_driverInstanciationArgumentMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap::GGS_driverInstanciationArgumentMap (const GGS_driverInstanciationArgumentMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap & GGS_driverInstanciationArgumentMap::operator = (const GGS_driverInstanciationArgumentMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_driverInstanciationArgumentMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_driverInstanciationArgumentMap::getter_hasKey (const GGS_string & inKey
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_driverInstanciationArgumentMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                   const GGS_uint & inLevel
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_driverInstanciationArgumentMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_driverInstanciationArgumentMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_driverInstanciationArgumentMap::getter_locationForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_driverInstanciationArgumentMap::getter_keyList (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverInstanciationArgumentMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_driverInstanciationArgumentMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::performInsert (const GGS_driverInstanciationArgumentMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_driverInstanciationArgumentMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>
GGS_driverInstanciationArgumentMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_driverInstanciationArgumentMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>>
GGS_driverInstanciationArgumentMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_driverInstanciationArgumentMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element_3F_ GGS_driverInstanciationArgumentMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_driverInstanciationArgumentMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_driverInstanciationArgumentMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mExpression = info->mProperty_mExpression ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_driverInstanciationArgumentMap::class_func_mapWithMapToOverride (const GGS_driverInstanciationArgumentMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_driverInstanciationArgumentMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_driverInstanciationArgumentMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::setter_insertKey (GGS_lstring inLKey,
                                                           GGS_expressionAST inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationArgumentMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "duplicated '%K' selector" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::method_searchKey (GGS_lstring inLKey,
                                                           GGS_expressionAST & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "uninitialized '%K' property" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mExpression ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_driverInstanciationArgumentMap::getter_mExpressionForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_expressionAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mExpression ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::setter_setMExpressionForKey (GGS_expressionAST inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_driverInstanciationArgumentMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mExpression = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_driverInstanciationArgumentMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mExpression:") ;
    inArray (i COMMA_HERE)->mProperty_mExpression.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> array = sortedInfoArray () ;
    GGS_driverInstanciationArgumentMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_driverInstanciationArgumentMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_driverInstanciationArgumentMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @driverInstanciationArgumentMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_driverInstanciationArgumentMap::DownEnumerator_driverInstanciationArgumentMap (const GGS_driverInstanciationArgumentMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element DownEnumerator_driverInstanciationArgumentMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_driverInstanciationArgumentMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST DownEnumerator_driverInstanciationArgumentMap::current_mExpression (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @driverInstanciationArgumentMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_driverInstanciationArgumentMap::UpEnumerator_driverInstanciationArgumentMap (const GGS_driverInstanciationArgumentMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element UpEnumerator_driverInstanciationArgumentMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_driverInstanciationArgumentMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST UpEnumerator_driverInstanciationArgumentMap::current_mExpression (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExpression ;
}


//--------------------------------------------------------------------------------------------------
//     @driverInstanciationArgumentMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ("driverInstanciationArgumentMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverInstanciationArgumentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverInstanciationArgumentMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverInstanciationArgumentMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_driverInstanciationArgumentMap::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap result ;
  const GGS_driverInstanciationArgumentMap * p = (const GGS_driverInstanciationArgumentMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverInstanciationArgumentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @instanciedDriverMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap::GGS_instanciedDriverMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap::~ GGS_instanciedDriverMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap::GGS_instanciedDriverMap (const GGS_instanciedDriverMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap & GGS_instanciedDriverMap::operator = (const GGS_instanciedDriverMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap GGS_instanciedDriverMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_instanciedDriverMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_instanciedDriverMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_instanciedDriverMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_instanciedDriverMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_instanciedDriverMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_instanciedDriverMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_instanciedDriverMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instanciedDriverMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_instanciedDriverMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::performInsert (const GGS_instanciedDriverMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_instanciedDriverMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>
GGS_instanciedDriverMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_instanciedDriverMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>>
GGS_instanciedDriverMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_instanciedDriverMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element_3F_ GGS_instanciedDriverMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_instanciedDriverMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_instanciedDriverMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_instanciedDriverMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mDriverInstanciationArgumentMap = info->mProperty_mDriverInstanciationArgumentMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap GGS_instanciedDriverMap::class_func_mapWithMapToOverride (const GGS_instanciedDriverMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_instanciedDriverMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_instanciedDriverMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap GGS_instanciedDriverMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_instanciedDriverMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_driverInstanciationArgumentMap inArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_instanciedDriverMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' driver is already instancied in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_driverInstanciationArgumentMap & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "internal error %K" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mDriverInstanciationArgumentMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_instanciedDriverMap::getter_mDriverInstanciationArgumentMapForKey (const GGS_string & inKey,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDriverInstanciationArgumentMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::setter_setMDriverInstanciationArgumentMapForKey (GGS_driverInstanciationArgumentMap inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_instanciedDriverMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDriverInstanciationArgumentMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_instanciedDriverMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDriverInstanciationArgumentMap:") ;
    inArray (i COMMA_HERE)->mProperty_mDriverInstanciationArgumentMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> array = sortedInfoArray () ;
    GGS_instanciedDriverMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_instanciedDriverMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_instanciedDriverMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @instanciedDriverMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_instanciedDriverMap::DownEnumerator_instanciedDriverMap (const GGS_instanciedDriverMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element DownEnumerator_instanciedDriverMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_instanciedDriverMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap DownEnumerator_instanciedDriverMap::current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDriverInstanciationArgumentMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @instanciedDriverMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_instanciedDriverMap::UpEnumerator_instanciedDriverMap (const GGS_instanciedDriverMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element UpEnumerator_instanciedDriverMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_instanciedDriverMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap UpEnumerator_instanciedDriverMap::current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDriverInstanciationArgumentMap ;
}


//--------------------------------------------------------------------------------------------------
//     @instanciedDriverMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanciedDriverMap ("instanciedDriverMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instanciedDriverMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instanciedDriverMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instanciedDriverMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap GGS_instanciedDriverMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_instanciedDriverMap result ;
  const GGS_instanciedDriverMap * p = (const GGS_instanciedDriverMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instanciedDriverMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedRequiredDriver_2E_weak::objectCompare (const GGS_decoratedRequiredDriver_2E_weak & inOperand) const {
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

GGS_decoratedRequiredDriver_2E_weak::GGS_decoratedRequiredDriver_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver_2E_weak & GGS_decoratedRequiredDriver_2E_weak::operator = (const GGS_decoratedRequiredDriver & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver_2E_weak::GGS_decoratedRequiredDriver_2E_weak (const GGS_decoratedRequiredDriver & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver_2E_weak GGS_decoratedRequiredDriver_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedRequiredDriver_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver GGS_decoratedRequiredDriver_2E_weak::unwrappedValue (void) const {
  GGS_decoratedRequiredDriver result ;
  if (isValid ()) {
    const cPtr_decoratedRequiredDriver * p = (cPtr_decoratedRequiredDriver *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedRequiredDriver (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver GGS_decoratedRequiredDriver_2E_weak::bang_decoratedRequiredDriver_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedRequiredDriver result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedRequiredDriver) ;
      result = GGS_decoratedRequiredDriver ((cPtr_decoratedRequiredDriver *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedRequiredDriver.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver_2E_weak ("decoratedRequiredDriver.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedRequiredDriver_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedRequiredDriver_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedRequiredDriver_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver_2E_weak GGS_decoratedRequiredDriver_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_decoratedRequiredDriver_2E_weak result ;
  const GGS_decoratedRequiredDriver_2E_weak * p = (const GGS_decoratedRequiredDriver_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedRequiredDriver_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRequiredDriver.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@driverListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverListIR : public cCollectionElement {
  public: GGS_driverListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_driverListIR (const GGS_lstring & in_mDriverName,
                                           const GGS_omnibusType & in_mType,
                                           const GGS_operandIRList & in_mInitialValueList
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverListIR (const GGS_driverListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverListIR::cCollectionElement_driverListIR (const GGS_lstring & in_mDriverName,
                                                                  const GGS_omnibusType & in_mType,
                                                                  const GGS_operandIRList & in_mInitialValueList
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriverName, in_mType, in_mInitialValueList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverListIR::cCollectionElement_driverListIR (const GGS_driverListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriverName, inElement.mProperty_mType, inElement.mProperty_mInitialValueList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_driverListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_driverListIR (mObject.mProperty_mDriverName, mObject.mProperty_mType, mObject.mProperty_mInitialValueList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @driverListIR
//--------------------------------------------------------------------------------------------------

GGS_driverListIR::GGS_driverListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR::GGS_driverListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    const GGS_driverListIR_2E_element element (p->mObject.mProperty_mDriverName, p->mObject.mProperty_mType, p->mObject.mProperty_mInitialValueList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_lstring & in_mDriverName,
                                                  const GGS_omnibusType & in_mType,
                                                  const GGS_operandIRList & in_mInitialValueList
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverListIR (in_mDriverName, in_mType, in_mInitialValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_driverListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_driverListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDriverName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDriverName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInitialValueList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInitialValueList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::plusPlusAssignOperation (const GGS_driverListIR_2E_element & inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                             const GGS_omnibusType & inOperand1,
                                                             const GGS_operandIRList & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_driverListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::addAssignOperation (const GGS_lstring & inOperand0,
                                           const GGS_omnibusType & inOperand1,
                                           const GGS_operandIRList & inOperand2
                                           COMMA_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::setter_append (const GGS_lstring inOperand0,
                                      const GGS_omnibusType inOperand1,
                                      const GGS_operandIRList inOperand2,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::setter_insertAtIndex (const GGS_lstring inOperand0,
                                             const GGS_omnibusType inOperand1,
                                             const GGS_operandIRList inOperand2,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::setter_removeAtIndex (GGS_lstring & outOperand0,
                                             GGS_omnibusType & outOperand1,
                                             GGS_operandIRList & outOperand2,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDriverName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mInitialValueList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::setter_popFirst (GGS_lstring & outOperand0,
                                        GGS_omnibusType & outOperand1,
                                        GGS_operandIRList & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDriverName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialValueList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::setter_popLast (GGS_lstring & outOperand0,
                                       GGS_omnibusType & outOperand1,
                                       GGS_operandIRList & outOperand2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDriverName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialValueList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::method_first (GGS_lstring & outOperand0,
                                     GGS_omnibusType & outOperand1,
                                     GGS_operandIRList & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDriverName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialValueList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::method_last (GGS_lstring & outOperand0,
                                    GGS_omnibusType & outOperand1,
                                    GGS_operandIRList & outOperand2,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDriverName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialValueList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::add_operation (const GGS_driverListIR & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_driverListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_driverListIR result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_driverListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_driverListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_driverListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::plusAssignOperation (const GGS_driverListIR inList,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::setter_setMDriverNameAtIndex (GGS_lstring inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDriverName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_driverListIR::getter_mDriverNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDriverName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::setter_setMTypeAtIndex (GGS_omnibusType inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_omnibusType GGS_driverListIR::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::setter_setMInitialValueListAtIndex (GGS_operandIRList inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialValueList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_operandIRList GGS_driverListIR::getter_mInitialValueListAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialValueList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @driverListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_driverListIR::DownEnumerator_driverListIR (const GGS_driverListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element DownEnumerator_driverListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_driverListIR::current_mDriverName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_driverListIR::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList DownEnumerator_driverListIR::current_mInitialValueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialValueList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @driverListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_driverListIR::UpEnumerator_driverListIR (const GGS_driverListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element UpEnumerator_driverListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_driverListIR::current_mDriverName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_driverListIR::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList UpEnumerator_driverListIR::current_mInitialValueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialValueList ;
}




//--------------------------------------------------------------------------------------------------
//     @driverListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverListIR ("driverListIR",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_driverListIR result ;
  const GGS_driverListIR * p = (const GGS_driverListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@operandIRList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_operandIRList : public cCollectionElement {
  public: GGS_operandIRList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_operandIRList (const GGS_objectIR & in_mOperand
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_operandIRList (const GGS_operandIRList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GGS_objectIR & in_mOperand
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOperand) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GGS_operandIRList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOperand) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_operandIRList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_operandIRList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_operandIRList (mObject.mProperty_mOperand COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @operandIRList
//--------------------------------------------------------------------------------------------------

GGS_operandIRList::GGS_operandIRList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList::GGS_operandIRList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    const GGS_operandIRList_2E_element element (p->mObject.mProperty_mOperand) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GGS_objectIR & in_mOperand
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_operandIRList * p = nullptr ;
  macroMyNew (p, cCollectionElement_operandIRList (in_mOperand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_operandIRList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_operandIRList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOperand:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOperand.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_operandIRList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::plusPlusAssignOperation (const GGS_operandIRList_2E_element & inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::class_func_listWithValue (const GGS_objectIR & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  const GGS_operandIRList_2E_element element (inOperand0) ;
  GGS_operandIRList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::addAssignOperation (const GGS_objectIR & inOperand0
                                            COMMA_LOCATION_ARGS) {
  const GGS_operandIRList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_append (const GGS_objectIR inOperand0,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  const GGS_operandIRList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_insertAtIndex (const GGS_objectIR inOperand0,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_operandIRList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_removeAtIndex (GGS_objectIR & outOperand0,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOperand ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_popFirst (GGS_objectIR & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOperand ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_popLast (GGS_objectIR & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOperand ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::method_first (GGS_objectIR & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOperand ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::method_last (GGS_objectIR & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOperand ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::add_operation (const GGS_operandIRList & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::plusAssignOperation (const GGS_operandIRList inList,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_setMOperandAtIndex (GGS_objectIR inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOperand = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_objectIR GGS_operandIRList::getter_mOperandAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_objectIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_operandIRList::objectCompare (const GGS_operandIRList & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_operandIRList_2E_element left = mArray (int32_t (i) COMMA_HERE) ;
        const GGS_operandIRList_2E_element right = inOperand.mArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @operandIRList
//--------------------------------------------------------------------------------------------------

DownEnumerator_operandIRList::DownEnumerator_operandIRList (const GGS_operandIRList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element DownEnumerator_operandIRList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR DownEnumerator_operandIRList::current_mOperand (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOperand ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @operandIRList
//--------------------------------------------------------------------------------------------------

UpEnumerator_operandIRList::UpEnumerator_operandIRList (const GGS_operandIRList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element UpEnumerator_operandIRList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR UpEnumerator_operandIRList::current_mOperand (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOperand ;
}




//--------------------------------------------------------------------------------------------------
//     @operandIRList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_operandIRList ("operandIRList",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_operandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_operandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_operandIRList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_operandIRList result ;
  const GGS_operandIRList * p = (const GGS_operandIRList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_operandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR generateLLVMDriverCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverCode (const GGS_driverListIR inObject,
                                             GGS_string & ioArgument_ioLLVMcode,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Boot"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 439)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @boot ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)) ;
  const GGS_driverListIR temp_0 = inObject ;
  UpEnumerator_driverListIR enumerator_18570 (temp_0) ;
  while (enumerator_18570.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmBootRoutineNameFromDriver (enumerator_18570.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-driver.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18570.current (HERE).readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)).add_operation (function_llvmNameForGlobalVariable (enumerator_18570.current (HERE).readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 444)) ;
    enumerator_18570.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 446)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 447)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Startup"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @startup ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)) ;
  const GGS_driverListIR temp_1 = inObject ;
  UpEnumerator_driverListIR enumerator_19044 (temp_1) ;
  while (enumerator_19044.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmStartupRoutineNameFromDriver (enumerator_19044.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-driver.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_19044.current (HERE).readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)).add_operation (function_llvmNameForGlobalVariable (enumerator_19044.current (HERE).readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 454)) ;
    enumerator_19044.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 456)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 457)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeDynamicArrayDeclarationAST_2E_weak::objectCompare (const GGS_typeDynamicArrayDeclarationAST_2E_weak & inOperand) const {
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

GGS_typeDynamicArrayDeclarationAST_2E_weak::GGS_typeDynamicArrayDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak & GGS_typeDynamicArrayDeclarationAST_2E_weak::operator = (const GGS_typeDynamicArrayDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak::GGS_typeDynamicArrayDeclarationAST_2E_weak (const GGS_typeDynamicArrayDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak GGS_typeDynamicArrayDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_typeDynamicArrayDeclarationAST result ;
  if (isValid ()) {
    const cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_typeDynamicArrayDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST_2E_weak::bang_typeDynamicArrayDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeDynamicArrayDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeDynamicArrayDeclarationAST) ;
      result = GGS_typeDynamicArrayDeclarationAST ((cPtr_typeDynamicArrayDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typeDynamicArrayDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2E_weak ("typeDynamicArrayDeclarationAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDynamicArrayDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDynamicArrayDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDynamicArrayDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak GGS_typeDynamicArrayDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST_2E_weak result ;
  const GGS_typeDynamicArrayDeclarationAST_2E_weak * p = (const GGS_typeDynamicArrayDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDynamicArrayDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDynamicArrayDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayRemoveAllFunctionIR_2E_weak::objectCompare (const GGS_dynArrayRemoveAllFunctionIR_2E_weak & inOperand) const {
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

GGS_dynArrayRemoveAllFunctionIR_2E_weak::GGS_dynArrayRemoveAllFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak & GGS_dynArrayRemoveAllFunctionIR_2E_weak::operator = (const GGS_dynArrayRemoveAllFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak::GGS_dynArrayRemoveAllFunctionIR_2E_weak (const GGS_dynArrayRemoveAllFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak GGS_dynArrayRemoveAllFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_dynArrayRemoveAllFunctionIR result ;
  if (isValid ()) {
    const cPtr_dynArrayRemoveAllFunctionIR * p = (cPtr_dynArrayRemoveAllFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynArrayRemoveAllFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR_2E_weak::bang_dynArrayRemoveAllFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynArrayRemoveAllFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayRemoveAllFunctionIR) ;
      result = GGS_dynArrayRemoveAllFunctionIR ((cPtr_dynArrayRemoveAllFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynArrayRemoveAllFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2E_weak ("dynArrayRemoveAllFunctionIR.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayRemoveAllFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayRemoveAllFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayRemoveAllFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak GGS_dynArrayRemoveAllFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR_2E_weak result ;
  const GGS_dynArrayRemoveAllFunctionIR_2E_weak * p = (const GGS_dynArrayRemoveAllFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayRemoveAllFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayRemoveAllFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayLengthFunctionIR_2E_weak::objectCompare (const GGS_dynArrayLengthFunctionIR_2E_weak & inOperand) const {
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

GGS_dynArrayLengthFunctionIR_2E_weak::GGS_dynArrayLengthFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak & GGS_dynArrayLengthFunctionIR_2E_weak::operator = (const GGS_dynArrayLengthFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak::GGS_dynArrayLengthFunctionIR_2E_weak (const GGS_dynArrayLengthFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak GGS_dynArrayLengthFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_dynArrayLengthFunctionIR result ;
  if (isValid ()) {
    const cPtr_dynArrayLengthFunctionIR * p = (cPtr_dynArrayLengthFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynArrayLengthFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR_2E_weak::bang_dynArrayLengthFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynArrayLengthFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayLengthFunctionIR) ;
      result = GGS_dynArrayLengthFunctionIR ((cPtr_dynArrayLengthFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynArrayLengthFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2E_weak ("dynArrayLengthFunctionIR.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayLengthFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayLengthFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayLengthFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak GGS_dynArrayLengthFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR_2E_weak result ;
  const GGS_dynArrayLengthFunctionIR_2E_weak * p = (const GGS_dynArrayLengthFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayLengthFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayLengthFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayAppendFunctionIR_2E_weak::objectCompare (const GGS_dynArrayAppendFunctionIR_2E_weak & inOperand) const {
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

GGS_dynArrayAppendFunctionIR_2E_weak::GGS_dynArrayAppendFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR_2E_weak & GGS_dynArrayAppendFunctionIR_2E_weak::operator = (const GGS_dynArrayAppendFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR_2E_weak::GGS_dynArrayAppendFunctionIR_2E_weak (const GGS_dynArrayAppendFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR_2E_weak GGS_dynArrayAppendFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynArrayAppendFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_dynArrayAppendFunctionIR result ;
  if (isValid ()) {
    const cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynArrayAppendFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR_2E_weak::bang_dynArrayAppendFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynArrayAppendFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayAppendFunctionIR) ;
      result = GGS_dynArrayAppendFunctionIR ((cPtr_dynArrayAppendFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynArrayAppendFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2E_weak ("dynArrayAppendFunctionIR.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayAppendFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayAppendFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayAppendFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR_2E_weak GGS_dynArrayAppendFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayAppendFunctionIR_2E_weak result ;
  const GGS_dynArrayAppendFunctionIR_2E_weak * p = (const GGS_dynArrayAppendFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayAppendFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayAppendFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayInsertFunctionIR_2E_weak::objectCompare (const GGS_dynArrayInsertFunctionIR_2E_weak & inOperand) const {
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

GGS_dynArrayInsertFunctionIR_2E_weak::GGS_dynArrayInsertFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR_2E_weak & GGS_dynArrayInsertFunctionIR_2E_weak::operator = (const GGS_dynArrayInsertFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR_2E_weak::GGS_dynArrayInsertFunctionIR_2E_weak (const GGS_dynArrayInsertFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR_2E_weak GGS_dynArrayInsertFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynArrayInsertFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_dynArrayInsertFunctionIR result ;
  if (isValid ()) {
    const cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynArrayInsertFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR_2E_weak::bang_dynArrayInsertFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynArrayInsertFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayInsertFunctionIR) ;
      result = GGS_dynArrayInsertFunctionIR ((cPtr_dynArrayInsertFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynArrayInsertFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2E_weak ("dynArrayInsertFunctionIR.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayInsertFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayInsertFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayInsertFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR_2E_weak GGS_dynArrayInsertFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayInsertFunctionIR_2E_weak result ;
  const GGS_dynArrayInsertFunctionIR_2E_weak * p = (const GGS_dynArrayInsertFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayInsertFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayInsertFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractAssignmentOperatorUsage::objectCompare (const GGS_abstractAssignmentOperatorUsage & inOperand) const {
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

GGS_abstractAssignmentOperatorUsage::GGS_abstractAssignmentOperatorUsage (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractAssignmentOperatorUsage::
abstractAssignmentOperatorUsage_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage::GGS_abstractAssignmentOperatorUsage (const cPtr_abstractAssignmentOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractAssignmentOperatorUsage::cPtr_abstractAssignmentOperatorUsage (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractAssignmentOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ("abstractAssignmentOperatorUsage",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage GGS_abstractAssignmentOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractAssignmentOperatorUsage result ;
  const GGS_abstractAssignmentOperatorUsage * p = (const GGS_abstractAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_abstractAssignmentOperatorUsage_2E_weak & inOperand) const {
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

GGS_abstractAssignmentOperatorUsage_2E_weak::GGS_abstractAssignmentOperatorUsage_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage_2E_weak & GGS_abstractAssignmentOperatorUsage_2E_weak::operator = (const GGS_abstractAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage_2E_weak::GGS_abstractAssignmentOperatorUsage_2E_weak (const GGS_abstractAssignmentOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage_2E_weak GGS_abstractAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage GGS_abstractAssignmentOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_abstractAssignmentOperatorUsage result ;
  if (isValid ()) {
    const cPtr_abstractAssignmentOperatorUsage * p = (cPtr_abstractAssignmentOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractAssignmentOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage GGS_abstractAssignmentOperatorUsage_2E_weak::bang_abstractAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractAssignmentOperatorUsage) ;
      result = GGS_abstractAssignmentOperatorUsage ((cPtr_abstractAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractAssignmentOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak ("abstractAssignmentOperatorUsage.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage_2E_weak GGS_abstractAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractAssignmentOperatorUsage_2E_weak result ;
  const GGS_abstractAssignmentOperatorUsage_2E_weak * p = (const GGS_abstractAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::objectCompare (const GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak & inOperand) const {
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

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak & GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::operator = (const GGS_dynamicArrayTypeAssignGenericFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (const GGS_dynamicArrayTypeAssignGenericFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_dynamicArrayTypeAssignGenericFunctionIR result ;
  if (isValid ()) {
    const cPtr_dynamicArrayTypeAssignGenericFunctionIR * p = (cPtr_dynamicArrayTypeAssignGenericFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynamicArrayTypeAssignGenericFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::bang_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynamicArrayTypeAssignGenericFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
      result = GGS_dynamicArrayTypeAssignGenericFunctionIR ((cPtr_dynamicArrayTypeAssignGenericFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynamicArrayTypeAssignGenericFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak ("dynamicArrayTypeAssignGenericFunctionIR.weak",
                                                                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak result ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak * p = (const GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignGenericFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolTypeAST::objectCompare (const GGS_boolTypeAST & inOperand) const {
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

GGS_boolTypeAST::GGS_boolTypeAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_boolTypeAST (inCompiler COMMA_THERE)) ;
  object->boolTypeAST_init (inCompiler) ;
  const GGS_boolTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::
boolTypeAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST::GGS_boolTypeAST (const cPtr_boolTypeAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @boolTypeAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_boolTypeAST::cPtr_boolTypeAST (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

void cPtr_boolTypeAST::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@boolTypeAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolTypeAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @boolTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolTypeAST ("boolTypeAST",
                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_boolTypeAST result ;
  const GGS_boolTypeAST * p = (const GGS_boolTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolTypeAST_2E_weak::objectCompare (const GGS_boolTypeAST_2E_weak & inOperand) const {
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

GGS_boolTypeAST_2E_weak::GGS_boolTypeAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak & GGS_boolTypeAST_2E_weak::operator = (const GGS_boolTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak::GGS_boolTypeAST_2E_weak (const GGS_boolTypeAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak GGS_boolTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_boolTypeAST result ;
  if (isValid ()) {
    const cPtr_boolTypeAST * p = (cPtr_boolTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_boolTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST_2E_weak::bang_boolTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolTypeAST) ;
      result = GGS_boolTypeAST ((cPtr_boolTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @boolTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolTypeAST_2E_weak ("boolTypeAST.weak",
                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak GGS_boolTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_boolTypeAST_2E_weak result ;
  const GGS_boolTypeAST_2E_weak * p = (const GGS_boolTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractImplicitConverterToBoolean::objectCompare (const GGS_abstractImplicitConverterToBoolean & inOperand) const {
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

GGS_abstractImplicitConverterToBoolean::GGS_abstractImplicitConverterToBoolean (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractImplicitConverterToBoolean::
abstractImplicitConverterToBoolean_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean::GGS_abstractImplicitConverterToBoolean (const cPtr_abstractImplicitConverterToBoolean * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractImplicitConverterToBoolean::cPtr_abstractImplicitConverterToBoolean (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractImplicitConverterToBoolean generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ("abstractImplicitConverterToBoolean",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean GGS_abstractImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractImplicitConverterToBoolean result ;
  const GGS_abstractImplicitConverterToBoolean * p = (const GGS_abstractImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractImplicitConverterToBoolean_2E_weak::objectCompare (const GGS_abstractImplicitConverterToBoolean_2E_weak & inOperand) const {
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

GGS_abstractImplicitConverterToBoolean_2E_weak::GGS_abstractImplicitConverterToBoolean_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak & GGS_abstractImplicitConverterToBoolean_2E_weak::operator = (const GGS_abstractImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak::GGS_abstractImplicitConverterToBoolean_2E_weak (const GGS_abstractImplicitConverterToBoolean & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak GGS_abstractImplicitConverterToBoolean_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractImplicitConverterToBoolean_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean GGS_abstractImplicitConverterToBoolean_2E_weak::unwrappedValue (void) const {
  GGS_abstractImplicitConverterToBoolean result ;
  if (isValid ()) {
    const cPtr_abstractImplicitConverterToBoolean * p = (cPtr_abstractImplicitConverterToBoolean *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractImplicitConverterToBoolean (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean GGS_abstractImplicitConverterToBoolean_2E_weak::bang_abstractImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractImplicitConverterToBoolean) ;
      result = GGS_abstractImplicitConverterToBoolean ((cPtr_abstractImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractImplicitConverterToBoolean.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak ("abstractImplicitConverterToBoolean.weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractImplicitConverterToBoolean_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractImplicitConverterToBoolean_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractImplicitConverterToBoolean_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak GGS_abstractImplicitConverterToBoolean_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractImplicitConverterToBoolean_2E_weak result ;
  const GGS_abstractImplicitConverterToBoolean_2E_weak * p = (const GGS_abstractImplicitConverterToBoolean_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractImplicitConverterToBoolean_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractImplicitConverterToBoolean.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefixOperatorUsage::objectCompare (const GGS_prefixOperatorUsage & inOperand) const {
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

GGS_prefixOperatorUsage::GGS_prefixOperatorUsage (void) :
AC_GALGAS_reference_class () {
}


void cPtr_prefixOperatorUsage::
prefixOperatorUsage_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage::GGS_prefixOperatorUsage (const cPtr_prefixOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @prefixOperatorUsage class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorUsage::cPtr_prefixOperatorUsage (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @prefixOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorUsage ("prefixOperatorUsage",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage GGS_prefixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorUsage result ;
  const GGS_prefixOperatorUsage * p = (const GGS_prefixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefixOperatorUsage_2E_weak::objectCompare (const GGS_prefixOperatorUsage_2E_weak & inOperand) const {
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

GGS_prefixOperatorUsage_2E_weak::GGS_prefixOperatorUsage_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage_2E_weak & GGS_prefixOperatorUsage_2E_weak::operator = (const GGS_prefixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage_2E_weak::GGS_prefixOperatorUsage_2E_weak (const GGS_prefixOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage_2E_weak GGS_prefixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_prefixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage GGS_prefixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_prefixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_prefixOperatorUsage * p = (cPtr_prefixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_prefixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage GGS_prefixOperatorUsage_2E_weak::bang_prefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_prefixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefixOperatorUsage) ;
      result = GGS_prefixOperatorUsage ((cPtr_prefixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @prefixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak ("prefixOperatorUsage.weak",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage_2E_weak GGS_prefixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorUsage_2E_weak result ;
  const GGS_prefixOperatorUsage_2E_weak * p = (const GGS_prefixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @flatValuedObjectMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap::GGS_flatValuedObjectMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap::~ GGS_flatValuedObjectMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap::GGS_flatValuedObjectMap (const GGS_flatValuedObjectMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap & GGS_flatValuedObjectMap::operator = (const GGS_flatValuedObjectMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_flatValuedObjectMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_flatValuedObjectMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_flatValuedObjectMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_flatValuedObjectMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_flatValuedObjectMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_flatValuedObjectMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_flatValuedObjectMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_flatValuedObjectMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_flatValuedObjectMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::performInsert (const GGS_flatValuedObjectMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_flatValuedObjectMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>
GGS_flatValuedObjectMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_flatValuedObjectMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>>
GGS_flatValuedObjectMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_flatValuedObjectMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element_3F_ GGS_flatValuedObjectMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_flatValuedObjectMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_flatValuedObjectMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_flatValuedObjectMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mObjectState = info->mProperty_mObjectState ;
      element.mProperty_mObjectShouldBeValuedAtEndOfScope = info->mProperty_mObjectShouldBeValuedAtEndOfScope ;
      element.mProperty_mValuedObject = info->mProperty_mValuedObject ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::class_func_mapWithMapToOverride (const GGS_flatValuedObjectMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_flatValuedObjectMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_flatValuedObjectMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_flatValuedObjectMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_valuedObjectState inArgument0,
                                                GGS_bool inArgument1,
                                                GGS_valuedObject inArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_flatValuedObjectMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' entity is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_valuedObjectState & outArgument0,
                                                GGS_bool & outArgument1,
                                                GGS_valuedObject & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' entity" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mObjectState ;
    outArgument1 = info->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = info->mProperty_mValuedObject ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_removeKey (GGS_lstring inLKey,
                                                GGS_valuedObjectState & outArgument0,
                                                GGS_bool & outArgument1,
                                                GGS_valuedObject & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "there is no '%K' entity" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mObjectState ;
    outArgument1 = info->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = info->mProperty_mValuedObject ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_flatValuedObjectMap::getter_mObjectStateForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_valuedObjectState result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mObjectState ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_flatValuedObjectMap::getter_mObjectShouldBeValuedAtEndOfScopeForKey (const GGS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_flatValuedObjectMap::getter_mValuedObjectForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_valuedObject result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mValuedObject ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_setMObjectStateForKey (GGS_valuedObjectState inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_flatValuedObjectMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mObjectState = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_setMObjectShouldBeValuedAtEndOfScopeForKey (GGS_bool inValue,
                                                                                 GGS_string inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_flatValuedObjectMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mObjectShouldBeValuedAtEndOfScope = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_setMValuedObjectForKey (GGS_valuedObject inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_flatValuedObjectMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mValuedObject = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_flatValuedObjectMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mObjectState:") ;
    inArray (i COMMA_HERE)->mProperty_mObjectState.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mObjectShouldBeValuedAtEndOfScope:") ;
    inArray (i COMMA_HERE)->mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mValuedObject:") ;
    inArray (i COMMA_HERE)->mProperty_mValuedObject.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>> array = sortedInfoArray () ;
    GGS_flatValuedObjectMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_flatValuedObjectMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_flatValuedObjectMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @flatValuedObjectMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_flatValuedObjectMap::DownEnumerator_flatValuedObjectMap (const GGS_flatValuedObjectMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element DownEnumerator_flatValuedObjectMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_flatValuedObjectMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState DownEnumerator_flatValuedObjectMap::current_mObjectState (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mObjectState ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_flatValuedObjectMap::current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject DownEnumerator_flatValuedObjectMap::current_mValuedObject (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValuedObject ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @flatValuedObjectMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_flatValuedObjectMap::UpEnumerator_flatValuedObjectMap (const GGS_flatValuedObjectMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element UpEnumerator_flatValuedObjectMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_flatValuedObjectMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState UpEnumerator_flatValuedObjectMap::current_mObjectState (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mObjectState ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_flatValuedObjectMap::current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject UpEnumerator_flatValuedObjectMap::current_mValuedObject (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValuedObject ;
}


//--------------------------------------------------------------------------------------------------
//     @flatValuedObjectMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_flatValuedObjectMap ("flatValuedObjectMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_flatValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_flatValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_flatValuedObjectMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_flatValuedObjectMap result ;
  const GGS_flatValuedObjectMap * p = (const GGS_flatValuedObjectMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_flatValuedObjectMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@scopeStack' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_scopeStack : public cCollectionElement {
  public: GGS_scopeStack_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_scopeStack (const GGS_scopeKind & in_mScopeKind,
                                         const GGS_bool & in_mFirstBranch,
                                         const GGS_referenceStateMap & in_mInitialStateMap,
                                         const GGS_referenceStateMap & in_mReferenceStateMap,
                                         const GGS_lstringlist & in_mObjectList
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_scopeStack (const GGS_scopeStack_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_scopeStack::cCollectionElement_scopeStack (const GGS_scopeKind & in_mScopeKind,
                                                              const GGS_bool & in_mFirstBranch,
                                                              const GGS_referenceStateMap & in_mInitialStateMap,
                                                              const GGS_referenceStateMap & in_mReferenceStateMap,
                                                              const GGS_lstringlist & in_mObjectList
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScopeKind, in_mFirstBranch, in_mInitialStateMap, in_mReferenceStateMap, in_mObjectList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_scopeStack::cCollectionElement_scopeStack (const GGS_scopeStack_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mScopeKind, inElement.mProperty_mFirstBranch, inElement.mProperty_mInitialStateMap, inElement.mProperty_mReferenceStateMap, inElement.mProperty_mObjectList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_scopeStack::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_scopeStack::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_scopeStack (mObject.mProperty_mScopeKind, mObject.mProperty_mFirstBranch, mObject.mProperty_mInitialStateMap, mObject.mProperty_mReferenceStateMap, mObject.mProperty_mObjectList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @scopeStack
//--------------------------------------------------------------------------------------------------

GGS_scopeStack::GGS_scopeStack (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack::GGS_scopeStack (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    const GGS_scopeStack_2E_element element (p->mObject.mProperty_mScopeKind, p->mObject.mProperty_mFirstBranch, p->mObject.mProperty_mInitialStateMap, p->mObject.mProperty_mReferenceStateMap, p->mObject.mProperty_mObjectList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GGS_scopeKind & in_mScopeKind,
                                                const GGS_bool & in_mFirstBranch,
                                                const GGS_referenceStateMap & in_mInitialStateMap,
                                                const GGS_referenceStateMap & in_mReferenceStateMap,
                                                const GGS_lstringlist & in_mObjectList
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = nullptr ;
  macroMyNew (p, cCollectionElement_scopeStack (in_mScopeKind, in_mFirstBranch, in_mInitialStateMap, in_mReferenceStateMap, in_mObjectList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_scopeStack::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_scopeStack::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mScopeKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mScopeKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFirstBranch:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFirstBranch.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInitialStateMap:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInitialStateMap.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mReferenceStateMap:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mReferenceStateMap.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mObjectList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mObjectList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_scopeStack result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::plusPlusAssignOperation (const GGS_scopeStack_2E_element & inValue
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::class_func_listWithValue (const GGS_scopeKind & inOperand0,
                                                         const GGS_bool & inOperand1,
                                                         const GGS_referenceStateMap & inOperand2,
                                                         const GGS_referenceStateMap & inOperand3,
                                                         const GGS_lstringlist & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  const GGS_scopeStack_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_scopeStack result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::addAssignOperation (const GGS_scopeKind & inOperand0,
                                         const GGS_bool & inOperand1,
                                         const GGS_referenceStateMap & inOperand2,
                                         const GGS_referenceStateMap & inOperand3,
                                         const GGS_lstringlist & inOperand4
                                         COMMA_LOCATION_ARGS) {
  const GGS_scopeStack_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_append (const GGS_scopeKind inOperand0,
                                    const GGS_bool inOperand1,
                                    const GGS_referenceStateMap inOperand2,
                                    const GGS_referenceStateMap inOperand3,
                                    const GGS_lstringlist inOperand4,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  const GGS_scopeStack_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_insertAtIndex (const GGS_scopeKind inOperand0,
                                           const GGS_bool inOperand1,
                                           const GGS_referenceStateMap inOperand2,
                                           const GGS_referenceStateMap inOperand3,
                                           const GGS_lstringlist inOperand4,
                                           const GGS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_scopeStack_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_removeAtIndex (GGS_scopeKind & outOperand0,
                                           GGS_bool & outOperand1,
                                           GGS_referenceStateMap & outOperand2,
                                           GGS_referenceStateMap & outOperand3,
                                           GGS_lstringlist & outOperand4,
                                           const GGS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mScopeKind ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFirstBranch ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mInitialStateMap ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mReferenceStateMap ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mObjectList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_popFirst (GGS_scopeKind & outOperand0,
                                      GGS_bool & outOperand1,
                                      GGS_referenceStateMap & outOperand2,
                                      GGS_referenceStateMap & outOperand3,
                                      GGS_lstringlist & outOperand4,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mScopeKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFirstBranch ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialStateMap ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mReferenceStateMap ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mObjectList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_popLast (GGS_scopeKind & outOperand0,
                                     GGS_bool & outOperand1,
                                     GGS_referenceStateMap & outOperand2,
                                     GGS_referenceStateMap & outOperand3,
                                     GGS_lstringlist & outOperand4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mScopeKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFirstBranch ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialStateMap ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mReferenceStateMap ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mObjectList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::method_first (GGS_scopeKind & outOperand0,
                                   GGS_bool & outOperand1,
                                   GGS_referenceStateMap & outOperand2,
                                   GGS_referenceStateMap & outOperand3,
                                   GGS_lstringlist & outOperand4,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mScopeKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFirstBranch ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialStateMap ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mReferenceStateMap ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mObjectList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::method_last (GGS_scopeKind & outOperand0,
                                  GGS_bool & outOperand1,
                                  GGS_referenceStateMap & outOperand2,
                                  GGS_referenceStateMap & outOperand3,
                                  GGS_lstringlist & outOperand4,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mScopeKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFirstBranch ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialStateMap ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mReferenceStateMap ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mObjectList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::add_operation (const GGS_scopeStack & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_scopeStack result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::plusAssignOperation (const GGS_scopeStack inList,
                                          Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_setMScopeKindAtIndex (GGS_scopeKind inOperand,
                                                  GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mScopeKind = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_scopeKind GGS_scopeStack::getter_mScopeKindAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_scopeKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mScopeKind ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_setMFirstBranchAtIndex (GGS_bool inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFirstBranch = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_scopeStack::getter_mFirstBranchAtIndex (const GGS_uint & inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFirstBranch ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_setMInitialStateMapAtIndex (GGS_referenceStateMap inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialStateMap = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_referenceStateMap GGS_scopeStack::getter_mInitialStateMapAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_referenceStateMap result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialStateMap ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_setMReferenceStateMapAtIndex (GGS_referenceStateMap inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mReferenceStateMap = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_referenceStateMap GGS_scopeStack::getter_mReferenceStateMapAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_referenceStateMap result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mReferenceStateMap ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_setMObjectListAtIndex (GGS_lstringlist inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mObjectList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstringlist GGS_scopeStack::getter_mObjectListAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mObjectList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @scopeStack
//--------------------------------------------------------------------------------------------------

DownEnumerator_scopeStack::DownEnumerator_scopeStack (const GGS_scopeStack & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element DownEnumerator_scopeStack::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeKind DownEnumerator_scopeStack::current_mScopeKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mScopeKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_scopeStack::current_mFirstBranch (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFirstBranch ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap DownEnumerator_scopeStack::current_mInitialStateMap (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialStateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap DownEnumerator_scopeStack::current_mReferenceStateMap (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReferenceStateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_scopeStack::current_mObjectList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObjectList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @scopeStack
//--------------------------------------------------------------------------------------------------

UpEnumerator_scopeStack::UpEnumerator_scopeStack (const GGS_scopeStack & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element UpEnumerator_scopeStack::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeKind UpEnumerator_scopeStack::current_mScopeKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mScopeKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_scopeStack::current_mFirstBranch (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFirstBranch ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap UpEnumerator_scopeStack::current_mInitialStateMap (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialStateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap UpEnumerator_scopeStack::current_mReferenceStateMap (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReferenceStateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_scopeStack::current_mObjectList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObjectList ;
}




//--------------------------------------------------------------------------------------------------
//     @scopeStack generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeStack ("scopeStack",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_scopeStack::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_scopeStack::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_scopeStack (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_scopeStack result ;
  const GGS_scopeStack * p = (const GGS_scopeStack *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_scopeStack *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeStack", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum LValueOperandAST
//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST::GGS_LValueOperandAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST GGS_LValueOperandAST::class_func_noOperand (UNUSED_LOCATION_ARGS) {
  GGS_LValueOperandAST result ;
  result.mEnum = Enumeration::enum_noOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST GGS_LValueOperandAST::class_func_property (const GGS_lstring & inAssociatedValue0,
                                                                const GGS_LValueOperandAST & inAssociatedValue1
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueOperandAST result ;
  result.mEnum = Enumeration::enum_property ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_LValueOperandAST_2E_property (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST GGS_LValueOperandAST::class_func_arrayAccess (const GGS_expressionAST & inAssociatedValue0,
                                                                   const GGS_location & inAssociatedValue1,
                                                                   const GGS_bool & inAssociatedValue2,
                                                                   const GGS_LValueOperandAST & inAssociatedValue3
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueOperandAST result ;
  result.mEnum = Enumeration::enum_arrayAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_LValueOperandAST_2E_arrayAccess (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST::method_extractProperty (GGS_lstring & outAssociatedValue_name,
                                                   GGS_LValueOperandAST & outAssociatedValue_next,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_property) {
    outAssociatedValue_name.drop () ;
    outAssociatedValue_next.drop () ;
    String s ;
    s.appendCString ("method @LValueOperandAST.property invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_LValueOperandAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
    outAssociatedValue_next = ptr->mProperty_next ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST::method_extractArrayAccess (GGS_expressionAST & outAssociatedValue_index,
                                                      GGS_location & outAssociatedValue_endOfIndex,
                                                      GGS_bool & outAssociatedValue_checkIndexExpression,
                                                      GGS_LValueOperandAST & outAssociatedValue_next,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayAccess) {
    outAssociatedValue_index.drop () ;
    outAssociatedValue_endOfIndex.drop () ;
    outAssociatedValue_checkIndexExpression.drop () ;
    outAssociatedValue_next.drop () ;
    String s ;
    s.appendCString ("method @LValueOperandAST.arrayAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_LValueOperandAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
    outAssociatedValue_next = ptr->mProperty_next ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property_3F_ GGS_LValueOperandAST::getter_getProperty (UNUSED_LOCATION_ARGS) const {
  GGS_LValueOperandAST_2E_property_3F_ result ;
  if (mEnum == Enumeration::enum_property) {
    const auto ptr = (const GGS_LValueOperandAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_LValueOperandAST_2E_property (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST::getAssociatedValuesFor_property (GGS_lstring & out_name,
                                                            GGS_LValueOperandAST & out_next) const {
  const auto ptr = (const GGS_LValueOperandAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
  out_next = ptr->mProperty_next ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess_3F_ GGS_LValueOperandAST::getter_getArrayAccess (UNUSED_LOCATION_ARGS) const {
  GGS_LValueOperandAST_2E_arrayAccess_3F_ result ;
  if (mEnum == Enumeration::enum_arrayAccess) {
    const auto ptr = (const GGS_LValueOperandAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_LValueOperandAST_2E_arrayAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST::getAssociatedValuesFor_arrayAccess (GGS_expressionAST & out_index,
                                                               GGS_location & out_endOfIndex,
                                                               GGS_bool & out_checkIndexExpression,
                                                               GGS_LValueOperandAST & out_next) const {
  const auto ptr = (const GGS_LValueOperandAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_index = ptr->mProperty_index ;
  out_endOfIndex = ptr->mProperty_endOfIndex ;
  out_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  out_next = ptr->mProperty_next ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_LValueOperandAST [4] = {
  "(not built)",
  "noOperand",
  "property",
  "arrayAccess"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_LValueOperandAST::getter_isNoOperand (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noOperand == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_LValueOperandAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_property == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_LValueOperandAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @LValueOperandAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_LValueOperandAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_LValueOperandAST::objectCompare (const GGS_LValueOperandAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_property: {
        const auto left = (GGS_LValueOperandAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_LValueOperandAST_2E_property *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_arrayAccess: {
        const auto left = (GGS_LValueOperandAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_LValueOperandAST_2E_arrayAccess *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @LValueOperandAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST ("LValueOperandAST",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_LValueOperandAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueOperandAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_LValueOperandAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_LValueOperandAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST GGS_LValueOperandAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_LValueOperandAST result ;
  const GGS_LValueOperandAST * p = (const GGS_LValueOperandAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_LValueOperandAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueOperandAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum valuedObjectState
//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState::GGS_valuedObjectState (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_valuedObjectState::class_func_noValue (UNUSED_LOCATION_ARGS) {
  GGS_valuedObjectState result ;
  result.mEnum = Enumeration::enum_noValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_valuedObjectState::class_func_hasUnreadValue (UNUSED_LOCATION_ARGS) {
  GGS_valuedObjectState result ;
  result.mEnum = Enumeration::enum_hasUnreadValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_valuedObjectState::class_func_hasReadValue (UNUSED_LOCATION_ARGS) {
  GGS_valuedObjectState result ;
  result.mEnum = Enumeration::enum_hasReadValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_valuedObjectState [4] = {
  "(not built)",
  "noValue",
  "hasUnreadValue",
  "hasReadValue"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObjectState::getter_isNoValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObjectState::getter_isHasUnreadValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasUnreadValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObjectState::getter_isHasReadValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasReadValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObjectState::description (String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @valuedObjectState: ") ;
  ioString.appendCString (gEnumNameArrayFor_valuedObjectState [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_valuedObjectState::objectCompare (const GGS_valuedObjectState & inOperand) const {
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
//     @valuedObjectState generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObjectState ("valuedObjectState",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_valuedObjectState::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObjectState ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObjectState::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObjectState (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_valuedObjectState::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_valuedObjectState result ;
  const GGS_valuedObjectState * p = (const GGS_valuedObjectState *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObjectState *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObjectState", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum valuedObject
//--------------------------------------------------------------------------------------------------

GGS_valuedObject::GGS_valuedObject (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_driver (const GGS_omnibusType & inAssociatedValue0,
                                                      const GGS_bool & inAssociatedValue1
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_driver ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_driver (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_task (const GGS_omnibusType & inAssociatedValue0
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_task ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_task (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_globalConstant (const GGS_objectIR & inAssociatedValue0
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_globalConstant ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_globalConstant (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_localConstant (const GGS_omnibusType & inAssociatedValue0,
                                                             const GGS_lstring & inAssociatedValue1,
                                                             const GGS_bool & inAssociatedValue2
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_localConstant ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_localConstant (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_localVariable (const GGS_omnibusType & inAssociatedValue0,
                                                             const GGS_lstring & inAssociatedValue1
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_localVariable ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_localVariable (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_globalSyncInstance (const GGS_omnibusType & inAssociatedValue0,
                                                                  const GGS_lstring & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_globalSyncInstance ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_globalSyncInstance (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractDriver (GGS_omnibusType & outAssociatedValue_type,
                                             GGS_bool & outAssociatedValue_instancied,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_driver) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_instancied.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.driver invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_driver *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_instancied = ptr->mProperty_instancied ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractTask (GGS_omnibusType & outAssociatedValue_type,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_task) {
    outAssociatedValue_type.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.task invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_task *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractGlobalConstant (GGS_objectIR & outAssociatedValue_objectIR,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_globalConstant) {
    outAssociatedValue_objectIR.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.globalConstant invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_globalConstant *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_objectIR = ptr->mProperty_objectIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractLocalConstant (GGS_omnibusType & outAssociatedValue_type,
                                                    GGS_lstring & outAssociatedValue_omnibusName,
                                                    GGS_bool & outAssociatedValue_isFormalInputArgument,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_localConstant) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_omnibusName.drop () ;
    outAssociatedValue_isFormalInputArgument.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.localConstant invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_localConstant *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_omnibusName = ptr->mProperty_omnibusName ;
    outAssociatedValue_isFormalInputArgument = ptr->mProperty_isFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractLocalVariable (GGS_omnibusType & outAssociatedValue_type,
                                                    GGS_lstring & outAssociatedValue_omnibusName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_localVariable) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_omnibusName.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.localVariable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_localVariable *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_omnibusName = ptr->mProperty_omnibusName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractGlobalSyncInstance (GGS_omnibusType & outAssociatedValue_type,
                                                         GGS_lstring & outAssociatedValue_omnibusName,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_globalSyncInstance) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_omnibusName.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.globalSyncInstance invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_globalSyncInstance *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_omnibusName = ptr->mProperty_omnibusName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver_3F_ GGS_valuedObject::getter_getDriver (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_driver_3F_ result ;
  if (mEnum == Enumeration::enum_driver) {
    const auto ptr = (const GGS_valuedObject_2E_driver *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_driver (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_driver (GGS_omnibusType & out_type,
                                                      GGS_bool & out_instancied) const {
  const auto ptr = (const GGS_valuedObject_2E_driver *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_instancied = ptr->mProperty_instancied ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task_3F_ GGS_valuedObject::getter_getTask (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_task_3F_ result ;
  if (mEnum == Enumeration::enum_task) {
    const auto ptr = (const GGS_valuedObject_2E_task *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_task (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_task (GGS_omnibusType & out_type) const {
  const auto ptr = (const GGS_valuedObject_2E_task *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant_3F_ GGS_valuedObject::getter_getGlobalConstant (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_globalConstant_3F_ result ;
  if (mEnum == Enumeration::enum_globalConstant) {
    const auto ptr = (const GGS_valuedObject_2E_globalConstant *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_globalConstant (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_globalConstant (GGS_objectIR & out_objectIR) const {
  const auto ptr = (const GGS_valuedObject_2E_globalConstant *) mAssociatedValues.associatedValuesPointer () ;
  out_objectIR = ptr->mProperty_objectIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant_3F_ GGS_valuedObject::getter_getLocalConstant (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_localConstant_3F_ result ;
  if (mEnum == Enumeration::enum_localConstant) {
    const auto ptr = (const GGS_valuedObject_2E_localConstant *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_localConstant (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_localConstant (GGS_omnibusType & out_type,
                                                             GGS_lstring & out_omnibusName,
                                                             GGS_bool & out_isFormalInputArgument) const {
  const auto ptr = (const GGS_valuedObject_2E_localConstant *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_omnibusName = ptr->mProperty_omnibusName ;
  out_isFormalInputArgument = ptr->mProperty_isFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable_3F_ GGS_valuedObject::getter_getLocalVariable (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_localVariable_3F_ result ;
  if (mEnum == Enumeration::enum_localVariable) {
    const auto ptr = (const GGS_valuedObject_2E_localVariable *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_localVariable (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_localVariable (GGS_omnibusType & out_type,
                                                             GGS_lstring & out_omnibusName) const {
  const auto ptr = (const GGS_valuedObject_2E_localVariable *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_omnibusName = ptr->mProperty_omnibusName ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance_3F_ GGS_valuedObject::getter_getGlobalSyncInstance (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_globalSyncInstance_3F_ result ;
  if (mEnum == Enumeration::enum_globalSyncInstance) {
    const auto ptr = (const GGS_valuedObject_2E_globalSyncInstance *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_globalSyncInstance (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_globalSyncInstance (GGS_omnibusType & out_type,
                                                                  GGS_lstring & out_omnibusName) const {
  const auto ptr = (const GGS_valuedObject_2E_globalSyncInstance *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_omnibusName = ptr->mProperty_omnibusName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_valuedObject [7] = {
  "(not built)",
  "driver",
  "task",
  "globalConstant",
  "localConstant",
  "localVariable",
  "globalSyncInstance"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isDriver (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_driver == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isTask (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_task == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isGlobalConstant (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_globalConstant == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isLocalConstant (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_localConstant == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isLocalVariable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_localVariable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isGlobalSyncInstance (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_globalSyncInstance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @valuedObject: ") ;
  ioString.appendCString (gEnumNameArrayFor_valuedObject [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @valuedObject generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject ("valuedObject",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_valuedObject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_valuedObject result ;
  const GGS_valuedObject * p = (const GGS_valuedObject *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum scopeKind
//--------------------------------------------------------------------------------------------------

GGS_scopeKind::GGS_scopeKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_scopeKind GGS_scopeKind::class_func_selectScope (UNUSED_LOCATION_ARGS) {
  GGS_scopeKind result ;
  result.mEnum = Enumeration::enum_selectScope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeKind GGS_scopeKind::class_func_repeatScope (UNUSED_LOCATION_ARGS) {
  GGS_scopeKind result ;
  result.mEnum = Enumeration::enum_repeatScope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_scopeKind [3] = {
  "(not built)",
  "selectScope",
  "repeatScope"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_scopeKind::getter_isSelectScope (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selectScope == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_scopeKind::getter_isRepeatScope (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_repeatScope == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeKind::description (String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @scopeKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_scopeKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @scopeKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeKind ("scopeKind",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_scopeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_scopeKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_scopeKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeKind GGS_scopeKind::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_scopeKind result ;
  const GGS_scopeKind * p = (const GGS_scopeKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_scopeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @referenceStateMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap::GGS_referenceStateMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap::~ GGS_referenceStateMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap::GGS_referenceStateMap (const GGS_referenceStateMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap & GGS_referenceStateMap::operator = (const GGS_referenceStateMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_referenceStateMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_referenceStateMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_referenceStateMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_referenceStateMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_referenceStateMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_referenceStateMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_referenceStateMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_referenceStateMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_referenceStateMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::performInsert (const GGS_referenceStateMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_referenceStateMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>
GGS_referenceStateMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_referenceStateMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>>
GGS_referenceStateMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_referenceStateMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element_3F_ GGS_referenceStateMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_referenceStateMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_referenceStateMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_referenceStateMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mState = info->mProperty_mState ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::class_func_mapWithMapToOverride (const GGS_referenceStateMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_referenceStateMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_referenceStateMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_referenceStateMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_valuedObjectState inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_referenceStateMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_valuedObjectState & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "INTERNAL ERROR" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mState ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_referenceStateMap::getter_mStateForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_valuedObjectState result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mState ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::setter_setMStateForKey (GGS_valuedObjectState inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_referenceStateMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mState = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_referenceStateMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mState:") ;
    inArray (i COMMA_HERE)->mProperty_mState.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> array = sortedInfoArray () ;
    GGS_referenceStateMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_referenceStateMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_referenceStateMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @referenceStateMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_referenceStateMap::DownEnumerator_referenceStateMap (const GGS_referenceStateMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element DownEnumerator_referenceStateMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_referenceStateMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState DownEnumerator_referenceStateMap::current_mState (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mState ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @referenceStateMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_referenceStateMap::UpEnumerator_referenceStateMap (const GGS_referenceStateMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element UpEnumerator_referenceStateMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_referenceStateMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState UpEnumerator_referenceStateMap::current_mState (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mState ;
}


//--------------------------------------------------------------------------------------------------
//     @referenceStateMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_referenceStateMap ("referenceStateMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_referenceStateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_referenceStateMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_referenceStateMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_referenceStateMap result ;
  const GGS_referenceStateMap * p = (const GGS_referenceStateMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_referenceStateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@valuedObjectState string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_valuedObjectState & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_valuedObjectState temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_valuedObjectState::Enumeration::invalid:
    break ;
  case GGS_valuedObjectState::Enumeration::enum_noValue:
    {
      result_result = GGS_string ("no value") ;
    }
    break ;
  case GGS_valuedObjectState::Enumeration::enum_hasUnreadValue:
    {
      result_result = GGS_string ("unread value") ;
    }
    break ;
  case GGS_valuedObjectState::Enumeration::enum_hasReadValue:
    {
      result_result = GGS_string ("read value") ;
    }
    break ;
  }
//---
  return result_result ;
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
//     @llvmGenerationInstructionElement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ("llvmGenerationInstructionElement",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElement::staticTypeDescriptor (void) const {
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
//Class for element of '@llvmGenerationInstructionElementList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_llvmGenerationInstructionElementList : public cCollectionElement {
  public: GGS_llvmGenerationInstructionElementList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElement & in_mElement
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @llvmGenerationInstructionElementList
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList::GGS_llvmGenerationInstructionElementList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList::GGS_llvmGenerationInstructionElementList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    const GGS_llvmGenerationInstructionElementList_2E_element element (p->mObject.mProperty_mElement) ;
    mArray.appendObject (element) ;
  }
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

GGS_uint GGS_llvmGenerationInstructionElementList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_llvmGenerationInstructionElementList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mElement:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mElement.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElementList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::plusPlusAssignOperation (const GGS_llvmGenerationInstructionElementList_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::class_func_listWithValue (const GGS_llvmGenerationInstructionElement & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionElementList_2E_element element (inOperand0) ;
  GGS_llvmGenerationInstructionElementList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::addAssignOperation (const GGS_llvmGenerationInstructionElement & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionElementList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_append (const GGS_llvmGenerationInstructionElement inOperand0,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionElementList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_insertAtIndex (const GGS_llvmGenerationInstructionElement inOperand0,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionElementList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_removeAtIndex (GGS_llvmGenerationInstructionElement & outOperand0,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mElement ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_popFirst (GGS_llvmGenerationInstructionElement & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_popLast (GGS_llvmGenerationInstructionElement & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::method_first (GGS_llvmGenerationInstructionElement & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::method_last (GGS_llvmGenerationInstructionElement & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::add_operation (const GGS_llvmGenerationInstructionElementList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::plusAssignOperation (const GGS_llvmGenerationInstructionElementList inList,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_setMElementAtIndex (GGS_llvmGenerationInstructionElement inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mElement = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElementList::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElement result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mElement ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @llvmGenerationInstructionElementList
//--------------------------------------------------------------------------------------------------

DownEnumerator_llvmGenerationInstructionElementList::DownEnumerator_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element DownEnumerator_llvmGenerationInstructionElementList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement DownEnumerator_llvmGenerationInstructionElementList::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @llvmGenerationInstructionElementList
//--------------------------------------------------------------------------------------------------

UpEnumerator_llvmGenerationInstructionElementList::UpEnumerator_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element UpEnumerator_llvmGenerationInstructionElementList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement UpEnumerator_llvmGenerationInstructionElementList::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstructionElementList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ("llvmGenerationInstructionElementList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElementList::staticTypeDescriptor (void) const {
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


void cPtr_abstractLLVMInstruction::
abstractLLVMInstruction_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction::GGS_abstractLLVMInstruction (const cPtr_abstractLLVMInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLLVMInstruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractLLVMInstruction class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractLLVMInstruction::cPtr_abstractLLVMInstruction (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractLLVMInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction ("abstractLLVMInstruction",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractLLVMInstruction::staticTypeDescriptor (void) const {
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

GGS_abstractLLVMInstruction GGS_abstractLLVMInstruction_2E_weak::unwrappedValue (void) const {
  GGS_abstractLLVMInstruction result ;
  if (isValid ()) {
    const cPtr_abstractLLVMInstruction * p = (cPtr_abstractLLVMInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractLLVMInstruction (p) ;
    }
  }
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
//     @abstractLLVMInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak ("abstractLLVMInstruction.weak",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractLLVMInstruction_2E_weak::staticTypeDescriptor (void) const {
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

cPtr_llvmGenerationInstruction::cPtr_llvmGenerationInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (inCompiler COMMA_THERE),
mProperty_mGenerationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmGenerationInstruction::cPtr_llvmGenerationInstruction (const GGS_llvmGenerationInstructionElementList & in_mGenerationList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (inCompiler COMMA_THERE),
mProperty_mGenerationList () {
  mProperty_mGenerationList = in_mGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_llvmGenerationInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction ;
}

void cPtr_llvmGenerationInstruction::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmGenerationInstruction:") ;
  mProperty_mGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmGenerationInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmGenerationInstruction (mProperty_mGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmGenerationInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mGenerationList.printNonNullClassInstanceProperties ("mGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction ("llvmGenerationInstruction",
                                                                              & kTypeDescriptor_GALGAS_abstractLLVMInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstruction::staticTypeDescriptor (void) const {
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

GGS_llvmGenerationInstruction GGS_llvmGenerationInstruction_2E_weak::unwrappedValue (void) const {
  GGS_llvmGenerationInstruction result ;
  if (isValid ()) {
    const cPtr_llvmGenerationInstruction * p = (cPtr_llvmGenerationInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmGenerationInstruction (p) ;
    }
  }
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
//     @llvmGenerationInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction_2E_weak ("llvmGenerationInstruction.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstruction_2E_weak::staticTypeDescriptor (void) const {
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

GGS_llvmVarInstruction GGS_llvmVarInstruction_2E_weak::unwrappedValue (void) const {
  GGS_llvmVarInstruction result ;
  if (isValid ()) {
    const cPtr_llvmVarInstruction * p = (cPtr_llvmVarInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmVarInstruction (p) ;
    }
  }
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
//     @llvmVarInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmVarInstruction_2E_weak ("llvmVarInstruction.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmVarInstruction_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@llvmGenerationInstructionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_llvmGenerationInstructionList : public cCollectionElement {
  public: GGS_llvmGenerationInstructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_llvmGenerationInstructionList (const GGS_abstractLLVMInstruction & in_mInstruction
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmGenerationInstructionList (const GGS_llvmGenerationInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmGenerationInstructionList::cCollectionElement_llvmGenerationInstructionList (const GGS_abstractLLVMInstruction & in_mInstruction
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmGenerationInstructionList::cCollectionElement_llvmGenerationInstructionList (const GGS_llvmGenerationInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_llvmGenerationInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_llvmGenerationInstructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_llvmGenerationInstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @llvmGenerationInstructionList
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList::GGS_llvmGenerationInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList::GGS_llvmGenerationInstructionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_llvmGenerationInstructionList * p = (cCollectionElement_llvmGenerationInstructionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionList) ;
    const GGS_llvmGenerationInstructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_abstractLLVMInstruction & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmGenerationInstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmGenerationInstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_llvmGenerationInstructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_llvmGenerationInstructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::plusPlusAssignOperation (const GGS_llvmGenerationInstructionList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::class_func_listWithValue (const GGS_abstractLLVMInstruction & inOperand0
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionList_2E_element element (inOperand0) ;
  GGS_llvmGenerationInstructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::addAssignOperation (const GGS_abstractLLVMInstruction & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::setter_append (const GGS_abstractLLVMInstruction inOperand0,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::setter_insertAtIndex (const GGS_abstractLLVMInstruction inOperand0,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::setter_removeAtIndex (GGS_abstractLLVMInstruction & outOperand0,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::setter_popFirst (GGS_abstractLLVMInstruction & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::setter_popLast (GGS_abstractLLVMInstruction & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::method_first (GGS_abstractLLVMInstruction & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::method_last (GGS_abstractLLVMInstruction & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::add_operation (const GGS_llvmGenerationInstructionList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::plusAssignOperation (const GGS_llvmGenerationInstructionList inList,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::setter_setMInstructionAtIndex (GGS_abstractLLVMInstruction inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_abstractLLVMInstruction GGS_llvmGenerationInstructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_abstractLLVMInstruction result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @llvmGenerationInstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_llvmGenerationInstructionList::DownEnumerator_llvmGenerationInstructionList (const GGS_llvmGenerationInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList_2E_element DownEnumerator_llvmGenerationInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction DownEnumerator_llvmGenerationInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @llvmGenerationInstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_llvmGenerationInstructionList::UpEnumerator_llvmGenerationInstructionList (const GGS_llvmGenerationInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList_2E_element UpEnumerator_llvmGenerationInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction UpEnumerator_llvmGenerationInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList ("llvmGenerationInstructionList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList result ;
  const GGS_llvmGenerationInstructionList * p = (const GGS_llvmGenerationInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  var_elements_1813.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string ("ret ")  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 44))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 44)) ;
  var_elements_1813.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (constinArgument_inReturnType  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 45))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 45)) ;
  var_elements_1813.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 46))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 46)) ;
  var_elements_1813.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (constinArgument_inReturnValue  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 47))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 47)) ;
  ioObject.addAssignOperation (GGS_llvmGenerationInstruction::init_21_ (var_elements_1813, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 48)) ;
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
  GGS_ctCheckMap var_currentMap_4240 = constinArgument_inMap ;
  const GGS_llvmGenerationInstructionList temp_0 = inObject ;
  UpEnumerator_llvmGenerationInstructionList enumerator_4266 (temp_0) ;
  while (enumerator_4266.hasCurrentObject ()) {
    callExtensionMethod_checkInstructionList ((cPtr_abstractLLVMInstruction *) enumerator_4266.current_mInstruction (HERE).ptr (), var_currentMap_4240, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 109)) ;
    enumerator_4266.gotoNextObject () ;
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
//  Map type @assignmentGenerationVarMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap::GGS_assignmentGenerationVarMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap::~ GGS_assignmentGenerationVarMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap::GGS_assignmentGenerationVarMap (const GGS_assignmentGenerationVarMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap & GGS_assignmentGenerationVarMap::operator = (const GGS_assignmentGenerationVarMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_assignmentGenerationVarMap::getter_hasKey (const GGS_string & inKey
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_assignmentGenerationVarMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                               const GGS_uint & inLevel
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_assignmentGenerationVarMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_assignmentGenerationVarMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_assignmentGenerationVarMap::getter_locationForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_assignmentGenerationVarMap::getter_keyList (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_assignmentGenerationVarMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_assignmentGenerationVarMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::performInsert (const GGS_assignmentGenerationVarMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_assignmentGenerationVarMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>
GGS_assignmentGenerationVarMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_assignmentGenerationVarMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>>
GGS_assignmentGenerationVarMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_assignmentGenerationVarMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_ GGS_assignmentGenerationVarMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_assignmentGenerationVarMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_assignmentGenerationVarMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_assignmentGenerationVarMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mValue = info->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::class_func_mapWithMapToOverride (const GGS_assignmentGenerationVarMap & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_assignmentGenerationVarMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_assignmentGenerationVarMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::setter_insertKey (GGS_lstring inLKey,
                                                       GGS_string inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_assignmentGenerationVarMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::method_searchKey (GGS_lstring inLKey,
                                                       GGS_string & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "internal error" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_assignmentGenerationVarMap::getter_mValueForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::setter_setMValueForKey (GGS_string inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_assignmentGenerationVarMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_assignmentGenerationVarMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mValue:") ;
    inArray (i COMMA_HERE)->mProperty_mValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>> array = sortedInfoArray () ;
    GGS_assignmentGenerationVarMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_assignmentGenerationVarMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_assignmentGenerationVarMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @assignmentGenerationVarMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_assignmentGenerationVarMap::DownEnumerator_assignmentGenerationVarMap (const GGS_assignmentGenerationVarMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element DownEnumerator_assignmentGenerationVarMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_assignmentGenerationVarMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_assignmentGenerationVarMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @assignmentGenerationVarMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_assignmentGenerationVarMap::UpEnumerator_assignmentGenerationVarMap (const GGS_assignmentGenerationVarMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element UpEnumerator_assignmentGenerationVarMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_assignmentGenerationVarMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_assignmentGenerationVarMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}


//--------------------------------------------------------------------------------------------------
//     @assignmentGenerationVarMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap ("assignmentGenerationVarMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentGenerationVarMap::staticTypeDescriptor (void) const {
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
  GGS_assignmentGenerationVarMap var_varMap_5993 = constinArgument_inVarMap ;
  GGS_assignmentGenerationVarMap var_typeMap_6017 = constinArgument_inTypeMap ;
  const GGS_llvmGenerationInstructionList temp_0 = inObject ;
  UpEnumerator_llvmGenerationInstructionList enumerator_6044 (temp_0) ;
  while (enumerator_6044.hasCurrentObject ()) {
    callExtensionMethod_generateIRCode ((cPtr_abstractLLVMInstruction *) enumerator_6044.current_mInstruction (HERE).ptr (), var_varMap_5993, var_typeMap_6017, ioArgument_ioInstructionAsStringListIR, ioArgument_ioTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 159)) ;
    enumerator_6044.gotoNextObject () ;
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
// @literalStringDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringDeclarationAST::objectCompare (const GGS_literalStringDeclarationAST & inOperand) const {
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

GGS_literalStringDeclarationAST::GGS_literalStringDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalStringDeclarationAST GGS_literalStringDeclarationAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalStringDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_literalStringDeclarationAST (inCompiler COMMA_THERE)) ;
  object->literalStringDeclarationAST_init (inCompiler) ;
  const GGS_literalStringDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringDeclarationAST::
literalStringDeclarationAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST::GGS_literalStringDeclarationAST (const cPtr_literalStringDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringDeclarationAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_literalStringDeclarationAST::cPtr_literalStringDeclarationAST (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalStringDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST ;
}

void cPtr_literalStringDeclarationAST::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@literalStringDeclarationAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringDeclarationAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalStringDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST ("literalStringDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST GGS_literalStringDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_literalStringDeclarationAST result ;
  const GGS_literalStringDeclarationAST * p = (const GGS_literalStringDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringDeclarationAST_2E_weak::objectCompare (const GGS_literalStringDeclarationAST_2E_weak & inOperand) const {
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

GGS_literalStringDeclarationAST_2E_weak::GGS_literalStringDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST_2E_weak & GGS_literalStringDeclarationAST_2E_weak::operator = (const GGS_literalStringDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST_2E_weak::GGS_literalStringDeclarationAST_2E_weak (const GGS_literalStringDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST_2E_weak GGS_literalStringDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalStringDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST GGS_literalStringDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_literalStringDeclarationAST result ;
  if (isValid ()) {
    const cPtr_literalStringDeclarationAST * p = (cPtr_literalStringDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalStringDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST GGS_literalStringDeclarationAST_2E_weak::bang_literalStringDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalStringDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringDeclarationAST) ;
      result = GGS_literalStringDeclarationAST ((cPtr_literalStringDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalStringDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST_2E_weak ("literalStringDeclarationAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST_2E_weak GGS_literalStringDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_literalStringDeclarationAST_2E_weak result ;
  const GGS_literalStringDeclarationAST_2E_weak * p = (const GGS_literalStringDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum subscript
//--------------------------------------------------------------------------------------------------

GGS_subscript::GGS_subscript (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_subscript GGS_subscript::class_func_noSubscript (UNUSED_LOCATION_ARGS) {
  GGS_subscript result ;
  result.mEnum = Enumeration::enum_noSubscript ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript GGS_subscript::class_func_staticSubscript (const GGS_omnibusType & inAssociatedValue0,
                                                         const GGS_bigint & inAssociatedValue1
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_subscript result ;
  result.mEnum = Enumeration::enum_staticSubscript ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_subscript_2E_staticSubscript (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript GGS_subscript::class_func_literalString (UNUSED_LOCATION_ARGS) {
  GGS_subscript result ;
  result.mEnum = Enumeration::enum_literalString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript::method_extractStaticSubscript (GGS_omnibusType & outAssociatedValue_elementType,
                                                   GGS_bigint & outAssociatedValue_size,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_staticSubscript) {
    outAssociatedValue_elementType.drop () ;
    outAssociatedValue_size.drop () ;
    String s ;
    s.appendCString ("method @subscript.staticSubscript invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_subscript_2E_staticSubscript *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_elementType = ptr->mProperty_elementType ;
    outAssociatedValue_size = ptr->mProperty_size ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript_3F_ GGS_subscript::getter_getStaticSubscript (UNUSED_LOCATION_ARGS) const {
  GGS_subscript_2E_staticSubscript_3F_ result ;
  if (mEnum == Enumeration::enum_staticSubscript) {
    const auto ptr = (const GGS_subscript_2E_staticSubscript *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_subscript_2E_staticSubscript (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript::getAssociatedValuesFor_staticSubscript (GGS_omnibusType & out_elementType,
                                                            GGS_bigint & out_size) const {
  const auto ptr = (const GGS_subscript_2E_staticSubscript *) mAssociatedValues.associatedValuesPointer () ;
  out_elementType = ptr->mProperty_elementType ;
  out_size = ptr->mProperty_size ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_subscript [4] = {
  "(not built)",
  "noSubscript",
  "staticSubscript",
  "literalString"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_subscript::getter_isNoSubscript (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noSubscript == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_subscript::getter_isStaticSubscript (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_staticSubscript == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_subscript::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_literalString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @subscript: ") ;
  ioString.appendCString (gEnumNameArrayFor_subscript [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @subscript generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscript ("subscript",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscript::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscript ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscript::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscript (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript GGS_subscript::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_subscript result ;
  const GGS_subscript * p = (const GGS_subscript *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscript *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscript", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes::GGS_omnibusTypeAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes::GGS_omnibusTypeAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_omnibusTypeAttributes (0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::class_func_instanciable (UNUSED_LOCATION_ARGS) {
  return GGS_omnibusTypeAttributes (uint64_t (1) << 0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::class_func_copyable (UNUSED_LOCATION_ARGS) {
  return GGS_omnibusTypeAttributes (uint64_t (1) << 1) ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_omnibusTypeAttributes::isValid (void) const {
  return mIsValid ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusTypeAttributes::getter_contains (const GGS_omnibusTypeAttributes & inOperand
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::andAssignOperation (const GGS_omnibusTypeAttributes inOperand,
                                                    class Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::orAssignOperation (const GGS_omnibusTypeAttributes inOperand,
                                                   class Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags |= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::xorAssignOperation (const GGS_omnibusTypeAttributes inOperand,
                                                    class Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags ^= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::minusAssignOperation (const GGS_omnibusTypeAttributes inOperand,
                                                      class Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= ~ inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::operator_or (const GGS_omnibusTypeAttributes & inOperand
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_omnibusTypeAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::operator_and (const GGS_omnibusTypeAttributes & inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_omnibusTypeAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::operator_xor (const GGS_omnibusTypeAttributes & inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_omnibusTypeAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::substract_operation (const GGS_omnibusTypeAttributes & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_omnibusTypeAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_omnibusTypeAttributes result ;
  if (mIsValid) {
    result = GGS_omnibusTypeAttributes (uint64_t (0x3) ^ mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<boolset @omnibusTypeAttributes:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    if ((mFlags & (uint64_t (1) << 0)) != 0) {
      ioString.appendCString (" instanciable") ;
    }
    if ((mFlags & (uint64_t (1) << 1)) != 0) {
      ioString.appendCString (" copyable") ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @omnibusTypeAttributes generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusTypeAttributes ("omnibusTypeAttributes",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusTypeAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusTypeAttributes ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusTypeAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusTypeAttributes (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_omnibusTypeAttributes result ;
  const GGS_omnibusTypeAttributes * p = (const GGS_omnibusTypeAttributes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusTypeAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusTypeAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum typeKind
//--------------------------------------------------------------------------------------------------

GGS_typeKind::GGS_typeKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_void (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_void ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_boolean (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_boolean ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_literalString (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_literalString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_enumeration (const GGS_uint & inAssociatedValue0
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_enumeration ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_enumeration (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_structure (const GGS_propertyList & inAssociatedValue0
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_structure ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_structure (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_syncTool (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_syncTool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_integer (const GGS_bigint & inAssociatedValue0,
                                               const GGS_bigint & inAssociatedValue1,
                                               const GGS_bool & inAssociatedValue2,
                                               const GGS_uint & inAssociatedValue3
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_integer ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_integer (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_compileTimeInteger (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_compileTimeInteger ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_compileTimeBool (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_compileTimeBool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_llvmType (const GGS_bigint & inAssociatedValue0
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_llvmType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_llvmType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_generic (const GGS_genericFormalParameterList & inAssociatedValue0,
                                               const GGS_ctExpressionAST & inAssociatedValue1,
                                               const GGS_llvmStringDefinition & inAssociatedValue2
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_generic ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_generic (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_opaque (const GGS_bigint & inAssociatedValue0
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_opaque ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_opaque (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_staticArrayType (const GGS_omnibusType & inAssociatedValue0,
                                                       const GGS_bigint & inAssociatedValue1
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_staticArrayType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_staticArrayType (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_dynamicArrayType (const GGS_omnibusType & inAssociatedValue0
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_dynamicArrayType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_dynamicArrayType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_function (const GGS_mode & inAssociatedValue0,
                                                const GGS_routineTypedSignature & inAssociatedValue1,
                                                const GGS_unifiedTypeMapEntry & inAssociatedValue2
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_function ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_function (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractEnumeration (GGS_uint & outAssociatedValue_bitCount,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enumeration) {
    outAssociatedValue_bitCount.drop () ;
    String s ;
    s.appendCString ("method @typeKind.enumeration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_enumeration *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_bitCount = ptr->mProperty_bitCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractStructure (GGS_propertyList & outAssociatedValue_propertyList,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_structure) {
    outAssociatedValue_propertyList.drop () ;
    String s ;
    s.appendCString ("method @typeKind.structure invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyList = ptr->mProperty_propertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractInteger (GGS_bigint & outAssociatedValue_min,
                                          GGS_bigint & outAssociatedValue_max,
                                          GGS_bool & outAssociatedValue_unsigned,
                                          GGS_uint & outAssociatedValue_bitCount,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_integer) {
    outAssociatedValue_min.drop () ;
    outAssociatedValue_max.drop () ;
    outAssociatedValue_unsigned.drop () ;
    outAssociatedValue_bitCount.drop () ;
    String s ;
    s.appendCString ("method @typeKind.integer invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_integer *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_min = ptr->mProperty_min ;
    outAssociatedValue_max = ptr->mProperty_max ;
    outAssociatedValue_unsigned = ptr->mProperty_unsigned ;
    outAssociatedValue_bitCount = ptr->mProperty_bitCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractLlvmType (GGS_bigint & outAssociatedValue_bitSize,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_llvmType) {
    outAssociatedValue_bitSize.drop () ;
    String s ;
    s.appendCString ("method @typeKind.llvmType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_llvmType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_bitSize = ptr->mProperty_bitSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractGeneric (GGS_genericFormalParameterList & outAssociatedValue_parameters,
                                          GGS_ctExpressionAST & outAssociatedValue_whereClause,
                                          GGS_llvmStringDefinition & outAssociatedValue_llvmNativeTypeNameExpression,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_generic) {
    outAssociatedValue_parameters.drop () ;
    outAssociatedValue_whereClause.drop () ;
    outAssociatedValue_llvmNativeTypeNameExpression.drop () ;
    String s ;
    s.appendCString ("method @typeKind.generic invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_generic *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_parameters = ptr->mProperty_parameters ;
    outAssociatedValue_whereClause = ptr->mProperty_whereClause ;
    outAssociatedValue_llvmNativeTypeNameExpression = ptr->mProperty_llvmNativeTypeNameExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractOpaque (GGS_bigint & outAssociatedValue_bitCount,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_opaque) {
    outAssociatedValue_bitCount.drop () ;
    String s ;
    s.appendCString ("method @typeKind.opaque invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_opaque *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_bitCount = ptr->mProperty_bitCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractStaticArrayType (GGS_omnibusType & outAssociatedValue_elementType,
                                                  GGS_bigint & outAssociatedValue_size,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_staticArrayType) {
    outAssociatedValue_elementType.drop () ;
    outAssociatedValue_size.drop () ;
    String s ;
    s.appendCString ("method @typeKind.staticArrayType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_staticArrayType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_elementType = ptr->mProperty_elementType ;
    outAssociatedValue_size = ptr->mProperty_size ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractDynamicArrayType (GGS_omnibusType & outAssociatedValue_elementType,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_dynamicArrayType) {
    outAssociatedValue_elementType.drop () ;
    String s ;
    s.appendCString ("method @typeKind.dynamicArrayType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_dynamicArrayType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_elementType = ptr->mProperty_elementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractFunction (GGS_mode & outAssociatedValue_mode,
                                           GGS_routineTypedSignature & outAssociatedValue_signature,
                                           GGS_unifiedTypeMapEntry & outAssociatedValue_returnTypeProxy,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_function) {
    outAssociatedValue_mode.drop () ;
    outAssociatedValue_signature.drop () ;
    outAssociatedValue_returnTypeProxy.drop () ;
    String s ;
    s.appendCString ("method @typeKind.function invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_mode = ptr->mProperty_mode ;
    outAssociatedValue_signature = ptr->mProperty_signature ;
    outAssociatedValue_returnTypeProxy = ptr->mProperty_returnTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration_3F_ GGS_typeKind::getter_getEnumeration (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_enumeration_3F_ result ;
  if (mEnum == Enumeration::enum_enumeration) {
    const auto ptr = (const GGS_typeKind_2E_enumeration *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_enumeration (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_enumeration (GGS_uint & out_bitCount) const {
  const auto ptr = (const GGS_typeKind_2E_enumeration *) mAssociatedValues.associatedValuesPointer () ;
  out_bitCount = ptr->mProperty_bitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure_3F_ GGS_typeKind::getter_getStructure (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_structure_3F_ result ;
  if (mEnum == Enumeration::enum_structure) {
    const auto ptr = (const GGS_typeKind_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_structure (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_structure (GGS_propertyList & out_propertyList) const {
  const auto ptr = (const GGS_typeKind_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyList = ptr->mProperty_propertyList ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer_3F_ GGS_typeKind::getter_getInteger (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_integer_3F_ result ;
  if (mEnum == Enumeration::enum_integer) {
    const auto ptr = (const GGS_typeKind_2E_integer *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_integer (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_integer (GGS_bigint & out_min,
                                                   GGS_bigint & out_max,
                                                   GGS_bool & out_unsigned,
                                                   GGS_uint & out_bitCount) const {
  const auto ptr = (const GGS_typeKind_2E_integer *) mAssociatedValues.associatedValuesPointer () ;
  out_min = ptr->mProperty_min ;
  out_max = ptr->mProperty_max ;
  out_unsigned = ptr->mProperty_unsigned ;
  out_bitCount = ptr->mProperty_bitCount ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType_3F_ GGS_typeKind::getter_getLlvmType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_llvmType_3F_ result ;
  if (mEnum == Enumeration::enum_llvmType) {
    const auto ptr = (const GGS_typeKind_2E_llvmType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_llvmType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_llvmType (GGS_bigint & out_bitSize) const {
  const auto ptr = (const GGS_typeKind_2E_llvmType *) mAssociatedValues.associatedValuesPointer () ;
  out_bitSize = ptr->mProperty_bitSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic_3F_ GGS_typeKind::getter_getGeneric (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_generic_3F_ result ;
  if (mEnum == Enumeration::enum_generic) {
    const auto ptr = (const GGS_typeKind_2E_generic *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_generic (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_generic (GGS_genericFormalParameterList & out_parameters,
                                                   GGS_ctExpressionAST & out_whereClause,
                                                   GGS_llvmStringDefinition & out_llvmNativeTypeNameExpression) const {
  const auto ptr = (const GGS_typeKind_2E_generic *) mAssociatedValues.associatedValuesPointer () ;
  out_parameters = ptr->mProperty_parameters ;
  out_whereClause = ptr->mProperty_whereClause ;
  out_llvmNativeTypeNameExpression = ptr->mProperty_llvmNativeTypeNameExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque_3F_ GGS_typeKind::getter_getOpaque (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_opaque_3F_ result ;
  if (mEnum == Enumeration::enum_opaque) {
    const auto ptr = (const GGS_typeKind_2E_opaque *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_opaque (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_opaque (GGS_bigint & out_bitCount) const {
  const auto ptr = (const GGS_typeKind_2E_opaque *) mAssociatedValues.associatedValuesPointer () ;
  out_bitCount = ptr->mProperty_bitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType_3F_ GGS_typeKind::getter_getStaticArrayType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_staticArrayType_3F_ result ;
  if (mEnum == Enumeration::enum_staticArrayType) {
    const auto ptr = (const GGS_typeKind_2E_staticArrayType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_staticArrayType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_staticArrayType (GGS_omnibusType & out_elementType,
                                                           GGS_bigint & out_size) const {
  const auto ptr = (const GGS_typeKind_2E_staticArrayType *) mAssociatedValues.associatedValuesPointer () ;
  out_elementType = ptr->mProperty_elementType ;
  out_size = ptr->mProperty_size ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType_3F_ GGS_typeKind::getter_getDynamicArrayType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_dynamicArrayType_3F_ result ;
  if (mEnum == Enumeration::enum_dynamicArrayType) {
    const auto ptr = (const GGS_typeKind_2E_dynamicArrayType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_dynamicArrayType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_dynamicArrayType (GGS_omnibusType & out_elementType) const {
  const auto ptr = (const GGS_typeKind_2E_dynamicArrayType *) mAssociatedValues.associatedValuesPointer () ;
  out_elementType = ptr->mProperty_elementType ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function_3F_ GGS_typeKind::getter_getFunction (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_function_3F_ result ;
  if (mEnum == Enumeration::enum_function) {
    const auto ptr = (const GGS_typeKind_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_function (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_function (GGS_mode & out_mode,
                                                    GGS_routineTypedSignature & out_signature,
                                                    GGS_unifiedTypeMapEntry & out_returnTypeProxy) const {
  const auto ptr = (const GGS_typeKind_2E_function *) mAssociatedValues.associatedValuesPointer () ;
  out_mode = ptr->mProperty_mode ;
  out_signature = ptr->mProperty_signature ;
  out_returnTypeProxy = ptr->mProperty_returnTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeKind [16] = {
  "(not built)",
  "void",
  "boolean",
  "literalString",
  "enumeration",
  "structure",
  "syncTool",
  "integer",
  "compileTimeInteger",
  "compileTimeBool",
  "llvmType",
  "generic",
  "opaque",
  "staticArrayType",
  "dynamicArrayType",
  "function"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_void == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_boolean == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_literalString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isEnumeration (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enumeration == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_structure == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isSyncTool (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_syncTool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isInteger (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_integer == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isCompileTimeInteger (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_compileTimeInteger == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isCompileTimeBool (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_compileTimeBool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isLlvmType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_llvmType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isGeneric (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_generic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isOpaque (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_opaque == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isStaticArrayType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_staticArrayType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDynamicArrayType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_dynamicArrayType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind::objectCompare (const GGS_typeKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_enumeration: {
        const auto left = (GGS_typeKind_2E_enumeration *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_enumeration *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_structure: {
        const auto left = (GGS_typeKind_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_structure *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_integer: {
        const auto left = (GGS_typeKind_2E_integer *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_integer *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_llvmType: {
        const auto left = (GGS_typeKind_2E_llvmType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_llvmType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_generic: {
        const auto left = (GGS_typeKind_2E_generic *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_generic *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_opaque: {
        const auto left = (GGS_typeKind_2E_opaque *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_opaque *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_staticArrayType: {
        const auto left = (GGS_typeKind_2E_staticArrayType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_staticArrayType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_dynamicArrayType: {
        const auto left = (GGS_typeKind_2E_dynamicArrayType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_dynamicArrayType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_function: {
        const auto left = (GGS_typeKind_2E_function *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_function *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @typeKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind result ;
  const GGS_typeKind * p = (const GGS_typeKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_omnibusType_2E_weak::objectCompare (const GGS_omnibusType_2E_weak & inOperand) const {
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

GGS_omnibusType_2E_weak::GGS_omnibusType_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType_2E_weak & GGS_omnibusType_2E_weak::operator = (const GGS_omnibusType & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType_2E_weak::GGS_omnibusType_2E_weak (const GGS_omnibusType & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_omnibusType_2E_weak GGS_omnibusType_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_omnibusType_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType_2E_weak::unwrappedValue (void) const {
  GGS_omnibusType result ;
  if (isValid ()) {
    const cPtr_omnibusType * p = (cPtr_omnibusType *) ptr () ;
    if (nullptr != p) {
      result = GGS_omnibusType (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType_2E_weak::bang_omnibusType_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusType) ;
      result = GGS_omnibusType ((cPtr_omnibusType *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @omnibusType.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusType_2E_weak ("omnibusType.weak",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusType_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusType_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusType_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType_2E_weak GGS_omnibusType_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_omnibusType_2E_weak result ;
  const GGS_omnibusType_2E_weak * p = (const GGS_omnibusType_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusType_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusType.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@arcAssignmentList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_arcAssignmentList : public cCollectionElement {
  public: GGS_arcAssignmentList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_arcAssignmentList (const GGS_string & in_mPropertyName,
                                                const GGS_omnibusType & in_mPropertyType,
                                                const GGS_uintlist & in_mPropertyIndexPath
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_arcAssignmentList (const GGS_arcAssignmentList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GGS_string & in_mPropertyName,
                                                                            const GGS_omnibusType & in_mPropertyType,
                                                                            const GGS_uintlist & in_mPropertyIndexPath
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GGS_arcAssignmentList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyType, inElement.mProperty_mPropertyIndexPath) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_arcAssignmentList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_arcAssignmentList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_arcAssignmentList (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType, mObject.mProperty_mPropertyIndexPath COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @arcAssignmentList
//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList::GGS_arcAssignmentList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList::GGS_arcAssignmentList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    const GGS_arcAssignmentList_2E_element element (p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mPropertyType, p->mObject.mProperty_mPropertyIndexPath) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_string & in_mPropertyName,
                                                       const GGS_omnibusType & in_mPropertyType,
                                                       const GGS_uintlist & in_mPropertyIndexPath
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_arcAssignmentList (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_arcAssignmentList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_arcAssignmentList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyIndexPath:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyIndexPath.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arcAssignmentList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::plusPlusAssignOperation (const GGS_arcAssignmentList_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                       const GGS_omnibusType & inOperand1,
                                                                       const GGS_uintlist & inOperand2
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_arcAssignmentList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_arcAssignmentList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::addAssignOperation (const GGS_string & inOperand0,
                                                const GGS_omnibusType & inOperand1,
                                                const GGS_uintlist & inOperand2
                                                COMMA_LOCATION_ARGS) {
  const GGS_arcAssignmentList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_append (const GGS_string inOperand0,
                                           const GGS_omnibusType inOperand1,
                                           const GGS_uintlist inOperand2,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_arcAssignmentList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_insertAtIndex (const GGS_string inOperand0,
                                                  const GGS_omnibusType inOperand1,
                                                  const GGS_uintlist inOperand2,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_arcAssignmentList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_removeAtIndex (GGS_string & outOperand0,
                                                  GGS_omnibusType & outOperand1,
                                                  GGS_uintlist & outOperand2,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mPropertyName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mPropertyType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mPropertyIndexPath ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_popFirst (GGS_string & outOperand0,
                                             GGS_omnibusType & outOperand1,
                                             GGS_uintlist & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mPropertyIndexPath ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_popLast (GGS_string & outOperand0,
                                            GGS_omnibusType & outOperand1,
                                            GGS_uintlist & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mPropertyIndexPath ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::method_first (GGS_string & outOperand0,
                                          GGS_omnibusType & outOperand1,
                                          GGS_uintlist & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mPropertyIndexPath ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::method_last (GGS_string & outOperand0,
                                         GGS_omnibusType & outOperand1,
                                         GGS_uintlist & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mPropertyIndexPath ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::add_operation (const GGS_arcAssignmentList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::plusAssignOperation (const GGS_arcAssignmentList inList,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_setMPropertyNameAtIndex (GGS_string inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_arcAssignmentList::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_setMPropertyTypeAtIndex (GGS_omnibusType inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_omnibusType GGS_arcAssignmentList::getter_mPropertyTypeAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_setMPropertyIndexPathAtIndex (GGS_uintlist inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyIndexPath = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uintlist GGS_arcAssignmentList::getter_mPropertyIndexPathAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyIndexPath ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @arcAssignmentList
//--------------------------------------------------------------------------------------------------

DownEnumerator_arcAssignmentList::DownEnumerator_arcAssignmentList (const GGS_arcAssignmentList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList_2E_element DownEnumerator_arcAssignmentList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_arcAssignmentList::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_arcAssignmentList::current_mPropertyType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_arcAssignmentList::current_mPropertyIndexPath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyIndexPath ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @arcAssignmentList
//--------------------------------------------------------------------------------------------------

UpEnumerator_arcAssignmentList::UpEnumerator_arcAssignmentList (const GGS_arcAssignmentList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList_2E_element UpEnumerator_arcAssignmentList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_arcAssignmentList::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_arcAssignmentList::current_mPropertyType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_arcAssignmentList::current_mPropertyIndexPath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyIndexPath ;
}




//--------------------------------------------------------------------------------------------------
//     @arcAssignmentList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arcAssignmentList ("arcAssignmentList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arcAssignmentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arcAssignmentList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arcAssignmentList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_arcAssignmentList result ;
  const GGS_arcAssignmentList * p = (const GGS_arcAssignmentList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arcAssignmentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @userLLVMTypeDefinitionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_userLLVMTypeDefinitionIR::objectCompare (const GGS_userLLVMTypeDefinitionIR & inOperand) const {
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

GGS_userLLVMTypeDefinitionIR::GGS_userLLVMTypeDefinitionIR (void) :
AC_GALGAS_reference_class () {
}


void cPtr_userLLVMTypeDefinitionIR::
userLLVMTypeDefinitionIR_init_21_ (const GGS_string & in_mLLVMDefinedTypeName,
                                   Compiler * /* inCompiler */) {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR::GGS_userLLVMTypeDefinitionIR (const cPtr_userLLVMTypeDefinitionIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMTypeDefinitionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_userLLVMTypeDefinitionIR::readProperty_mLLVMDefinedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_userLLVMTypeDefinitionIR * p = (cPtr_userLLVMTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMTypeDefinitionIR) ;
    return p->mProperty_mLLVMDefinedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionIR::setProperty_mLLVMDefinedTypeName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMTypeDefinitionIR * p = (cPtr_userLLVMTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMTypeDefinitionIR) ;
    p->mProperty_mLLVMDefinedTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @userLLVMTypeDefinitionIR class
//--------------------------------------------------------------------------------------------------

cPtr_userLLVMTypeDefinitionIR::cPtr_userLLVMTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mLLVMDefinedTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_userLLVMTypeDefinitionIR::cPtr_userLLVMTypeDefinitionIR (const GGS_string & in_mLLVMDefinedTypeName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mLLVMDefinedTypeName () {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_userLLVMTypeDefinitionIR::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMDefinedTypeName.printNonNullClassInstanceProperties ("mLLVMDefinedTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @userLLVMTypeDefinitionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ("userLLVMTypeDefinitionIR",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR GGS_userLLVMTypeDefinitionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionIR result ;
  const GGS_userLLVMTypeDefinitionIR * p = (const GGS_userLLVMTypeDefinitionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_userLLVMTypeDefinitionIR_2E_weak::objectCompare (const GGS_userLLVMTypeDefinitionIR_2E_weak & inOperand) const {
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

GGS_userLLVMTypeDefinitionIR_2E_weak::GGS_userLLVMTypeDefinitionIR_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR_2E_weak & GGS_userLLVMTypeDefinitionIR_2E_weak::operator = (const GGS_userLLVMTypeDefinitionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR_2E_weak::GGS_userLLVMTypeDefinitionIR_2E_weak (const GGS_userLLVMTypeDefinitionIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR_2E_weak GGS_userLLVMTypeDefinitionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR GGS_userLLVMTypeDefinitionIR_2E_weak::unwrappedValue (void) const {
  GGS_userLLVMTypeDefinitionIR result ;
  if (isValid ()) {
    const cPtr_userLLVMTypeDefinitionIR * p = (cPtr_userLLVMTypeDefinitionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_userLLVMTypeDefinitionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR GGS_userLLVMTypeDefinitionIR_2E_weak::bang_userLLVMTypeDefinitionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMTypeDefinitionIR) ;
      result = GGS_userLLVMTypeDefinitionIR ((cPtr_userLLVMTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @userLLVMTypeDefinitionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak ("userLLVMTypeDefinitionIR.weak",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMTypeDefinitionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMTypeDefinitionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMTypeDefinitionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR_2E_weak GGS_userLLVMTypeDefinitionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionIR_2E_weak result ;
  const GGS_userLLVMTypeDefinitionIR_2E_weak * p = (const GGS_userLLVMTypeDefinitionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMTypeDefinitionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@userLLVMTypeDefinitionIR generateLLVMType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateLLVMType (cPtr_userLLVMTypeDefinitionIR * inObject,
                                           GGS_string & io_ioLLVMcode,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_userLLVMTypeDefinitionIR) ;
    inObject->method_generateLLVMType (io_ioLLVMcode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@userLLVMTypeDefinitionListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_userLLVMTypeDefinitionListIR : public cCollectionElement {
  public: GGS_userLLVMTypeDefinitionListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionIR & in_mType
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_userLLVMTypeDefinitionListIR::cCollectionElement_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionIR & in_mType
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_userLLVMTypeDefinitionListIR::cCollectionElement_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_userLLVMTypeDefinitionListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_userLLVMTypeDefinitionListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_userLLVMTypeDefinitionListIR (mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @userLLVMTypeDefinitionListIR
//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR::GGS_userLLVMTypeDefinitionListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR::GGS_userLLVMTypeDefinitionListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    const GGS_userLLVMTypeDefinitionListIR_2E_element element (p->mObject.mProperty_mType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_userLLVMTypeDefinitionIR & in_mType
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_userLLVMTypeDefinitionListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_userLLVMTypeDefinitionListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_userLLVMTypeDefinitionListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::plusPlusAssignOperation (const GGS_userLLVMTypeDefinitionListIR_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::class_func_listWithValue (const GGS_userLLVMTypeDefinitionIR & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_userLLVMTypeDefinitionListIR_2E_element element (inOperand0) ;
  GGS_userLLVMTypeDefinitionListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::addAssignOperation (const GGS_userLLVMTypeDefinitionIR & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  const GGS_userLLVMTypeDefinitionListIR_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_append (const GGS_userLLVMTypeDefinitionIR inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_userLLVMTypeDefinitionListIR_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_insertAtIndex (const GGS_userLLVMTypeDefinitionIR inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_userLLVMTypeDefinitionListIR_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_removeAtIndex (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mType ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_popFirst (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_popLast (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::method_first (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::method_last (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::add_operation (const GGS_userLLVMTypeDefinitionListIR & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::plusAssignOperation (const GGS_userLLVMTypeDefinitionListIR inList,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_setMTypeAtIndex (GGS_userLLVMTypeDefinitionIR inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_userLLVMTypeDefinitionIR GGS_userLLVMTypeDefinitionListIR::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @userLLVMTypeDefinitionListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_userLLVMTypeDefinitionListIR::DownEnumerator_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element DownEnumerator_userLLVMTypeDefinitionListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR DownEnumerator_userLLVMTypeDefinitionListIR::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @userLLVMTypeDefinitionListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_userLLVMTypeDefinitionListIR::UpEnumerator_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element UpEnumerator_userLLVMTypeDefinitionListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR UpEnumerator_userLLVMTypeDefinitionListIR::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//     @userLLVMTypeDefinitionListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ("userLLVMTypeDefinitionListIR",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMTypeDefinitionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMTypeDefinitionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMTypeDefinitionListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR result ;
  const GGS_userLLVMTypeDefinitionListIR * p = (const GGS_userLLVMTypeDefinitionListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMTypeDefinitionListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@instructionListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_instructionListIR : public cCollectionElement {
  public: GGS_instructionListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_instructionListIR (const GGS_abstractInstructionIR & in_mInstructionGeneration
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_instructionListIR (const GGS_instructionListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListIR::cCollectionElement_instructionListIR (const GGS_abstractInstructionIR & in_mInstructionGeneration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListIR::cCollectionElement_instructionListIR (const GGS_instructionListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_instructionListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_instructionListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_instructionListIR (mObject.mProperty_mInstructionGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @instructionListIR
//--------------------------------------------------------------------------------------------------

GGS_instructionListIR::GGS_instructionListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR::GGS_instructionListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    const GGS_instructionListIR_2E_element element (p->mObject.mProperty_mInstructionGeneration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_abstractInstructionIR & in_mInstructionGeneration
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListIR (in_mInstructionGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_instructionListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_instructionListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionGeneration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionGeneration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::plusPlusAssignOperation (const GGS_instructionListIR_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::class_func_listWithValue (const GGS_abstractInstructionIR & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_instructionListIR_2E_element element (inOperand0) ;
  GGS_instructionListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::addAssignOperation (const GGS_abstractInstructionIR & inOperand0
                                                COMMA_LOCATION_ARGS) {
  const GGS_instructionListIR_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_append (const GGS_abstractInstructionIR inOperand0,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_instructionListIR_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_insertAtIndex (const GGS_abstractInstructionIR inOperand0,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_instructionListIR_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_removeAtIndex (GGS_abstractInstructionIR & outOperand0,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstructionGeneration ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_popFirst (GGS_abstractInstructionIR & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionGeneration ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_popLast (GGS_abstractInstructionIR & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionGeneration ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::method_first (GGS_abstractInstructionIR & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionGeneration ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::method_last (GGS_abstractInstructionIR & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionGeneration ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::add_operation (const GGS_instructionListIR & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::plusAssignOperation (const GGS_instructionListIR inList,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_setMInstructionGenerationAtIndex (GGS_abstractInstructionIR inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionGeneration = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_abstractInstructionIR GGS_instructionListIR::getter_mInstructionGenerationAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_abstractInstructionIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionGeneration ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @instructionListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_instructionListIR::DownEnumerator_instructionListIR (const GGS_instructionListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element DownEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR DownEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionGeneration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @instructionListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_instructionListIR::UpEnumerator_instructionListIR (const GGS_instructionListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element UpEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR UpEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionGeneration ;
}




//--------------------------------------------------------------------------------------------------
//     @instructionListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListIR ("instructionListIR",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_instructionListIR result ;
  const GGS_instructionListIR * p = (const GGS_instructionListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractInstructionIR::objectCompare (const GGS_abstractInstructionIR & inOperand) const {
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

GGS_abstractInstructionIR::GGS_abstractInstructionIR (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractInstructionIR::
abstractInstructionIR_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR::GGS_abstractInstructionIR (const cPtr_abstractInstructionIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractInstructionIR class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractInstructionIR::cPtr_abstractInstructionIR (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractInstructionIR::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInstructionIR ("abstractInstructionIR",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR GGS_abstractInstructionIR::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_abstractInstructionIR result ;
  const GGS_abstractInstructionIR * p = (const GGS_abstractInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractInstructionIR_2E_weak::objectCompare (const GGS_abstractInstructionIR_2E_weak & inOperand) const {
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

GGS_abstractInstructionIR_2E_weak::GGS_abstractInstructionIR_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR_2E_weak & GGS_abstractInstructionIR_2E_weak::operator = (const GGS_abstractInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR_2E_weak::GGS_abstractInstructionIR_2E_weak (const GGS_abstractInstructionIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR_2E_weak GGS_abstractInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR GGS_abstractInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_abstractInstructionIR result ;
  if (isValid ()) {
    const cPtr_abstractInstructionIR * p = (cPtr_abstractInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR GGS_abstractInstructionIR_2E_weak::bang_abstractInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractInstructionIR) ;
      result = GGS_abstractInstructionIR ((cPtr_abstractInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak ("abstractInstructionIR.weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR_2E_weak GGS_abstractInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_abstractInstructionIR_2E_weak result ;
  const GGS_abstractInstructionIR_2E_weak * p = (const GGS_abstractInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  ioObject.addAssignOperation (GGS_getComputedPropertyValueIR::init_21__21__21_ (constinArgument_inReceiverIR, constinArgument_inLLVMGetterName, outArgument_outResultValueIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 11)) ;
}


//--------------------------------------------------------------------------------------------------
// @getComputedPropertyValueIR reference class
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

cPtr_getComputedPropertyValueIR::cPtr_getComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMGetterName (),
mProperty_mResultValueIR () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getComputedPropertyValueIR::cPtr_getComputedPropertyValueIR (const GGS_objectIR & in_mReceiverIR,
                                                                  const GGS_string & in_mLLVMGetterName,
                                                                  const GGS_objectIR & in_mResultValueIR,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMGetterName (),
mProperty_mResultValueIR () {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMGetterName = in_mLLVMGetterName ;
  mProperty_mResultValueIR = in_mResultValueIR ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_getComputedPropertyValueIR::classDescriptor (void) const {
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

acPtr_class * cPtr_getComputedPropertyValueIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getComputedPropertyValueIR (mProperty_mReceiverIR, mProperty_mLLVMGetterName, mProperty_mResultValueIR, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @getComputedPropertyValueIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR ("getComputedPropertyValueIR",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getComputedPropertyValueIR::staticTypeDescriptor (void) const {
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

GGS_getComputedPropertyValueIR GGS_getComputedPropertyValueIR_2E_weak::unwrappedValue (void) const {
  GGS_getComputedPropertyValueIR result ;
  if (isValid ()) {
    const cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_getComputedPropertyValueIR (p) ;
    }
  }
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
//     @getComputedPropertyValueIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2E_weak ("getComputedPropertyValueIR.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getComputedPropertyValueIR_2E_weak::staticTypeDescriptor (void) const {
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
  ioObject.addAssignOperation (GGS_getUniversalArrayElementReferenceIR::init_21__21__21__21__21_ (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementType, constinArgument_inElementLLVMName, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 9)) ;
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

GGS_getUniversalArrayElementReferenceIR GGS_getUniversalArrayElementReferenceIR_2E_weak::unwrappedValue (void) const {
  GGS_getUniversalArrayElementReferenceIR result ;
  if (isValid ()) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_getUniversalArrayElementReferenceIR (p) ;
    }
  }
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
//     @getUniversalArrayElementReferenceIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2E_weak ("getUniversalArrayElementReferenceIR.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getUniversalArrayElementReferenceIR_2E_weak::staticTypeDescriptor (void) const {
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
// @instructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_instructionAST::objectCompare (const GGS_instructionAST & inOperand) const {
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

GGS_instructionAST::GGS_instructionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_instructionAST::
instructionAST_init_21_ (const GGS_location & in_mInstructionLocation,
                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST::GGS_instructionAST (const cPtr_instructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_instructionAST::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_instructionAST * p = (cPtr_instructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_instructionAST) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionAST::setProperty_mInstructionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_instructionAST * p = (cPtr_instructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_instructionAST) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @instructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_instructionAST::cPtr_instructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_instructionAST::cPtr_instructionAST (const GGS_location & in_mInstructionLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_instructionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @instructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionAST ("instructionAST",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST GGS_instructionAST::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_instructionAST result ;
  const GGS_instructionAST * p = (const GGS_instructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@sliceAssignmentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sliceAssignmentListAST : public cCollectionElement {
  public: GGS_sliceAssignmentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_sliceAssignmentListAST (const GGS_lstring & in_mSliceWidth,
                                                     const GGS_sliceTargetAST & in_mSliceKind
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sliceAssignmentListAST (const GGS_sliceAssignmentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_sliceAssignmentListAST::cCollectionElement_sliceAssignmentListAST (const GGS_lstring & in_mSliceWidth,
                                                                                      const GGS_sliceTargetAST & in_mSliceKind
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSliceWidth, in_mSliceKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sliceAssignmentListAST::cCollectionElement_sliceAssignmentListAST (const GGS_sliceAssignmentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @sliceAssignmentListAST
//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST::GGS_sliceAssignmentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST::GGS_sliceAssignmentListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    const GGS_sliceAssignmentListAST_2E_element element (p->mObject.mProperty_mSliceWidth, p->mObject.mProperty_mSliceKind) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_lstring & in_mSliceWidth,
                                                            const GGS_sliceTargetAST & in_mSliceKind
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_sliceAssignmentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_sliceAssignmentListAST (in_mSliceWidth, in_mSliceKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_sliceAssignmentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_sliceAssignmentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSliceWidth:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSliceWidth.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSliceKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSliceKind.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceAssignmentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::plusPlusAssignOperation (const GGS_sliceAssignmentListAST_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                 const GGS_sliceTargetAST & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_sliceAssignmentListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_sliceAssignmentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                     const GGS_sliceTargetAST & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  const GGS_sliceAssignmentListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::setter_append (const GGS_lstring inOperand0,
                                                const GGS_sliceTargetAST inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_sliceAssignmentListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                       const GGS_sliceTargetAST inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_sliceAssignmentListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                       GGS_sliceTargetAST & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSliceKind ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                  GGS_sliceTargetAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSliceKind ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::setter_popLast (GGS_lstring & outOperand0,
                                                 GGS_sliceTargetAST & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSliceKind ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::method_first (GGS_lstring & outOperand0,
                                               GGS_sliceTargetAST & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSliceKind ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::method_last (GGS_lstring & outOperand0,
                                              GGS_sliceTargetAST & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSliceKind ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::add_operation (const GGS_sliceAssignmentListAST & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sliceAssignmentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_sliceAssignmentListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_sliceAssignmentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_sliceAssignmentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_sliceAssignmentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::plusAssignOperation (const GGS_sliceAssignmentListAST inList,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::setter_setMSliceWidthAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceWidth = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_sliceAssignmentListAST::getter_mSliceWidthAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceWidth ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::setter_setMSliceKindAtIndex (GGS_sliceTargetAST inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceKind = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_sliceTargetAST GGS_sliceAssignmentListAST::getter_mSliceKindAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_sliceTargetAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceKind ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @sliceAssignmentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_sliceAssignmentListAST::DownEnumerator_sliceAssignmentListAST (const GGS_sliceAssignmentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element DownEnumerator_sliceAssignmentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_sliceAssignmentListAST::current_mSliceWidth (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST DownEnumerator_sliceAssignmentListAST::current_mSliceKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceKind ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @sliceAssignmentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_sliceAssignmentListAST::UpEnumerator_sliceAssignmentListAST (const GGS_sliceAssignmentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element UpEnumerator_sliceAssignmentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_sliceAssignmentListAST::current_mSliceWidth (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST UpEnumerator_sliceAssignmentListAST::current_mSliceKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceKind ;
}




//--------------------------------------------------------------------------------------------------
//     @sliceAssignmentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST ("sliceAssignmentListAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceAssignmentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceAssignmentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceAssignmentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_sliceAssignmentListAST result ;
  const GGS_sliceAssignmentListAST * p = (const GGS_sliceAssignmentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceAssignmentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_instructionAST_2E_weak::objectCompare (const GGS_instructionAST_2E_weak & inOperand) const {
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

GGS_instructionAST_2E_weak::GGS_instructionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST_2E_weak & GGS_instructionAST_2E_weak::operator = (const GGS_instructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST_2E_weak::GGS_instructionAST_2E_weak (const GGS_instructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_instructionAST_2E_weak GGS_instructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_instructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST GGS_instructionAST_2E_weak::unwrappedValue (void) const {
  GGS_instructionAST result ;
  if (isValid ()) {
    const cPtr_instructionAST * p = (cPtr_instructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_instructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST GGS_instructionAST_2E_weak::bang_instructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_instructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_instructionAST) ;
      result = GGS_instructionAST ((cPtr_instructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @instructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionAST_2E_weak ("instructionAST.weak",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST_2E_weak GGS_instructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_instructionAST_2E_weak result ;
  const GGS_instructionAST_2E_weak * p = (const GGS_instructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum sliceTargetAST
//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST::GGS_sliceTargetAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST GGS_sliceTargetAST::class_func_discarded (UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_discarded ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST GGS_sliceTargetAST::class_func_varDeclaration (const GGS_lstring & inAssociatedValue0
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_varDeclaration ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_sliceTargetAST_2E_varDeclaration (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST GGS_sliceTargetAST::class_func_letDeclaration (const GGS_lstring & inAssociatedValue0
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_letDeclaration ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_sliceTargetAST_2E_letDeclaration (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST GGS_sliceTargetAST::class_func_lValue (const GGS_LValueAST & inAssociatedValue0
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_lValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_sliceTargetAST_2E_lValue (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::method_extractVarDeclaration (GGS_lstring & outAssociatedValue_varName,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_varDeclaration) {
    outAssociatedValue_varName.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST.varDeclaration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_sliceTargetAST_2E_varDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_varName = ptr->mProperty_varName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::method_extractLetDeclaration (GGS_lstring & outAssociatedValue_letName,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letDeclaration) {
    outAssociatedValue_letName.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST.letDeclaration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_sliceTargetAST_2E_letDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_letName = ptr->mProperty_letName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::method_extractLValue (GGS_LValueAST & outAssociatedValue_target,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_lValue) {
    outAssociatedValue_target.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST.lValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_sliceTargetAST_2E_lValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_target = ptr->mProperty_target ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration_3F_ GGS_sliceTargetAST::getter_getVarDeclaration (UNUSED_LOCATION_ARGS) const {
  GGS_sliceTargetAST_2E_varDeclaration_3F_ result ;
  if (mEnum == Enumeration::enum_varDeclaration) {
    const auto ptr = (const GGS_sliceTargetAST_2E_varDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_sliceTargetAST_2E_varDeclaration (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::getAssociatedValuesFor_varDeclaration (GGS_lstring & out_varName) const {
  const auto ptr = (const GGS_sliceTargetAST_2E_varDeclaration *) mAssociatedValues.associatedValuesPointer () ;
  out_varName = ptr->mProperty_varName ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration_3F_ GGS_sliceTargetAST::getter_getLetDeclaration (UNUSED_LOCATION_ARGS) const {
  GGS_sliceTargetAST_2E_letDeclaration_3F_ result ;
  if (mEnum == Enumeration::enum_letDeclaration) {
    const auto ptr = (const GGS_sliceTargetAST_2E_letDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_sliceTargetAST_2E_letDeclaration (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::getAssociatedValuesFor_letDeclaration (GGS_lstring & out_letName) const {
  const auto ptr = (const GGS_sliceTargetAST_2E_letDeclaration *) mAssociatedValues.associatedValuesPointer () ;
  out_letName = ptr->mProperty_letName ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue_3F_ GGS_sliceTargetAST::getter_getLValue (UNUSED_LOCATION_ARGS) const {
  GGS_sliceTargetAST_2E_lValue_3F_ result ;
  if (mEnum == Enumeration::enum_lValue) {
    const auto ptr = (const GGS_sliceTargetAST_2E_lValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_sliceTargetAST_2E_lValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::getAssociatedValuesFor_lValue (GGS_LValueAST & out_target) const {
  const auto ptr = (const GGS_sliceTargetAST_2E_lValue *) mAssociatedValues.associatedValuesPointer () ;
  out_target = ptr->mProperty_target ;
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

GGS_bool GGS_sliceTargetAST::getter_isDiscarded (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_discarded == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sliceTargetAST::getter_isVarDeclaration (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_varDeclaration == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sliceTargetAST::getter_isLetDeclaration (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letDeclaration == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sliceTargetAST::getter_isLValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<enum @sliceTargetAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_sliceTargetAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @sliceTargetAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST ("sliceTargetAST",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceTargetAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceTargetAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceTargetAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST GGS_sliceTargetAST::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_sliceTargetAST result ;
  const GGS_sliceTargetAST * p = (const GGS_sliceTargetAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceTargetAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@effectiveArgumentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_effectiveArgumentListAST : public cCollectionElement {
  public: GGS_effectiveArgumentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_effectiveArgumentListAST (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                       const GGS_lstring & in_mSelector
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_effectiveArgumentListAST (const GGS_effectiveArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_effectiveArgumentListAST::cCollectionElement_effectiveArgumentListAST (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                                          const GGS_lstring & in_mSelector
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterKind, in_mSelector) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_effectiveArgumentListAST::cCollectionElement_effectiveArgumentListAST (const GGS_effectiveArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEffectiveParameterKind, inElement.mProperty_mSelector) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_effectiveArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_effectiveArgumentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_effectiveArgumentListAST (mObject.mProperty_mEffectiveParameterKind, mObject.mProperty_mSelector COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @effectiveArgumentListAST
//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST::GGS_effectiveArgumentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST::GGS_effectiveArgumentListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    const GGS_effectiveArgumentListAST_2E_element element (p->mObject.mProperty_mEffectiveParameterKind, p->mObject.mProperty_mSelector) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                              const GGS_lstring & in_mSelector
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_effectiveArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_effectiveArgumentListAST (in_mEffectiveParameterKind, in_mSelector COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_effectiveArgumentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_effectiveArgumentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEffectiveParameterKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEffectiveParameterKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelector.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::plusPlusAssignOperation (const GGS_effectiveArgumentListAST_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::class_func_listWithValue (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                     const GGS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_effectiveArgumentListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_effectiveArgumentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::addAssignOperation (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                       const GGS_lstring & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  const GGS_effectiveArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_append (const GGS_effectiveArgumentPassingModeAST inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_effectiveArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_insertAtIndex (const GGS_effectiveArgumentPassingModeAST inOperand0,
                                                         const GGS_lstring inOperand1,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_effectiveArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_removeAtIndex (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEffectiveParameterKind ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSelector ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_popFirst (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEffectiveParameterKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_popLast (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEffectiveParameterKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::method_first (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEffectiveParameterKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::method_last (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                GGS_lstring & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEffectiveParameterKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::add_operation (const GGS_effectiveArgumentListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::plusAssignOperation (const GGS_effectiveArgumentListAST inList,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_setMEffectiveParameterKindAtIndex (GGS_effectiveArgumentPassingModeAST inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEffectiveParameterKind = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_effectiveArgumentPassingModeAST GGS_effectiveArgumentListAST::getter_mEffectiveParameterKindAtIndex (const GGS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentPassingModeAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEffectiveParameterKind ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_setMSelectorAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSelector = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_effectiveArgumentListAST::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSelector ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @effectiveArgumentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_effectiveArgumentListAST::DownEnumerator_effectiveArgumentListAST (const GGS_effectiveArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element DownEnumerator_effectiveArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST DownEnumerator_effectiveArgumentListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEffectiveParameterKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_effectiveArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @effectiveArgumentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_effectiveArgumentListAST::UpEnumerator_effectiveArgumentListAST (const GGS_effectiveArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element UpEnumerator_effectiveArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST UpEnumerator_effectiveArgumentListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEffectiveParameterKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_effectiveArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}




//--------------------------------------------------------------------------------------------------
//     @effectiveArgumentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST ("effectiveArgumentListAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentListAST result ;
  const GGS_effectiveArgumentListAST * p = (const GGS_effectiveArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

