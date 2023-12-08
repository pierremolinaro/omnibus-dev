#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntMinusOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntMinusOperator_2D_weak & inOperand) const {
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

GALGAS_compileTimeIntMinusOperator_2D_weak::GALGAS_compileTimeIntMinusOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak & GALGAS_compileTimeIntMinusOperator_2D_weak::operator = (const GALGAS_compileTimeIntMinusOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak::GALGAS_compileTimeIntMinusOperator_2D_weak (const GALGAS_compileTimeIntMinusOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak GALGAS_compileTimeIntMinusOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntMinusOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator GALGAS_compileTimeIntMinusOperator_2D_weak::bang_compileTimeIntMinusOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntMinusOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntMinusOperator) ;
      result = GALGAS_compileTimeIntMinusOperator ((cPtr_compileTimeIntMinusOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @compileTimeIntMinusOperator-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2D_weak ("compileTimeIntMinusOperator-weak",
                                                            & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntMinusOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntMinusOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntMinusOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak GALGAS_compileTimeIntMinusOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntMinusOperator_2D_weak result ;
  const GALGAS_compileTimeIntMinusOperator_2D_weak * p = (const GALGAS_compileTimeIntMinusOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntMinusOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMinusOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntComplementOperator reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntComplementOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntComplementOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntComplementOperator::objectCompare (const GALGAS_compileTimeIntComplementOperator & inOperand) const {
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

GALGAS_compileTimeIntComplementOperator::GALGAS_compileTimeIntComplementOperator (void) :
GALGAS_prefixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator::GALGAS_compileTimeIntComplementOperator (const cPtr_compileTimeIntComplementOperator * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntComplementOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator GALGAS_compileTimeIntComplementOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntComplementOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntComplementOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntComplementOperator::cPtr_compileTimeIntComplementOperator (LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntComplementOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;
}

void cPtr_compileTimeIntComplementOperator::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntComplementOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntComplementOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntComplementOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @compileTimeIntComplementOperator generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ("compileTimeIntComplementOperator",
                                                         & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntComplementOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntComplementOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntComplementOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator GALGAS_compileTimeIntComplementOperator::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator result ;
  const GALGAS_compileTimeIntComplementOperator * p = (const GALGAS_compileTimeIntComplementOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntComplementOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntComplementOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntComplementOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntComplementOperator_2D_weak & inOperand) const {
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

GALGAS_compileTimeIntComplementOperator_2D_weak::GALGAS_compileTimeIntComplementOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak & GALGAS_compileTimeIntComplementOperator_2D_weak::operator = (const GALGAS_compileTimeIntComplementOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak::GALGAS_compileTimeIntComplementOperator_2D_weak (const GALGAS_compileTimeIntComplementOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak GALGAS_compileTimeIntComplementOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator GALGAS_compileTimeIntComplementOperator_2D_weak::bang_compileTimeIntComplementOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntComplementOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntComplementOperator) ;
      result = GALGAS_compileTimeIntComplementOperator ((cPtr_compileTimeIntComplementOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @compileTimeIntComplementOperator-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2D_weak ("compileTimeIntComplementOperator-weak",
                                                                 & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntComplementOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntComplementOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntComplementOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak GALGAS_compileTimeIntComplementOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator_2D_weak result ;
  const GALGAS_compileTimeIntComplementOperator_2D_weak * p = (const GALGAS_compileTimeIntComplementOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntComplementOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntComplementOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolTypeAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolTypeAST::objectCompare (const GALGAS_boolTypeAST & inOperand) const {
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

GALGAS_boolTypeAST::GALGAS_boolTypeAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST::GALGAS_boolTypeAST (const cPtr_boolTypeAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST GALGAS_boolTypeAST::constructor_new (LOCATION_ARGS) {
  GALGAS_boolTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_boolTypeAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolTypeAST::cPtr_boolTypeAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

void cPtr_boolTypeAST::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "[@boolTypeAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolTypeAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @boolTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolTypeAST ("boolTypeAST",
                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST GALGAS_boolTypeAST::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolTypeAST result ;
  const GALGAS_boolTypeAST * p = (const GALGAS_boolTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolTypeAST_2D_weak::objectCompare (const GALGAS_boolTypeAST_2D_weak & inOperand) const {
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

GALGAS_boolTypeAST_2D_weak::GALGAS_boolTypeAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak & GALGAS_boolTypeAST_2D_weak::operator = (const GALGAS_boolTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak::GALGAS_boolTypeAST_2D_weak (const GALGAS_boolTypeAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak GALGAS_boolTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST GALGAS_boolTypeAST_2D_weak::bang_boolTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolTypeAST) ;
      result = GALGAS_boolTypeAST ((cPtr_boolTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @boolTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolTypeAST_2D_weak ("boolTypeAST-weak",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak GALGAS_boolTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolTypeAST_2D_weak result ;
  const GALGAS_boolTypeAST_2D_weak * p = (const GALGAS_boolTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolImplicitConverterToBoolean reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolImplicitConverterToBoolean::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolImplicitConverterToBoolean::objectCompare (const GALGAS_boolImplicitConverterToBoolean & inOperand) const {
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

GALGAS_boolImplicitConverterToBoolean::GALGAS_boolImplicitConverterToBoolean (void) :
GALGAS_abstractImplicitConverterToBoolean () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean::GALGAS_boolImplicitConverterToBoolean (const cPtr_boolImplicitConverterToBoolean * inSourcePtr) :
GALGAS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolImplicitConverterToBoolean) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean GALGAS_boolImplicitConverterToBoolean::constructor_new (LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_boolImplicitConverterToBoolean (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolImplicitConverterToBoolean class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolImplicitConverterToBoolean::cPtr_boolImplicitConverterToBoolean (LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

void cPtr_boolImplicitConverterToBoolean::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "[@boolImplicitConverterToBoolean]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolImplicitConverterToBoolean::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolImplicitConverterToBoolean (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @boolImplicitConverterToBoolean generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ("boolImplicitConverterToBoolean",
                                                       & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean GALGAS_boolImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean result ;
  const GALGAS_boolImplicitConverterToBoolean * p = (const GALGAS_boolImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolImplicitConverterToBoolean_2D_weak::objectCompare (const GALGAS_boolImplicitConverterToBoolean_2D_weak & inOperand) const {
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

GALGAS_boolImplicitConverterToBoolean_2D_weak::GALGAS_boolImplicitConverterToBoolean_2D_weak (void) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak & GALGAS_boolImplicitConverterToBoolean_2D_weak::operator = (const GALGAS_boolImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak::GALGAS_boolImplicitConverterToBoolean_2D_weak (const GALGAS_boolImplicitConverterToBoolean & inSource) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak GALGAS_boolImplicitConverterToBoolean_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean GALGAS_boolImplicitConverterToBoolean_2D_weak::bang_boolImplicitConverterToBoolean_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolImplicitConverterToBoolean) ;
      result = GALGAS_boolImplicitConverterToBoolean ((cPtr_boolImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @boolImplicitConverterToBoolean-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2D_weak ("boolImplicitConverterToBoolean-weak",
                                                               & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolImplicitConverterToBoolean_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolImplicitConverterToBoolean_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolImplicitConverterToBoolean_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak GALGAS_boolImplicitConverterToBoolean_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean_2D_weak result ;
  const GALGAS_boolImplicitConverterToBoolean_2D_weak * p = (const GALGAS_boolImplicitConverterToBoolean_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolImplicitConverterToBoolean_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolNotOperator reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolNotOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolNotOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolNotOperator::objectCompare (const GALGAS_boolNotOperator & inOperand) const {
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

GALGAS_boolNotOperator::GALGAS_boolNotOperator (void) :
GALGAS_prefixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator::GALGAS_boolNotOperator (const cPtr_boolNotOperator * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolNotOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator GALGAS_boolNotOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_boolNotOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_boolNotOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolNotOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolNotOperator::cPtr_boolNotOperator (LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolNotOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator ;
}

void cPtr_boolNotOperator::description (C_String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString << "[@boolNotOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolNotOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolNotOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @boolNotOperator generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolNotOperator ("boolNotOperator",
                                        & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolNotOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolNotOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolNotOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator GALGAS_boolNotOperator::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_boolNotOperator result ;
  const GALGAS_boolNotOperator * p = (const GALGAS_boolNotOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolNotOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolNotOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolNotOperator_2D_weak::objectCompare (const GALGAS_boolNotOperator_2D_weak & inOperand) const {
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

GALGAS_boolNotOperator_2D_weak::GALGAS_boolNotOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak & GALGAS_boolNotOperator_2D_weak::operator = (const GALGAS_boolNotOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak::GALGAS_boolNotOperator_2D_weak (const GALGAS_boolNotOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak GALGAS_boolNotOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolNotOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator GALGAS_boolNotOperator_2D_weak::bang_boolNotOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolNotOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolNotOperator) ;
      result = GALGAS_boolNotOperator ((cPtr_boolNotOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @boolNotOperator-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolNotOperator_2D_weak ("boolNotOperator-weak",
                                                & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolNotOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolNotOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolNotOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak GALGAS_boolNotOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_boolNotOperator_2D_weak result ;
  const GALGAS_boolNotOperator_2D_weak * p = (const GALGAS_boolNotOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolNotOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolNotOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeAliasDeclarationAST_2D_weak::objectCompare (const GALGAS_typeAliasDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_typeAliasDeclarationAST_2D_weak::GALGAS_typeAliasDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak & GALGAS_typeAliasDeclarationAST_2D_weak::operator = (const GALGAS_typeAliasDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak::GALGAS_typeAliasDeclarationAST_2D_weak (const GALGAS_typeAliasDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak GALGAS_typeAliasDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST_2D_weak::bang_typeAliasDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeAliasDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeAliasDeclarationAST) ;
      result = GALGAS_typeAliasDeclarationAST ((cPtr_typeAliasDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @typeAliasDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2D_weak ("typeAliasDeclarationAST-weak",
                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeAliasDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeAliasDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeAliasDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak GALGAS_typeAliasDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST_2D_weak result ;
  const GALGAS_typeAliasDeclarationAST_2D_weak * p = (const GALGAS_typeAliasDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeAliasDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeAliasDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @expressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_expressionAST::objectCompare (const GALGAS_expressionAST & inOperand) const {
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

GALGAS_expressionAST::GALGAS_expressionAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST::GALGAS_expressionAST (const cPtr_expressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expressionAST::cPtr_expressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @expressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionAST ("expressionAST",
                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_expressionAST::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionAST result ;
  const GALGAS_expressionAST * p = (const GALGAS_expressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_expressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::objectCompare (const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak & GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::operator = (const GALGAS_fixedSizeArrayTypeDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (const GALGAS_fixedSizeArrayTypeDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::bang_fixedSizeArrayTypeDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_fixedSizeArrayTypeDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fixedSizeArrayTypeDeclarationAST) ;
      result = GALGAS_fixedSizeArrayTypeDeclarationAST ((cPtr_fixedSizeArrayTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @fixedSizeArrayTypeDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak ("fixedSizeArrayTypeDeclarationAST-weak",
                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak result ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak * p = (const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayTypeDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::objectCompare (const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak & inOperand) const {
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

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (void) :
GALGAS_userLLVMTypeDefinitionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak & GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::operator = (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inSource) :
GALGAS_userLLVMTypeDefinitionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::bang_userLLVMStaticArrayTypeDefinitionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
      result = GALGAS_userLLVMStaticArrayTypeDefinitionIR ((cPtr_userLLVMStaticArrayTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @userLLVMStaticArrayTypeDefinitionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak ("userLLVMStaticArrayTypeDefinitionIR-weak",
                                                                    & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak result ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak * p = (const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMStaticArrayTypeDefinitionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractAssignmentOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractAssignmentOperatorUsage::objectCompare (const GALGAS_abstractAssignmentOperatorUsage & inOperand) const {
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

GALGAS_abstractAssignmentOperatorUsage::GALGAS_abstractAssignmentOperatorUsage (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage::GALGAS_abstractAssignmentOperatorUsage (const cPtr_abstractAssignmentOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractAssignmentOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractAssignmentOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractAssignmentOperatorUsage::cPtr_abstractAssignmentOperatorUsage (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @abstractAssignmentOperatorUsage generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ("abstractAssignmentOperatorUsage",
                                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage GALGAS_abstractAssignmentOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractAssignmentOperatorUsage result ;
  const GALGAS_abstractAssignmentOperatorUsage * p = (const GALGAS_abstractAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractAssignmentOperatorUsage_2D_weak::objectCompare (const GALGAS_abstractAssignmentOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_abstractAssignmentOperatorUsage_2D_weak::GALGAS_abstractAssignmentOperatorUsage_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage_2D_weak & GALGAS_abstractAssignmentOperatorUsage_2D_weak::operator = (const GALGAS_abstractAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage_2D_weak::GALGAS_abstractAssignmentOperatorUsage_2D_weak (const GALGAS_abstractAssignmentOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage_2D_weak GALGAS_abstractAssignmentOperatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractAssignmentOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage GALGAS_abstractAssignmentOperatorUsage_2D_weak::bang_abstractAssignmentOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractAssignmentOperatorUsage) ;
      result = GALGAS_abstractAssignmentOperatorUsage ((cPtr_abstractAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @abstractAssignmentOperatorUsage-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak ("abstractAssignmentOperatorUsage-weak",
                                                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractAssignmentOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractAssignmentOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractAssignmentOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage_2D_weak GALGAS_abstractAssignmentOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractAssignmentOperatorUsage_2D_weak result ;
  const GALGAS_abstractAssignmentOperatorUsage_2D_weak * p = (const GALGAS_abstractAssignmentOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractAssignmentOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractAssignmentOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractRoutineIR_2D_weak::objectCompare (const GALGAS_abstractRoutineIR_2D_weak & inOperand) const {
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

GALGAS_abstractRoutineIR_2D_weak::GALGAS_abstractRoutineIR_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak & GALGAS_abstractRoutineIR_2D_weak::operator = (const GALGAS_abstractRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak::GALGAS_abstractRoutineIR_2D_weak (const GALGAS_abstractRoutineIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak GALGAS_abstractRoutineIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR GALGAS_abstractRoutineIR_2D_weak::bang_abstractRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractRoutineIR) ;
      result = GALGAS_abstractRoutineIR ((cPtr_abstractRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @abstractRoutineIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak ("abstractRoutineIR-weak",
                                                  nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak GALGAS_abstractRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractRoutineIR_2D_weak result ;
  const GALGAS_abstractRoutineIR_2D_weak * p = (const GALGAS_abstractRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::objectCompare (const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak & inOperand) const {
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

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak & GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::operator = (const GALGAS_staticArrayTypeAssignFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (const GALGAS_staticArrayTypeAssignFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::bang_staticArrayTypeAssignFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_staticArrayTypeAssignFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticArrayTypeAssignFunctionIR) ;
      result = GALGAS_staticArrayTypeAssignFunctionIR ((cPtr_staticArrayTypeAssignFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @staticArrayTypeAssignFunctionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2D_weak ("staticArrayTypeAssignFunctionIR-weak",
                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR_2D_weak result ;
  const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak * p = (const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayTypeAssignFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeDynamicArrayDeclarationAST_2D_weak::objectCompare (const GALGAS_typeDynamicArrayDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_typeDynamicArrayDeclarationAST_2D_weak::GALGAS_typeDynamicArrayDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak & GALGAS_typeDynamicArrayDeclarationAST_2D_weak::operator = (const GALGAS_typeDynamicArrayDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak::GALGAS_typeDynamicArrayDeclarationAST_2D_weak (const GALGAS_typeDynamicArrayDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak GALGAS_typeDynamicArrayDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST_2D_weak::bang_typeDynamicArrayDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeDynamicArrayDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeDynamicArrayDeclarationAST) ;
      result = GALGAS_typeDynamicArrayDeclarationAST ((cPtr_typeDynamicArrayDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @typeDynamicArrayDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2D_weak ("typeDynamicArrayDeclarationAST-weak",
                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeDynamicArrayDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeDynamicArrayDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDynamicArrayDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak GALGAS_typeDynamicArrayDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST_2D_weak result ;
  const GALGAS_typeDynamicArrayDeclarationAST_2D_weak * p = (const GALGAS_typeDynamicArrayDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeDynamicArrayDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDynamicArrayDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak & inOperand) const {
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

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak & GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::operator = (const GALGAS_dynArrayRemoveAllFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (const GALGAS_dynArrayRemoveAllFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayRemoveAllFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::bang_dynArrayRemoveAllFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayRemoveAllFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayRemoveAllFunctionIR) ;
      result = GALGAS_dynArrayRemoveAllFunctionIR ((cPtr_dynArrayRemoveAllFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @dynArrayRemoveAllFunctionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2D_weak ("dynArrayRemoveAllFunctionIR-weak",
                                                            & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayRemoveAllFunctionIR_2D_weak result ;
  const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak * p = (const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayRemoveAllFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayLengthFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayLengthFunctionIR_2D_weak & inOperand) const {
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

GALGAS_dynArrayLengthFunctionIR_2D_weak::GALGAS_dynArrayLengthFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak & GALGAS_dynArrayLengthFunctionIR_2D_weak::operator = (const GALGAS_dynArrayLengthFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak::GALGAS_dynArrayLengthFunctionIR_2D_weak (const GALGAS_dynArrayLengthFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak GALGAS_dynArrayLengthFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayLengthFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR GALGAS_dynArrayLengthFunctionIR_2D_weak::bang_dynArrayLengthFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayLengthFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayLengthFunctionIR) ;
      result = GALGAS_dynArrayLengthFunctionIR ((cPtr_dynArrayLengthFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @dynArrayLengthFunctionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2D_weak ("dynArrayLengthFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayLengthFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayLengthFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayLengthFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak GALGAS_dynArrayLengthFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayLengthFunctionIR_2D_weak result ;
  const GALGAS_dynArrayLengthFunctionIR_2D_weak * p = (const GALGAS_dynArrayLengthFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynArrayLengthFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayLengthFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayAppendFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayAppendFunctionIR_2D_weak & inOperand) const {
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

GALGAS_dynArrayAppendFunctionIR_2D_weak::GALGAS_dynArrayAppendFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak & GALGAS_dynArrayAppendFunctionIR_2D_weak::operator = (const GALGAS_dynArrayAppendFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak::GALGAS_dynArrayAppendFunctionIR_2D_weak (const GALGAS_dynArrayAppendFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak GALGAS_dynArrayAppendFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayAppendFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR GALGAS_dynArrayAppendFunctionIR_2D_weak::bang_dynArrayAppendFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayAppendFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayAppendFunctionIR) ;
      result = GALGAS_dynArrayAppendFunctionIR ((cPtr_dynArrayAppendFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @dynArrayAppendFunctionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2D_weak ("dynArrayAppendFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayAppendFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayAppendFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayAppendFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak GALGAS_dynArrayAppendFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayAppendFunctionIR_2D_weak result ;
  const GALGAS_dynArrayAppendFunctionIR_2D_weak * p = (const GALGAS_dynArrayAppendFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynArrayAppendFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayAppendFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayInsertFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayInsertFunctionIR_2D_weak & inOperand) const {
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

GALGAS_dynArrayInsertFunctionIR_2D_weak::GALGAS_dynArrayInsertFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak & GALGAS_dynArrayInsertFunctionIR_2D_weak::operator = (const GALGAS_dynArrayInsertFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak::GALGAS_dynArrayInsertFunctionIR_2D_weak (const GALGAS_dynArrayInsertFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak GALGAS_dynArrayInsertFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR_2D_weak::bang_dynArrayInsertFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayInsertFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayInsertFunctionIR) ;
      result = GALGAS_dynArrayInsertFunctionIR ((cPtr_dynArrayInsertFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @dynArrayInsertFunctionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2D_weak ("dynArrayInsertFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayInsertFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayInsertFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayInsertFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak GALGAS_dynArrayInsertFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR_2D_weak result ;
  const GALGAS_dynArrayInsertFunctionIR_2D_weak * p = (const GALGAS_dynArrayInsertFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynArrayInsertFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayInsertFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynamicArrayTypeAssignUsage_2D_weak::objectCompare (const GALGAS_dynamicArrayTypeAssignUsage_2D_weak & inOperand) const {
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

GALGAS_dynamicArrayTypeAssignUsage_2D_weak::GALGAS_dynamicArrayTypeAssignUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak & GALGAS_dynamicArrayTypeAssignUsage_2D_weak::operator = (const GALGAS_dynamicArrayTypeAssignUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak::GALGAS_dynamicArrayTypeAssignUsage_2D_weak (const GALGAS_dynamicArrayTypeAssignUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak GALGAS_dynamicArrayTypeAssignUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage GALGAS_dynamicArrayTypeAssignUsage_2D_weak::bang_dynamicArrayTypeAssignUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynamicArrayTypeAssignUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynamicArrayTypeAssignUsage) ;
      result = GALGAS_dynamicArrayTypeAssignUsage ((cPtr_dynamicArrayTypeAssignUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @dynamicArrayTypeAssignUsage-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2D_weak ("dynamicArrayTypeAssignUsage-weak",
                                                            & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak GALGAS_dynamicArrayTypeAssignUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignUsage_2D_weak result ;
  const GALGAS_dynamicArrayTypeAssignUsage_2D_weak * p = (const GALGAS_dynamicArrayTypeAssignUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynamicArrayTypeAssignUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::objectCompare (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak & inOperand) const {
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

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak & GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::operator = (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::bang_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
      result = GALGAS_dynamicArrayTypeAssignGenericFunctionIR ((cPtr_dynamicArrayTypeAssignGenericFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @dynamicArrayTypeAssignGenericFunctionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak ("dynamicArrayTypeAssignGenericFunctionIR-weak",
                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak result ;
  const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak * p = (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignGenericFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@enumerationConstantList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_enumerationConstantList : public cCollectionElement {
  public: GALGAS_enumerationConstantList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_enumerationConstantList (const GALGAS_lstring & in_mConstantName,
                                                      const GALGAS_bigint & in_mConstantValue
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_enumerationConstantList (const GALGAS_enumerationConstantList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_enumerationConstantList::cCollectionElement_enumerationConstantList (const GALGAS_lstring & in_mConstantName,
                                                                                        const GALGAS_bigint & in_mConstantValue
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mConstantValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_enumerationConstantList::cCollectionElement_enumerationConstantList (const GALGAS_enumerationConstantList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantName, inElement.mProperty_mConstantValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_enumerationConstantList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumerationConstantList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_enumerationConstantList (mObject.mProperty_mConstantName, mObject.mProperty_mConstantValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_enumerationConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantName" ":" ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantValue" ":" ;
  mObject.mProperty_mConstantValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_enumerationConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumerationConstantList * operand = (cCollectionElement_enumerationConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumerationConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList::GALGAS_enumerationConstantList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList::GALGAS_enumerationConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationConstantList (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bigint & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumerationConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumerationConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mConstantName,
                                                                const GALGAS_bigint & in_mConstantValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_enumerationConstantList (in_mConstantName,
                                                             in_mConstantValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_bigint & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumerationConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_append (const GALGAS_lstring inOperand0,
                                                    const GALGAS_bigint inOperand1,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumerationConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_bigint inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_enumerationConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_bigint & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
        outOperand0 = p->mObject.mProperty_mConstantName ;
        outOperand1 = p->mObject.mProperty_mConstantValue ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_bigint & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_bigint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_bigint & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_bigint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::add_operation (const GALGAS_enumerationConstantList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::plusAssign_operation (const GALGAS_enumerationConstantList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_setMConstantNameAtIndex (GALGAS_lstring inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumerationConstantList::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    result = p->mObject.mProperty_mConstantName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_setMConstantValueAtIndex (GALGAS_bigint inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_enumerationConstantList::getter_mConstantValueAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  GALGAS_bigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    result = p->mObject.mProperty_mConstantValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_enumerationConstantList::cEnumerator_enumerationConstantList (const GALGAS_enumerationConstantList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element cEnumerator_enumerationConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_enumerationConstantList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject.mProperty_mConstantName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_enumerationConstantList::current_mConstantValue (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject.mProperty_mConstantValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @enumerationConstantList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationConstantList ("enumerationConstantList",
                                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationConstantList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList result ;
  const GALGAS_enumerationConstantList * p = (const GALGAS_enumerationConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumerationConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumerationDeclarationAST_2D_weak::objectCompare (const GALGAS_enumerationDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_enumerationDeclarationAST_2D_weak::GALGAS_enumerationDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak & GALGAS_enumerationDeclarationAST_2D_weak::operator = (const GALGAS_enumerationDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak::GALGAS_enumerationDeclarationAST_2D_weak (const GALGAS_enumerationDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak GALGAS_enumerationDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST_2D_weak::bang_enumerationDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumerationDeclarationAST) ;
      result = GALGAS_enumerationDeclarationAST ((cPtr_enumerationDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @enumerationDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ("enumerationDeclarationAST-weak",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak GALGAS_enumerationDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST_2D_weak result ;
  const GALGAS_enumerationDeclarationAST_2D_weak * p = (const GALGAS_enumerationDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumerationDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumToUintRoutineIR_2D_weak::objectCompare (const GALGAS_enumToUintRoutineIR_2D_weak & inOperand) const {
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

GALGAS_enumToUintRoutineIR_2D_weak::GALGAS_enumToUintRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak & GALGAS_enumToUintRoutineIR_2D_weak::operator = (const GALGAS_enumToUintRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak::GALGAS_enumToUintRoutineIR_2D_weak (const GALGAS_enumToUintRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak GALGAS_enumToUintRoutineIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR_2D_weak::bang_enumToUintRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumToUintRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumToUintRoutineIR) ;
      result = GALGAS_enumToUintRoutineIR ((cPtr_enumToUintRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @enumToUintRoutineIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumToUintRoutineIR_2D_weak ("enumToUintRoutineIR-weak",
                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumToUintRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumToUintRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumToUintRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak GALGAS_enumToUintRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR_2D_weak result ;
  const GALGAS_enumToUintRoutineIR_2D_weak * p = (const GALGAS_enumToUintRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumToUintRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumToUintRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@structurePropertyListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_structurePropertyListAST : public cCollectionElement {
  public: GALGAS_structurePropertyListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_structurePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                       const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                       const GALGAS_propertyVisibility & in_mVisibility,
                                                       const GALGAS_lstring & in_mPropertyTypeName,
                                                       const GALGAS_propertyKindAST & in_mPropertyKind
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_structurePropertyListAST (const GALGAS_structurePropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                          const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                          const GALGAS_propertyVisibility & in_mVisibility,
                                                                                          const GALGAS_lstring & in_mPropertyTypeName,
                                                                                          const GALGAS_propertyKindAST & in_mPropertyKind
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyAttributeList, in_mVisibility, in_mPropertyTypeName, in_mPropertyKind) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GALGAS_structurePropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyAttributeList, inElement.mProperty_mVisibility, inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyKind) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_structurePropertyListAST::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_structurePropertyListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_structurePropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyAttributeList, mObject.mProperty_mVisibility, mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyKind COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_structurePropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyAttributeList" ":" ;
  mObject.mProperty_mPropertyAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVisibility" ":" ;
  mObject.mProperty_mVisibility.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyTypeName" ":" ;
  mObject.mProperty_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyKind" ":" ;
  mObject.mProperty_mPropertyKind.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_structurePropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_structurePropertyListAST * operand = (cCollectionElement_structurePropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_structurePropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST::GALGAS_structurePropertyListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST::GALGAS_structurePropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_structurePropertyListAST (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_propertyAttributeList & inOperand1,
                                                                                            const GALGAS_propertyVisibility & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_propertyKindAST & inOperand4
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_structurePropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_structurePropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mPropertyName,
                                                                 const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                 const GALGAS_propertyVisibility & in_mVisibility,
                                                                 const GALGAS_lstring & in_mPropertyTypeName,
                                                                 const GALGAS_propertyKindAST & in_mPropertyKind
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_structurePropertyListAST (in_mPropertyName,
                                                              in_mPropertyAttributeList,
                                                              in_mVisibility,
                                                              in_mPropertyTypeName,
                                                              in_mPropertyKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_propertyAttributeList & inOperand1,
                                                           const GALGAS_propertyVisibility & inOperand2,
                                                           const GALGAS_lstring & inOperand3,
                                                           const GALGAS_propertyKindAST & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_append (const GALGAS_lstring inOperand0,
                                                     const GALGAS_propertyAttributeList inOperand1,
                                                     const GALGAS_propertyVisibility inOperand2,
                                                     const GALGAS_lstring inOperand3,
                                                     const GALGAS_propertyKindAST inOperand4,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_propertyAttributeList inOperand1,
                                                            const GALGAS_propertyVisibility inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_propertyKindAST inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_propertyAttributeList & outOperand1,
                                                            GALGAS_propertyVisibility & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_propertyKindAST & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
        outOperand0 = p->mObject.mProperty_mPropertyName ;
        outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
        outOperand2 = p->mObject.mProperty_mVisibility ;
        outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
        outOperand4 = p->mObject.mProperty_mPropertyKind ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_propertyAttributeList & outOperand1,
                                                       GALGAS_propertyVisibility & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       GALGAS_propertyKindAST & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mVisibility ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_propertyAttributeList & outOperand1,
                                                      GALGAS_propertyVisibility & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_propertyKindAST & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mVisibility ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_propertyAttributeList & outOperand1,
                                                    GALGAS_propertyVisibility & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_propertyKindAST & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mVisibility ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_propertyAttributeList & outOperand1,
                                                   GALGAS_propertyVisibility & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_propertyKindAST & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mVisibility ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::add_operation (const GALGAS_structurePropertyListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::plusAssign_operation (const GALGAS_structurePropertyListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_setMPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structurePropertyListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_setMPropertyAttributeListAtIndex (GALGAS_propertyAttributeList inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyAttributeList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList GALGAS_structurePropertyListAST::getter_mPropertyAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_propertyAttributeList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_setMVisibilityAtIndex (GALGAS_propertyVisibility inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mVisibility = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_structurePropertyListAST::getter_mVisibilityAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_propertyVisibility result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mVisibility ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_setMPropertyTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structurePropertyListAST::getter_mPropertyTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_setMPropertyKindAtIndex (GALGAS_propertyKindAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST GALGAS_structurePropertyListAST::getter_mPropertyKindAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_propertyKindAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyKind ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_structurePropertyListAST::cEnumerator_structurePropertyListAST (const GALGAS_structurePropertyListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element cEnumerator_structurePropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_structurePropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList cEnumerator_structurePropertyListAST::current_mPropertyAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility cEnumerator_structurePropertyListAST::current_mVisibility (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mVisibility ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_structurePropertyListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST cEnumerator_structurePropertyListAST::current_mPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyKind ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @structurePropertyListAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyListAST ("structurePropertyListAST",
                                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structurePropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structurePropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST result ;
  const GALGAS_structurePropertyListAST * p = (const GALGAS_structurePropertyListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structurePropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structureDeclarationAST_2D_weak::objectCompare (const GALGAS_structureDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_structureDeclarationAST_2D_weak::GALGAS_structureDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST_2D_weak & GALGAS_structureDeclarationAST_2D_weak::operator = (const GALGAS_structureDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST_2D_weak::GALGAS_structureDeclarationAST_2D_weak (const GALGAS_structureDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST_2D_weak GALGAS_structureDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structureDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST_2D_weak::bang_structureDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structureDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structureDeclarationAST) ;
      result = GALGAS_structureDeclarationAST ((cPtr_structureDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @structureDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureDeclarationAST_2D_weak ("structureDeclarationAST-weak",
                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST_2D_weak GALGAS_structureDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclarationAST_2D_weak result ;
  const GALGAS_structureDeclarationAST_2D_weak * p = (const GALGAS_structureDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structureDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@propertyAttributeList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_propertyAttributeList : public cCollectionElement {
  public: GALGAS_propertyAttributeList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_propertyAttributeList (const GALGAS_lstring & in_mAttributeName,
                                                    const GALGAS_lbigint & in_mAttributeValue
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_propertyAttributeList (const GALGAS_propertyAttributeList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_propertyAttributeList::cCollectionElement_propertyAttributeList (const GALGAS_lstring & in_mAttributeName,
                                                                                    const GALGAS_lbigint & in_mAttributeValue
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_propertyAttributeList::cCollectionElement_propertyAttributeList (const GALGAS_propertyAttributeList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyAttributeList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyAttributeList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_propertyAttributeList (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_propertyAttributeList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeValue" ":" ;
  mObject.mProperty_mAttributeValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_propertyAttributeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyAttributeList * operand = (cCollectionElement_propertyAttributeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyAttributeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList::GALGAS_propertyAttributeList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList::GALGAS_propertyAttributeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyAttributeList (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lbigint & inOperand1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyAttributeList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyAttributeList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_propertyAttributeList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mAttributeName,
                                                              const GALGAS_lbigint & in_mAttributeValue
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyAttributeList * p = nullptr ;
  macroMyNew (p, cCollectionElement_propertyAttributeList (in_mAttributeName,
                                                           in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lbigint & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_propertyAttributeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::setter_append (const GALGAS_lstring inOperand0,
                                                  const GALGAS_lbigint inOperand1,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_propertyAttributeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lbigint inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_propertyAttributeList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lbigint & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
        outOperand0 = p->mObject.mProperty_mAttributeName ;
        outOperand1 = p->mObject.mProperty_mAttributeValue ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lbigint & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lbigint & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lbigint & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lbigint & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::add_operation (const GALGAS_propertyAttributeList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyAttributeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_propertyAttributeList result = GALGAS_propertyAttributeList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_propertyAttributeList result = GALGAS_propertyAttributeList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyAttributeList result = GALGAS_propertyAttributeList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::plusAssign_operation (const GALGAS_propertyAttributeList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_propertyAttributeList::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList::setter_setMAttributeValueAtIndex (GALGAS_lbigint inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_propertyAttributeList::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_propertyAttributeList::cEnumerator_propertyAttributeList (const GALGAS_propertyAttributeList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element cEnumerator_propertyAttributeList::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyAttributeList * p = (const cCollectionElement_propertyAttributeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyAttributeList::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_propertyAttributeList * p = (const cCollectionElement_propertyAttributeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
  return p->mObject.mProperty_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint cEnumerator_propertyAttributeList::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_propertyAttributeList * p = (const cCollectionElement_propertyAttributeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
  return p->mObject.mProperty_mAttributeValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @propertyAttributeList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyAttributeList ("propertyAttributeList",
                                              nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyAttributeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyAttributeList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyAttributeList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_propertyAttributeList result ;
  const GALGAS_propertyAttributeList * p = (const GALGAS_propertyAttributeList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyAttributeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAttributeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyKindAST_initializedStoredProperty::cEnumAssociatedValues_propertyKindAST_initializedStoredProperty (const GALGAS_expressionAST inAssociatedValue0
                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyKindAST_initializedStoredProperty::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyKindAST_initializedStoredProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyKindAST_initializedConstantProperty::cEnumAssociatedValues_propertyKindAST_initializedConstantProperty (const GALGAS_expressionAST inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyKindAST_initializedConstantProperty::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyKindAST_initializedConstantProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty::cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty (const GALGAS_instructionListAST inAssociatedValue0,
                                                                                                                                const GALGAS_location inAssociatedValue1
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *> (inOperand) ;
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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyKindAST_writeComputedProperty::cEnumAssociatedValues_propertyKindAST_writeComputedProperty (const GALGAS_instructionListAST inAssociatedValue0,
                                                                                                                          const GALGAS_location inAssociatedValue1
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyKindAST_writeComputedProperty::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyKindAST_writeComputedProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *> (inOperand) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST::GALGAS_propertyKindAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST GALGAS_propertyKindAST::constructor_initializedStoredProperty (const GALGAS_expressionAST & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyKindAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_initializedStoredProperty ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKindAST_initializedStoredProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST GALGAS_propertyKindAST::constructor_uninitializedStoredProperty (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyKindAST result ;
  result.mEnum = kEnum_uninitializedStoredProperty ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST GALGAS_propertyKindAST::constructor_initializedConstantProperty (const GALGAS_expressionAST & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyKindAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_initializedConstantProperty ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKindAST_initializedConstantProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST GALGAS_propertyKindAST::constructor_uninitializedConstantProperty (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyKindAST result ;
  result.mEnum = kEnum_uninitializedConstantProperty ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST GALGAS_propertyKindAST::constructor_readOnlyComputedProperty (const GALGAS_instructionListAST & inAssociatedValue0,
                                                                                     const GALGAS_location & inAssociatedValue1
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_propertyKindAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_readOnlyComputedProperty ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST GALGAS_propertyKindAST::constructor_writeComputedProperty (const GALGAS_instructionListAST & inAssociatedValue0,
                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyKindAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_writeComputedProperty ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKindAST_writeComputedProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKindAST::method_initializedStoredProperty (GALGAS_expressionAST & outAssociatedValue0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_initializedStoredProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @propertyKindAST initializedStoredProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * ptr = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKindAST::method_initializedConstantProperty (GALGAS_expressionAST & outAssociatedValue0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_initializedConstantProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @propertyKindAST initializedConstantProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * ptr = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKindAST::method_readOnlyComputedProperty (GALGAS_instructionListAST & outAssociatedValue0,
                                                              GALGAS_location & outAssociatedValue1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_readOnlyComputedProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @propertyKindAST readOnlyComputedProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * ptr = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKindAST::method_writeComputedProperty (GALGAS_instructionListAST & outAssociatedValue0,
                                                           GALGAS_location & outAssociatedValue1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_writeComputedProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @propertyKindAST writeComputedProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * ptr = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyKindAST::optional_initializedStoredProperty (GALGAS_expressionAST & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_initializedStoredProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyKindAST::optional_uninitializedStoredProperty () const {
  const bool ok = mEnum == kEnum_uninitializedStoredProperty ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyKindAST::optional_initializedConstantProperty (GALGAS_expressionAST & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_initializedConstantProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyKindAST::optional_uninitializedConstantProperty () const {
  const bool ok = mEnum == kEnum_uninitializedConstantProperty ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyKindAST::optional_readOnlyComputedProperty (GALGAS_instructionListAST & outAssociatedValue0,
                                                                GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_readOnlyComputedProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyKindAST::optional_writeComputedProperty (GALGAS_instructionListAST & outAssociatedValue0,
                                                             GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_writeComputedProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyKindAST [7] = {
  "(not built)",
  "initializedStoredProperty",
  "uninitializedStoredProperty",
  "initializedConstantProperty",
  "uninitializedConstantProperty",
  "readOnlyComputedProperty",
  "writeComputedProperty"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKindAST::getter_isInitializedStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_initializedStoredProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKindAST::getter_isUninitializedStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uninitializedStoredProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKindAST::getter_isInitializedConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_initializedConstantProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKindAST::getter_isUninitializedConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uninitializedConstantProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKindAST::getter_isReadOnlyComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_readOnlyComputedProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKindAST::getter_isWriteComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_writeComputedProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKindAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<enum @propertyKindAST: " << gEnumNameArrayFor_propertyKindAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyKindAST::objectCompare (const GALGAS_propertyKindAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//     @propertyKindAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyKindAST ("propertyKindAST",
                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyKindAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyKindAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyKindAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST GALGAS_propertyKindAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_propertyKindAST result ;
  const GALGAS_propertyKindAST * p = (const GALGAS_propertyKindAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyKindAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@propertyList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_propertyList : public cCollectionElement {
  public: GALGAS_propertyList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_propertyList (const GALGAS_string & in_mPropertyName,
                                           const GALGAS_omnibusType & in_mType
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_propertyList (const GALGAS_propertyList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_propertyList::cCollectionElement_propertyList (const GALGAS_string & in_mPropertyName,
                                                                  const GALGAS_omnibusType & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_propertyList::cCollectionElement_propertyList (const GALGAS_propertyList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_propertyList (mObject.mProperty_mPropertyName, mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_propertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_propertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyList * operand = (cCollectionElement_propertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList::GALGAS_propertyList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList::GALGAS_propertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList GALGAS_propertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList GALGAS_propertyList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                    const GALGAS_omnibusType & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_propertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_string & in_mPropertyName,
                                                     const GALGAS_omnibusType & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyList * p = nullptr ;
  macroMyNew (p, cCollectionElement_propertyList (in_mPropertyName,
                                                  in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::addAssign_operation (const GALGAS_string & inOperand0,
                                               const GALGAS_omnibusType & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::setter_append (const GALGAS_string inOperand0,
                                         const GALGAS_omnibusType inOperand1,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                const GALGAS_omnibusType inOperand1,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                GALGAS_omnibusType & outOperand1,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_propertyList) ;
        outOperand0 = p->mObject.mProperty_mPropertyName ;
        outOperand1 = p->mObject.mProperty_mType ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::setter_popFirst (GALGAS_string & outOperand0,
                                           GALGAS_omnibusType & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::setter_popLast (GALGAS_string & outOperand0,
                                          GALGAS_omnibusType & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::method_first (GALGAS_string & outOperand0,
                                        GALGAS_omnibusType & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::method_last (GALGAS_string & outOperand0,
                                       GALGAS_omnibusType & outOperand1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList GALGAS_propertyList::add_operation (const GALGAS_propertyList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList GALGAS_propertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList GALGAS_propertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList GALGAS_propertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::plusAssign_operation (const GALGAS_propertyList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::setter_setMPropertyNameAtIndex (GALGAS_string inOperand,
                                                          GALGAS_uint inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_propertyList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyList::setter_setMTypeAtIndex (GALGAS_omnibusType inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_propertyList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_propertyList::cEnumerator_propertyList (const GALGAS_propertyList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element cEnumerator_propertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_propertyList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_propertyList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject.mProperty_mType ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @propertyList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyList ("propertyList",
                                     nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList GALGAS_propertyList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyList result ;
  const GALGAS_propertyList * p = (const GALGAS_propertyList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@sortedOperandIRList' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_sortedOperandIRList : public cSortedListElement {
  public: GALGAS_sortedOperandIRList_2D_element mObject ;

//--- Constructor
  public: cSortedListElement_sortedOperandIRList (const GALGAS_objectIR & in_mOperand,
                                                  const GALGAS_uint & in_mIndex
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_sortedOperandIRList::cSortedListElement_sortedOperandIRList (const GALGAS_objectIR & in_mOperand,
                                                                                const GALGAS_uint & in_mIndex
                                                                                COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mOperand, in_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_sortedOperandIRList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_sortedOperandIRList::copy (void) {
  cSortedListElement * result = nullptr ;
  macroMyNew (result, cSortedListElement_sortedOperandIRList (mObject.mProperty_mOperand, mObject.mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_sortedOperandIRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperand" ":" ;
  mObject.mProperty_mOperand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mObject.mProperty_mIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_sortedOperandIRList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_sortedOperandIRList * operand = (cSortedListElement_sortedOperandIRList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_sortedOperandIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedOperandIRList::GALGAS_sortedOperandIRList (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_sortedOperandIRList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_sortedOperandIRList * operand = (const cSortedListElement_sortedOperandIRList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_sortedOperandIRList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mIndex.objectCompare (operand->mObject.mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedOperandIRList GALGAS_sortedOperandIRList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_sortedOperandIRList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedOperandIRList GALGAS_sortedOperandIRList::constructor_sortedListWithValue (const GALGAS_objectIR & inOperand0,
                                                                                        const GALGAS_uint & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_sortedOperandIRList (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedOperandIRList::addAssign_operation (const GALGAS_objectIR & inOperand0,
                                                      const GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_sortedOperandIRList (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedOperandIRList::setter_insert (const GALGAS_objectIR inOperand0,
                                                const GALGAS_uint inOperand1,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_sortedOperandIRList (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedOperandIRList::plusAssign_operation (const GALGAS_sortedOperandIRList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedOperandIRList::setter_popSmallest (GALGAS_objectIR & outOperand0,
                                                     GALGAS_uint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedOperandIRList::setter_popGreatest (GALGAS_objectIR & outOperand0,
                                                     GALGAS_uint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedOperandIRList::method_smallest (GALGAS_objectIR & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedOperandIRList::method_greatest (GALGAS_objectIR & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sortedOperandIRList::cEnumerator_sortedOperandIRList (const GALGAS_sortedOperandIRList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedOperandIRList_2D_element cEnumerator_sortedOperandIRList::current (LOCATION_ARGS) const {
  const cSortedListElement_sortedOperandIRList * p = (const cSortedListElement_sortedOperandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_sortedOperandIRList::current_mOperand (LOCATION_ARGS) const {
  const cSortedListElement_sortedOperandIRList * p = (const cSortedListElement_sortedOperandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
  return p->mObject.mProperty_mOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_sortedOperandIRList::current_mIndex (LOCATION_ARGS) const {
  const cSortedListElement_sortedOperandIRList * p = (const cSortedListElement_sortedOperandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
  return p->mObject.mProperty_mIndex ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//     @sortedOperandIRList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedOperandIRList ("sortedOperandIRList",
                                            nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedOperandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedOperandIRList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedOperandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedOperandIRList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedOperandIRList GALGAS_sortedOperandIRList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList result ;
  const GALGAS_sortedOperandIRList * p = (const GALGAS_sortedOperandIRList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sortedOperandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedOperandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @userLLVMSructureTypeDefinitionIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_userLLVMSructureTypeDefinitionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_userLLVMTypeDefinitionIR::printNonNullClassInstanceProperties () ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_userLLVMSructureTypeDefinitionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_userLLVMSructureTypeDefinitionIR * p = (const cPtr_userLLVMSructureTypeDefinitionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_userLLVMSructureTypeDefinitionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMDefinedTypeName.objectCompare (p->mProperty_mLLVMDefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_userLLVMSructureTypeDefinitionIR::objectCompare (const GALGAS_userLLVMSructureTypeDefinitionIR & inOperand) const {
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

GALGAS_userLLVMSructureTypeDefinitionIR::GALGAS_userLLVMSructureTypeDefinitionIR (void) :
GALGAS_userLLVMTypeDefinitionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMSructureTypeDefinitionIR::GALGAS_userLLVMSructureTypeDefinitionIR (const cPtr_userLLVMSructureTypeDefinitionIR * inSourcePtr) :
GALGAS_userLLVMTypeDefinitionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMSructureTypeDefinitionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMSructureTypeDefinitionIR GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (const GALGAS_string & inAttribute_mLLVMDefinedTypeName,
                                                                                                  const GALGAS_propertyList & inAttribute_mPropertyList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMSructureTypeDefinitionIR result ;
  if (inAttribute_mLLVMDefinedTypeName.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_userLLVMSructureTypeDefinitionIR (inAttribute_mLLVMDefinedTypeName, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMSructureTypeDefinitionIR::setter_setMPropertyList (GALGAS_propertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMSructureTypeDefinitionIR * p = (cPtr_userLLVMSructureTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMSructureTypeDefinitionIR) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList GALGAS_userLLVMSructureTypeDefinitionIR::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyList () ;
  }else{
    cPtr_userLLVMSructureTypeDefinitionIR * p = (cPtr_userLLVMSructureTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMSructureTypeDefinitionIR) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @userLLVMSructureTypeDefinitionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_userLLVMSructureTypeDefinitionIR::cPtr_userLLVMSructureTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                                              const GALGAS_propertyList & in_mPropertyList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (in_mLLVMDefinedTypeName COMMA_THERE),
mProperty_mPropertyList (in_mPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_userLLVMSructureTypeDefinitionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ;
}

void cPtr_userLLVMSructureTypeDefinitionIR::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@userLLVMSructureTypeDefinitionIR:" ;
  mProperty_mLLVMDefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_userLLVMSructureTypeDefinitionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_userLLVMSructureTypeDefinitionIR (mProperty_mLLVMDefinedTypeName, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @userLLVMSructureTypeDefinitionIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ("userLLVMSructureTypeDefinitionIR",
                                                         & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMSructureTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMSructureTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMSructureTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMSructureTypeDefinitionIR GALGAS_userLLVMSructureTypeDefinitionIR::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMSructureTypeDefinitionIR result ;
  const GALGAS_userLLVMSructureTypeDefinitionIR * p = (const GALGAS_userLLVMSructureTypeDefinitionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_userLLVMSructureTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMSructureTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak::objectCompare (const GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak & inOperand) const {
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

GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak::GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak (void) :
GALGAS_userLLVMTypeDefinitionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak & GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak::operator = (const GALGAS_userLLVMSructureTypeDefinitionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak::GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak (const GALGAS_userLLVMSructureTypeDefinitionIR & inSource) :
GALGAS_userLLVMTypeDefinitionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMSructureTypeDefinitionIR GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak::bang_userLLVMSructureTypeDefinitionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMSructureTypeDefinitionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMSructureTypeDefinitionIR) ;
      result = GALGAS_userLLVMSructureTypeDefinitionIR ((cPtr_userLLVMSructureTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @userLLVMSructureTypeDefinitionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak ("userLLVMSructureTypeDefinitionIR-weak",
                                                                 & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak result ;
  const GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak * p = (const GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMSructureTypeDefinitionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structureAssignmentOperatorUsage_2D_weak::objectCompare (const GALGAS_structureAssignmentOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_structureAssignmentOperatorUsage_2D_weak::GALGAS_structureAssignmentOperatorUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage_2D_weak & GALGAS_structureAssignmentOperatorUsage_2D_weak::operator = (const GALGAS_structureAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage_2D_weak::GALGAS_structureAssignmentOperatorUsage_2D_weak (const GALGAS_structureAssignmentOperatorUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage_2D_weak GALGAS_structureAssignmentOperatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structureAssignmentOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage GALGAS_structureAssignmentOperatorUsage_2D_weak::bang_structureAssignmentOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structureAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structureAssignmentOperatorUsage) ;
      result = GALGAS_structureAssignmentOperatorUsage ((cPtr_structureAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @structureAssignmentOperatorUsage-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage_2D_weak ("structureAssignmentOperatorUsage-weak",
                                                                 & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureAssignmentOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureAssignmentOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureAssignmentOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage_2D_weak GALGAS_structureAssignmentOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureAssignmentOperatorUsage_2D_weak result ;
  const GALGAS_structureAssignmentOperatorUsage_2D_weak * p = (const GALGAS_structureAssignmentOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structureAssignmentOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureAssignmentOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structureTypeAssignFunctionIR_2D_weak::objectCompare (const GALGAS_structureTypeAssignFunctionIR_2D_weak & inOperand) const {
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

GALGAS_structureTypeAssignFunctionIR_2D_weak::GALGAS_structureTypeAssignFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR_2D_weak & GALGAS_structureTypeAssignFunctionIR_2D_weak::operator = (const GALGAS_structureTypeAssignFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR_2D_weak::GALGAS_structureTypeAssignFunctionIR_2D_weak (const GALGAS_structureTypeAssignFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR_2D_weak GALGAS_structureTypeAssignFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structureTypeAssignFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR GALGAS_structureTypeAssignFunctionIR_2D_weak::bang_structureTypeAssignFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structureTypeAssignFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structureTypeAssignFunctionIR) ;
      result = GALGAS_structureTypeAssignFunctionIR ((cPtr_structureTypeAssignFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @structureTypeAssignFunctionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR_2D_weak ("structureTypeAssignFunctionIR-weak",
                                                              & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureTypeAssignFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureTypeAssignFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureTypeAssignFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR_2D_weak GALGAS_structureTypeAssignFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structureTypeAssignFunctionIR_2D_weak result ;
  const GALGAS_structureTypeAssignFunctionIR_2D_weak * p = (const GALGAS_structureTypeAssignFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structureTypeAssignFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureTypeAssignFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syncDeclarationAST_2D_weak::objectCompare (const GALGAS_syncDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_syncDeclarationAST_2D_weak::GALGAS_syncDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST_2D_weak & GALGAS_syncDeclarationAST_2D_weak::operator = (const GALGAS_syncDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST_2D_weak::GALGAS_syncDeclarationAST_2D_weak (const GALGAS_syncDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST_2D_weak GALGAS_syncDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_syncDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST_2D_weak::bang_syncDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syncDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncDeclarationAST) ;
      result = GALGAS_syncDeclarationAST ((cPtr_syncDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @syncDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncDeclarationAST_2D_weak ("syncDeclarationAST-weak",
                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST_2D_weak GALGAS_syncDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncDeclarationAST_2D_weak result ;
  const GALGAS_syncDeclarationAST_2D_weak * p = (const GALGAS_syncDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @integerDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_integerDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsSigned.printNonNullClassInstanceProperties ("mIsSigned") ;
    mProperty_mSize.printNonNullClassInstanceProperties ("mSize") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_integerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerDeclarationAST * p = (const cPtr_integerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsSigned.objectCompare (p->mProperty_mIsSigned) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSize.objectCompare (p->mProperty_mSize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_integerDeclarationAST::objectCompare (const GALGAS_integerDeclarationAST & inOperand) const {
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

GALGAS_integerDeclarationAST::GALGAS_integerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerDeclarationAST::GALGAS_integerDeclarationAST (const cPtr_integerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerDeclarationAST GALGAS_integerDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsSigned,
                                                                            const GALGAS_uint & inAttribute_mSize
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_integerDeclarationAST result ;
  if (inAttribute_mIsSigned.isValid () && inAttribute_mSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerDeclarationAST (inAttribute_mIsSigned, inAttribute_mSize COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerDeclarationAST::setter_setMIsSigned (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_integerDeclarationAST * p = (cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    p->mProperty_mIsSigned = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerDeclarationAST::setter_setMSize (GALGAS_uint inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_integerDeclarationAST * p = (cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    p->mProperty_mSize = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_integerDeclarationAST::readProperty_mIsSigned (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_integerDeclarationAST * p = (cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    return p->mProperty_mIsSigned ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_integerDeclarationAST::readProperty_mSize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_integerDeclarationAST * p = (cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    return p->mProperty_mSize ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @integerDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_integerDeclarationAST::cPtr_integerDeclarationAST (const GALGAS_bool & in_mIsSigned,
                                                        const GALGAS_uint & in_mSize
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mIsSigned (in_mIsSigned),
mProperty_mSize (in_mSize) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_integerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclarationAST ;
}

void cPtr_integerDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@integerDeclarationAST:" ;
  mProperty_mIsSigned.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_integerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerDeclarationAST (mProperty_mIsSigned, mProperty_mSize COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @integerDeclarationAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerDeclarationAST ("integerDeclarationAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerDeclarationAST GALGAS_integerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerDeclarationAST result ;
  const GALGAS_integerDeclarationAST * p = (const GALGAS_integerDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_integerDeclarationAST_2D_weak::objectCompare (const GALGAS_integerDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_integerDeclarationAST_2D_weak::GALGAS_integerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerDeclarationAST_2D_weak & GALGAS_integerDeclarationAST_2D_weak::operator = (const GALGAS_integerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerDeclarationAST_2D_weak::GALGAS_integerDeclarationAST_2D_weak (const GALGAS_integerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerDeclarationAST_2D_weak GALGAS_integerDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_integerDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerDeclarationAST GALGAS_integerDeclarationAST_2D_weak::bang_integerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_integerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerDeclarationAST) ;
      result = GALGAS_integerDeclarationAST ((cPtr_integerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @integerDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerDeclarationAST_2D_weak ("integerDeclarationAST-weak",
                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerDeclarationAST_2D_weak GALGAS_integerDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerDeclarationAST_2D_weak result ;
  const GALGAS_integerDeclarationAST_2D_weak * p = (const GALGAS_integerDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@integerDeclarationAST typeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_integerDeclarationAST::getter_typeName (C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outName ; // Returned variable
  const GALGAS_integerDeclarationAST temp_0 = this ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsSigned ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("i") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("u") ;
  }
  const GALGAS_integerDeclarationAST temp_3 = this ;
  result_outName = temp_1.add_operation (temp_3.readProperty_mSize ().getter_string (SOURCE_FILE ("type-integer.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 19)) ;
//---
  return result_outName ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_typeName (const cPtr_integerDeclarationAST * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_typeName (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMOperation.printNonNullClassInstanceProperties ("mLLVMOperation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * p = (const cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMOperation.objectCompare (p->mProperty_mLLVMOperation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::objectCompare (const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inOperand) const {
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

GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::constructor_new (const GALGAS_string & inAttribute_mLLVMOperation
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage result ;
  if (inAttribute_mLLVMOperation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (inAttribute_mLLVMOperation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::setter_setMLLVMOperation (GALGAS_string inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * p = (cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage) ;
    p->mProperty_mLLVMOperation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::readProperty_mLLVMOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * p = (cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage) ;
    return p->mProperty_mLLVMOperation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inlineInfix_integer_compileTimeInt_operatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const GALGAS_string & in_mLLVMOperation
                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mLLVMOperation (in_mLLVMOperation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ;
}

void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "[@inlineInfix_integer_compileTimeInt_operatorUsage:" ;
  mProperty_mLLVMOperation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (mProperty_mLLVMOperation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @inlineInfix_integer_compileTimeInt_operatorUsage generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ("inlineInfix_integer_compileTimeInt_operatorUsage",
                                                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage result ;
  const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * p = (const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfix_integer_compileTimeInt_operatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak::objectCompare (const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak & inOperand) const {
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

GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak::GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak & GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak::operator = (const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak::GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak (const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak::bang_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage) ;
      result = GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ((cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @inlineInfix_integer_compileTimeInt_operatorUsage-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak ("inlineInfix_integer_compileTimeInt_operatorUsage-weak",
                                                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak result ;
  const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak * p = (const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfix_integer_compileTimeInt_operatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMOperation.printNonNullClassInstanceProperties ("mLLVMOperation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * p = (const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMOperation.objectCompare (p->mProperty_mLLVMOperation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::objectCompare (const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inOperand) const {
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

GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::constructor_new (const GALGAS_string & inAttribute_mLLVMOperation
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage result ;
  if (inAttribute_mLLVMOperation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (inAttribute_mLLVMOperation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::setter_setMLLVMOperation (GALGAS_string inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * p = (cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
    p->mProperty_mLLVMOperation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::readProperty_mLLVMOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * p = (cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
    return p->mProperty_mLLVMOperation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inlineInfix_compileTimeInt_integer_operatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const GALGAS_string & in_mLLVMOperation
                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mLLVMOperation (in_mLLVMOperation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ;
}

void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "[@inlineInfix_compileTimeInt_integer_operatorUsage:" ;
  mProperty_mLLVMOperation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (mProperty_mLLVMOperation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @inlineInfix_compileTimeInt_integer_operatorUsage generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ("inlineInfix_compileTimeInt_integer_operatorUsage",
                                                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage result ;
  const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * p = (const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfix_compileTimeInt_integer_operatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak::objectCompare (const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak & inOperand) const {
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

GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak::GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak & GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak::operator = (const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak::GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak (const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak::bang_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
      result = GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ((cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @inlineInfix_compileTimeInt_integer_operatorUsage-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak ("inlineInfix_compileTimeInt_integer_operatorUsage-weak",
                                                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak result ;
  const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak * p = (const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfix_compileTimeInt_integer_operatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_integerBuiltinFunctionIR_2D_weak::objectCompare (const GALGAS_integerBuiltinFunctionIR_2D_weak & inOperand) const {
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

GALGAS_integerBuiltinFunctionIR_2D_weak::GALGAS_integerBuiltinFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR_2D_weak & GALGAS_integerBuiltinFunctionIR_2D_weak::operator = (const GALGAS_integerBuiltinFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR_2D_weak::GALGAS_integerBuiltinFunctionIR_2D_weak (const GALGAS_integerBuiltinFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR_2D_weak GALGAS_integerBuiltinFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_integerBuiltinFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR GALGAS_integerBuiltinFunctionIR_2D_weak::bang_integerBuiltinFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_integerBuiltinFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerBuiltinFunctionIR) ;
      result = GALGAS_integerBuiltinFunctionIR ((cPtr_integerBuiltinFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @integerBuiltinFunctionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerBuiltinFunctionIR_2D_weak ("integerBuiltinFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerBuiltinFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerBuiltinFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerBuiltinFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR_2D_weak GALGAS_integerBuiltinFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_integerBuiltinFunctionIR_2D_weak result ;
  const GALGAS_integerBuiltinFunctionIR_2D_weak * p = (const GALGAS_integerBuiltinFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerBuiltinFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerBuiltinFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalStringDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalStringDeclarationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalStringDeclarationAST::objectCompare (const GALGAS_literalStringDeclarationAST & inOperand) const {
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

GALGAS_literalStringDeclarationAST::GALGAS_literalStringDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringDeclarationAST::GALGAS_literalStringDeclarationAST (const cPtr_literalStringDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringDeclarationAST GALGAS_literalStringDeclarationAST::constructor_new (LOCATION_ARGS) {
  GALGAS_literalStringDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalStringDeclarationAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalStringDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalStringDeclarationAST::cPtr_literalStringDeclarationAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalStringDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST ;
}

void cPtr_literalStringDeclarationAST::description (C_String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString << "[@literalStringDeclarationAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringDeclarationAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @literalStringDeclarationAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringDeclarationAST ("literalStringDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringDeclarationAST GALGAS_literalStringDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalStringDeclarationAST result ;
  const GALGAS_literalStringDeclarationAST * p = (const GALGAS_literalStringDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalStringDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalStringDeclarationAST_2D_weak::objectCompare (const GALGAS_literalStringDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_literalStringDeclarationAST_2D_weak::GALGAS_literalStringDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringDeclarationAST_2D_weak & GALGAS_literalStringDeclarationAST_2D_weak::operator = (const GALGAS_literalStringDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringDeclarationAST_2D_weak::GALGAS_literalStringDeclarationAST_2D_weak (const GALGAS_literalStringDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringDeclarationAST_2D_weak GALGAS_literalStringDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalStringDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringDeclarationAST GALGAS_literalStringDeclarationAST_2D_weak::bang_literalStringDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalStringDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringDeclarationAST) ;
      result = GALGAS_literalStringDeclarationAST ((cPtr_literalStringDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @literalStringDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringDeclarationAST_2D_weak ("literalStringDeclarationAST-weak",
                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringDeclarationAST_2D_weak GALGAS_literalStringDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalStringDeclarationAST_2D_weak result ;
  const GALGAS_literalStringDeclarationAST_2D_weak * p = (const GALGAS_literalStringDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalStringDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeOpaqueDeclarationAST_2D_weak::objectCompare (const GALGAS_typeOpaqueDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_typeOpaqueDeclarationAST_2D_weak::GALGAS_typeOpaqueDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST_2D_weak & GALGAS_typeOpaqueDeclarationAST_2D_weak::operator = (const GALGAS_typeOpaqueDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST_2D_weak::GALGAS_typeOpaqueDeclarationAST_2D_weak (const GALGAS_typeOpaqueDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST_2D_weak GALGAS_typeOpaqueDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeOpaqueDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST GALGAS_typeOpaqueDeclarationAST_2D_weak::bang_typeOpaqueDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeOpaqueDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeOpaqueDeclarationAST) ;
      result = GALGAS_typeOpaqueDeclarationAST ((cPtr_typeOpaqueDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @typeOpaqueDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST_2D_weak ("typeOpaqueDeclarationAST-weak",
                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeOpaqueDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeOpaqueDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeOpaqueDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST_2D_weak GALGAS_typeOpaqueDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeOpaqueDeclarationAST_2D_weak result ;
  const GALGAS_typeOpaqueDeclarationAST_2D_weak * p = (const GALGAS_typeOpaqueDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeOpaqueDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeOpaqueDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_controlRegisterKind_registerArray::cEnumAssociatedValues_controlRegisterKind_registerArray (const GALGAS_expressionAST inAssociatedValue0,
                                                                                                                  const GALGAS_location inAssociatedValue1,
                                                                                                                  const GALGAS_expressionAST inAssociatedValue2,
                                                                                                                  const GALGAS_location inAssociatedValue3
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_controlRegisterKind_registerArray::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_controlRegisterKind_registerArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterKind_registerArray * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterKind_registerArray *> (inOperand) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterKind::GALGAS_controlRegisterKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterKind GALGAS_controlRegisterKind::constructor_scalar (UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterKind result ;
  result.mEnum = kEnum_scalar ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterKind GALGAS_controlRegisterKind::constructor_registerArray (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                  const GALGAS_location & inAssociatedValue1,
                                                                                  const GALGAS_expressionAST & inAssociatedValue2,
                                                                                  const GALGAS_location & inAssociatedValue3
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_registerArray ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterKind_registerArray (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterKind::method_registerArray (GALGAS_expressionAST & outAssociatedValue0,
                                                       GALGAS_location & outAssociatedValue1,
                                                       GALGAS_expressionAST & outAssociatedValue2,
                                                       GALGAS_location & outAssociatedValue3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_registerArray) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @controlRegisterKind registerArray invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterKind_registerArray * ptr = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterKind::optional_scalar () const {
  const bool ok = mEnum == kEnum_scalar ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterKind::optional_registerArray (GALGAS_expressionAST & outAssociatedValue0,
                                                         GALGAS_location & outAssociatedValue1,
                                                         GALGAS_expressionAST & outAssociatedValue2,
                                                         GALGAS_location & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_registerArray ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_controlRegisterKind [3] = {
  "(not built)",
  "scalar",
  "registerArray"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterKind::getter_isScalar (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_scalar == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterKind::getter_isRegisterArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterKind::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @controlRegisterKind: " << gEnumNameArrayFor_controlRegisterKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterKind::objectCompare (const GALGAS_controlRegisterKind & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterKind generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterKind ("controlRegisterKind",
                                            nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterKind GALGAS_controlRegisterKind::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterKind result ;
  const GALGAS_controlRegisterKind * p = (const GALGAS_controlRegisterKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterNameListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterNameListAST : public cCollectionElement {
  public: GALGAS_controlRegisterNameListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_controlRegisterNameListAST (const GALGAS_lstring & in_mRegisterName,
                                                         const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                         const GALGAS_bool & in_mIsReadOnly,
                                                         const GALGAS_expressionAST & in_mRegisterOffset,
                                                         const GALGAS_location & in_mRegisterOffsetLocation
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controlRegisterNameListAST (const GALGAS_controlRegisterNameListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterNameListAST::cCollectionElement_controlRegisterNameListAST (const GALGAS_lstring & in_mRegisterName,
                                                                                              const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                                                              const GALGAS_bool & in_mIsReadOnly,
                                                                                              const GALGAS_expressionAST & in_mRegisterOffset,
                                                                                              const GALGAS_location & in_mRegisterOffsetLocation
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterName, in_mControlRegisterKind, in_mIsReadOnly, in_mRegisterOffset, in_mRegisterOffsetLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterNameListAST::cCollectionElement_controlRegisterNameListAST (const GALGAS_controlRegisterNameListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterName, inElement.mProperty_mControlRegisterKind, inElement.mProperty_mIsReadOnly, inElement.mProperty_mRegisterOffset, inElement.mProperty_mRegisterOffsetLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterNameListAST::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterNameListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controlRegisterNameListAST (mObject.mProperty_mRegisterName, mObject.mProperty_mControlRegisterKind, mObject.mProperty_mIsReadOnly, mObject.mProperty_mRegisterOffset, mObject.mProperty_mRegisterOffsetLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_controlRegisterNameListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterName" ":" ;
  mObject.mProperty_mRegisterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterKind" ":" ;
  mObject.mProperty_mControlRegisterKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsReadOnly" ":" ;
  mObject.mProperty_mIsReadOnly.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterOffset" ":" ;
  mObject.mProperty_mRegisterOffset.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterOffsetLocation" ":" ;
  mObject.mProperty_mRegisterOffsetLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_controlRegisterNameListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterNameListAST * operand = (cCollectionElement_controlRegisterNameListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterNameListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST::GALGAS_controlRegisterNameListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST::GALGAS_controlRegisterNameListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterNameListAST (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_controlRegisterKind & inOperand1,
                                                                                                const GALGAS_bool & inOperand2,
                                                                                                const GALGAS_expressionAST & inOperand3,
                                                                                                const GALGAS_location & inOperand4
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_controlRegisterNameListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterNameListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mRegisterName,
                                                                   const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                                   const GALGAS_bool & in_mIsReadOnly,
                                                                   const GALGAS_expressionAST & in_mRegisterOffset,
                                                                   const GALGAS_location & in_mRegisterOffsetLocation
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterNameListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_controlRegisterNameListAST (in_mRegisterName,
                                                                in_mControlRegisterKind,
                                                                in_mIsReadOnly,
                                                                in_mRegisterOffset,
                                                                in_mRegisterOffsetLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_controlRegisterKind & inOperand1,
                                                             const GALGAS_bool & inOperand2,
                                                             const GALGAS_expressionAST & inOperand3,
                                                             const GALGAS_location & inOperand4
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controlRegisterNameListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::setter_append (const GALGAS_lstring inOperand0,
                                                       const GALGAS_controlRegisterKind inOperand1,
                                                       const GALGAS_bool inOperand2,
                                                       const GALGAS_expressionAST inOperand3,
                                                       const GALGAS_location inOperand4,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controlRegisterNameListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_controlRegisterKind inOperand1,
                                                              const GALGAS_bool inOperand2,
                                                              const GALGAS_expressionAST inOperand3,
                                                              const GALGAS_location inOperand4,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_controlRegisterNameListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_controlRegisterKind & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              GALGAS_expressionAST & outOperand3,
                                                              GALGAS_location & outOperand4,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
        outOperand0 = p->mObject.mProperty_mRegisterName ;
        outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
        outOperand2 = p->mObject.mProperty_mIsReadOnly ;
        outOperand3 = p->mObject.mProperty_mRegisterOffset ;
        outOperand4 = p->mObject.mProperty_mRegisterOffsetLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_controlRegisterKind & outOperand1,
                                                         GALGAS_bool & outOperand2,
                                                         GALGAS_expressionAST & outOperand3,
                                                         GALGAS_location & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mIsReadOnly ;
    outOperand3 = p->mObject.mProperty_mRegisterOffset ;
    outOperand4 = p->mObject.mProperty_mRegisterOffsetLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_controlRegisterKind & outOperand1,
                                                        GALGAS_bool & outOperand2,
                                                        GALGAS_expressionAST & outOperand3,
                                                        GALGAS_location & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mIsReadOnly ;
    outOperand3 = p->mObject.mProperty_mRegisterOffset ;
    outOperand4 = p->mObject.mProperty_mRegisterOffsetLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_controlRegisterKind & outOperand1,
                                                      GALGAS_bool & outOperand2,
                                                      GALGAS_expressionAST & outOperand3,
                                                      GALGAS_location & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mIsReadOnly ;
    outOperand3 = p->mObject.mProperty_mRegisterOffset ;
    outOperand4 = p->mObject.mProperty_mRegisterOffsetLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_controlRegisterKind & outOperand1,
                                                     GALGAS_bool & outOperand2,
                                                     GALGAS_expressionAST & outOperand3,
                                                     GALGAS_location & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mIsReadOnly ;
    outOperand3 = p->mObject.mProperty_mRegisterOffset ;
    outOperand4 = p->mObject.mProperty_mRegisterOffsetLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::add_operation (const GALGAS_controlRegisterNameListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameListAST result = GALGAS_controlRegisterNameListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameListAST result = GALGAS_controlRegisterNameListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameListAST result = GALGAS_controlRegisterNameListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::plusAssign_operation (const GALGAS_controlRegisterNameListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::setter_setMRegisterNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegisterName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_controlRegisterNameListAST::getter_mRegisterNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    result = p->mObject.mProperty_mRegisterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::setter_setMControlRegisterKindAtIndex (GALGAS_controlRegisterKind inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mControlRegisterKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterKind GALGAS_controlRegisterNameListAST::getter_mControlRegisterKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  GALGAS_controlRegisterKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    result = p->mObject.mProperty_mControlRegisterKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::setter_setMIsReadOnlyAtIndex (GALGAS_bool inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsReadOnly = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterNameListAST::getter_mIsReadOnlyAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    result = p->mObject.mProperty_mIsReadOnly ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::setter_setMRegisterOffsetAtIndex (GALGAS_expressionAST inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegisterOffset = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_controlRegisterNameListAST::getter_mRegisterOffsetAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    result = p->mObject.mProperty_mRegisterOffset ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST::setter_setMRegisterOffsetLocationAtIndex (GALGAS_location inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegisterOffsetLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_controlRegisterNameListAST::getter_mRegisterOffsetLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    result = p->mObject.mProperty_mRegisterOffsetLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterNameListAST::cEnumerator_controlRegisterNameListAST (const GALGAS_controlRegisterNameListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element cEnumerator_controlRegisterNameListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterNameListAST::current_mRegisterName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject.mProperty_mRegisterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterKind cEnumerator_controlRegisterNameListAST::current_mControlRegisterKind (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject.mProperty_mControlRegisterKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_controlRegisterNameListAST::current_mIsReadOnly (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject.mProperty_mIsReadOnly ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST cEnumerator_controlRegisterNameListAST::current_mRegisterOffset (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject.mProperty_mRegisterOffset ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_controlRegisterNameListAST::current_mRegisterOffsetLocation (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject.mProperty_mRegisterOffsetLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterNameListAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterNameListAST ("controlRegisterNameListAST",
                                                   nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterNameListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterNameListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterNameListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST result ;
  const GALGAS_controlRegisterNameListAST * p = (const GALGAS_controlRegisterNameListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterNameListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterDeclarationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterDeclarationList : public cCollectionElement {
  public: GALGAS_controlRegisterDeclarationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_controlRegisterDeclarationList (const GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                             const GALGAS_lstring & in_mRegisterTypeName,
                                                             const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                             const GALGAS_location & in_mRegisterBitSliceListLocation
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controlRegisterDeclarationList (const GALGAS_controlRegisterDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterDeclarationList::cCollectionElement_controlRegisterDeclarationList (const GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                                                      const GALGAS_lstring & in_mRegisterTypeName,
                                                                                                      const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                                                      const GALGAS_location & in_mRegisterBitSliceListLocation
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterArrayList, in_mRegisterTypeName, in_mRegisterBitSliceList, in_mRegisterBitSliceListLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterDeclarationList::cCollectionElement_controlRegisterDeclarationList (const GALGAS_controlRegisterDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterArrayList, inElement.mProperty_mRegisterTypeName, inElement.mProperty_mRegisterBitSliceList, inElement.mProperty_mRegisterBitSliceListLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterDeclarationList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controlRegisterDeclarationList (mObject.mProperty_mRegisterArrayList, mObject.mProperty_mRegisterTypeName, mObject.mProperty_mRegisterBitSliceList, mObject.mProperty_mRegisterBitSliceListLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_controlRegisterDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterArrayList" ":" ;
  mObject.mProperty_mRegisterArrayList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterTypeName" ":" ;
  mObject.mProperty_mRegisterTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitSliceList" ":" ;
  mObject.mProperty_mRegisterBitSliceList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitSliceListLocation" ":" ;
  mObject.mProperty_mRegisterBitSliceListLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_controlRegisterDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterDeclarationList * operand = (cCollectionElement_controlRegisterDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList::GALGAS_controlRegisterDeclarationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList::GALGAS_controlRegisterDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterDeclarationList (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::constructor_listWithValue (const GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                        const GALGAS_location & inOperand3
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_controlRegisterDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                       const GALGAS_lstring & in_mRegisterTypeName,
                                                                       const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                       const GALGAS_location & in_mRegisterBitSliceListLocation
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_controlRegisterDeclarationList (in_mRegisterArrayList,
                                                                    in_mRegisterTypeName,
                                                                    in_mRegisterBitSliceList,
                                                                    in_mRegisterBitSliceListLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::addAssign_operation (const GALGAS_controlRegisterNameListAST & inOperand0,
                                                                 const GALGAS_lstring & inOperand1,
                                                                 const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                 const GALGAS_location & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controlRegisterDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::setter_append (const GALGAS_controlRegisterNameListAST inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_controlRegisterBitSliceList inOperand2,
                                                           const GALGAS_location inOperand3,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controlRegisterDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::setter_insertAtIndex (const GALGAS_controlRegisterNameListAST inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  const GALGAS_controlRegisterBitSliceList inOperand2,
                                                                  const GALGAS_location inOperand3,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_controlRegisterDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::setter_removeAtIndex (GALGAS_controlRegisterNameListAST & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_controlRegisterBitSliceList & outOperand2,
                                                                  GALGAS_location & outOperand3,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
        outOperand0 = p->mObject.mProperty_mRegisterArrayList ;
        outOperand1 = p->mObject.mProperty_mRegisterTypeName ;
        outOperand2 = p->mObject.mProperty_mRegisterBitSliceList ;
        outOperand3 = p->mObject.mProperty_mRegisterBitSliceListLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::setter_popFirst (GALGAS_controlRegisterNameListAST & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_controlRegisterBitSliceList & outOperand2,
                                                             GALGAS_location & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRegisterArrayList ;
    outOperand1 = p->mObject.mProperty_mRegisterTypeName ;
    outOperand2 = p->mObject.mProperty_mRegisterBitSliceList ;
    outOperand3 = p->mObject.mProperty_mRegisterBitSliceListLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::setter_popLast (GALGAS_controlRegisterNameListAST & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_controlRegisterBitSliceList & outOperand2,
                                                            GALGAS_location & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRegisterArrayList ;
    outOperand1 = p->mObject.mProperty_mRegisterTypeName ;
    outOperand2 = p->mObject.mProperty_mRegisterBitSliceList ;
    outOperand3 = p->mObject.mProperty_mRegisterBitSliceListLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::method_first (GALGAS_controlRegisterNameListAST & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_controlRegisterBitSliceList & outOperand2,
                                                          GALGAS_location & outOperand3,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRegisterArrayList ;
    outOperand1 = p->mObject.mProperty_mRegisterTypeName ;
    outOperand2 = p->mObject.mProperty_mRegisterBitSliceList ;
    outOperand3 = p->mObject.mProperty_mRegisterBitSliceListLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::method_last (GALGAS_controlRegisterNameListAST & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_controlRegisterBitSliceList & outOperand2,
                                                         GALGAS_location & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRegisterArrayList ;
    outOperand1 = p->mObject.mProperty_mRegisterTypeName ;
    outOperand2 = p->mObject.mProperty_mRegisterBitSliceList ;
    outOperand3 = p->mObject.mProperty_mRegisterBitSliceListLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::add_operation (const GALGAS_controlRegisterDeclarationList & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterDeclarationList result = GALGAS_controlRegisterDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterDeclarationList result = GALGAS_controlRegisterDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterDeclarationList result = GALGAS_controlRegisterDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::plusAssign_operation (const GALGAS_controlRegisterDeclarationList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::setter_setMRegisterArrayListAtIndex (GALGAS_controlRegisterNameListAST inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegisterArrayList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterDeclarationList::getter_mRegisterArrayListAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  GALGAS_controlRegisterNameListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    result = p->mObject.mProperty_mRegisterArrayList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::setter_setMRegisterTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegisterTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_controlRegisterDeclarationList::getter_mRegisterTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    result = p->mObject.mProperty_mRegisterTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::setter_setMRegisterBitSliceListAtIndex (GALGAS_controlRegisterBitSliceList inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegisterBitSliceList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterDeclarationList::getter_mRegisterBitSliceListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  GALGAS_controlRegisterBitSliceList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    result = p->mObject.mProperty_mRegisterBitSliceList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList::setter_setMRegisterBitSliceListLocationAtIndex (GALGAS_location inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegisterBitSliceListLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_controlRegisterDeclarationList::getter_mRegisterBitSliceListLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    result = p->mObject.mProperty_mRegisterBitSliceListLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterDeclarationList::cEnumerator_controlRegisterDeclarationList (const GALGAS_controlRegisterDeclarationList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element cEnumerator_controlRegisterDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterDeclarationList * p = (const cCollectionElement_controlRegisterDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST cEnumerator_controlRegisterDeclarationList::current_mRegisterArrayList (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterDeclarationList * p = (const cCollectionElement_controlRegisterDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
  return p->mObject.mProperty_mRegisterArrayList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterDeclarationList::current_mRegisterTypeName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterDeclarationList * p = (const cCollectionElement_controlRegisterDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
  return p->mObject.mProperty_mRegisterTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList cEnumerator_controlRegisterDeclarationList::current_mRegisterBitSliceList (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterDeclarationList * p = (const cCollectionElement_controlRegisterDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
  return p->mObject.mProperty_mRegisterBitSliceList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_controlRegisterDeclarationList::current_mRegisterBitSliceListLocation (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterDeclarationList * p = (const cCollectionElement_controlRegisterDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
  return p->mObject.mProperty_mRegisterBitSliceListLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterDeclarationList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterDeclarationList ("controlRegisterDeclarationList",
                                                       nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterDeclarationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationList result ;
  const GALGAS_controlRegisterDeclarationList * p = (const GALGAS_controlRegisterDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterBitSliceList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterBitSliceList : public cCollectionElement {
  public: GALGAS_controlRegisterBitSliceList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterBitSliceList::cCollectionElement_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterBitSlice) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterBitSliceList::cCollectionElement_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterBitSlice) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterBitSliceList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterBitSliceList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controlRegisterBitSliceList (mObject.mProperty_mRegisterBitSlice COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_controlRegisterBitSliceList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitSlice" ":" ;
  mObject.mProperty_mRegisterBitSlice.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_controlRegisterBitSliceList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterBitSliceList * operand = (cCollectionElement_controlRegisterBitSliceList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterBitSliceList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList::GALGAS_controlRegisterBitSliceList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList::GALGAS_controlRegisterBitSliceList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterBitSliceList (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::constructor_listWithValue (const GALGAS_controlRegisterBitSlice & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_controlRegisterBitSliceList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterBitSliceList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterBitSliceList * p = nullptr ;
  macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (in_mRegisterBitSlice COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::addAssign_operation (const GALGAS_controlRegisterBitSlice & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::setter_append (const GALGAS_controlRegisterBitSlice inOperand0,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::setter_insertAtIndex (const GALGAS_controlRegisterBitSlice inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::setter_removeAtIndex (GALGAS_controlRegisterBitSlice & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
        outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::setter_popFirst (GALGAS_controlRegisterBitSlice & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::setter_popLast (GALGAS_controlRegisterBitSlice & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::method_first (GALGAS_controlRegisterBitSlice & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::method_last (GALGAS_controlRegisterBitSlice & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::add_operation (const GALGAS_controlRegisterBitSliceList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result = GALGAS_controlRegisterBitSliceList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result = GALGAS_controlRegisterBitSliceList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result = GALGAS_controlRegisterBitSliceList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::plusAssign_operation (const GALGAS_controlRegisterBitSliceList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSliceList::setter_setMRegisterBitSliceAtIndex (GALGAS_controlRegisterBitSlice inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegisterBitSlice = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSliceList::getter_mRegisterBitSliceAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  GALGAS_controlRegisterBitSlice result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    result = p->mObject.mProperty_mRegisterBitSlice ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterBitSliceList::cEnumerator_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList_2D_element cEnumerator_controlRegisterBitSliceList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterBitSliceList * p = (const cCollectionElement_controlRegisterBitSliceList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSlice cEnumerator_controlRegisterBitSliceList::current_mRegisterBitSlice (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterBitSliceList * p = (const cCollectionElement_controlRegisterBitSliceList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
  return p->mObject.mProperty_mRegisterBitSlice ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterBitSliceList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSliceList ("controlRegisterBitSliceList",
                                                    nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSliceList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSliceList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterBitSliceList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSliceList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList result ;
  const GALGAS_controlRegisterBitSliceList * p = (const GALGAS_controlRegisterBitSliceList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterBitSliceList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSliceList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (const GALGAS_lbigint inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_controlRegisterBitSlice_namedBit::cEnumAssociatedValues_controlRegisterBitSlice_namedBit (const GALGAS_lstring inAssociatedValue0,
                                                                                                                const GALGAS_lbigint inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_controlRegisterBitSlice_namedBit::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_controlRegisterBitSlice_namedBit::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *> (inOperand) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSlice::GALGAS_controlRegisterBitSlice (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::constructor_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_unusedBits ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::constructor_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                                     const GALGAS_lbigint & inAssociatedValue1
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_namedBit ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterBitSlice_namedBit (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSlice::method_unusedBits (GALGAS_lbigint & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_unusedBits) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @controlRegisterBitSlice unusedBits invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * ptr = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSlice::method_namedBit (GALGAS_lstring & outAssociatedValue0,
                                                      GALGAS_lbigint & outAssociatedValue1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_namedBit) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @controlRegisterBitSlice namedBit invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * ptr = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterBitSlice::optional_unusedBits (GALGAS_lbigint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_unusedBits ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterBitSlice::optional_namedBit (GALGAS_lstring & outAssociatedValue0,
                                                        GALGAS_lbigint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_namedBit ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_controlRegisterBitSlice [3] = {
  "(not built)",
  "unusedBits",
  "namedBit"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterBitSlice::getter_isUnusedBits (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unusedBits == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterBitSlice::getter_isNamedBit (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_namedBit == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterBitSlice::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<enum @controlRegisterBitSlice: " << gEnumNameArrayFor_controlRegisterBitSlice [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterBitSlice::objectCompare (const GALGAS_controlRegisterBitSlice & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterBitSlice generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSlice ("controlRegisterBitSlice",
                                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterBitSlice::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSlice (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  const GALGAS_controlRegisterBitSlice * p = (const GALGAS_controlRegisterBitSlice *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterBitSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_controlRegisterGroupKindAST_single::cEnumAssociatedValues_controlRegisterGroupKindAST_single (const GALGAS_lbigint inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_controlRegisterGroupKindAST_single::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_controlRegisterGroupKindAST_single::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterGroupKindAST_single * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterGroupKindAST_single *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray::cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray (const GALGAS_expressionAST inAssociatedValue0,
                                                                                                                            const GALGAS_location inAssociatedValue1,
                                                                                                                            const GALGAS_lbigintlist inAssociatedValue2
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *> (inOperand) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST::GALGAS_controlRegisterGroupKindAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST GALGAS_controlRegisterGroupKindAST::constructor_single (const GALGAS_lbigint & inAssociatedValue0
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupKindAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_single ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterGroupKindAST_single (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST GALGAS_controlRegisterGroupKindAST::constructor_groupArray (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                               const GALGAS_location & inAssociatedValue1,
                                                                                               const GALGAS_lbigintlist & inAssociatedValue2
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupKindAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_groupArray ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupKindAST::method_single (GALGAS_lbigint & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_single) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @controlRegisterGroupKindAST single invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterGroupKindAST_single * ptr = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupKindAST::method_groupArray (GALGAS_expressionAST & outAssociatedValue0,
                                                            GALGAS_location & outAssociatedValue1,
                                                            GALGAS_lbigintlist & outAssociatedValue2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_groupArray) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @controlRegisterGroupKindAST groupArray invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * ptr = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupKindAST::optional_single (GALGAS_lbigint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_single ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupKindAST::optional_groupArray (GALGAS_expressionAST & outAssociatedValue0,
                                                              GALGAS_location & outAssociatedValue1,
                                                              GALGAS_lbigintlist & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_groupArray ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_controlRegisterGroupKindAST [3] = {
  "(not built)",
  "single",
  "groupArray"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterGroupKindAST::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_single == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterGroupKindAST::getter_isGroupArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_groupArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupKindAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<enum @controlRegisterGroupKindAST: " << gEnumNameArrayFor_controlRegisterGroupKindAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterGroupKindAST::objectCompare (const GALGAS_controlRegisterGroupKindAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupKindAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupKindAST ("controlRegisterGroupKindAST",
                                                    nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupKindAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupKindAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupKindAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST GALGAS_controlRegisterGroupKindAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupKindAST result ;
  const GALGAS_controlRegisterGroupKindAST * p = (const GALGAS_controlRegisterGroupKindAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupKindAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@registerGroupListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_registerGroupListAST : public cCollectionElement {
  public: GALGAS_registerGroupListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_registerGroupListAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                   const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_registerGroupListAST (const GALGAS_registerGroupListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_registerGroupListAST::cCollectionElement_registerGroupListAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                  const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterGroupName, in_mControlRegisterGroupKind) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_registerGroupListAST::cCollectionElement_registerGroupListAST (const GALGAS_registerGroupListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterGroupName, inElement.mProperty_mControlRegisterGroupKind) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_registerGroupListAST::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_registerGroupListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_registerGroupListAST (mObject.mProperty_mRegisterGroupName, mObject.mProperty_mControlRegisterGroupKind COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_registerGroupListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterGroupName" ":" ;
  mObject.mProperty_mRegisterGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterGroupKind" ":" ;
  mObject.mProperty_mControlRegisterGroupKind.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_registerGroupListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_registerGroupListAST * operand = (cCollectionElement_registerGroupListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_registerGroupListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST::GALGAS_registerGroupListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST::GALGAS_registerGroupListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerGroupListAST (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_controlRegisterGroupKindAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_registerGroupListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_registerGroupListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mRegisterGroupName,
                                                             const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_registerGroupListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_registerGroupListAST (in_mRegisterGroupName,
                                                          in_mControlRegisterGroupKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_controlRegisterGroupKindAST & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_registerGroupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_append (const GALGAS_lstring inOperand0,
                                                 const GALGAS_controlRegisterGroupKindAST inOperand1,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_registerGroupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_controlRegisterGroupKindAST inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_registerGroupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
        outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
        outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_controlRegisterGroupKindAST & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::add_operation (const GALGAS_registerGroupListAST & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result = GALGAS_registerGroupListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result = GALGAS_registerGroupListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result = GALGAS_registerGroupListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::plusAssign_operation (const GALGAS_registerGroupListAST inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_setMRegisterGroupNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegisterGroupName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerGroupListAST::getter_mRegisterGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    result = p->mObject.mProperty_mRegisterGroupName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_setMControlRegisterGroupKindAtIndex (GALGAS_controlRegisterGroupKindAST inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mControlRegisterGroupKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST GALGAS_registerGroupListAST::getter_mControlRegisterGroupKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  GALGAS_controlRegisterGroupKindAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    result = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_registerGroupListAST::cEnumerator_registerGroupListAST (const GALGAS_registerGroupListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element cEnumerator_registerGroupListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_registerGroupListAST * p = (const cCollectionElement_registerGroupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_registerGroupListAST::current_mRegisterGroupName (LOCATION_ARGS) const {
  const cCollectionElement_registerGroupListAST * p = (const cCollectionElement_registerGroupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
  return p->mObject.mProperty_mRegisterGroupName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST cEnumerator_registerGroupListAST::current_mControlRegisterGroupKind (LOCATION_ARGS) const {
  const cCollectionElement_registerGroupListAST * p = (const cCollectionElement_registerGroupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
  return p->mObject.mProperty_mControlRegisterGroupKind ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @registerGroupListAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerGroupListAST ("registerGroupListAST",
                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerGroupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerGroupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupListAST result ;
  const GALGAS_registerGroupListAST * p = (const GALGAS_registerGroupListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerGroupListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @controlRegisterGroupDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_controlRegisterGroupDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterGroupList.printNonNullClassInstanceProperties ("mRegisterGroupList") ;
    mProperty_mRegisters.printNonNullClassInstanceProperties ("mRegisters") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_controlRegisterGroupDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_controlRegisterGroupDeclarationAST * p = (const cPtr_controlRegisterGroupDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterGroupList.objectCompare (p->mProperty_mRegisterGroupList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisters.objectCompare (p->mProperty_mRegisters) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_controlRegisterGroupDeclarationAST::objectCompare (const GALGAS_controlRegisterGroupDeclarationAST & inOperand) const {
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

GALGAS_controlRegisterGroupDeclarationAST::GALGAS_controlRegisterGroupDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST::GALGAS_controlRegisterGroupDeclarationAST (const cPtr_controlRegisterGroupDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterGroupDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST GALGAS_controlRegisterGroupDeclarationAST::constructor_new (const GALGAS_registerGroupListAST & inAttribute_mRegisterGroupList,
                                                                                                      const GALGAS_controlRegisterDeclarationList & inAttribute_mRegisters
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupDeclarationAST result ;
  if (inAttribute_mRegisterGroupList.isValid () && inAttribute_mRegisters.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_controlRegisterGroupDeclarationAST (inAttribute_mRegisterGroupList, inAttribute_mRegisters COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupDeclarationAST::setter_setMRegisterGroupList (GALGAS_registerGroupListAST inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    p->mProperty_mRegisterGroupList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupDeclarationAST::setter_setMRegisters (GALGAS_controlRegisterDeclarationList inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    p->mProperty_mRegisters = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_controlRegisterGroupDeclarationAST::readProperty_mRegisterGroupList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerGroupListAST () ;
  }else{
    cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    return p->mProperty_mRegisterGroupList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterGroupDeclarationAST::readProperty_mRegisters (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterDeclarationList () ;
  }else{
    cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    return p->mProperty_mRegisters ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @controlRegisterGroupDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_controlRegisterGroupDeclarationAST::cPtr_controlRegisterGroupDeclarationAST (const GALGAS_registerGroupListAST & in_mRegisterGroupList,
                                                                                  const GALGAS_controlRegisterDeclarationList & in_mRegisters
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mRegisterGroupList (in_mRegisterGroupList),
mProperty_mRegisters (in_mRegisters) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_controlRegisterGroupDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ;
}

void cPtr_controlRegisterGroupDeclarationAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@controlRegisterGroupDeclarationAST:" ;
  mProperty_mRegisterGroupList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisters.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_controlRegisterGroupDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_controlRegisterGroupDeclarationAST (mProperty_mRegisterGroupList, mProperty_mRegisters COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupDeclarationAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ("controlRegisterGroupDeclarationAST",
                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST GALGAS_controlRegisterGroupDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupDeclarationAST result ;
  const GALGAS_controlRegisterGroupDeclarationAST * p = (const GALGAS_controlRegisterGroupDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterGroupDeclarationAST_2D_weak::objectCompare (const GALGAS_controlRegisterGroupDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_controlRegisterGroupDeclarationAST_2D_weak::GALGAS_controlRegisterGroupDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST_2D_weak & GALGAS_controlRegisterGroupDeclarationAST_2D_weak::operator = (const GALGAS_controlRegisterGroupDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST_2D_weak::GALGAS_controlRegisterGroupDeclarationAST_2D_weak (const GALGAS_controlRegisterGroupDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST_2D_weak GALGAS_controlRegisterGroupDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_controlRegisterGroupDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST GALGAS_controlRegisterGroupDeclarationAST_2D_weak::bang_controlRegisterGroupDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_controlRegisterGroupDeclarationAST) ;
      result = GALGAS_controlRegisterGroupDeclarationAST ((cPtr_controlRegisterGroupDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST_2D_weak ("controlRegisterGroupDeclarationAST-weak",
                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST_2D_weak GALGAS_controlRegisterGroupDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupDeclarationAST_2D_weak result ;
  const GALGAS_controlRegisterGroupDeclarationAST_2D_weak * p = (const GALGAS_controlRegisterGroupDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterFieldList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterFieldList : public cCollectionElement {
  public: GALGAS_controlRegisterFieldList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_controlRegisterFieldList (const GALGAS_uint & in_mFieldBitCount,
                                                       const GALGAS_string & in_mFieldName
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controlRegisterFieldList (const GALGAS_controlRegisterFieldList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterFieldList::cCollectionElement_controlRegisterFieldList (const GALGAS_uint & in_mFieldBitCount,
                                                                                          const GALGAS_string & in_mFieldName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldBitCount, in_mFieldName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterFieldList::cCollectionElement_controlRegisterFieldList (const GALGAS_controlRegisterFieldList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFieldBitCount, inElement.mProperty_mFieldName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterFieldList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterFieldList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controlRegisterFieldList (mObject.mProperty_mFieldBitCount, mObject.mProperty_mFieldName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_controlRegisterFieldList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldBitCount" ":" ;
  mObject.mProperty_mFieldBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldName" ":" ;
  mObject.mProperty_mFieldName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_controlRegisterFieldList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterFieldList * operand = (cCollectionElement_controlRegisterFieldList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterFieldList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList::GALGAS_controlRegisterFieldList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList::GALGAS_controlRegisterFieldList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterFieldList (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                                            const GALGAS_string & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controlRegisterFieldList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterFieldList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_uint & in_mFieldBitCount,
                                                                 const GALGAS_string & in_mFieldName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterFieldList * p = nullptr ;
  macroMyNew (p, cCollectionElement_controlRegisterFieldList (in_mFieldBitCount,
                                                              in_mFieldName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                           const GALGAS_string & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controlRegisterFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_append (const GALGAS_uint inOperand0,
                                                     const GALGAS_string inOperand1,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controlRegisterFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                            const GALGAS_string inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_controlRegisterFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
        outOperand0 = p->mObject.mProperty_mFieldBitCount ;
        outOperand1 = p->mObject.mProperty_mFieldName ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_popFirst (GALGAS_uint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_popLast (GALGAS_uint & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::method_first (GALGAS_uint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::method_last (GALGAS_uint & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::add_operation (const GALGAS_controlRegisterFieldList & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::plusAssign_operation (const GALGAS_controlRegisterFieldList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_setMFieldBitCountAtIndex (GALGAS_uint inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFieldBitCount = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterFieldList::getter_mFieldBitCountAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    result = p->mObject.mProperty_mFieldBitCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_setMFieldNameAtIndex (GALGAS_string inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFieldName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_controlRegisterFieldList::getter_mFieldNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    result = p->mObject.mProperty_mFieldName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterFieldList::cEnumerator_controlRegisterFieldList (const GALGAS_controlRegisterFieldList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList_2D_element cEnumerator_controlRegisterFieldList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterFieldList::current_mFieldBitCount (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject.mProperty_mFieldBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_controlRegisterFieldList::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject.mProperty_mFieldName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterFieldList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldList ("controlRegisterFieldList",
                                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterFieldList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList result ;
  const GALGAS_controlRegisterFieldList * p = (const GALGAS_controlRegisterFieldList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterFieldList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterFieldMap::cMapElement_controlRegisterFieldMap (const GALGAS_lstring & inKey,
                                                                          const GALGAS_uint & in_mBitIndex,
                                                                          const GALGAS_uint & in_mBitCount
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mBitIndex (in_mBitIndex),
mProperty_mBitCount (in_mBitCount) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_controlRegisterFieldMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_controlRegisterFieldMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_controlRegisterFieldMap (mProperty_lkey, mProperty_mBitIndex, mProperty_mBitCount COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_controlRegisterFieldMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitIndex" ":" ;
  mProperty_mBitIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_controlRegisterFieldMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterFieldMap * operand = (cMapElement_controlRegisterFieldMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mBitIndex.objectCompare (operand->mProperty_mBitIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap::GALGAS_controlRegisterFieldMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap::GALGAS_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap & GALGAS_controlRegisterFieldMap::operator = (const GALGAS_controlRegisterFieldMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::constructor_mapWithMapToOverride (const GALGAS_controlRegisterFieldMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & inArgument0,
                                                          const GALGAS_uint & inArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterFieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterFieldMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::add_operation (const GALGAS_controlRegisterFieldMap & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldMap result = *this ;
  cEnumerator_controlRegisterFieldMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mBitIndex (HERE), enumerator.current_mBitCount (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_uint inArgument0,
                                                       GALGAS_uint inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterFieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' slice has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_controlRegisterFieldMap_searchKey = "the '%K' slice is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_uint & outArgument0,
                                                       GALGAS_uint & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_controlRegisterFieldMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    outArgument0 = p->mProperty_mBitIndex ;
    outArgument1 = p->mProperty_mBitCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterFieldMap::getter_mBitIndexForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    result = p->mProperty_mBitIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterFieldMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap::setter_setMBitIndexForKey (GALGAS_uint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterFieldMap * p = (cMapElement_controlRegisterFieldMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    p->mProperty_mBitIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterFieldMap * p = (cMapElement_controlRegisterFieldMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterFieldMap * GALGAS_controlRegisterFieldMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * result = (cMapElement_controlRegisterFieldMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterFieldMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterFieldMap::cEnumerator_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element cEnumerator_controlRegisterFieldMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return GALGAS_controlRegisterFieldMap_2D_element (p->mProperty_lkey, p->mProperty_mBitIndex, p->mProperty_mBitCount) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterFieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterFieldMap::current_mBitIndex (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return p->mProperty_mBitIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterFieldMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return p->mProperty_mBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterFieldMap::optional_searchKey (const GALGAS_string & inKey,
                                                         GALGAS_uint & outArgument0,
                                                         GALGAS_uint & outArgument1) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    outArgument0 = p->mProperty_mBitIndex ;
    outArgument1 = p->mProperty_mBitCount ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterFieldMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldMap ("controlRegisterFieldMap",
                                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  const GALGAS_controlRegisterFieldMap * p = (const GALGAS_controlRegisterFieldMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_sliceMap::cMapElement_sliceMap (const GALGAS_lstring & inKey,
                                            const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                            const GALGAS_bigint & in_mAccessRightOperand,
                                            const GALGAS_omnibusType & in_mResultType
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAccessOperator (in_mAccessOperator),
mProperty_mAccessRightOperand (in_mAccessRightOperand),
mProperty_mResultType (in_mResultType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_sliceMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_sliceMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_sliceMap (mProperty_lkey, mProperty_mAccessOperator, mProperty_mAccessRightOperand, mProperty_mResultType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_sliceMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessOperator" ":" ;
  mProperty_mAccessOperator.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessRightOperand" ":" ;
  mProperty_mAccessRightOperand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mProperty_mResultType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_sliceMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_sliceMap * operand = (cMapElement_sliceMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mAccessOperator.objectCompare (operand->mProperty_mAccessOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessRightOperand.objectCompare (operand->mProperty_mAccessRightOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (operand->mProperty_mResultType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap::GALGAS_sliceMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap::GALGAS_sliceMap (const GALGAS_sliceMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap & GALGAS_sliceMap::operator = (const GALGAS_sliceMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_sliceMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_sliceMap::constructor_mapWithMapToOverride (const GALGAS_sliceMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_sliceMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_sliceMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_llvmBinaryOperation & inArgument0,
                                           const GALGAS_bigint & inArgument1,
                                           const GALGAS_omnibusType & inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * p = nullptr ;
  macroMyNew (p, cMapElement_sliceMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@sliceMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_sliceMap::add_operation (const GALGAS_sliceMap & inOperand,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sliceMap result = *this ;
  cEnumerator_sliceMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mAccessOperator (HERE), enumerator.current_mAccessRightOperand (HERE), enumerator.current_mResultType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_llvmBinaryOperation inArgument0,
                                        GALGAS_bigint inArgument1,
                                        GALGAS_omnibusType inArgument2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * p = nullptr ;
  macroMyNew (p, cMapElement_sliceMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' slice has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_sliceMap_searchKey = "the '%K' slice is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_llvmBinaryOperation & outArgument0,
                                        GALGAS_bigint & outArgument1,
                                        GALGAS_omnibusType & outArgument2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_sliceMap_searchKey
                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    outArgument0 = p->mProperty_mAccessOperator ;
    outArgument1 = p->mProperty_mAccessRightOperand ;
    outArgument2 = p->mProperty_mResultType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_sliceMap::getter_mAccessOperatorForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_llvmBinaryOperation result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mAccessOperator ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_sliceMap::getter_mAccessRightOperandForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_bigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mAccessRightOperand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_sliceMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::setter_setMAccessOperatorForKey (GALGAS_llvmBinaryOperation inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mAccessOperator = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::setter_setMAccessRightOperandForKey (GALGAS_bigint inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mAccessRightOperand = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::setter_setMResultTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_sliceMap * GALGAS_sliceMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * result = (cMapElement_sliceMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_sliceMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sliceMap::cEnumerator_sliceMap (const GALGAS_sliceMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element cEnumerator_sliceMap::current (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return GALGAS_sliceMap_2D_element (p->mProperty_lkey, p->mProperty_mAccessOperator, p->mProperty_mAccessRightOperand, p->mProperty_mResultType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sliceMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation cEnumerator_sliceMap::current_mAccessOperator (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mAccessOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_sliceMap::current_mAccessRightOperand (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mAccessRightOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_sliceMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mResultType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_sliceMap::optional_searchKey (const GALGAS_string & inKey,
                                          GALGAS_llvmBinaryOperation & outArgument0,
                                          GALGAS_bigint & outArgument1,
                                          GALGAS_omnibusType & outArgument2) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    outArgument0 = p->mProperty_mAccessOperator ;
    outArgument1 = p->mProperty_mAccessRightOperand ;
    outArgument2 = p->mProperty_mResultType ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @sliceMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceMap ("sliceMap",
                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_sliceMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  const GALGAS_sliceMap * p = (const GALGAS_sliceMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation::GALGAS_llvmBinaryOperation (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_addNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_addNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_subNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_subNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_mulNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_mulNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_udivNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_udivNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sdivNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uremNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uremNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sremNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sremNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uaddOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uaddOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_saddOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_saddOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_usubOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_usubOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ssubOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ssubOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_umulOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_umulOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_smulOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_smulOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_udivOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_udivOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sdivOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sdivOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uremOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uremOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sremOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sremOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_and (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_and ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ior (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ior ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_xor (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_xor ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_shl (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_shl ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ashr (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ashr ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_lshr (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_lshr ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_eq ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ult ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ule ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_slt ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sle ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_addNoOVF () const {
  const bool ok = mEnum == kEnum_addNoOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_subNoOVF () const {
  const bool ok = mEnum == kEnum_subNoOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_mulNoOVF () const {
  const bool ok = mEnum == kEnum_mulNoOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_udivNoOVF () const {
  const bool ok = mEnum == kEnum_udivNoOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_sdivNoOVF () const {
  const bool ok = mEnum == kEnum_sdivNoOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_uremNoOVF () const {
  const bool ok = mEnum == kEnum_uremNoOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_sremNoOVF () const {
  const bool ok = mEnum == kEnum_sremNoOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_uaddOVF () const {
  const bool ok = mEnum == kEnum_uaddOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_saddOVF () const {
  const bool ok = mEnum == kEnum_saddOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_usubOVF () const {
  const bool ok = mEnum == kEnum_usubOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_ssubOVF () const {
  const bool ok = mEnum == kEnum_ssubOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_umulOVF () const {
  const bool ok = mEnum == kEnum_umulOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_smulOVF () const {
  const bool ok = mEnum == kEnum_smulOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_udivOVF () const {
  const bool ok = mEnum == kEnum_udivOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_sdivOVF () const {
  const bool ok = mEnum == kEnum_sdivOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_uremOVF () const {
  const bool ok = mEnum == kEnum_uremOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_sremOVF () const {
  const bool ok = mEnum == kEnum_sremOVF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_and () const {
  const bool ok = mEnum == kEnum_and ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_ior () const {
  const bool ok = mEnum == kEnum_ior ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_xor () const {
  const bool ok = mEnum == kEnum_xor ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_shl () const {
  const bool ok = mEnum == kEnum_shl ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_ashr () const {
  const bool ok = mEnum == kEnum_ashr ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_lshr () const {
  const bool ok = mEnum == kEnum_lshr ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_icmp_5F_eq () const {
  const bool ok = mEnum == kEnum_icmp_5F_eq ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_icmp_5F_ult () const {
  const bool ok = mEnum == kEnum_icmp_5F_ult ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_icmp_5F_ule () const {
  const bool ok = mEnum == kEnum_icmp_5F_ule ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_icmp_5F_slt () const {
  const bool ok = mEnum == kEnum_icmp_5F_slt ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmBinaryOperation::optional_icmp_5F_sle () const {
  const bool ok = mEnum == kEnum_icmp_5F_sle ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmBinaryOperation [29] = {
  "(not built)",
  "addNoOVF",
  "subNoOVF",
  "mulNoOVF",
  "udivNoOVF",
  "sdivNoOVF",
  "uremNoOVF",
  "sremNoOVF",
  "uaddOVF",
  "saddOVF",
  "usubOVF",
  "ssubOVF",
  "umulOVF",
  "smulOVF",
  "udivOVF",
  "sdivOVF",
  "uremOVF",
  "sremOVF",
  "and",
  "ior",
  "xor",
  "shl",
  "ashr",
  "lshr",
  "icmp_eq",
  "icmp_ult",
  "icmp_ule",
  "icmp_slt",
  "icmp_sle"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAddNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSubNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isMulNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_udivNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sdivNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uremNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sremNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUaddOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uaddOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSaddOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_saddOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUsubOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_usubOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSsubOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ssubOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUmulOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_umulOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSmulOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_smulOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUdivOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_udivOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSdivOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sdivOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUremOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uremOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSremOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sremOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAnd (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_and == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ior == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isXor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_xor == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isShl (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_shl == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAshr (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ashr == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isLshr (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lshr == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_eq (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_eq == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ult (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ult == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ule (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ule == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_slt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_slt == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sle == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmBinaryOperation::description (C_String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString << "<enum @llvmBinaryOperation: " << gEnumNameArrayFor_llvmBinaryOperation [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_llvmBinaryOperation::objectCompare (const GALGAS_llvmBinaryOperation & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmBinaryOperation generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmBinaryOperation ("llvmBinaryOperation",
                                            nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmBinaryOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmBinaryOperation ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmBinaryOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmBinaryOperation (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  const GALGAS_llvmBinaryOperation * p = (const GALGAS_llvmBinaryOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmBinaryOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmBinaryOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupDeclarationAST noteTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_noteTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = this ;
  cEnumerator_controlRegisterDeclarationList enumerator_11641 (temp_0.readProperty_mRegisters (), kENUMERATION_UP) ;
  while (enumerator_11641.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_11641.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 298)), enumerator_11641.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas", 298)) ;
    }
    enumerator_11641.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_controlRegisterGroupDeclarationAST) ;
    inObject->method_noteTypesInPrecedenceGraph  (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterMap::cMapElement_controlRegisterMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_omnibusType & in_mType,
                                                                const GALGAS_bool & in_mIsReadOnly,
                                                                const GALGAS_bool & in_mUserAccess,
                                                                const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                                const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                const GALGAS_bigint & in_mAddressOffset,
                                                                const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                const GALGAS_uint & in_mRegisterBitCount,
                                                                const GALGAS_uint & in_mArraySize,
                                                                const GALGAS_uint & in_mElementArraySize
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mIsReadOnly (in_mIsReadOnly),
mProperty_mUserAccess (in_mUserAccess),
mProperty_mRegisterFieldAccessMap (in_mRegisterFieldAccessMap),
mProperty_mRegisterFieldMap (in_mRegisterFieldMap),
mProperty_mAddressOffset (in_mAddressOffset),
mProperty_mControlRegisterFieldList (in_mControlRegisterFieldList),
mProperty_mRegisterBitCount (in_mRegisterBitCount),
mProperty_mArraySize (in_mArraySize),
mProperty_mElementArraySize (in_mElementArraySize) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_controlRegisterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_controlRegisterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_controlRegisterMap (mProperty_lkey, mProperty_mType, mProperty_mIsReadOnly, mProperty_mUserAccess, mProperty_mRegisterFieldAccessMap, mProperty_mRegisterFieldMap, mProperty_mAddressOffset, mProperty_mControlRegisterFieldList, mProperty_mRegisterBitCount, mProperty_mArraySize, mProperty_mElementArraySize COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_controlRegisterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsReadOnly" ":" ;
  mProperty_mIsReadOnly.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUserAccess" ":" ;
  mProperty_mUserAccess.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldAccessMap" ":" ;
  mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldMap" ":" ;
  mProperty_mRegisterFieldMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddressOffset" ":" ;
  mProperty_mAddressOffset.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterFieldList" ":" ;
  mProperty_mControlRegisterFieldList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitCount" ":" ;
  mProperty_mRegisterBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArraySize" ":" ;
  mProperty_mArraySize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElementArraySize" ":" ;
  mProperty_mElementArraySize.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_controlRegisterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterMap * operand = (cMapElement_controlRegisterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (operand->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsReadOnly.objectCompare (operand->mProperty_mIsReadOnly) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserAccess.objectCompare (operand->mProperty_mUserAccess) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterFieldAccessMap.objectCompare (operand->mProperty_mRegisterFieldAccessMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterFieldMap.objectCompare (operand->mProperty_mRegisterFieldMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddressOffset.objectCompare (operand->mProperty_mAddressOffset) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterFieldList.objectCompare (operand->mProperty_mControlRegisterFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterBitCount.objectCompare (operand->mProperty_mRegisterBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (operand->mProperty_mArraySize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementArraySize.objectCompare (operand->mProperty_mElementArraySize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap::GALGAS_controlRegisterMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap::GALGAS_controlRegisterMap (const GALGAS_controlRegisterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap & GALGAS_controlRegisterMap::operator = (const GALGAS_controlRegisterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::constructor_mapWithMapToOverride (const GALGAS_controlRegisterMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_omnibusType & inArgument0,
                                                     const GALGAS_bool & inArgument1,
                                                     const GALGAS_bool & inArgument2,
                                                     const GALGAS_sliceMap & inArgument3,
                                                     const GALGAS_controlRegisterFieldMap & inArgument4,
                                                     const GALGAS_bigint & inArgument5,
                                                     const GALGAS_controlRegisterFieldList & inArgument6,
                                                     const GALGAS_uint & inArgument7,
                                                     const GALGAS_uint & inArgument8,
                                                     const GALGAS_uint & inArgument9,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::add_operation (const GALGAS_controlRegisterMap & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterMap result = *this ;
  cEnumerator_controlRegisterMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mType (HERE), enumerator.current_mIsReadOnly (HERE), enumerator.current_mUserAccess (HERE), enumerator.current_mRegisterFieldAccessMap (HERE), enumerator.current_mRegisterFieldMap (HERE), enumerator.current_mAddressOffset (HERE), enumerator.current_mControlRegisterFieldList (HERE), enumerator.current_mRegisterBitCount (HERE), enumerator.current_mArraySize (HERE), enumerator.current_mElementArraySize (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_omnibusType inArgument0,
                                                  GALGAS_bool inArgument1,
                                                  GALGAS_bool inArgument2,
                                                  GALGAS_sliceMap inArgument3,
                                                  GALGAS_controlRegisterFieldMap inArgument4,
                                                  GALGAS_bigint inArgument5,
                                                  GALGAS_controlRegisterFieldList inArgument6,
                                                  GALGAS_uint inArgument7,
                                                  GALGAS_uint inArgument8,
                                                  GALGAS_uint inArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' control register has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_controlRegisterMap_searchKey = "the '%K' control register is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_omnibusType & outArgument0,
                                                  GALGAS_bool & outArgument1,
                                                  GALGAS_bool & outArgument2,
                                                  GALGAS_sliceMap & outArgument3,
                                                  GALGAS_controlRegisterFieldMap & outArgument4,
                                                  GALGAS_bigint & outArgument5,
                                                  GALGAS_controlRegisterFieldList & outArgument6,
                                                  GALGAS_uint & outArgument7,
                                                  GALGAS_uint & outArgument8,
                                                  GALGAS_uint & outArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_controlRegisterMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
    outArgument9.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mIsReadOnly ;
    outArgument2 = p->mProperty_mUserAccess ;
    outArgument3 = p->mProperty_mRegisterFieldAccessMap ;
    outArgument4 = p->mProperty_mRegisterFieldMap ;
    outArgument5 = p->mProperty_mAddressOffset ;
    outArgument6 = p->mProperty_mControlRegisterFieldList ;
    outArgument7 = p->mProperty_mRegisterBitCount ;
    outArgument8 = p->mProperty_mArraySize ;
    outArgument9 = p->mProperty_mElementArraySize ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_controlRegisterMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterMap::getter_mIsReadOnlyForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mIsReadOnly ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterMap::getter_mUserAccessForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mUserAccess ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_controlRegisterMap::getter_mRegisterFieldAccessMapForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_sliceMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterFieldAccessMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterMap::getter_mRegisterFieldMapForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_controlRegisterFieldMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterFieldMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_controlRegisterMap::getter_mAddressOffsetForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mAddressOffset ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterMap::getter_mControlRegisterFieldListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_controlRegisterFieldList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mControlRegisterFieldList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterMap::getter_mRegisterBitCountForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterBitCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterMap::getter_mArraySizeForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mArraySize ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterMap::getter_mElementArraySizeForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mElementArraySize ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMIsReadOnlyForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mIsReadOnly = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMUserAccessForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mUserAccess = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMRegisterFieldAccessMapForKey (GALGAS_sliceMap inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterFieldAccessMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMRegisterFieldMapForKey (GALGAS_controlRegisterFieldMap inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterFieldMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMAddressOffsetForKey (GALGAS_bigint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mAddressOffset = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMControlRegisterFieldListForKey (GALGAS_controlRegisterFieldList inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mControlRegisterFieldList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMRegisterBitCountForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterBitCount = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMArraySizeForKey (GALGAS_uint inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mArraySize = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMElementArraySizeForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mElementArraySize = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterMap * GALGAS_controlRegisterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * result = (cMapElement_controlRegisterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterMap::cEnumerator_controlRegisterMap (const GALGAS_controlRegisterMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element cEnumerator_controlRegisterMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return GALGAS_controlRegisterMap_2D_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mIsReadOnly, p->mProperty_mUserAccess, p->mProperty_mRegisterFieldAccessMap, p->mProperty_mRegisterFieldMap, p->mProperty_mAddressOffset, p->mProperty_mControlRegisterFieldList, p->mProperty_mRegisterBitCount, p->mProperty_mArraySize, p->mProperty_mElementArraySize) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_controlRegisterMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_controlRegisterMap::current_mIsReadOnly (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mIsReadOnly ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_controlRegisterMap::current_mUserAccess (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mUserAccess ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap cEnumerator_controlRegisterMap::current_mRegisterFieldAccessMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterFieldAccessMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap cEnumerator_controlRegisterMap::current_mRegisterFieldMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterFieldMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_controlRegisterMap::current_mAddressOffset (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mAddressOffset ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList cEnumerator_controlRegisterMap::current_mControlRegisterFieldList (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mControlRegisterFieldList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterMap::current_mRegisterBitCount (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterMap::current_mArraySize (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mArraySize ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterMap::current_mElementArraySize (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mElementArraySize ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_omnibusType & outArgument0,
                                                    GALGAS_bool & outArgument1,
                                                    GALGAS_bool & outArgument2,
                                                    GALGAS_sliceMap & outArgument3,
                                                    GALGAS_controlRegisterFieldMap & outArgument4,
                                                    GALGAS_bigint & outArgument5,
                                                    GALGAS_controlRegisterFieldList & outArgument6,
                                                    GALGAS_uint & outArgument7,
                                                    GALGAS_uint & outArgument8,
                                                    GALGAS_uint & outArgument9) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mIsReadOnly ;
    outArgument2 = p->mProperty_mUserAccess ;
    outArgument3 = p->mProperty_mRegisterFieldAccessMap ;
    outArgument4 = p->mProperty_mRegisterFieldMap ;
    outArgument5 = p->mProperty_mAddressOffset ;
    outArgument6 = p->mProperty_mControlRegisterFieldList ;
    outArgument7 = p->mProperty_mRegisterBitCount ;
    outArgument8 = p->mProperty_mArraySize ;
    outArgument9 = p->mProperty_mElementArraySize ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
    outArgument9.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterMap ("controlRegisterMap",
                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  const GALGAS_controlRegisterMap * p = (const GALGAS_controlRegisterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_registerGroupKind_single::cEnumAssociatedValues_registerGroupKind_single (const GALGAS_bigint inAssociatedValue0
                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_registerGroupKind_single::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_registerGroupKind_single::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerGroupKind_single * ptr = dynamic_cast<const cEnumAssociatedValues_registerGroupKind_single *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_registerGroupKind_arrayGroup::cEnumAssociatedValues_registerGroupKind_arrayGroup (const GALGAS_lbigintlist inAssociatedValue0
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_registerGroupKind_arrayGroup::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_registerGroupKind_arrayGroup::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerGroupKind_arrayGroup * ptr = dynamic_cast<const cEnumAssociatedValues_registerGroupKind_arrayGroup *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind::GALGAS_registerGroupKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind GALGAS_registerGroupKind::constructor_single (const GALGAS_bigint & inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_single ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_registerGroupKind_single (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind GALGAS_registerGroupKind::constructor_arrayGroup (const GALGAS_lbigintlist & inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_arrayGroup ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_registerGroupKind_arrayGroup (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupKind::method_single (GALGAS_bigint & outAssociatedValue0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_single) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @registerGroupKind single invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerGroupKind_single * ptr = (const cEnumAssociatedValues_registerGroupKind_single *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupKind::method_arrayGroup (GALGAS_lbigintlist & outAssociatedValue0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayGroup) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @registerGroupKind arrayGroup invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerGroupKind_arrayGroup * ptr = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_registerGroupKind::optional_single (GALGAS_bigint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_single ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_registerGroupKind_single *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_registerGroupKind::optional_arrayGroup (GALGAS_lbigintlist & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_arrayGroup ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerGroupKind [3] = {
  "(not built)",
  "single",
  "arrayGroup"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerGroupKind::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_single == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerGroupKind::getter_isArrayGroup (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayGroup == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupKind::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @registerGroupKind: " << gEnumNameArrayFor_registerGroupKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_registerGroupKind::objectCompare (const GALGAS_registerGroupKind & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//     @registerGroupKind generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerGroupKind ("registerGroupKind",
                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerGroupKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerGroupKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind GALGAS_registerGroupKind::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupKind result ;
  const GALGAS_registerGroupKind * p = (const GALGAS_registerGroupKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerGroupKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::objectCompare (const GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak & inOperand) const {
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

GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak & GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::operator = (const GALGAS_decoratedControlRegisterArrayGroupDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak (const GALGAS_decoratedControlRegisterArrayGroupDeclaration & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::bang_decoratedControlRegisterArrayGroupDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
      result = GALGAS_decoratedControlRegisterArrayGroupDeclaration ((cPtr_decoratedControlRegisterArrayGroupDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @decoratedControlRegisterArrayGroupDeclaration-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak ("decoratedControlRegisterArrayGroupDeclaration-weak",
                                                                              & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak result ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak * p = (const GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedControlRegisterArrayGroupDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterGroupArrayList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterGroupArrayList : public cCollectionElement {
  public: GALGAS_controlRegisterGroupArrayList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_controlRegisterGroupArrayList (const GALGAS_lstring & in_mGroupName,
                                                            const GALGAS_lbigintlist & in_mBaseAddresses
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterGroupArrayList::cCollectionElement_controlRegisterGroupArrayList (const GALGAS_lstring & in_mGroupName,
                                                                                                    const GALGAS_lbigintlist & in_mBaseAddresses
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupName, in_mBaseAddresses) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterGroupArrayList::cCollectionElement_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupName, inElement.mProperty_mBaseAddresses) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterGroupArrayList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterGroupArrayList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controlRegisterGroupArrayList (mObject.mProperty_mGroupName, mObject.mProperty_mBaseAddresses COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_controlRegisterGroupArrayList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupName" ":" ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBaseAddresses" ":" ;
  mObject.mProperty_mBaseAddresses.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_controlRegisterGroupArrayList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterGroupArrayList * operand = (cCollectionElement_controlRegisterGroupArrayList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterGroupArrayList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList::GALGAS_controlRegisterGroupArrayList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList::GALGAS_controlRegisterGroupArrayList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterGroupArrayList (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lbigintlist & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controlRegisterGroupArrayList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterGroupArrayList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mGroupName,
                                                                      const GALGAS_lbigintlist & in_mBaseAddresses
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterGroupArrayList * p = nullptr ;
  macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (in_mGroupName,
                                                                   in_mBaseAddresses COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lbigintlist & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_append (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lbigintlist inOperand1,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lbigintlist inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lbigintlist & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
        outOperand0 = p->mObject.mProperty_mGroupName ;
        outOperand1 = p->mObject.mProperty_mBaseAddresses ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lbigintlist & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lbigintlist & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lbigintlist & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lbigintlist & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::add_operation (const GALGAS_controlRegisterGroupArrayList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result = GALGAS_controlRegisterGroupArrayList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result = GALGAS_controlRegisterGroupArrayList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result = GALGAS_controlRegisterGroupArrayList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::plusAssign_operation (const GALGAS_controlRegisterGroupArrayList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_setMGroupNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_controlRegisterGroupArrayList::getter_mGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_setMBaseAddressesAtIndex (GALGAS_lbigintlist inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBaseAddresses = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigintlist GALGAS_controlRegisterGroupArrayList::getter_mBaseAddressesAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  GALGAS_lbigintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    result = p->mObject.mProperty_mBaseAddresses ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterGroupArrayList::cEnumerator_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element cEnumerator_controlRegisterGroupArrayList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterGroupArrayList * p = (const cCollectionElement_controlRegisterGroupArrayList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterGroupArrayList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterGroupArrayList * p = (const cCollectionElement_controlRegisterGroupArrayList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
  return p->mObject.mProperty_mGroupName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigintlist cEnumerator_controlRegisterGroupArrayList::current_mBaseAddresses (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterGroupArrayList * p = (const cCollectionElement_controlRegisterGroupArrayList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
  return p->mObject.mProperty_mBaseAddresses ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupArrayList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ("controlRegisterGroupArrayList",
                                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupArrayList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupArrayList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupArrayList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList result ;
  const GALGAS_controlRegisterGroupArrayList * p = (const GALGAS_controlRegisterGroupArrayList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupArrayList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupArrayList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterByAddress' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_controlRegisterByAddress : public cSortedListElement {
  public: GALGAS_controlRegisterByAddress_2D_element mObject ;

//--- Constructor
  public: cSortedListElement_controlRegisterByAddress (const GALGAS_bigint & in_mAddress,
                                                       const GALGAS_string & in_mHTML
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_controlRegisterByAddress::cSortedListElement_controlRegisterByAddress (const GALGAS_bigint & in_mAddress,
                                                                                          const GALGAS_string & in_mHTML
                                                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mAddress, in_mHTML) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_controlRegisterByAddress::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_controlRegisterByAddress::copy (void) {
  cSortedListElement * result = nullptr ;
  macroMyNew (result, cSortedListElement_controlRegisterByAddress (mObject.mProperty_mAddress, mObject.mProperty_mHTML COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_controlRegisterByAddress::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddress" ":" ;
  mObject.mProperty_mAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHTML" ":" ;
  mObject.mProperty_mHTML.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_controlRegisterByAddress::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_controlRegisterByAddress * operand = (cSortedListElement_controlRegisterByAddress *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByAddress) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByAddress::GALGAS_controlRegisterByAddress (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_controlRegisterByAddress::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_controlRegisterByAddress * operand = (const cSortedListElement_controlRegisterByAddress *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByAddress) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mAddress.objectCompare (operand->mObject.mProperty_mAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByAddress GALGAS_controlRegisterByAddress::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_controlRegisterByAddress result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByAddress GALGAS_controlRegisterByAddress::constructor_sortedListWithValue (const GALGAS_bigint & inOperand0,
                                                                                                  const GALGAS_string & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByAddress result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_controlRegisterByAddress (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::addAssign_operation (const GALGAS_bigint & inOperand0,
                                                           const GALGAS_string & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_controlRegisterByAddress (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::setter_insert (const GALGAS_bigint inOperand0,
                                                     const GALGAS_string inOperand1,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_controlRegisterByAddress (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::plusAssign_operation (const GALGAS_controlRegisterByAddress inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::setter_popSmallest (GALGAS_bigint & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::setter_popGreatest (GALGAS_bigint & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::method_smallest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::method_greatest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterByAddress::cEnumerator_controlRegisterByAddress (const GALGAS_controlRegisterByAddress & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByAddress_2D_element cEnumerator_controlRegisterByAddress::current (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByAddress * p = (const cSortedListElement_controlRegisterByAddress *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_controlRegisterByAddress::current_mAddress (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByAddress * p = (const cSortedListElement_controlRegisterByAddress *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
  return p->mObject.mProperty_mAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_controlRegisterByAddress::current_mHTML (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByAddress * p = (const cSortedListElement_controlRegisterByAddress *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
  return p->mObject.mProperty_mHTML ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterByAddress generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterByAddress ("controlRegisterByAddress",
                                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterByAddress::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterByAddress::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterByAddress (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByAddress GALGAS_controlRegisterByAddress::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByAddress result ;
  const GALGAS_controlRegisterByAddress * p = (const GALGAS_controlRegisterByAddress *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterByAddress *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByAddress", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterByName' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_controlRegisterByName : public cSortedListElement {
  public: GALGAS_controlRegisterByName_2D_element mObject ;

//--- Constructor
  public: cSortedListElement_controlRegisterByName (const GALGAS_bigint & in_mAddress,
                                                    const GALGAS_string & in_mHTML,
                                                    const GALGAS_string & in_mName
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_controlRegisterByName::cSortedListElement_controlRegisterByName (const GALGAS_bigint & in_mAddress,
                                                                                    const GALGAS_string & in_mHTML,
                                                                                    const GALGAS_string & in_mName
                                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mAddress, in_mHTML, in_mName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_controlRegisterByName::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_controlRegisterByName::copy (void) {
  cSortedListElement * result = nullptr ;
  macroMyNew (result, cSortedListElement_controlRegisterByName (mObject.mProperty_mAddress, mObject.mProperty_mHTML, mObject.mProperty_mName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_controlRegisterByName::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddress" ":" ;
  mObject.mProperty_mAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHTML" ":" ;
  mObject.mProperty_mHTML.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_controlRegisterByName::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_controlRegisterByName * operand = (cSortedListElement_controlRegisterByName *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByName) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName::GALGAS_controlRegisterByName (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_controlRegisterByName::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_controlRegisterByName * operand = (const cSortedListElement_controlRegisterByName *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByName) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mName.objectCompare (operand->mObject.mProperty_mName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_controlRegisterByName result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::constructor_sortedListWithValue (const GALGAS_bigint & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_string & inOperand2
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByName result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_controlRegisterByName (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::addAssign_operation (const GALGAS_bigint & inOperand0,
                                                        const GALGAS_string & inOperand1,
                                                        const GALGAS_string & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_controlRegisterByName (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::setter_insert (const GALGAS_bigint inOperand0,
                                                  const GALGAS_string inOperand1,
                                                  const GALGAS_string inOperand2,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_controlRegisterByName (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::plusAssign_operation (const GALGAS_controlRegisterByName inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::setter_popSmallest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::setter_popGreatest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::method_smallest (GALGAS_bigint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::method_greatest (GALGAS_bigint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterByName::cEnumerator_controlRegisterByName (const GALGAS_controlRegisterByName & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName_2D_element cEnumerator_controlRegisterByName::current (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_controlRegisterByName::current_mAddress (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_controlRegisterByName::current_mHTML (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mHTML ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_controlRegisterByName::current_mName (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mName ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//     @controlRegisterByName generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterByName ("controlRegisterByName",
                                              nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterByName::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByName ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterByName::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterByName (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByName result ;
  const GALGAS_controlRegisterByName * p = (const GALGAS_controlRegisterByName *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterByName *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByName", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_globalConstantDeclarationAST_2D_weak::objectCompare (const GALGAS_globalConstantDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_globalConstantDeclarationAST_2D_weak::GALGAS_globalConstantDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak & GALGAS_globalConstantDeclarationAST_2D_weak::operator = (const GALGAS_globalConstantDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak::GALGAS_globalConstantDeclarationAST_2D_weak (const GALGAS_globalConstantDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak GALGAS_globalConstantDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_globalConstantDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST GALGAS_globalConstantDeclarationAST_2D_weak::bang_globalConstantDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_globalConstantDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_globalConstantDeclarationAST) ;
      result = GALGAS_globalConstantDeclarationAST ((cPtr_globalConstantDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @globalConstantDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantDeclarationAST_2D_weak ("globalConstantDeclarationAST-weak",
                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalConstantDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalConstantDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak GALGAS_globalConstantDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantDeclarationAST_2D_weak result ;
  const GALGAS_globalConstantDeclarationAST_2D_weak * p = (const GALGAS_globalConstantDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalConstantDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addDependenceEdgeForStaticExpression (cPtr_expressionAST * inObject,
                                                               const GALGAS_lstring constin_inConstantName,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    inObject->method_addDependenceEdgeForStaticExpression (constin_inConstantName, io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syncToolInstanceDeclarationAST_2D_weak::objectCompare (const GALGAS_syncToolInstanceDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_syncToolInstanceDeclarationAST_2D_weak::GALGAS_syncToolInstanceDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak & GALGAS_syncToolInstanceDeclarationAST_2D_weak::operator = (const GALGAS_syncToolInstanceDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak::GALGAS_syncToolInstanceDeclarationAST_2D_weak (const GALGAS_syncToolInstanceDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak GALGAS_syncToolInstanceDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_syncToolInstanceDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST GALGAS_syncToolInstanceDeclarationAST_2D_weak::bang_syncToolInstanceDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syncToolInstanceDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncToolInstanceDeclarationAST) ;
      result = GALGAS_syncToolInstanceDeclarationAST ((cPtr_syncToolInstanceDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @syncToolInstanceDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2D_weak ("syncToolInstanceDeclarationAST-weak",
                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncToolInstanceDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncToolInstanceDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncToolInstanceDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak GALGAS_syncToolInstanceDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syncToolInstanceDeclarationAST_2D_weak result ;
  const GALGAS_syncToolInstanceDeclarationAST_2D_weak * p = (const GALGAS_syncToolInstanceDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncToolInstanceDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncToolInstanceDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedSyncInstance_2D_weak::objectCompare (const GALGAS_decoratedSyncInstance_2D_weak & inOperand) const {
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

GALGAS_decoratedSyncInstance_2D_weak::GALGAS_decoratedSyncInstance_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak & GALGAS_decoratedSyncInstance_2D_weak::operator = (const GALGAS_decoratedSyncInstance & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak::GALGAS_decoratedSyncInstance_2D_weak (const GALGAS_decoratedSyncInstance & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak GALGAS_decoratedSyncInstance_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance GALGAS_decoratedSyncInstance_2D_weak::bang_decoratedSyncInstance_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedSyncInstance result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedSyncInstance) ;
      result = GALGAS_decoratedSyncInstance ((cPtr_decoratedSyncInstance *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @decoratedSyncInstance-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedSyncInstance_2D_weak ("decoratedSyncInstance-weak",
                                                      & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedSyncInstance_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedSyncInstance_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedSyncInstance_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak GALGAS_decoratedSyncInstance_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance_2D_weak result ;
  const GALGAS_decoratedSyncInstance_2D_weak * p = (const GALGAS_decoratedSyncInstance_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedSyncInstance_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedSyncInstance-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

