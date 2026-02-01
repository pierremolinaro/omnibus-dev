#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element::GGS_externProcedureMapIR_2E_element (void) :
mProperty_lkey (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element::GGS_externProcedureMapIR_2E_element (const GGS_externProcedureMapIR_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFormalArgumentListForGeneration (inSource.mProperty_mFormalArgumentListForGeneration),
mProperty_mReturnType (inSource.mProperty_mReturnType) {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element & GGS_externProcedureMapIR_2E_element::operator = (const GGS_externProcedureMapIR_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFormalArgumentListForGeneration = inSource.mProperty_mFormalArgumentListForGeneration ;
  mProperty_mReturnType = inSource.mProperty_mReturnType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element GGS_externProcedureMapIR_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                           const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                           const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externProcedureMapIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  result.mProperty_mReturnType = in_mReturnType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element::GGS_externProcedureMapIR_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_routineFormalArgumentListIR & inOperand1,
                                                                          const GGS_unifiedTypeMapEntry & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mFormalArgumentListForGeneration (inOperand1),
mProperty_mReturnType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_externProcedureMapIR_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReturnType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalArgumentListForGeneration.drop () ;
  mProperty_mReturnType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externProcedureMapIR.element:") ;
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
//     @externProcedureMapIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element ("externProcedureMapIR.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externProcedureMapIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externProcedureMapIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externProcedureMapIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element GGS_externProcedureMapIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_externProcedureMapIR_2E_element result ;
  const GGS_externProcedureMapIR_2E_element * p = (const GGS_externProcedureMapIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externProcedureMapIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeConvertToBooleanAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeConvertToBooleanAST::objectCompare (const GGS_compileTimeConvertToBooleanAST & inOperand) const {
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

GGS_compileTimeConvertToBooleanAST::GGS_compileTimeConvertToBooleanAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST GGS_compileTimeConvertToBooleanAST::
init_21__21__21__21_ (const GGS_lstring & in_mReceiverName,
                      const GGS_lstring & in_mReceiverTypeName,
                      const GGS_lstring & in_mConverterName,
                      const GGS_ctExpressionAST & in_mExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_compileTimeConvertToBooleanAST * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeConvertToBooleanAST (inCompiler COMMA_THERE)) ;
  object->compileTimeConvertToBooleanAST_init_21__21__21__21_ (in_mReceiverName, in_mReceiverTypeName, in_mConverterName, in_mExpression, inCompiler) ;
  const GGS_compileTimeConvertToBooleanAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeConvertToBooleanAST::
compileTimeConvertToBooleanAST_init_21__21__21__21_ (const GGS_lstring & in_mReceiverName,
                                                     const GGS_lstring & in_mReceiverTypeName,
                                                     const GGS_lstring & in_mConverterName,
                                                     const GGS_ctExpressionAST & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mConverterName = in_mConverterName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST::GGS_compileTimeConvertToBooleanAST (const cPtr_compileTimeConvertToBooleanAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeConvertToBooleanAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeConvertToBooleanAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeConvertToBooleanAST::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeConvertToBooleanAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeConvertToBooleanAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeConvertToBooleanAST::readProperty_mConverterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mConverterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeConvertToBooleanAST::setProperty_mConverterName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mConverterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compileTimeConvertToBooleanAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeConvertToBooleanAST::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeConvertToBooleanAST class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeConvertToBooleanAST::cPtr_compileTimeConvertToBooleanAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mConverterName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimeConvertToBooleanAST::cPtr_compileTimeConvertToBooleanAST (const GGS_lstring & in_mReceiverName,
                                                                          const GGS_lstring & in_mReceiverTypeName,
                                                                          const GGS_lstring & in_mConverterName,
                                                                          const GGS_ctExpressionAST & in_mExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_compileTimeConvertToBooleanAST::classDescriptor (void) const {
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

acPtr_class * cPtr_compileTimeConvertToBooleanAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeConvertToBooleanAST (mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mConverterName, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @compileTimeConvertToBooleanAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ("compileTimeConvertToBooleanAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeConvertToBooleanAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeConvertToBooleanAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeConvertToBooleanAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST GGS_compileTimeConvertToBooleanAST::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeConvertToBooleanAST result ;
  const GGS_compileTimeConvertToBooleanAST * p = (const GGS_compileTimeConvertToBooleanAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeConvertToBooleanAST *> (p)) {
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

ComparisonResult GGS_llvmConvertToBooleanAST::objectCompare (const GGS_llvmConvertToBooleanAST & inOperand) const {
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

GGS_llvmConvertToBooleanAST::GGS_llvmConvertToBooleanAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmConvertToBooleanAST GGS_llvmConvertToBooleanAST::
init_21__21__21__21_ (const GGS_lstring & in_mReceiverName,
                      const GGS_lstring & in_mReceiverTypeName,
                      const GGS_lstring & in_mConverterName,
                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_llvmConvertToBooleanAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmConvertToBooleanAST (inCompiler COMMA_THERE)) ;
  object->llvmConvertToBooleanAST_init_21__21__21__21_ (in_mReceiverName, in_mReceiverTypeName, in_mConverterName, in_mInstructionList, inCompiler) ;
  const GGS_llvmConvertToBooleanAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmConvertToBooleanAST::
llvmConvertToBooleanAST_init_21__21__21__21_ (const GGS_lstring & in_mReceiverName,
                                              const GGS_lstring & in_mReceiverTypeName,
                                              const GGS_lstring & in_mConverterName,
                                              const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                              Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mConverterName = in_mConverterName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST::GGS_llvmConvertToBooleanAST (const cPtr_llvmConvertToBooleanAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmConvertToBooleanAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmConvertToBooleanAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmConvertToBooleanAST::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmConvertToBooleanAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmConvertToBooleanAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmConvertToBooleanAST::readProperty_mConverterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mConverterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmConvertToBooleanAST::setProperty_mConverterName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mConverterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmConvertToBooleanAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmConvertToBooleanAST::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmConvertToBooleanAST class
//--------------------------------------------------------------------------------------------------

cPtr_llvmConvertToBooleanAST::cPtr_llvmConvertToBooleanAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mConverterName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmConvertToBooleanAST::cPtr_llvmConvertToBooleanAST (const GGS_lstring & in_mReceiverName,
                                                            const GGS_lstring & in_mReceiverTypeName,
                                                            const GGS_lstring & in_mConverterName,
                                                            const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_llvmConvertToBooleanAST::classDescriptor (void) const {
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

acPtr_class * cPtr_llvmConvertToBooleanAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmConvertToBooleanAST (mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mConverterName, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @llvmConvertToBooleanAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ("llvmConvertToBooleanAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmConvertToBooleanAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmConvertToBooleanAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmConvertToBooleanAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST GGS_llvmConvertToBooleanAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmConvertToBooleanAST result ;
  const GGS_llvmConvertToBooleanAST * p = (const GGS_llvmConvertToBooleanAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmConvertToBooleanAST *> (p)) {
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

ComparisonResult GGS_compileTimeImplicitConverterToBoolean::objectCompare (const GGS_compileTimeImplicitConverterToBoolean & inOperand) const {
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

GGS_compileTimeImplicitConverterToBoolean::GGS_compileTimeImplicitConverterToBoolean (void) :
GGS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean GGS_compileTimeImplicitConverterToBoolean::
init_21__21_ (const GGS_lstring & in_mReceiverName,
              const GGS_ctExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_compileTimeImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->compileTimeImplicitConverterToBoolean_init_21__21_ (in_mReceiverName, in_mExpression, inCompiler) ;
  const GGS_compileTimeImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeImplicitConverterToBoolean::
compileTimeImplicitConverterToBoolean_init_21__21_ (const GGS_lstring & in_mReceiverName,
                                                    const GGS_ctExpressionAST & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean::GGS_compileTimeImplicitConverterToBoolean (const cPtr_compileTimeImplicitConverterToBoolean * inSourcePtr) :
GGS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeImplicitConverterToBoolean::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeImplicitConverterToBoolean::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compileTimeImplicitConverterToBoolean::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeImplicitConverterToBoolean::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeImplicitConverterToBoolean::cPtr_compileTimeImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimeImplicitConverterToBoolean::cPtr_compileTimeImplicitConverterToBoolean (const GGS_lstring & in_mReceiverName,
                                                                                        const GGS_ctExpressionAST & in_mExpression,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mExpression () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeImplicitConverterToBoolean::classDescriptor (void) const {
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

acPtr_class * cPtr_compileTimeImplicitConverterToBoolean::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeImplicitConverterToBoolean (mProperty_mReceiverName, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @compileTimeImplicitConverterToBoolean generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ("compileTimeImplicitConverterToBoolean",
                                                                                          & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean GGS_compileTimeImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_compileTimeImplicitConverterToBoolean result ;
  const GGS_compileTimeImplicitConverterToBoolean * p = (const GGS_compileTimeImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeImplicitConverterToBoolean *> (p)) {
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

ComparisonResult GGS_llvmImplicitConverterToBoolean::objectCompare (const GGS_llvmImplicitConverterToBoolean & inOperand) const {
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

GGS_llvmImplicitConverterToBoolean::GGS_llvmImplicitConverterToBoolean (void) :
GGS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean GGS_llvmImplicitConverterToBoolean::
init_21__21__21_ (const GGS_lstring & in_mReceiverName,
                  const GGS_omnibusType & in_mReceiverType,
                  const GGS_llvmGenerationInstructionList & in_mInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_llvmImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_llvmImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->llvmImplicitConverterToBoolean_init_21__21__21_ (in_mReceiverName, in_mReceiverType, in_mInstructionList, inCompiler) ;
  const GGS_llvmImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmImplicitConverterToBoolean::
llvmImplicitConverterToBoolean_init_21__21__21_ (const GGS_lstring & in_mReceiverName,
                                                 const GGS_omnibusType & in_mReceiverType,
                                                 const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean::GGS_llvmImplicitConverterToBoolean (const cPtr_llvmImplicitConverterToBoolean * inSourcePtr) :
GGS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmImplicitConverterToBoolean::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmImplicitConverterToBoolean::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_llvmImplicitConverterToBoolean::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmImplicitConverterToBoolean::setProperty_mReceiverType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmImplicitConverterToBoolean::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmImplicitConverterToBoolean::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

cPtr_llvmImplicitConverterToBoolean::cPtr_llvmImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverType (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmImplicitConverterToBoolean::cPtr_llvmImplicitConverterToBoolean (const GGS_lstring & in_mReceiverName,
                                                                          const GGS_omnibusType & in_mReceiverType,
                                                                          const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverType (),
mProperty_mInstructionList () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_llvmImplicitConverterToBoolean::classDescriptor (void) const {
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

acPtr_class * cPtr_llvmImplicitConverterToBoolean::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmImplicitConverterToBoolean (mProperty_mReceiverName, mProperty_mReceiverType, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @llvmImplicitConverterToBoolean generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ("llvmImplicitConverterToBoolean",
                                                                                   & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean GGS_llvmImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_llvmImplicitConverterToBoolean result ;
  const GGS_llvmImplicitConverterToBoolean * p = (const GGS_llvmImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @checkInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_checkInstructionAST::objectCompare (const GGS_checkInstructionAST & inOperand) const {
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

GGS_checkInstructionAST::GGS_checkInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_checkInstructionAST GGS_checkInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mCheckMessage,
                  const GGS_expressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_checkInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_checkInstructionAST (inCompiler COMMA_THERE)) ;
  object->checkInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mCheckMessage, in_mExpression, inCompiler) ;
  const GGS_checkInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_checkInstructionAST::
checkInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_lstring & in_mCheckMessage,
                                      const GGS_expressionAST & in_mExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCheckMessage = in_mCheckMessage ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST::GGS_checkInstructionAST (const cPtr_checkInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_checkInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_checkInstructionAST::readProperty_mCheckMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    return p->mProperty_mCheckMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkInstructionAST::setProperty_mCheckMessage (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    p->mProperty_mCheckMessage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_checkInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkInstructionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @checkInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_checkInstructionAST::cPtr_checkInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mCheckMessage (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_checkInstructionAST::cPtr_checkInstructionAST (const GGS_location & in_mInstructionLocation,
                                                    const GGS_lstring & in_mCheckMessage,
                                                    const GGS_expressionAST & in_mExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mCheckMessage (),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCheckMessage = in_mCheckMessage ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_checkInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_checkInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_checkInstructionAST (mProperty_mInstructionLocation, mProperty_mCheckMessage, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @checkInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkInstructionAST ("checkInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_checkInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_checkInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_checkInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST GGS_checkInstructionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_checkInstructionAST result ;
  const GGS_checkInstructionAST * p = (const GGS_checkInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_checkInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @truncateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_truncateExpressionAST::objectCompare (const GGS_truncateExpressionAST & inOperand) const {
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

GGS_truncateExpressionAST::GGS_truncateExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_truncateExpressionAST GGS_truncateExpressionAST::
init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                  const GGS_lstring & in_mTypeName,
                  const GGS_location & in_mEndOfExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_truncateExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_truncateExpressionAST (inCompiler COMMA_THERE)) ;
  object->truncateExpressionAST_init_21__21__21_ (in_mExpression, in_mTypeName, in_mEndOfExpression, inCompiler) ;
  const GGS_truncateExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::
truncateExpressionAST_init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                                        const GGS_lstring & in_mTypeName,
                                        const GGS_location & in_mEndOfExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST::GGS_truncateExpressionAST (const cPtr_truncateExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_truncateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_truncateExpressionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_truncateExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_truncateExpressionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_truncateExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_truncateExpressionAST::setProperty_mEndOfExpression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @truncateExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (const GGS_expressionAST & in_mExpression,
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

const GALGAS_TypeDescriptor * cPtr_truncateExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_truncateExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_truncateExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @truncateExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncateExpressionAST ("truncateExpressionAST",
                                                                          & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_truncateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_truncateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_truncateExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST GGS_truncateExpressionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_truncateExpressionAST result ;
  const GGS_truncateExpressionAST * p = (const GGS_truncateExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_truncateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @extendExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extendExpressionAST::objectCompare (const GGS_extendExpressionAST & inOperand) const {
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

GGS_extendExpressionAST::GGS_extendExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST::
init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                  const GGS_lstring & in_mTypeName,
                  const GGS_location & in_mEndOfExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_extendExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_extendExpressionAST (inCompiler COMMA_THERE)) ;
  object->extendExpressionAST_init_21__21__21_ (in_mExpression, in_mTypeName, in_mEndOfExpression, inCompiler) ;
  const GGS_extendExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::
extendExpressionAST_init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                                      const GGS_lstring & in_mTypeName,
                                      const GGS_location & in_mEndOfExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST::GGS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_extendExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendExpressionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extendExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendExpressionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extendExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendExpressionAST::setProperty_mEndOfExpression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extendExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_extendExpressionAST::cPtr_extendExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extendExpressionAST::cPtr_extendExpressionAST (const GGS_expressionAST & in_mExpression,
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

const GALGAS_TypeDescriptor * cPtr_extendExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_extendExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extendExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @extendExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendExpressionAST ("extendExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_extendExpressionAST result ;
  const GGS_extendExpressionAST * p = (const GGS_extendExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @globalConstantDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_globalConstantDeclarationAST::objectCompare (const GGS_globalConstantDeclarationAST & inOperand) const {
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

GGS_globalConstantDeclarationAST::GGS_globalConstantDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_globalConstantDeclarationAST GGS_globalConstantDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mConstantName,
                      const GGS_lstringlist & in_mAttributeList,
                      const GGS_lstring & in_mConstantTypeName,
                      const GGS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_globalConstantDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_globalConstantDeclarationAST (inCompiler COMMA_THERE)) ;
  object->globalConstantDeclarationAST_init_21__21__21__21_ (in_mConstantName, in_mAttributeList, in_mConstantTypeName, in_mSourceExpression, inCompiler) ;
  const GGS_globalConstantDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantDeclarationAST::
globalConstantDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mConstantName,
                                                   const GGS_lstringlist & in_mAttributeList,
                                                   const GGS_lstring & in_mConstantTypeName,
                                                   const GGS_expressionAST & in_mSourceExpression,
                                                   Compiler * /* inCompiler */) {
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mAttributeList = in_mAttributeList ;
  mProperty_mConstantTypeName = in_mConstantTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST::GGS_globalConstantDeclarationAST (const cPtr_globalConstantDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_globalConstantDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_globalConstantDeclarationAST::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantDeclarationAST::setProperty_mConstantName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_globalConstantDeclarationAST::readProperty_mAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantDeclarationAST::setProperty_mAttributeList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_globalConstantDeclarationAST::readProperty_mConstantTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mConstantTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantDeclarationAST::setProperty_mConstantTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mConstantTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_globalConstantDeclarationAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantDeclarationAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @globalConstantDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_globalConstantDeclarationAST::cPtr_globalConstantDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mAttributeList (),
mProperty_mConstantTypeName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_globalConstantDeclarationAST::cPtr_globalConstantDeclarationAST (const GGS_lstring & in_mConstantName,
                                                                      const GGS_lstringlist & in_mAttributeList,
                                                                      const GGS_lstring & in_mConstantTypeName,
                                                                      const GGS_expressionAST & in_mSourceExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mAttributeList (),
mProperty_mConstantTypeName (),
mProperty_mSourceExpression () {
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mAttributeList = in_mAttributeList ;
  mProperty_mConstantTypeName = in_mConstantTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_globalConstantDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;
}

void cPtr_globalConstantDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@globalConstantDeclarationAST:") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_globalConstantDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_globalConstantDeclarationAST (mProperty_mConstantName, mProperty_mAttributeList, mProperty_mConstantTypeName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_globalConstantDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
    mProperty_mAttributeList.printNonNullClassInstanceProperties ("mAttributeList") ;
    mProperty_mConstantTypeName.printNonNullClassInstanceProperties ("mConstantTypeName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @globalConstantDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantDeclarationAST ("globalConstantDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST GGS_globalConstantDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_globalConstantDeclarationAST result ;
  const GGS_globalConstantDeclarationAST * p = (const GGS_globalConstantDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalConstantDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const GGS_controlRegisterLValueAST inObject,
                                                           GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_controlRegisterLValueAST temp_0 = inObject ;
  switch (temp_0.readProperty_mGroupIndex ().enumValue ()) {
  case GGS_registerGroupIndexAST::Enumeration::invalid:
    break ;
  case GGS_registerGroupIndexAST::Enumeration::enum_noIndex:
    break ;
  case GGS_registerGroupIndexAST::Enumeration::enum_index:
    {
      GGS_expressionAST extractedValue_3391_indexExpression_0 ;
      GGS_location extractedValue_3407__1 ;
      GGS_bool extractedValue_3409__2 ;
      temp_0.readProperty_mGroupIndex ().getAssociatedValuesFor_index (extractedValue_3391_indexExpression_0, extractedValue_3407__1, extractedValue_3409__2) ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3391_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 93)) ;
    }
    break ;
  }
  const GGS_controlRegisterLValueAST temp_1 = inObject ;
  switch (temp_1.readProperty_mRegisterIndex ().enumValue ()) {
  case GGS_registerIndexAST::Enumeration::invalid:
    break ;
  case GGS_registerIndexAST::Enumeration::enum_noIndex:
    break ;
  case GGS_registerIndexAST::Enumeration::enum_index:
    {
      GGS_expressionAST extractedValue_3549_indexExpression_0 ;
      GGS_location extractedValue_3565__1 ;
      GGS_bool extractedValue_3567__2 ;
      temp_1.readProperty_mRegisterIndex ().getAssociatedValuesFor_index (extractedValue_3549_indexExpression_0, extractedValue_3565__1, extractedValue_3567__2) ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3549_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 98)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addDependenceEdgeForStaticExpression (const GGS_controlRegisterLValueAST inObject,
                                                           const GGS_lstring constinArgument_inConstantName,
                                                           GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_controlRegisterLValueAST temp_0 = inObject ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mRegisterGroupName () COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 110)) ;
  }
  const GGS_controlRegisterLValueAST temp_1 = inObject ;
  switch (temp_1.readProperty_mGroupIndex ().enumValue ()) {
  case GGS_registerGroupIndexAST::Enumeration::invalid:
    break ;
  case GGS_registerGroupIndexAST::Enumeration::enum_noIndex:
    break ;
  case GGS_registerGroupIndexAST::Enumeration::enum_index:
    {
      GGS_expressionAST extractedValue_4306_indexExpression_0 ;
      GGS_location extractedValue_4322__1 ;
      GGS_bool extractedValue_4324__2 ;
      temp_1.readProperty_mGroupIndex ().getAssociatedValuesFor_index (extractedValue_4306_indexExpression_0, extractedValue_4322__1, extractedValue_4324__2) ;
      callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4306_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 114)) ;
    }
    break ;
  }
  const GGS_controlRegisterLValueAST temp_2 = inObject ;
  switch (temp_2.readProperty_mRegisterIndex ().enumValue ()) {
  case GGS_registerIndexAST::Enumeration::invalid:
    break ;
  case GGS_registerIndexAST::Enumeration::enum_noIndex:
    break ;
  case GGS_registerIndexAST::Enumeration::enum_index:
    {
      GGS_expressionAST extractedValue_4495_indexExpression_0 ;
      GGS_location extractedValue_4511__1 ;
      GGS_bool extractedValue_4513__2 ;
      temp_2.readProperty_mRegisterIndex ().getAssociatedValuesFor_index (extractedValue_4495_indexExpression_0, extractedValue_4511__1, extractedValue_4513__2) ;
      callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4495_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 119)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST controlRegisterLValueSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_controlRegisterLValueSemanticAnalysis (const GGS_controlRegisterLValueAST inObject,
                                                            const GGS_bool constinArgument_inWriteAccess,
                                                            const GGS_omnibusType constinArgument_inSelfType,
                                                            const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                            const GGS_semanticContext constinArgument_inContext,
                                                            const GGS_mode constinArgument_inMode,
                                                            GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                            GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                            GGS_allocaList & ioArgument_ioAllocaList,
                                                            GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GGS_omnibusType & outArgument_outRegisterType,
                                                            GGS_uint & outArgument_outRegisterTypeBitCount,
                                                            GGS_sliceMap & outArgument_outSliceMap,
                                                            GGS_string & outArgument_outllvmRegisterAddressName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterTypeBitCount.drop () ; // Release 'out' argument
  outArgument_outSliceMap.drop () ; // Release 'out' argument
  outArgument_outllvmRegisterAddressName.drop () ; // Release 'out' argument
  GGS_registerGroupKind var_groupKind_5821 ;
  GGS_controlRegisterMap var_controlRegisterMap_5836 ;
  const GGS_controlRegisterLValueAST temp_0 = inObject ;
  constinArgument_inContext.readProperty_mControlRegisterGroupMap ().method_searchKey (temp_0.readProperty_mRegisterGroupName (), var_groupKind_5821, var_controlRegisterMap_5836, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 144)) ;
  GGS_bool var_readOnly_5992 ;
  GGS_bool var_userAccess_6016 ;
  GGS_bigint var_addressOffset_6068 ;
  GGS_uint var_registerArraySize_6133 ;
  GGS_uint var_registerElementSize_6187 ;
  const GGS_controlRegisterLValueAST temp_1 = inObject ;
  GGS_controlRegisterFieldMap joker_6048 ; // Joker input parameter
  GGS_controlRegisterFieldList joker_6086 ; // Joker input parameter
  var_controlRegisterMap_5836.method_searchKey (temp_1.readProperty_mRegisterName (), outArgument_outRegisterType, var_readOnly_5992, var_userAccess_6016, outArgument_outSliceMap, joker_6048, var_addressOffset_6068, joker_6086, outArgument_outRegisterTypeBitCount, var_registerArraySize_6133, var_registerElementSize_6187, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 146)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inWriteAccess.operator_and (var_readOnly_5992 COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 160)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_controlRegisterLValueAST temp_3 = inObject ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRegisterName ().readProperty_location (), GGS_string ("this control register cannot be modified (declared with @ro attribute)"), fixItArray4  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 161)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_bool test_6 = var_userAccess_6016.operator_not (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
      if (GalgasBool::boolTrue == test_6.boolEnum ()) {
        GGS_bool test_7 = constinArgument_inMode.getter_isUserMode (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
        if (GalgasBool::boolTrue != test_7.boolEnum ()) {
          test_7 = constinArgument_inMode.getter_isAnyMode (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
        }
        test_6 = test_7 ;
      }
      test_5 = test_6.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_controlRegisterLValueAST temp_8 = inObject ;
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mRegisterName ().readProperty_location (), GGS_string ("this control register is not accessible in user mode"), fixItArray9  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 164)) ;
      }
    }
  }
  GGS_string var_registerAddress_6631 ;
  switch (var_groupKind_5821.enumValue ()) {
  case GGS_registerGroupKind::Enumeration::invalid:
    break ;
  case GGS_registerGroupKind::Enumeration::enum_single:
    {
      GGS_bigint extractedValue_6689_baseAddress_0 ;
      var_groupKind_5821.getAssociatedValuesFor_single (extractedValue_6689_baseAddress_0) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_controlRegisterLValueAST temp_11 = inObject ;
        test_10 = temp_11.readProperty_mGroupIndex ().getter_isIndex (SOURCE_FILE ("lvalue-control-register.galgas", 170)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_controlRegisterLValueAST temp_12 = inObject ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mRegisterGroupName ().readProperty_location (), GGS_string ("subscripting not allowed, group is not an array"), fixItArray13  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 171)) ;
          var_registerAddress_6631.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        const GGS_controlRegisterLValueAST temp_14 = inObject ;
        const GGS_controlRegisterLValueAST temp_15 = inObject ;
        GGS_string var_regName_6868 = temp_14.readProperty_mRegisterGroupName ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 173)).add_operation (temp_15.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 173)) ;
        {
        extensionSetter_appendEnterRegisterAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddress_6631, extractedValue_6689_baseAddress_0, var_addressOffset_6068, var_regName_6868, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 174)) ;
        }
      }
    }
    break ;
  case GGS_registerGroupKind::Enumeration::enum_arrayGroup:
    {
      GGS_lbigintlist extractedValue_7163_baseAddresses_0 ;
      var_groupKind_5821.getAssociatedValuesFor_arrayGroup (extractedValue_7163_baseAddresses_0) ;
      const GGS_controlRegisterLValueAST temp_16 = inObject ;
      switch (temp_16.readProperty_mGroupIndex ().enumValue ()) {
      case GGS_registerGroupIndexAST::Enumeration::invalid:
        break ;
      case GGS_registerGroupIndexAST::Enumeration::enum_noIndex:
        {
          const GGS_controlRegisterLValueAST temp_17 = inObject ;
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mRegisterGroupName ().readProperty_location (), GGS_string ("subscripting required, group is an array"), fixItArray18  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 185)) ;
          var_registerAddress_6631.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_registerGroupIndexAST::Enumeration::enum_index:
        {
          GGS_expressionAST extractedValue_7342_indexExpression_0 ;
          GGS_location extractedValue_7358_endOfIndex_1 ;
          GGS_bool extractedValue_7369_checkIndexExpression_2 ;
          temp_16.readProperty_mGroupIndex ().getAssociatedValuesFor_index (extractedValue_7342_indexExpression_0, extractedValue_7358_endOfIndex_1, extractedValue_7369_checkIndexExpression_2) ;
          GGS_objectIR var_groupIndexIR_7911 ;
          {
          routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_7342_indexExpression_0, extractedValue_7358_endOfIndex_1, extractedValue_7369_checkIndexExpression_2, extractedValue_7163_baseAddresses_0.getter_count (SOURCE_FILE ("lvalue-control-register.galgas", 199)).getter_bigint (SOURCE_FILE ("lvalue-control-register.galgas", 199)), outArgument_outRegisterType, ioArgument_ioInstructionGenerationList, var_groupIndexIR_7911, inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 187)) ;
          }
          {
          const GGS_controlRegisterLValueAST temp_19 = inObject ;
          extensionSetter_appendEnterRegisterGroupSubscriptedAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddress_6631, temp_19.readProperty_mRegisterGroupName ().readProperty_string (), extractedValue_7163_baseAddresses_0.getter_count (SOURCE_FILE ("lvalue-control-register.galgas", 208)), var_groupIndexIR_7911, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 204)) ;
          }
        }
        break ;
      }
    }
    break ;
  }
  const GGS_controlRegisterLValueAST temp_20 = inObject ;
  switch (temp_20.readProperty_mRegisterIndex ().enumValue ()) {
  case GGS_registerIndexAST::Enumeration::invalid:
    break ;
  case GGS_registerIndexAST::Enumeration::enum_noIndex:
    {
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = GGS_bool (ComparisonKind::equal, var_registerArraySize_6133.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          outArgument_outllvmRegisterAddressName = var_registerAddress_6631 ;
        }
      }
      if (GalgasBool::boolFalse == test_21) {
        const GGS_controlRegisterLValueAST temp_22 = inObject ;
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mRegisterName ().readProperty_location (), GGS_string ("the control register is an array"), fixItArray23  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 219)) ;
        outArgument_outllvmRegisterAddressName.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GGS_registerIndexAST::Enumeration::enum_index:
    {
      GGS_expressionAST extractedValue_8491_indexExpression_0 ;
      GGS_location extractedValue_8507_endOfIndex_1 ;
      GGS_bool extractedValue_8518_checkIndexExpression_2 ;
      temp_20.readProperty_mRegisterIndex ().getAssociatedValuesFor_index (extractedValue_8491_indexExpression_0, extractedValue_8507_endOfIndex_1, extractedValue_8518_checkIndexExpression_2) ;
      GGS_objectIR var_indexIR_9024 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_8491_indexExpression_0, extractedValue_8507_endOfIndex_1, extractedValue_8518_checkIndexExpression_2, var_registerArraySize_6133.getter_bigint (SOURCE_FILE ("lvalue-control-register.galgas", 234)), outArgument_outRegisterType, ioArgument_ioInstructionGenerationList, var_indexIR_9024, inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 222)) ;
      }
      {
      extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, outArgument_outllvmRegisterAddressName, var_indexIR_9024, var_registerAddress_6631, var_registerElementSize_6187, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 239)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

GGS_targetParameters::GGS_targetParameters (void) :
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

//--------------------------------------------------------------------------------------------------

GGS_targetParameters::GGS_targetParameters (const GGS_targetParameters & inSource) :
mProperty_mConfigurationLocation (inSource.mProperty_mConfigurationLocation),
mProperty_mPython_5F_utilityToolList (inSource.mProperty_mPython_5F_utilityToolList),
mProperty_mPython_5F_build (inSource.mProperty_mPython_5F_build),
mProperty_mLinkerScript (inSource.mProperty_mLinkerScript),
mProperty_mPointerSize (inSource.mProperty_mPointerSize),
mProperty_mHandleDynamicArray (inSource.mProperty_mHandleDynamicArray),
mProperty_mSystemStackSize (inSource.mProperty_mSystemStackSize),
mProperty_mStackedUserRegisterOnInterruptByteSize (inSource.mProperty_mStackedUserRegisterOnInterruptByteSize),
mProperty_mNopInstructionStringInLLVM (inSource.mProperty_mNopInstructionStringInLLVM),
mProperty_mBitbandRegisterBaseAddress (inSource.mProperty_mBitbandRegisterBaseAddress),
mProperty_mBitbandRegisterEndAddress (inSource.mProperty_mBitbandRegisterEndAddress),
mProperty_mBitbandRegisterRelocationAddress (inSource.mProperty_mBitbandRegisterRelocationAddress),
mProperty_mBitbandRegisterOffsetMultiplier (inSource.mProperty_mBitbandRegisterOffsetMultiplier),
mProperty_mBitbandRegisterBitMultiplier (inSource.mProperty_mBitbandRegisterBitMultiplier),
mProperty_mSectionHandler (inSource.mProperty_mSectionHandler),
mProperty_mSectionPushedRegisterByteSize (inSource.mProperty_mSectionPushedRegisterByteSize),
mProperty_mSectionDispatcherHeader (inSource.mProperty_mSectionDispatcherHeader),
mProperty_mSectionDispatcherEntry (inSource.mProperty_mSectionDispatcherEntry),
mProperty_mSectionDispatcherInvocationFromAnyMode (inSource.mProperty_mSectionDispatcherInvocationFromAnyMode),
mProperty_mSectionDispatcherInvocationFromUserMode (inSource.mProperty_mSectionDispatcherInvocationFromUserMode),
mProperty_m_5F_C_5F_definitionFiles (inSource.mProperty_m_5F_C_5F_definitionFiles),
mProperty_m_5F_S_5F_definitionFiles (inSource.mProperty_m_5F_S_5F_definitionFiles),
mProperty_m_5F_LL_5F_definitionFiles (inSource.mProperty_m_5F_LL_5F_definitionFiles),
mProperty_mXtrInterruptHandler (inSource.mProperty_mXtrInterruptHandler),
mProperty_mUndefinedInterruptHandler (inSource.mProperty_mUndefinedInterruptHandler),
mProperty_mServiceHandler (inSource.mProperty_mServiceHandler),
mProperty_mServicePushedRegisterByteSize (inSource.mProperty_mServicePushedRegisterByteSize),
mProperty_mServiceDispatcherEntry (inSource.mProperty_mServiceDispatcherEntry),
mProperty_mServiceDispatcherHeader (inSource.mProperty_mServiceDispatcherHeader),
mProperty_mServiceEntryNoReturnedValue (inSource.mProperty_mServiceEntryNoReturnedValue),
mProperty_mServiceEntryWithReturnValue (inSource.mProperty_mServiceEntryWithReturnValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters & GGS_targetParameters::operator = (const GGS_targetParameters & inSource) {
  mProperty_mConfigurationLocation = inSource.mProperty_mConfigurationLocation ;
  mProperty_mPython_5F_utilityToolList = inSource.mProperty_mPython_5F_utilityToolList ;
  mProperty_mPython_5F_build = inSource.mProperty_mPython_5F_build ;
  mProperty_mLinkerScript = inSource.mProperty_mLinkerScript ;
  mProperty_mPointerSize = inSource.mProperty_mPointerSize ;
  mProperty_mHandleDynamicArray = inSource.mProperty_mHandleDynamicArray ;
  mProperty_mSystemStackSize = inSource.mProperty_mSystemStackSize ;
  mProperty_mStackedUserRegisterOnInterruptByteSize = inSource.mProperty_mStackedUserRegisterOnInterruptByteSize ;
  mProperty_mNopInstructionStringInLLVM = inSource.mProperty_mNopInstructionStringInLLVM ;
  mProperty_mBitbandRegisterBaseAddress = inSource.mProperty_mBitbandRegisterBaseAddress ;
  mProperty_mBitbandRegisterEndAddress = inSource.mProperty_mBitbandRegisterEndAddress ;
  mProperty_mBitbandRegisterRelocationAddress = inSource.mProperty_mBitbandRegisterRelocationAddress ;
  mProperty_mBitbandRegisterOffsetMultiplier = inSource.mProperty_mBitbandRegisterOffsetMultiplier ;
  mProperty_mBitbandRegisterBitMultiplier = inSource.mProperty_mBitbandRegisterBitMultiplier ;
  mProperty_mSectionHandler = inSource.mProperty_mSectionHandler ;
  mProperty_mSectionPushedRegisterByteSize = inSource.mProperty_mSectionPushedRegisterByteSize ;
  mProperty_mSectionDispatcherHeader = inSource.mProperty_mSectionDispatcherHeader ;
  mProperty_mSectionDispatcherEntry = inSource.mProperty_mSectionDispatcherEntry ;
  mProperty_mSectionDispatcherInvocationFromAnyMode = inSource.mProperty_mSectionDispatcherInvocationFromAnyMode ;
  mProperty_mSectionDispatcherInvocationFromUserMode = inSource.mProperty_mSectionDispatcherInvocationFromUserMode ;
  mProperty_m_5F_C_5F_definitionFiles = inSource.mProperty_m_5F_C_5F_definitionFiles ;
  mProperty_m_5F_S_5F_definitionFiles = inSource.mProperty_m_5F_S_5F_definitionFiles ;
  mProperty_m_5F_LL_5F_definitionFiles = inSource.mProperty_m_5F_LL_5F_definitionFiles ;
  mProperty_mXtrInterruptHandler = inSource.mProperty_mXtrInterruptHandler ;
  mProperty_mUndefinedInterruptHandler = inSource.mProperty_mUndefinedInterruptHandler ;
  mProperty_mServiceHandler = inSource.mProperty_mServiceHandler ;
  mProperty_mServicePushedRegisterByteSize = inSource.mProperty_mServicePushedRegisterByteSize ;
  mProperty_mServiceDispatcherEntry = inSource.mProperty_mServiceDispatcherEntry ;
  mProperty_mServiceDispatcherHeader = inSource.mProperty_mServiceDispatcherHeader ;
  mProperty_mServiceEntryNoReturnedValue = inSource.mProperty_mServiceEntryNoReturnedValue ;
  mProperty_mServiceEntryWithReturnValue = inSource.mProperty_mServiceEntryWithReturnValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_targetParameters GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mConfigurationLocation,
                                                                                                                                                                             const GGS__32_lstringlist & in_mPython_5F_utilityToolList,
                                                                                                                                                                             const GGS_lstring & in_mPython_5F_build,
                                                                                                                                                                             const GGS_lstring & in_mLinkerScript,
                                                                                                                                                                             const GGS_uint & in_mPointerSize,
                                                                                                                                                                             const GGS_bool & in_mHandleDynamicArray,
                                                                                                                                                                             const GGS_lbigint & in_mSystemStackSize,
                                                                                                                                                                             const GGS_lbigint & in_mStackedUserRegisterOnInterruptByteSize,
                                                                                                                                                                             const GGS_lstring & in_mNopInstructionStringInLLVM,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterBaseAddress,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterEndAddress,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterRelocationAddress,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterOffsetMultiplier,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterBitMultiplier,
                                                                                                                                                                             const GGS_lstring & in_mSectionHandler,
                                                                                                                                                                             const GGS_lbigint & in_mSectionPushedRegisterByteSize,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherHeader,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherEntry,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherInvocationFromAnyMode,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherInvocationFromUserMode,
                                                                                                                                                                             const GGS_lstringlist & in_m_5F_C_5F_definitionFiles,
                                                                                                                                                                             const GGS_lstringlist & in_m_5F_S_5F_definitionFiles,
                                                                                                                                                                             const GGS_lstringlist & in_m_5F_LL_5F_definitionFiles,
                                                                                                                                                                             const GGS_lstring & in_mXtrInterruptHandler,
                                                                                                                                                                             const GGS_lstring & in_mUndefinedInterruptHandler,
                                                                                                                                                                             const GGS_lstring & in_mServiceHandler,
                                                                                                                                                                             const GGS_lbigint & in_mServicePushedRegisterByteSize,
                                                                                                                                                                             const GGS_lstring & in_mServiceDispatcherEntry,
                                                                                                                                                                             const GGS_lstring & in_mServiceDispatcherHeader,
                                                                                                                                                                             const GGS_lstring & in_mServiceEntryNoReturnedValue,
                                                                                                                                                                             const GGS_lstring & in_mServiceEntryWithReturnValue,
                                                                                                                                                                             Compiler * inCompiler
                                                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_targetParameters result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConfigurationLocation = in_mConfigurationLocation ;
  result.mProperty_mPython_5F_utilityToolList = in_mPython_5F_utilityToolList ;
  result.mProperty_mPython_5F_build = in_mPython_5F_build ;
  result.mProperty_mLinkerScript = in_mLinkerScript ;
  result.mProperty_mPointerSize = in_mPointerSize ;
  result.mProperty_mHandleDynamicArray = in_mHandleDynamicArray ;
  result.mProperty_mSystemStackSize = in_mSystemStackSize ;
  result.mProperty_mStackedUserRegisterOnInterruptByteSize = in_mStackedUserRegisterOnInterruptByteSize ;
  result.mProperty_mNopInstructionStringInLLVM = in_mNopInstructionStringInLLVM ;
  result.mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  result.mProperty_mBitbandRegisterEndAddress = in_mBitbandRegisterEndAddress ;
  result.mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  result.mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  result.mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
  result.mProperty_mSectionHandler = in_mSectionHandler ;
  result.mProperty_mSectionPushedRegisterByteSize = in_mSectionPushedRegisterByteSize ;
  result.mProperty_mSectionDispatcherHeader = in_mSectionDispatcherHeader ;
  result.mProperty_mSectionDispatcherEntry = in_mSectionDispatcherEntry ;
  result.mProperty_mSectionDispatcherInvocationFromAnyMode = in_mSectionDispatcherInvocationFromAnyMode ;
  result.mProperty_mSectionDispatcherInvocationFromUserMode = in_mSectionDispatcherInvocationFromUserMode ;
  result.mProperty_m_5F_C_5F_definitionFiles = in_m_5F_C_5F_definitionFiles ;
  result.mProperty_m_5F_S_5F_definitionFiles = in_m_5F_S_5F_definitionFiles ;
  result.mProperty_m_5F_LL_5F_definitionFiles = in_m_5F_LL_5F_definitionFiles ;
  result.mProperty_mXtrInterruptHandler = in_mXtrInterruptHandler ;
  result.mProperty_mUndefinedInterruptHandler = in_mUndefinedInterruptHandler ;
  result.mProperty_mServiceHandler = in_mServiceHandler ;
  result.mProperty_mServicePushedRegisterByteSize = in_mServicePushedRegisterByteSize ;
  result.mProperty_mServiceDispatcherEntry = in_mServiceDispatcherEntry ;
  result.mProperty_mServiceDispatcherHeader = in_mServiceDispatcherHeader ;
  result.mProperty_mServiceEntryNoReturnedValue = in_mServiceEntryNoReturnedValue ;
  result.mProperty_mServiceEntryWithReturnValue = in_mServiceEntryWithReturnValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_targetParameters::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters::GGS_targetParameters (const GGS_location & inOperand0,
                                            const GGS__32_lstringlist & inOperand1,
                                            const GGS_lstring & inOperand2,
                                            const GGS_lstring & inOperand3,
                                            const GGS_uint & inOperand4,
                                            const GGS_bool & inOperand5,
                                            const GGS_lbigint & inOperand6,
                                            const GGS_lbigint & inOperand7,
                                            const GGS_lstring & inOperand8,
                                            const GGS_lbigint & inOperand9,
                                            const GGS_lbigint & inOperand10,
                                            const GGS_lbigint & inOperand11,
                                            const GGS_lbigint & inOperand12,
                                            const GGS_lbigint & inOperand13,
                                            const GGS_lstring & inOperand14,
                                            const GGS_lbigint & inOperand15,
                                            const GGS_lstring & inOperand16,
                                            const GGS_lstring & inOperand17,
                                            const GGS_lstring & inOperand18,
                                            const GGS_lstring & inOperand19,
                                            const GGS_lstringlist & inOperand20,
                                            const GGS_lstringlist & inOperand21,
                                            const GGS_lstringlist & inOperand22,
                                            const GGS_lstring & inOperand23,
                                            const GGS_lstring & inOperand24,
                                            const GGS_lstring & inOperand25,
                                            const GGS_lbigint & inOperand26,
                                            const GGS_lstring & inOperand27,
                                            const GGS_lstring & inOperand28,
                                            const GGS_lstring & inOperand29,
                                            const GGS_lstring & inOperand30) :
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

//--------------------------------------------------------------------------------------------------

bool GGS_targetParameters::isValid (void) const {
  return mProperty_mConfigurationLocation.isValid () && mProperty_mPython_5F_utilityToolList.isValid () && mProperty_mPython_5F_build.isValid () && mProperty_mLinkerScript.isValid () && mProperty_mPointerSize.isValid () && mProperty_mHandleDynamicArray.isValid () && mProperty_mSystemStackSize.isValid () && mProperty_mStackedUserRegisterOnInterruptByteSize.isValid () && mProperty_mNopInstructionStringInLLVM.isValid () && mProperty_mBitbandRegisterBaseAddress.isValid () && mProperty_mBitbandRegisterEndAddress.isValid () && mProperty_mBitbandRegisterRelocationAddress.isValid () && mProperty_mBitbandRegisterOffsetMultiplier.isValid () && mProperty_mBitbandRegisterBitMultiplier.isValid () && mProperty_mSectionHandler.isValid () && mProperty_mSectionPushedRegisterByteSize.isValid () && mProperty_mSectionDispatcherHeader.isValid () && mProperty_mSectionDispatcherEntry.isValid () && mProperty_mSectionDispatcherInvocationFromAnyMode.isValid () && mProperty_mSectionDispatcherInvocationFromUserMode.isValid () && mProperty_m_5F_C_5F_definitionFiles.isValid () && mProperty_m_5F_S_5F_definitionFiles.isValid () && mProperty_m_5F_LL_5F_definitionFiles.isValid () && mProperty_mXtrInterruptHandler.isValid () && mProperty_mUndefinedInterruptHandler.isValid () && mProperty_mServiceHandler.isValid () && mProperty_mServicePushedRegisterByteSize.isValid () && mProperty_mServiceDispatcherEntry.isValid () && mProperty_mServiceDispatcherHeader.isValid () && mProperty_mServiceEntryNoReturnedValue.isValid () && mProperty_mServiceEntryWithReturnValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_targetParameters::drop (void) {
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

//--------------------------------------------------------------------------------------------------

void GGS_targetParameters::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @targetParameters:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConfigurationLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPython_5F_utilityToolList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPython_5F_build.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLinkerScript.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPointerSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHandleDynamicArray.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSystemStackSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStackedUserRegisterOnInterruptByteSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNopInstructionStringInLLVM.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterBaseAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterEndAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterRelocationAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterOffsetMultiplier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterBitMultiplier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionPushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherInvocationFromAnyMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherInvocationFromUserMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_C_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_S_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_LL_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mXtrInterruptHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUndefinedInterruptHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServicePushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceEntryNoReturnedValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceEntryWithReturnValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @targetParameters generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_targetParameters ("targetParameters",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_targetParameters::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetParameters ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_targetParameters::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_targetParameters (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters GGS_targetParameters::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_targetParameters result ;
  const GGS_targetParameters * p = (const GGS_targetParameters *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_targetParameters *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetParameters", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @configurationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_configurationDeclarationAST::objectCompare (const GGS_configurationDeclarationAST & inOperand) const {
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

GGS_configurationDeclarationAST::GGS_configurationDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_configurationDeclarationAST GGS_configurationDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mPanicCodeTypeName,
                      const GGS_lstring & in_mPanicLineTypeName,
                      const GGS_targetParameters & in_mTargetParameters,
                      const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_configurationDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_configurationDeclarationAST (inCompiler COMMA_THERE)) ;
  object->configurationDeclarationAST_init_21__21__21__21_ (in_mPanicCodeTypeName, in_mPanicLineTypeName, in_mTargetParameters, in_mInterruptionConfigurationList, inCompiler) ;
  const GGS_configurationDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::
configurationDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mPanicCodeTypeName,
                                                  const GGS_lstring & in_mPanicLineTypeName,
                                                  const GGS_targetParameters & in_mTargetParameters,
                                                  const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                                                  Compiler * /* inCompiler */) {
  mProperty_mPanicCodeTypeName = in_mPanicCodeTypeName ;
  mProperty_mPanicLineTypeName = in_mPanicLineTypeName ;
  mProperty_mTargetParameters = in_mTargetParameters ;
  mProperty_mInterruptionConfigurationList = in_mInterruptionConfigurationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST::GGS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configurationDeclarationAST::readProperty_mPanicCodeTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mPanicCodeTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mPanicCodeTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mPanicCodeTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configurationDeclarationAST::readProperty_mPanicLineTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mPanicLineTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mPanicLineTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mPanicLineTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters GGS_configurationDeclarationAST::readProperty_mTargetParameters (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_targetParameters () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mTargetParameters ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mTargetParameters (const GGS_targetParameters & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mTargetParameters = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_configurationDeclarationAST::readProperty_mInterruptionConfigurationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_interruptionConfigurationList () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mInterruptionConfigurationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mInterruptionConfigurationList (const GGS_interruptionConfigurationList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mInterruptionConfigurationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @configurationDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPanicCodeTypeName (),
mProperty_mPanicLineTypeName (),
mProperty_mTargetParameters (),
mProperty_mInterruptionConfigurationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (const GGS_lstring & in_mPanicCodeTypeName,
                                                                    const GGS_lstring & in_mPanicLineTypeName,
                                                                    const GGS_targetParameters & in_mTargetParameters,
                                                                    const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPanicCodeTypeName (),
mProperty_mPanicLineTypeName (),
mProperty_mTargetParameters (),
mProperty_mInterruptionConfigurationList () {
  mProperty_mPanicCodeTypeName = in_mPanicCodeTypeName ;
  mProperty_mPanicLineTypeName = in_mPanicLineTypeName ;
  mProperty_mTargetParameters = in_mTargetParameters ;
  mProperty_mInterruptionConfigurationList = in_mInterruptionConfigurationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_configurationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

void cPtr_configurationDeclarationAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@configurationDeclarationAST:") ;
  mProperty_mPanicCodeTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicLineTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInterruptionConfigurationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_configurationDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mProperty_mPanicCodeTypeName, mProperty_mPanicLineTypeName, mProperty_mTargetParameters, mProperty_mInterruptionConfigurationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_configurationDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPanicCodeTypeName.printNonNullClassInstanceProperties ("mPanicCodeTypeName") ;
    mProperty_mPanicLineTypeName.printNonNullClassInstanceProperties ("mPanicLineTypeName") ;
    mProperty_mTargetParameters.printNonNullClassInstanceProperties ("mTargetParameters") ;
    mProperty_mInterruptionConfigurationList.printNonNullClassInstanceProperties ("mInterruptionConfigurationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @configurationDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST GGS_configurationDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_configurationDeclarationAST result ;
  const GGS_configurationDeclarationAST * p = (const GGS_configurationDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configurationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configurationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctInfixExpressionAST reference class
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

cPtr_ctInfixExpressionAST::cPtr_ctInfixExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mInfixOperator (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ctInfixExpressionAST::cPtr_ctInfixExpressionAST (const GGS_ctExpressionAST & in_mLeftExpression,
                                                      const GGS_location & in_mOperatorLocation,
                                                      const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                      const GGS_ctExpressionAST & in_mRightExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_ctInfixExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_ctInfixExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctInfixExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mInfixOperator, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ctInfixExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctInfixExpressionAST ("ctInfixExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctInfixExpressionAST::staticTypeDescriptor (void) const {
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
// @ctPrefixExpressionAST reference class
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

cPtr_ctPrefixExpressionAST::cPtr_ctPrefixExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mPrefixOperator (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ctPrefixExpressionAST::cPtr_ctPrefixExpressionAST (const GGS_location & in_mOperatorLocation,
                                                        const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                        const GGS_ctExpressionAST & in_mExpression,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mPrefixOperator (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ctPrefixExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_ctPrefixExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctPrefixExpressionAST (mProperty_mOperatorLocation, mProperty_mPrefixOperator, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ctPrefixExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctPrefixExpressionAST ("ctPrefixExpressionAST",
                                                                          & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctPrefixExpressionAST::staticTypeDescriptor (void) const {
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
// @ctIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctIntExpressionAST::objectCompare (const GGS_ctIntExpressionAST & inOperand) const {
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

GGS_ctIntExpressionAST::GGS_ctIntExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctIntExpressionAST GGS_ctIntExpressionAST::
init_21_ (const GGS_lbigint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctIntExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_ctIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::
ctIntExpressionAST_init_21_ (const GGS_lbigint & in_mValue,
                             Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST::GGS_ctIntExpressionAST (const cPtr_ctIntExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_ctIntExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_ctIntExpressionAST * p = (cPtr_ctIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctIntExpressionAST::setProperty_mValue (const GGS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctIntExpressionAST * p = (cPtr_ctIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIntExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctIntExpressionAST::cPtr_ctIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ctIntExpressionAST::cPtr_ctIntExpressionAST (const GGS_lbigint & in_mValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ctIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST ;
}

void cPtr_ctIntExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@ctIntExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctIntExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctIntExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ctIntExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctIntExpressionAST ("ctIntExpressionAST",
                                                                       & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST GGS_ctIntExpressionAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_ctIntExpressionAST result ;
  const GGS_ctIntExpressionAST * p = (const GGS_ctIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctIdentifierExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctIdentifierExpressionAST::objectCompare (const GGS_ctIdentifierExpressionAST & inOperand) const {
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

GGS_ctIdentifierExpressionAST::GGS_ctIdentifierExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctIdentifierExpressionAST GGS_ctIdentifierExpressionAST::
init_21_ (const GGS_lstring & in_mIdentifier,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctIdentifierExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctIdentifierExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctIdentifierExpressionAST_init_21_ (in_mIdentifier, inCompiler) ;
  const GGS_ctIdentifierExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::
ctIdentifierExpressionAST_init_21_ (const GGS_lstring & in_mIdentifier,
                                    Compiler * /* inCompiler */) {
  mProperty_mIdentifier = in_mIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST::GGS_ctIdentifierExpressionAST (const cPtr_ctIdentifierExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctIdentifierExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_ctIdentifierExpressionAST::readProperty_mIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_ctIdentifierExpressionAST * p = (cPtr_ctIdentifierExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIdentifierExpressionAST) ;
    return p->mProperty_mIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctIdentifierExpressionAST::setProperty_mIdentifier (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctIdentifierExpressionAST * p = (cPtr_ctIdentifierExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIdentifierExpressionAST) ;
    p->mProperty_mIdentifier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctIdentifierExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctIdentifierExpressionAST::cPtr_ctIdentifierExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mIdentifier () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ctIdentifierExpressionAST::cPtr_ctIdentifierExpressionAST (const GGS_lstring & in_mIdentifier,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mIdentifier () {
  mProperty_mIdentifier = in_mIdentifier ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ctIdentifierExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ;
}

void cPtr_ctIdentifierExpressionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@ctIdentifierExpressionAST:") ;
  mProperty_mIdentifier.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctIdentifierExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctIdentifierExpressionAST (mProperty_mIdentifier, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctIdentifierExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIdentifier.printNonNullClassInstanceProperties ("mIdentifier") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ctIdentifierExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ("ctIdentifierExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctIdentifierExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctIdentifierExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctIdentifierExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST GGS_ctIdentifierExpressionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_ctIdentifierExpressionAST result ;
  const GGS_ctIdentifierExpressionAST * p = (const GGS_ctIdentifierExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctIdentifierExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIdentifierExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap unsolvedEntryList'
//--------------------------------------------------------------------------------------------------

GGS_lstringlist extensionGetter_unsolvedEntryList (const GGS_unifiedTypeMap & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist result_result ; // Returned variable
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 19)) ;
  result_result = temp_0 ;
  const GGS_unifiedTypeMap temp_1 = inObject ;
  UpEnumerator_unifiedTypeMap enumerator_1160 (temp_1) ;
  while (enumerator_1160.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = enumerator_1160.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas", 21)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        result_result.addAssignOperation (enumerator_1160.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas", 22)) ;
      }
    }
    enumerator_1160.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @unifiedTypeMapElementClass reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass::objectCompare (const GGS_unifiedTypeMapElementClass & inOperand) const {
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

GGS_unifiedTypeMapElementClass::GGS_unifiedTypeMapElementClass (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::
init_21__21_ (const GGS_lstring & in_mTypeName,
              const GGS_typeDefinition & in_mDefinition,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unifiedTypeMapElementClass * object = nullptr ;
  macroMyNew (object, cPtr_unifiedTypeMapElementClass (inCompiler COMMA_THERE)) ;
  object->unifiedTypeMapElementClass_init_21__21_ (in_mTypeName, in_mDefinition, inCompiler) ;
  const GGS_unifiedTypeMapElementClass result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unifiedTypeMapElementClass::
unifiedTypeMapElementClass_init_21__21_ (const GGS_lstring & in_mTypeName,
                                         const GGS_typeDefinition & in_mDefinition,
                                         Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass::GGS_unifiedTypeMapElementClass (const cPtr_unifiedTypeMapElementClass * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unifiedTypeMapElementClass) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_unifiedTypeMapElementClass::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_unifiedTypeMapElementClass::readProperty_mDefinition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeDefinition () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mDefinition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass::setProperty_mDefinition (const GGS_typeDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mDefinition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unifiedTypeMapElementClass class
//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mDefinition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (const GGS_lstring & in_mTypeName,
                                                                  const GGS_typeDefinition & in_mDefinition,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mDefinition () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_unifiedTypeMapElementClass::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

void cPtr_unifiedTypeMapElementClass::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@unifiedTypeMapElementClass:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefinition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unifiedTypeMapElementClass::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unifiedTypeMapElementClass (mProperty_mTypeName, mProperty_mDefinition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unifiedTypeMapElementClass::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mDefinition.printNonNullClassInstanceProperties ("mDefinition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapElementClass generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ("unifiedTypeMapElementClass",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapElementClass::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass result ;
  const GGS_unifiedTypeMapElementClass * p = (const GGS_unifiedTypeMapElementClass *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @unifiedTypeMapElementClass_3F_
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_3F_::GGS_unifiedTypeMapElementClass_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_3F_::GGS_unifiedTypeMapElementClass_3F_ (const GGS_unifiedTypeMapElementClass & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_3F_::GGS_unifiedTypeMapElementClass_3F_ (const GGS_unifiedTypeMapElementClass_2E_weak & inSource) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
  if (inSource.isValid ()) {
    const acStrongPtr_class * p = inSource.ptr () ;
    if (p == nullptr) {
      mState = OptionalState::isNil ;
    }else{
      mValue = * ((GGS_unifiedTypeMapElementClass *) p) ;
      mState = OptionalState::valuated ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_3F_ GGS_unifiedTypeMapElementClass_3F_::init_nil (void) {
  GGS_unifiedTypeMapElementClass_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapElementClass_3F_::isValid (void) const {
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

bool GGS_unifiedTypeMapElementClass_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unifiedTypeMapElementClass () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass_3F_::objectCompare (const GGS_unifiedTypeMapElementClass_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass_3F_::description (String & ioString,
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
//     @unifiedTypeMapElementClass? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_3F_ ("unifiedTypeMapElementClass?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapElementClass_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_3F_ GGS_unifiedTypeMapElementClass_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass_3F_ result ;
  const GGS_unifiedTypeMapElementClass_3F_ * p = (const GGS_unifiedTypeMapElementClass_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

GGS_omnibusType cPtr_unifiedTypeMapElementClass::getter_definition (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_omnibusType result_result ; // Returned variable
  const GGS_unifiedTypeMapElementClass temp_0 = this ;
  switch (temp_0.readProperty_mDefinition ().enumValue ()) {
  case GGS_typeDefinition::Enumeration::invalid:
    break ;
  case GGS_typeDefinition::Enumeration::enum_unsolved:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 147)), GGS_string ("unsolved type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 147)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeDefinition::Enumeration::enum_solved:
    {
      GGS_omnibusType extractedValue_5730_definition_0 ;
      temp_0.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_5730_definition_0) ;
      result_result = extractedValue_5730_definition_0 ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_omnibusType callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_omnibusType result ;
  if (nullptr != inObject) {
    result = inObject->getter_definition (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @integerSliceExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerSliceExpressionAST::objectCompare (const GGS_integerSliceExpressionAST & inOperand) const {
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

GGS_integerSliceExpressionAST::GGS_integerSliceExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_integerSliceExpressionAST GGS_integerSliceExpressionAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_integerSliceFieldListAST & in_mSliceValues,
                  const GGS_location & in_mLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_integerSliceExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_integerSliceExpressionAST (inCompiler COMMA_THERE)) ;
  object->integerSliceExpressionAST_init_21__21__21_ (in_mTypeName, in_mSliceValues, in_mLocation, inCompiler) ;
  const GGS_integerSliceExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::
integerSliceExpressionAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                            const GGS_integerSliceFieldListAST & in_mSliceValues,
                                            const GGS_location & in_mLocation,
                                            Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceValues = in_mSliceValues ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST::GGS_integerSliceExpressionAST (const cPtr_integerSliceExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerSliceExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_integerSliceExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceExpressionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceExpressionAST::readProperty_mSliceValues (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_integerSliceFieldListAST () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mSliceValues ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceExpressionAST::setProperty_mSliceValues (const GGS_integerSliceFieldListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mSliceValues = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_integerSliceExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceExpressionAST::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @integerSliceExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_integerSliceExpressionAST::cPtr_integerSliceExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceValues (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_integerSliceExpressionAST::cPtr_integerSliceExpressionAST (const GGS_lstring & in_mTypeName,
                                                                const GGS_integerSliceFieldListAST & in_mSliceValues,
                                                                const GGS_location & in_mLocation,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceValues (),
mProperty_mLocation () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceValues = in_mSliceValues ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_integerSliceExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_integerSliceExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerSliceExpressionAST (mProperty_mTypeName, mProperty_mSliceValues, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @integerSliceExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST ("integerSliceExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerSliceExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST GGS_integerSliceExpressionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_integerSliceExpressionAST result ;
  const GGS_integerSliceExpressionAST * p = (const GGS_integerSliceExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @controlRegisterAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_controlRegisterAssignmentInstructionAST::objectCompare (const GGS_controlRegisterAssignmentInstructionAST & inOperand) const {
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

GGS_controlRegisterAssignmentInstructionAST::GGS_controlRegisterAssignmentInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                      const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                      const GGS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_controlRegisterAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_controlRegisterAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mControlRegisterLValue, in_mAssignmentKind, in_mSourceExpression, inCompiler) ;
  const GGS_controlRegisterAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::
controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                              const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                              const GGS_expressionAST & in_mSourceExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mAssignmentKind = in_mAssignmentKind ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST::GGS_controlRegisterAssignmentInstructionAST (const cPtr_controlRegisterAssignmentInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_controlRegisterAssignmentInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterLValueAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentInstructionAST::setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind GGS_controlRegisterAssignmentInstructionAST::readProperty_mAssignmentKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterAssignmentOperatorKind () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mAssignmentKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentInstructionAST::setProperty_mAssignmentKind (const GGS_controlRegisterAssignmentOperatorKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mAssignmentKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_controlRegisterAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentInstructionAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @controlRegisterAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mAssignmentKind (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                            const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                                                            const GGS_expressionAST & in_mSourceExpression,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mAssignmentKind (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mAssignmentKind = in_mAssignmentKind ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_controlRegisterAssignmentInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_controlRegisterAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_controlRegisterAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mAssignmentKind, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @controlRegisterAssignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ("controlRegisterAssignmentInstructionAST",
                                                                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentInstructionAST result ;
  const GGS_controlRegisterAssignmentInstructionAST * p = (const GGS_controlRegisterAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmGenericType reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmGenericType::objectCompare (const GGS_llvmGenericType & inOperand) const {
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

GGS_llvmGenericType::GGS_llvmGenericType (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmGenericType GGS_llvmGenericType::
init_21__21__21__21_ (const GGS_lstring & in_mTypeName,
                      const GGS_genericFormalParameterList & in_mGenericFormalParameterList,
                      const GGS_ctExpressionAST & in_mWhereClause,
                      const GGS_bigint & in_mBitSize,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_llvmGenericType * object = nullptr ;
  macroMyNew (object, cPtr_llvmGenericType (inCompiler COMMA_THERE)) ;
  object->llvmGenericType_init_21__21__21__21_ (in_mTypeName, in_mGenericFormalParameterList, in_mWhereClause, in_mBitSize, inCompiler) ;
  const GGS_llvmGenericType result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenericType::
llvmGenericType_init_21__21__21__21_ (const GGS_lstring & in_mTypeName,
                                      const GGS_genericFormalParameterList & in_mGenericFormalParameterList,
                                      const GGS_ctExpressionAST & in_mWhereClause,
                                      const GGS_bigint & in_mBitSize,
                                      Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mGenericFormalParameterList = in_mGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mBitSize = in_mBitSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType::GGS_llvmGenericType (const cPtr_llvmGenericType * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmGenericType) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmGenericType::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenericType::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmGenericType::readProperty_mGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenericType::setProperty_mGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_llvmGenericType::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenericType::setProperty_mWhereClause (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_llvmGenericType::readProperty_mBitSize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mBitSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenericType::setProperty_mBitSize (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mBitSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmGenericType class
//--------------------------------------------------------------------------------------------------

cPtr_llvmGenericType::cPtr_llvmGenericType (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mBitSize () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmGenericType::cPtr_llvmGenericType (const GGS_lstring & in_mTypeName,
                                            const GGS_genericFormalParameterList & in_mGenericFormalParameterList,
                                            const GGS_ctExpressionAST & in_mWhereClause,
                                            const GGS_bigint & in_mBitSize,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mBitSize () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mGenericFormalParameterList = in_mGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mBitSize = in_mBitSize ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_llvmGenericType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType ;
}

void cPtr_llvmGenericType::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmGenericType:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhereClause.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitSize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmGenericType::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmGenericType (mProperty_mTypeName, mProperty_mGenericFormalParameterList, mProperty_mWhereClause, mProperty_mBitSize, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmGenericType::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mGenericFormalParameterList.printNonNullClassInstanceProperties ("mGenericFormalParameterList") ;
    mProperty_mWhereClause.printNonNullClassInstanceProperties ("mWhereClause") ;
    mProperty_mBitSize.printNonNullClassInstanceProperties ("mBitSize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @llvmGenericType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenericType ("llvmGenericType",
                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenericType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenericType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenericType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType GGS_llvmGenericType::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmGenericType result ;
  const GGS_llvmGenericType * p = (const GGS_llvmGenericType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenericType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenericType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentInstructionAST::objectCompare (const GGS_assignmentInstructionAST & inOperand) const {
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

GGS_assignmentInstructionAST::GGS_assignmentInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_LValueAST & in_mTargetAST,
                  const GGS_expressionAST & in_mSourceExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_assignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_assignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->assignmentInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mTargetAST, in_mSourceExpression, inCompiler) ;
  const GGS_assignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::
assignmentInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_LValueAST & in_mTargetAST,
                                           const GGS_expressionAST & in_mSourceExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetAST = in_mTargetAST ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST::GGS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_LValueAST GGS_assignmentInstructionAST::readProperty_mTargetAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_LValueAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mTargetAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentInstructionAST::setProperty_mTargetAST (const GGS_LValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mTargetAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_assignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentInstructionAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTargetAST (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_LValueAST & in_mTargetAST,
                                                              const GGS_expressionAST & in_mSourceExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetAST (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetAST = in_mTargetAST ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_assignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetAST, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @assignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_assignmentInstructionAST result ;
  const GGS_assignmentInstructionAST * p = (const GGS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentInstructionAST *> (p)) {
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

void extensionMethod_analyzeLValueInAssignment (const GGS_LValueAST inObject,
                                                const GGS_omnibusType constinArgument_inSelfType,
                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                const GGS_semanticContext constinArgument_inContext,
                                                const GGS_mode constinArgument_inMode,
                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_LValueAST temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("instruction-assignment.galgas", 122)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_LValueAST temp_3 = inObject ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GGS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 123)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        {
        const GGS_LValueAST temp_5 = inObject ;
        routine_analyzeSelfLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, temp_5.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 125)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_valuedObject var_entity_6161 ;
    const GGS_LValueAST temp_6 = inObject ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_6.readProperty_mIdentifier (), var_entity_6161, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 141)) ;
    switch (var_entity_6161.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      {
        GGS_omnibusType extractedValue_6202__0 ;
        var_entity_6161.getAssociatedValuesFor_task (extractedValue_6202__0) ;
        const GGS_LValueAST temp_7 = inObject ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a task has no value"), fixItArray8  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 144)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      {
        GGS_omnibusType extractedValue_6305__0 ;
        GGS_bool extractedValue_6307__1 ;
        var_entity_6161.getAssociatedValuesFor_driver (extractedValue_6305__0, extractedValue_6307__1) ;
        const GGS_LValueAST temp_9 = inObject ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a driver has no value"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 146)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      {
        GGS_objectIR extractedValue_6420__0 ;
        var_entity_6161.getAssociatedValuesFor_globalConstant (extractedValue_6420__0) ;
        const GGS_LValueAST temp_11 = inObject ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global constant cannot be written"), fixItArray12  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 148)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_6547__0 ;
        GGS_lstring extractedValue_6547__1 ;
        GGS_bool extractedValue_6547__2 ;
        var_entity_6161.getAssociatedValuesFor_localConstant (extractedValue_6547__0, extractedValue_6547__1, extractedValue_6547__2) ;
        const GGS_LValueAST temp_13 = inObject ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a local constant cannot be written"), fixItArray14  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 150)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      {
        GGS_omnibusType extractedValue_6678__0 ;
        GGS_lstring extractedValue_6678__1 ;
        var_entity_6161.getAssociatedValuesFor_globalSyncInstance (extractedValue_6678__0, extractedValue_6678__1) ;
        const GGS_LValueAST temp_15 = inObject ;
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global sync instance is not allowed here"), fixItArray16  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 152)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_6824_variableType_0 ;
        GGS_lstring extractedValue_6846_omnibusName_1 ;
        var_entity_6161.getAssociatedValuesFor_localVariable (extractedValue_6824_variableType_0, extractedValue_6846_omnibusName_1) ;
        {
        const GGS_LValueAST temp_17 = inObject ;
        const GGS_LValueAST temp_18 = inObject ;
        routine_analyzeVariableInLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F_variableName_3F_llvmName_3F_type_3F__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, temp_17.readProperty_mIdentifier (), function_llvmNameForLocalVariable (extractedValue_6846_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 166)), extractedValue_6824_variableType_0, temp_18.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 154)) ;
        }
      }
      break ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element::GGS_decoratedRegularRoutineList_2E_element (void) :
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

GGS_decoratedRegularRoutineList_2E_element::GGS_decoratedRegularRoutineList_2E_element (const GGS_decoratedRegularRoutineList_2E_element & inSource) :
mProperty_receiverTypeName (inSource.mProperty_receiverTypeName),
mProperty_mode (inSource.mProperty_mode),
mProperty_isRequired (inSource.mProperty_isRequired),
mProperty_routineKind (inSource.mProperty_routineKind),
mProperty_warnIfUnused (inSource.mProperty_warnIfUnused),
mProperty_exportedRoutine (inSource.mProperty_exportedRoutine),
mProperty_routineAttributes (inSource.mProperty_routineAttributes),
mProperty_routineMangledLLVMName (inSource.mProperty_routineMangledLLVMName),
mProperty_formalArgumentList (inSource.mProperty_formalArgumentList),
mProperty_warningOnUnusedArgs (inSource.mProperty_warningOnUnusedArgs),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfRoutineDeclaration (inSource.mProperty_mEndOfRoutineDeclaration),
mProperty_returnTypeName (inSource.mProperty_returnTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element & GGS_decoratedRegularRoutineList_2E_element::operator = (const GGS_decoratedRegularRoutineList_2E_element & inSource) {
  mProperty_receiverTypeName = inSource.mProperty_receiverTypeName ;
  mProperty_mode = inSource.mProperty_mode ;
  mProperty_isRequired = inSource.mProperty_isRequired ;
  mProperty_routineKind = inSource.mProperty_routineKind ;
  mProperty_warnIfUnused = inSource.mProperty_warnIfUnused ;
  mProperty_exportedRoutine = inSource.mProperty_exportedRoutine ;
  mProperty_routineAttributes = inSource.mProperty_routineAttributes ;
  mProperty_routineMangledLLVMName = inSource.mProperty_routineMangledLLVMName ;
  mProperty_formalArgumentList = inSource.mProperty_formalArgumentList ;
  mProperty_warningOnUnusedArgs = inSource.mProperty_warningOnUnusedArgs ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfRoutineDeclaration = inSource.mProperty_mEndOfRoutineDeclaration ;
  mProperty_returnTypeName = inSource.mProperty_returnTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element GGS_decoratedRegularRoutineList_2E_element::init_21_receiverTypeName_21_mode_21_isRequired_21_routineKind_21_warnIfUnused_21_exportedRoutine_21_routineAttributes_21_routineMangledLLVMName_21_formalArgumentList_21_warningOnUnusedArgs_21__21__21_returnTypeName (const GGS_lstring & in_receiverTypeName,
                                                                                                                                                                                                                                                                                                               const GGS_mode & in_mode,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_isRequired,
                                                                                                                                                                                                                                                                                                               const GGS_routineKind & in_routineKind,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_warnIfUnused,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_exportedRoutine,
                                                                                                                                                                                                                                                                                                               const GGS_routineAttributes & in_routineAttributes,
                                                                                                                                                                                                                                                                                                               const GGS_lstring & in_routineMangledLLVMName,
                                                                                                                                                                                                                                                                                                               const GGS_routineFormalArgumentListAST & in_formalArgumentList,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_warningOnUnusedArgs,
                                                                                                                                                                                                                                                                                                               const GGS_instructionListAST & in_mInstructionList,
                                                                                                                                                                                                                                                                                                               const GGS_location & in_mEndOfRoutineDeclaration,
                                                                                                                                                                                                                                                                                                               const GGS_lstring & in_returnTypeName,
                                                                                                                                                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList_2E_element result ;
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

void GGS_decoratedRegularRoutineList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element::GGS_decoratedRegularRoutineList_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_mode & inOperand1,
                                                                                        const GGS_bool & inOperand2,
                                                                                        const GGS_routineKind & inOperand3,
                                                                                        const GGS_bool & inOperand4,
                                                                                        const GGS_bool & inOperand5,
                                                                                        const GGS_routineAttributes & inOperand6,
                                                                                        const GGS_lstring & inOperand7,
                                                                                        const GGS_routineFormalArgumentListAST & inOperand8,
                                                                                        const GGS_bool & inOperand9,
                                                                                        const GGS_instructionListAST & inOperand10,
                                                                                        const GGS_location & inOperand11,
                                                                                        const GGS_lstring & inOperand12) :
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

bool GGS_decoratedRegularRoutineList_2E_element::isValid (void) const {
  return mProperty_receiverTypeName.isValid () && mProperty_mode.isValid () && mProperty_isRequired.isValid () && mProperty_routineKind.isValid () && mProperty_warnIfUnused.isValid () && mProperty_exportedRoutine.isValid () && mProperty_routineAttributes.isValid () && mProperty_routineMangledLLVMName.isValid () && mProperty_formalArgumentList.isValid () && mProperty_warningOnUnusedArgs.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineDeclaration.isValid () && mProperty_returnTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList_2E_element::drop (void) {
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

void GGS_decoratedRegularRoutineList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @decoratedRegularRoutineList.element:") ;
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
//     @decoratedRegularRoutineList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2E_element ("decoratedRegularRoutineList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedRegularRoutineList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedRegularRoutineList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedRegularRoutineList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element GGS_decoratedRegularRoutineList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList_2E_element result ;
  const GGS_decoratedRegularRoutineList_2E_element * p = (const GGS_decoratedRegularRoutineList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedRegularRoutineList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRegularRoutineList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @regularRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_regularRoutineIR::objectCompare (const GGS_regularRoutineIR & inOperand) const {
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

GGS_regularRoutineIR::GGS_regularRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                         const GGS_bool & in_isRequired,
                                                                         const GGS_bool & in_warnsIfUnused,
                                                                         const GGS_omnibusType & in_mReceiverType,
                                                                         const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                         const GGS_allocaList & in_mAllocaList,
                                                                         const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                         const GGS_bool & in_mExportedFunction,
                                                                         const GGS_routineKind & in_mKind,
                                                                         const GGS_omnibusType & in_mReturnType,
                                                                         const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_regularRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_regularRoutineIR (inCompiler COMMA_THERE)) ;
  object->regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mReceiverType, in_mFormalArgumentListForGeneration, in_mAllocaList, in_mInstructionGenerationList, in_mExportedFunction, in_mKind, in_mReturnType, in_mAppendFileAndLineArgumentForPanicLocation, inCompiler) ;
  const GGS_regularRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::
regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                          const GGS_bool & in_isRequired,
                                                                                          const GGS_bool & in_warnsIfUnused,
                                                                                          const GGS_omnibusType & in_mReceiverType,
                                                                                          const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                          const GGS_allocaList & in_mAllocaList,
                                                                                          const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                                          const GGS_bool & in_mExportedFunction,
                                                                                          const GGS_routineKind & in_mKind,
                                                                                          const GGS_omnibusType & in_mReturnType,
                                                                                          const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
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

GGS_regularRoutineIR::GGS_regularRoutineIR (const cPtr_regularRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_regularRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_regularRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mReceiverType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_regularRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListIR () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_regularRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_allocaList () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mAllocaList (const GGS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_regularRoutineIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_regularRoutineIR::readProperty_mExportedFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mExportedFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mExportedFunction (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mExportedFunction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_regularRoutineIR::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineKind () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mKind (const GGS_routineKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_regularRoutineIR::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mReturnType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_regularRoutineIR::readProperty_mAppendFileAndLineArgumentForPanicLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mAppendFileAndLineArgumentForPanicLocation (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mAppendFileAndLineArgumentForPanicLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @regularRoutineIR class
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

cPtr_regularRoutineIR::cPtr_regularRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                              const GGS_bool & in_isRequired,
                                              const GGS_bool & in_warnsIfUnused,
                                              const GGS_omnibusType & in_mReceiverType,
                                              const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                              const GGS_allocaList & in_mAllocaList,
                                              const GGS_instructionListIR & in_mInstructionGenerationList,
                                              const GGS_bool & in_mExportedFunction,
                                              const GGS_routineKind & in_mKind,
                                              const GGS_omnibusType & in_mReturnType,
                                              const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_regularRoutineIR::classDescriptor (void) const {
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

acPtr_class * cPtr_regularRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_regularRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mReceiverType, mProperty_mFormalArgumentListForGeneration, mProperty_mAllocaList, mProperty_mInstructionGenerationList, mProperty_mExportedFunction, mProperty_mKind, mProperty_mReturnType, mProperty_mAppendFileAndLineArgumentForPanicLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @regularRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularRoutineIR ("regularRoutineIR",
                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_regularRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_regularRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_regularRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_regularRoutineIR result ;
  const GGS_regularRoutineIR * p = (const GGS_regularRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_regularRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumerationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumerationDeclarationAST::objectCompare (const GGS_enumerationDeclarationAST & inOperand) const {
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

GGS_enumerationDeclarationAST::GGS_enumerationDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST::
init_21__21_ (const GGS_lstring & in_mEnumerationName,
              const GGS_enumerationConstantList & in_mCaseNameList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_enumerationDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumerationDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumerationDeclarationAST_init_21__21_ (in_mEnumerationName, in_mCaseNameList, inCompiler) ;
  const GGS_enumerationDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::
enumerationDeclarationAST_init_21__21_ (const GGS_lstring & in_mEnumerationName,
                                        const GGS_enumerationConstantList & in_mCaseNameList,
                                        Compiler * /* inCompiler */) {
  mProperty_mEnumerationName = in_mEnumerationName ;
  mProperty_mCaseNameList = in_mCaseNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST::GGS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumerationDeclarationAST::readProperty_mEnumerationName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mEnumerationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDeclarationAST::setProperty_mEnumerationName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    p->mProperty_mEnumerationName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList GGS_enumerationDeclarationAST::readProperty_mCaseNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_enumerationConstantList () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mCaseNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDeclarationAST::setProperty_mCaseNameList (const GGS_enumerationConstantList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    p->mProperty_mCaseNameList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumerationDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mEnumerationName (),
mProperty_mCaseNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GGS_lstring & in_mEnumerationName,
                                                                const GGS_enumerationConstantList & in_mCaseNameList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mEnumerationName (),
mProperty_mCaseNameList () {
  mProperty_mEnumerationName = in_mEnumerationName ;
  mProperty_mCaseNameList = in_mCaseNameList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumerationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

void cPtr_enumerationDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@enumerationDeclarationAST:") ;
  mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mEnumerationName, mProperty_mCaseNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumerationDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mEnumerationName.printNonNullClassInstanceProperties ("mEnumerationName") ;
    mProperty_mCaseNameList.printNonNullClassInstanceProperties ("mCaseNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumerationDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumerationDeclarationAST result ;
  const GGS_enumerationDeclarationAST * p = (const GGS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumToUintRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumToUintRoutineIR::objectCompare (const GGS_enumToUintRoutineIR & inOperand) const {
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

GGS_enumToUintRoutineIR::GGS_enumToUintRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumToUintRoutineIR GGS_enumToUintRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_string & in_mEnumerationLLVMTypeName,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_enumToUintRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_enumToUintRoutineIR (inCompiler COMMA_THERE)) ;
  object->enumToUintRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mEnumerationLLVMTypeName, inCompiler) ;
  const GGS_enumToUintRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumToUintRoutineIR::
enumToUintRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                 const GGS_bool & in_isRequired,
                                                                 const GGS_bool & in_warnsIfUnused,
                                                                 const GGS_string & in_mEnumerationLLVMTypeName,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mEnumerationLLVMTypeName = in_mEnumerationLLVMTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR::GGS_enumToUintRoutineIR (const cPtr_enumToUintRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumToUintRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_enumToUintRoutineIR::readProperty_mEnumerationLLVMTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_enumToUintRoutineIR * p = (cPtr_enumToUintRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
    return p->mProperty_mEnumerationLLVMTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumToUintRoutineIR::setProperty_mEnumerationLLVMTypeName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enumToUintRoutineIR * p = (cPtr_enumToUintRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
    p->mProperty_mEnumerationLLVMTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumToUintRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_enumToUintRoutineIR::cPtr_enumToUintRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mEnumerationLLVMTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumToUintRoutineIR::cPtr_enumToUintRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                    const GGS_bool & in_isRequired,
                                                    const GGS_bool & in_warnsIfUnused,
                                                    const GGS_string & in_mEnumerationLLVMTypeName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mEnumerationLLVMTypeName () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mEnumerationLLVMTypeName = in_mEnumerationLLVMTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumToUintRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR ;
}

void cPtr_enumToUintRoutineIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@enumToUintRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumerationLLVMTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumToUintRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumToUintRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumToUintRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mEnumerationLLVMTypeName.printNonNullClassInstanceProperties ("mEnumerationLLVMTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumToUintRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumToUintRoutineIR ("enumToUintRoutineIR",
                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumToUintRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumToUintRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumToUintRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR GGS_enumToUintRoutineIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_enumToUintRoutineIR result ;
  const GGS_enumToUintRoutineIR * p = (const GGS_enumToUintRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumToUintRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumToUintRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compiletimePrefixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compiletimePrefixOperatorAST::objectCompare (const GGS_compiletimePrefixOperatorAST & inOperand) const {
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

GGS_compiletimePrefixOperatorAST::GGS_compiletimePrefixOperatorAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST GGS_compiletimePrefixOperatorAST::
init_21__21__21__21__21__21_ (const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                              const GGS_location & in_mPrefixOperatorLocation,
                              const GGS_lstring & in_mReceiverName,
                              const GGS_lstring & in_mReceiverTypeName,
                              const GGS_ctExpressionAST & in_mExpression,
                              const GGS_lstring & in_mResultTypeName,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_compiletimePrefixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_compiletimePrefixOperatorAST (inCompiler COMMA_THERE)) ;
  object->compiletimePrefixOperatorAST_init_21__21__21__21__21__21_ (in_mPrefixOperator, in_mPrefixOperatorLocation, in_mReceiverName, in_mReceiverTypeName, in_mExpression, in_mResultTypeName, inCompiler) ;
  const GGS_compiletimePrefixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::
compiletimePrefixOperatorAST_init_21__21__21__21__21__21_ (const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                           const GGS_location & in_mPrefixOperatorLocation,
                                                           const GGS_lstring & in_mReceiverName,
                                                           const GGS_lstring & in_mReceiverTypeName,
                                                           const GGS_ctExpressionAST & in_mExpression,
                                                           const GGS_lstring & in_mResultTypeName,
                                                           Compiler * /* inCompiler */) {
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST::GGS_compiletimePrefixOperatorAST (const cPtr_compiletimePrefixOperatorAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compiletimePrefixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorEnumeration GGS_compiletimePrefixOperatorAST::readProperty_mPrefixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimePrefixOperatorEnumeration () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mPrefixOperator (const GGS_compileTimePrefixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_compiletimePrefixOperatorAST::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mPrefixOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compiletimePrefixOperatorAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compiletimePrefixOperatorAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compiletimePrefixOperatorAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compiletimePrefixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mResultTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compiletimePrefixOperatorAST class
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

cPtr_compiletimePrefixOperatorAST::cPtr_compiletimePrefixOperatorAST (const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                                      const GGS_location & in_mPrefixOperatorLocation,
                                                                      const GGS_lstring & in_mReceiverName,
                                                                      const GGS_lstring & in_mReceiverTypeName,
                                                                      const GGS_ctExpressionAST & in_mExpression,
                                                                      const GGS_lstring & in_mResultTypeName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_compiletimePrefixOperatorAST::classDescriptor (void) const {
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

acPtr_class * cPtr_compiletimePrefixOperatorAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compiletimePrefixOperatorAST (mProperty_mPrefixOperator, mProperty_mPrefixOperatorLocation, mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mExpression, mProperty_mResultTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @compiletimePrefixOperatorAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ("compiletimePrefixOperatorAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compiletimePrefixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compiletimePrefixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compiletimePrefixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST GGS_compiletimePrefixOperatorAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compiletimePrefixOperatorAST result ;
  const GGS_compiletimePrefixOperatorAST * p = (const GGS_compiletimePrefixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compiletimePrefixOperatorAST *> (p)) {
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

ComparisonResult GGS_compileTimePrefixOperatorUsage::objectCompare (const GGS_compileTimePrefixOperatorUsage & inOperand) const {
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

GGS_compileTimePrefixOperatorUsage::GGS_compileTimePrefixOperatorUsage (void) :
GGS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage GGS_compileTimePrefixOperatorUsage::
init_21__21__21_ (const GGS_location & in_mPrefixOperatorLocation,
                  const GGS_lstring & in_mReceiverOperandName,
                  const GGS_ctExpressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_compileTimePrefixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_compileTimePrefixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->compileTimePrefixOperatorUsage_init_21__21__21_ (in_mPrefixOperatorLocation, in_mReceiverOperandName, in_mExpression, inCompiler) ;
  const GGS_compileTimePrefixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimePrefixOperatorUsage::
compileTimePrefixOperatorUsage_init_21__21__21_ (const GGS_location & in_mPrefixOperatorLocation,
                                                 const GGS_lstring & in_mReceiverOperandName,
                                                 const GGS_ctExpressionAST & in_mExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverOperandName = in_mReceiverOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage::GGS_compileTimePrefixOperatorUsage (const cPtr_compileTimePrefixOperatorUsage * inSourcePtr) :
GGS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimePrefixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_compileTimePrefixOperatorUsage::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimePrefixOperatorUsage::setProperty_mPrefixOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimePrefixOperatorUsage::readProperty_mReceiverOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mReceiverOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimePrefixOperatorUsage::setProperty_mReceiverOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mReceiverOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compileTimePrefixOperatorUsage::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimePrefixOperatorUsage::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimePrefixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimePrefixOperatorUsage::cPtr_compileTimePrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverOperandName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimePrefixOperatorUsage::cPtr_compileTimePrefixOperatorUsage (const GGS_location & in_mPrefixOperatorLocation,
                                                                          const GGS_lstring & in_mReceiverOperandName,
                                                                          const GGS_ctExpressionAST & in_mExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverOperandName (),
mProperty_mExpression () {
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverOperandName = in_mReceiverOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimePrefixOperatorUsage::classDescriptor (void) const {
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

acPtr_class * cPtr_compileTimePrefixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimePrefixOperatorUsage (mProperty_mPrefixOperatorLocation, mProperty_mReceiverOperandName, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @compileTimePrefixOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ("compileTimePrefixOperatorUsage",
                                                                                   & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimePrefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimePrefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimePrefixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage GGS_compileTimePrefixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimePrefixOperatorUsage result ;
  const GGS_compileTimePrefixOperatorUsage * p = (const GGS_compileTimePrefixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimePrefixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimePrefixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionAST::objectCompare (const GGS_forInstructionAST & inOperand) const {
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

GGS_forInstructionAST::GGS_forInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forInstructionAST GGS_forInstructionAST::
init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_lstring & in_mVarName,
                                      const GGS_lstring & in_mIteratedObject,
                                      const GGS_expressionAST & in_mWhileExpression,
                                      const GGS_location & in_mEndOf_5F_whileExpression,
                                      const GGS_bool & in_mStaticWhileExpression,
                                      const GGS_instructionListAST & in_mDoInstructionList,
                                      const GGS_location & in_mEndOf_5F_for_5F_instruction,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_forInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_forInstructionAST (inCompiler COMMA_THERE)) ;
  object->forInstructionAST_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVarName, in_mIteratedObject, in_mWhileExpression, in_mEndOf_5F_whileExpression, in_mStaticWhileExpression, in_mDoInstructionList, in_mEndOf_5F_for_5F_instruction, inCompiler) ;
  const GGS_forInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::
forInstructionAST_init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_lstring & in_mVarName,
                                                        const GGS_lstring & in_mIteratedObject,
                                                        const GGS_expressionAST & in_mWhileExpression,
                                                        const GGS_location & in_mEndOf_5F_whileExpression,
                                                        const GGS_bool & in_mStaticWhileExpression,
                                                        const GGS_instructionListAST & in_mDoInstructionList,
                                                        const GGS_location & in_mEndOf_5F_for_5F_instruction,
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

GGS_forInstructionAST::GGS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionAST::setProperty_mVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forInstructionAST::readProperty_mIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mIteratedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionAST::setProperty_mIteratedObject (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mIteratedObject = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_forInstructionAST::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionAST::setProperty_mWhileExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mWhileExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionAST::readProperty_mEndOf_5F_whileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_whileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionAST::setProperty_mEndOf_5F_whileExpression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_whileExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_forInstructionAST::readProperty_mStaticWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mStaticWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionAST::setProperty_mStaticWhileExpression (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mStaticWhileExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_forInstructionAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionAST::setProperty_mDoInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionAST::readProperty_mEndOf_5F_for_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_for_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionAST::setProperty_mEndOf_5F_for_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_for_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionAST class
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

cPtr_forInstructionAST::cPtr_forInstructionAST (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mVarName,
                                                const GGS_lstring & in_mIteratedObject,
                                                const GGS_expressionAST & in_mWhileExpression,
                                                const GGS_location & in_mEndOf_5F_whileExpression,
                                                const GGS_bool & in_mStaticWhileExpression,
                                                const GGS_instructionListAST & in_mDoInstructionList,
                                                const GGS_location & in_mEndOf_5F_for_5F_instruction,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_forInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_forInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mIteratedObject, mProperty_mWhileExpression, mProperty_mEndOf_5F_whileExpression, mProperty_mStaticWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @forInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                                                      & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST GGS_forInstructionAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_forInstructionAST result ;
  const GGS_forInstructionAST * p = (const GGS_forInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forInstructionOnArrayIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionOnArrayIR::objectCompare (const GGS_forInstructionOnArrayIR & inOperand) const {
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

GGS_forInstructionOnArrayIR::GGS_forInstructionOnArrayIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forInstructionOnArrayIR GGS_forInstructionOnArrayIR::
init_21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mEnumeratedValueName,
                                          const GGS_lstring & in_mIteratedObjectName,
                                          const GGS_objectIR & in_mIteratedObject,
                                          const GGS_instructionListIR & in_mWhileInstructionList,
                                          const GGS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                          const GGS_instructionListIR & in_mDoInstructionList,
                                          const GGS_omnibusType & in_mElementType,
                                          const GGS_uint & in_mArraySize,
                                          const GGS_stringset & in_mInvokedFunctionSet,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_forInstructionOnArrayIR * object = nullptr ;
  macroMyNew (object, cPtr_forInstructionOnArrayIR (inCompiler COMMA_THERE)) ;
  object->forInstructionOnArrayIR_init_21__21__21__21__21__21__21__21__21_ (in_mEnumeratedValueName, in_mIteratedObjectName, in_mIteratedObject, in_mWhileInstructionList, in_mWhileExpressionBooleanResult_5F_llvmName, in_mDoInstructionList, in_mElementType, in_mArraySize, in_mInvokedFunctionSet, inCompiler) ;
  const GGS_forInstructionOnArrayIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnArrayIR::
forInstructionOnArrayIR_init_21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mEnumeratedValueName,
                                                                  const GGS_lstring & in_mIteratedObjectName,
                                                                  const GGS_objectIR & in_mIteratedObject,
                                                                  const GGS_instructionListIR & in_mWhileInstructionList,
                                                                  const GGS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                                                  const GGS_instructionListIR & in_mDoInstructionList,
                                                                  const GGS_omnibusType & in_mElementType,
                                                                  const GGS_uint & in_mArraySize,
                                                                  const GGS_stringset & in_mInvokedFunctionSet,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mEnumeratedValueName = in_mEnumeratedValueName ;
  mProperty_mIteratedObjectName = in_mIteratedObjectName ;
  mProperty_mIteratedObject = in_mIteratedObject ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mWhileExpressionBooleanResult_5F_llvmName = in_mWhileExpressionBooleanResult_5F_llvmName ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
  mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnArrayIR::GGS_forInstructionOnArrayIR (const cPtr_forInstructionOnArrayIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnArrayIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_forInstructionOnArrayIR::readProperty_mEnumeratedValueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mEnumeratedValueName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnArrayIR::setProperty_mEnumeratedValueName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mEnumeratedValueName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forInstructionOnArrayIR::readProperty_mIteratedObjectName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mIteratedObjectName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnArrayIR::setProperty_mIteratedObjectName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mIteratedObjectName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_forInstructionOnArrayIR::readProperty_mIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mIteratedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnArrayIR::setProperty_mIteratedObject (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mIteratedObject = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_forInstructionOnArrayIR::readProperty_mWhileInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnArrayIR::setProperty_mWhileInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mWhileInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_forInstructionOnArrayIR::readProperty_mWhileExpressionBooleanResult_5F_llvmName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mWhileExpressionBooleanResult_5F_llvmName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnArrayIR::setProperty_mWhileExpressionBooleanResult_5F_llvmName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mWhileExpressionBooleanResult_5F_llvmName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_forInstructionOnArrayIR::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnArrayIR::setProperty_mDoInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_forInstructionOnArrayIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnArrayIR::setProperty_mElementType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_forInstructionOnArrayIR::readProperty_mArraySize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mArraySize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnArrayIR::setProperty_mArraySize (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_forInstructionOnArrayIR::readProperty_mInvokedFunctionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mInvokedFunctionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnArrayIR::setProperty_mInvokedFunctionSet (const GGS_stringset & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mInvokedFunctionSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionOnArrayIR class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionOnArrayIR::cPtr_forInstructionOnArrayIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mEnumeratedValueName (),
mProperty_mIteratedObjectName (),
mProperty_mIteratedObject (),
mProperty_mWhileInstructionList (),
mProperty_mWhileExpressionBooleanResult_5F_llvmName (),
mProperty_mDoInstructionList (),
mProperty_mElementType (),
mProperty_mArraySize (),
mProperty_mInvokedFunctionSet () {
}

//--------------------------------------------------------------------------------------------------

cPtr_forInstructionOnArrayIR::cPtr_forInstructionOnArrayIR (const GGS_string & in_mEnumeratedValueName,
                                                            const GGS_lstring & in_mIteratedObjectName,
                                                            const GGS_objectIR & in_mIteratedObject,
                                                            const GGS_instructionListIR & in_mWhileInstructionList,
                                                            const GGS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                                            const GGS_instructionListIR & in_mDoInstructionList,
                                                            const GGS_omnibusType & in_mElementType,
                                                            const GGS_uint & in_mArraySize,
                                                            const GGS_stringset & in_mInvokedFunctionSet,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mEnumeratedValueName (),
mProperty_mIteratedObjectName (),
mProperty_mIteratedObject (),
mProperty_mWhileInstructionList (),
mProperty_mWhileExpressionBooleanResult_5F_llvmName (),
mProperty_mDoInstructionList (),
mProperty_mElementType (),
mProperty_mArraySize (),
mProperty_mInvokedFunctionSet () {
  mProperty_mEnumeratedValueName = in_mEnumeratedValueName ;
  mProperty_mIteratedObjectName = in_mIteratedObjectName ;
  mProperty_mIteratedObject = in_mIteratedObject ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mWhileExpressionBooleanResult_5F_llvmName = in_mWhileExpressionBooleanResult_5F_llvmName ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
  mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_forInstructionOnArrayIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

void cPtr_forInstructionOnArrayIR::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@forInstructionOnArrayIR:") ;
  mProperty_mEnumeratedValueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIteratedObjectName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileExpressionBooleanResult_5F_llvmName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionOnArrayIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionOnArrayIR (mProperty_mEnumeratedValueName, mProperty_mIteratedObjectName, mProperty_mIteratedObject, mProperty_mWhileInstructionList, mProperty_mWhileExpressionBooleanResult_5F_llvmName, mProperty_mDoInstructionList, mProperty_mElementType, mProperty_mArraySize, mProperty_mInvokedFunctionSet, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//     @forInstructionOnArrayIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR ("forInstructionOnArrayIR",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionOnArrayIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionOnArrayIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionOnArrayIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnArrayIR GGS_forInstructionOnArrayIR::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_forInstructionOnArrayIR result ;
  const GGS_forInstructionOnArrayIR * p = (const GGS_forInstructionOnArrayIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionOnArrayIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnArrayIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forInstructionOnLiteralStringIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionOnLiteralStringIR::objectCompare (const GGS_forInstructionOnLiteralStringIR & inOperand) const {
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

GGS_forInstructionOnLiteralStringIR::GGS_forInstructionOnLiteralStringIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR GGS_forInstructionOnLiteralStringIR::
init_21__21__21__21__21__21__21_ (const GGS_string & in_mVarName,
                                  const GGS_location & in_mLocation,
                                  const GGS_objectIR & in_mStringElementIteratedObject,
                                  const GGS_omnibusType & in_mLiteralStringType,
                                  const GGS_instructionListIR & in_mWhileInstructionList,
                                  const GGS_objectIR & in_mWhileExpressionResult,
                                  const GGS_instructionListIR & in_mDoInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_forInstructionOnLiteralStringIR * object = nullptr ;
  macroMyNew (object, cPtr_forInstructionOnLiteralStringIR (inCompiler COMMA_THERE)) ;
  object->forInstructionOnLiteralStringIR_init_21__21__21__21__21__21__21_ (in_mVarName, in_mLocation, in_mStringElementIteratedObject, in_mLiteralStringType, in_mWhileInstructionList, in_mWhileExpressionResult, in_mDoInstructionList, inCompiler) ;
  const GGS_forInstructionOnLiteralStringIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::
forInstructionOnLiteralStringIR_init_21__21__21__21__21__21__21_ (const GGS_string & in_mVarName,
                                                                  const GGS_location & in_mLocation,
                                                                  const GGS_objectIR & in_mStringElementIteratedObject,
                                                                  const GGS_omnibusType & in_mLiteralStringType,
                                                                  const GGS_instructionListIR & in_mWhileInstructionList,
                                                                  const GGS_objectIR & in_mWhileExpressionResult,
                                                                  const GGS_instructionListIR & in_mDoInstructionList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mStringElementIteratedObject = in_mStringElementIteratedObject ;
  mProperty_mLiteralStringType = in_mLiteralStringType ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mWhileExpressionResult = in_mWhileExpressionResult ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR::GGS_forInstructionOnLiteralStringIR (const cPtr_forInstructionOnLiteralStringIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnLiteralStringIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_forInstructionOnLiteralStringIR::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionOnLiteralStringIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_forInstructionOnLiteralStringIR::readProperty_mStringElementIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mStringElementIteratedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mStringElementIteratedObject (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mStringElementIteratedObject = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_forInstructionOnLiteralStringIR::readProperty_mLiteralStringType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mLiteralStringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mLiteralStringType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mLiteralStringType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_forInstructionOnLiteralStringIR::readProperty_mWhileInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mWhileInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mWhileInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_forInstructionOnLiteralStringIR::readProperty_mWhileExpressionResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mWhileExpressionResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mWhileExpressionResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mWhileExpressionResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_forInstructionOnLiteralStringIR::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mDoInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionOnLiteralStringIR class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionOnLiteralStringIR::cPtr_forInstructionOnLiteralStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mLocation (),
mProperty_mStringElementIteratedObject (),
mProperty_mLiteralStringType (),
mProperty_mWhileInstructionList (),
mProperty_mWhileExpressionResult (),
mProperty_mDoInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_forInstructionOnLiteralStringIR::cPtr_forInstructionOnLiteralStringIR (const GGS_string & in_mVarName,
                                                                            const GGS_location & in_mLocation,
                                                                            const GGS_objectIR & in_mStringElementIteratedObject,
                                                                            const GGS_omnibusType & in_mLiteralStringType,
                                                                            const GGS_instructionListIR & in_mWhileInstructionList,
                                                                            const GGS_objectIR & in_mWhileExpressionResult,
                                                                            const GGS_instructionListIR & in_mDoInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mLocation (),
mProperty_mStringElementIteratedObject (),
mProperty_mLiteralStringType (),
mProperty_mWhileInstructionList (),
mProperty_mWhileExpressionResult (),
mProperty_mDoInstructionList () {
  mProperty_mVarName = in_mVarName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mStringElementIteratedObject = in_mStringElementIteratedObject ;
  mProperty_mLiteralStringType = in_mLiteralStringType ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mWhileExpressionResult = in_mWhileExpressionResult ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_forInstructionOnLiteralStringIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;
}

void cPtr_forInstructionOnLiteralStringIR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@forInstructionOnLiteralStringIR:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStringElementIteratedObject.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralStringType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileExpressionResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionOnLiteralStringIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionOnLiteralStringIR (mProperty_mVarName, mProperty_mLocation, mProperty_mStringElementIteratedObject, mProperty_mLiteralStringType, mProperty_mWhileInstructionList, mProperty_mWhileExpressionResult, mProperty_mDoInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//     @forInstructionOnLiteralStringIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ("forInstructionOnLiteralStringIR",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionOnLiteralStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionOnLiteralStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionOnLiteralStringIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR GGS_forInstructionOnLiteralStringIR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forInstructionOnLiteralStringIR result ;
  const GGS_forInstructionOnLiteralStringIR * p = (const GGS_forInstructionOnLiteralStringIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionOnLiteralStringIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnLiteralStringIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @storeToUniversalReferenceIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeToUniversalReferenceIR::objectCompare (const GGS_storeToUniversalReferenceIR & inOperand) const {
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

GGS_storeToUniversalReferenceIR::GGS_storeToUniversalReferenceIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_storeToUniversalReferenceIR GGS_storeToUniversalReferenceIR::
init_21__21__21_ (const GGS_string & in_mLLVMTargetVarName,
                  const GGS_omnibusType & in_mTargetVarType,
                  const GGS_objectIR & in_mSourceValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeToUniversalReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_storeToUniversalReferenceIR (inCompiler COMMA_THERE)) ;
  object->storeToUniversalReferenceIR_init_21__21__21_ (in_mLLVMTargetVarName, in_mTargetVarType, in_mSourceValue, inCompiler) ;
  const GGS_storeToUniversalReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeToUniversalReferenceIR::
storeToUniversalReferenceIR_init_21__21__21_ (const GGS_string & in_mLLVMTargetVarName,
                                              const GGS_omnibusType & in_mTargetVarType,
                                              const GGS_objectIR & in_mSourceValue,
                                              Compiler * /* inCompiler */) {
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR::GGS_storeToUniversalReferenceIR (const cPtr_storeToUniversalReferenceIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeToUniversalReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_storeToUniversalReferenceIR::readProperty_mLLVMTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mLLVMTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeToUniversalReferenceIR::setProperty_mLLVMTargetVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mLLVMTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_storeToUniversalReferenceIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeToUniversalReferenceIR::setProperty_mTargetVarType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_storeToUniversalReferenceIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeToUniversalReferenceIR::setProperty_mSourceValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeToUniversalReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeToUniversalReferenceIR::cPtr_storeToUniversalReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMTargetVarName (),
mProperty_mTargetVarType (),
mProperty_mSourceValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_storeToUniversalReferenceIR::cPtr_storeToUniversalReferenceIR (const GGS_string & in_mLLVMTargetVarName,
                                                                    const GGS_omnibusType & in_mTargetVarType,
                                                                    const GGS_objectIR & in_mSourceValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMTargetVarName (),
mProperty_mTargetVarType (),
mProperty_mSourceValue () {
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_storeToUniversalReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

void cPtr_storeToUniversalReferenceIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@storeToUniversalReferenceIR:") ;
  mProperty_mLLVMTargetVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeToUniversalReferenceIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeToUniversalReferenceIR (mProperty_mLLVMTargetVarName, mProperty_mTargetVarType, mProperty_mSourceValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeToUniversalReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMTargetVarName.printNonNullClassInstanceProperties ("mLLVMTargetVarName") ;
    mProperty_mTargetVarType.printNonNullClassInstanceProperties ("mTargetVarType") ;
    mProperty_mSourceValue.printNonNullClassInstanceProperties ("mSourceValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @storeToUniversalReferenceIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ("storeToUniversalReferenceIR",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_storeToUniversalReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeToUniversalReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeToUniversalReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR GGS_storeToUniversalReferenceIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_storeToUniversalReferenceIR result ;
  const GGS_storeToUniversalReferenceIR * p = (const GGS_storeToUniversalReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeToUniversalReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeToUniversalReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @constructorCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_constructorCallAST::objectCompare (const GGS_constructorCallAST & inOperand) const {
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

GGS_constructorCallAST::GGS_constructorCallAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_constructorCallAST GGS_constructorCallAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_functionCallEffectiveParameterListAST & in_mParameterList,
                  const GGS_location & in_mErrorLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_constructorCallAST * object = nullptr ;
  macroMyNew (object, cPtr_constructorCallAST (inCompiler COMMA_THERE)) ;
  object->constructorCallAST_init_21__21__21_ (in_mTypeName, in_mParameterList, in_mErrorLocation, inCompiler) ;
  const GGS_constructorCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::
constructorCallAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                     const GGS_functionCallEffectiveParameterListAST & in_mParameterList,
                                     const GGS_location & in_mErrorLocation,
                                     Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mErrorLocation = in_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST::GGS_constructorCallAST (const cPtr_constructorCallAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_constructorCallAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorCallAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST GGS_constructorCallAST::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_functionCallEffectiveParameterListAST () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorCallAST::setProperty_mParameterList (const GGS_functionCallEffectiveParameterListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_constructorCallAST::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorCallAST::setProperty_mErrorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @constructorCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_constructorCallAST::cPtr_constructorCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mParameterList (),
mProperty_mErrorLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_constructorCallAST::cPtr_constructorCallAST (const GGS_lstring & in_mTypeName,
                                                  const GGS_functionCallEffectiveParameterListAST & in_mParameterList,
                                                  const GGS_location & in_mErrorLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mParameterList (),
mProperty_mErrorLocation () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mErrorLocation = in_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_constructorCallAST::classDescriptor (void) const {
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

acPtr_class * cPtr_constructorCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_constructorCallAST (mProperty_mTypeName, mProperty_mParameterList, mProperty_mErrorLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @constructorCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorCallAST ("constructorCallAST",
                                                                       & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST GGS_constructorCallAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_constructorCallAST result ;
  const GGS_constructorCallAST * p = (const GGS_constructorCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalStringInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringInExpressionAST::objectCompare (const GGS_literalStringInExpressionAST & inOperand) const {
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

GGS_literalStringInExpressionAST::GGS_literalStringInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalStringInExpressionAST GGS_literalStringInExpressionAST::
init_21_ (const GGS_lstring & in_mLiteralString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalStringInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalStringInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalStringInExpressionAST_init_21_ (in_mLiteralString, inCompiler) ;
  const GGS_literalStringInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::
literalStringInExpressionAST_init_21_ (const GGS_lstring & in_mLiteralString,
                                       Compiler * /* inCompiler */) {
  mProperty_mLiteralString = in_mLiteralString ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST::GGS_literalStringInExpressionAST (const cPtr_literalStringInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_literalStringInExpressionAST::readProperty_mLiteralString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_literalStringInExpressionAST * p = (cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    return p->mProperty_mLiteralString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_literalStringInExpressionAST::setProperty_mLiteralString (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalStringInExpressionAST * p = (cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    p->mProperty_mLiteralString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringInExpressionAST::cPtr_literalStringInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalStringInExpressionAST::cPtr_literalStringInExpressionAST (const GGS_lstring & in_mLiteralString,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralString () {
  mProperty_mLiteralString = in_mLiteralString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalStringInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

void cPtr_literalStringInExpressionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@literalStringInExpressionAST:") ;
  mProperty_mLiteralString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringInExpressionAST (mProperty_mLiteralString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralString.printNonNullClassInstanceProperties ("mLiteralString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalStringInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST ("literalStringInExpressionAST",
                                                                                 & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST GGS_literalStringInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalStringInExpressionAST result ;
  const GGS_literalStringInExpressionAST * p = (const GGS_literalStringInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @storeIndirectVolatileIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeIndirectVolatileIR::objectCompare (const GGS_storeIndirectVolatileIR & inOperand) const {
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

GGS_storeIndirectVolatileIR::GGS_storeIndirectVolatileIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_storeIndirectVolatileIR GGS_storeIndirectVolatileIR::
init_21__21__21_ (const GGS_omnibusType & in_mTargetVarType,
                  const GGS_string & in_mLLVMName,
                  const GGS_objectIR & in_mSourceValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeIndirectVolatileIR * object = nullptr ;
  macroMyNew (object, cPtr_storeIndirectVolatileIR (inCompiler COMMA_THERE)) ;
  object->storeIndirectVolatileIR_init_21__21__21_ (in_mTargetVarType, in_mLLVMName, in_mSourceValue, inCompiler) ;
  const GGS_storeIndirectVolatileIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeIndirectVolatileIR::
storeIndirectVolatileIR_init_21__21__21_ (const GGS_omnibusType & in_mTargetVarType,
                                          const GGS_string & in_mLLVMName,
                                          const GGS_objectIR & in_mSourceValue,
                                          Compiler * /* inCompiler */) {
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeIndirectVolatileIR::GGS_storeIndirectVolatileIR (const cPtr_storeIndirectVolatileIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeIndirectVolatileIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_storeIndirectVolatileIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeIndirectVolatileIR::setProperty_mTargetVarType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_storeIndirectVolatileIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeIndirectVolatileIR::setProperty_mLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_storeIndirectVolatileIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeIndirectVolatileIR::setProperty_mSourceValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeIndirectVolatileIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeIndirectVolatileIR::cPtr_storeIndirectVolatileIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetVarType (),
mProperty_mLLVMName (),
mProperty_mSourceValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_storeIndirectVolatileIR::cPtr_storeIndirectVolatileIR (const GGS_omnibusType & in_mTargetVarType,
                                                            const GGS_string & in_mLLVMName,
                                                            const GGS_objectIR & in_mSourceValue,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetVarType (),
mProperty_mLLVMName (),
mProperty_mSourceValue () {
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_storeIndirectVolatileIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

void cPtr_storeIndirectVolatileIR::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@storeIndirectVolatileIR:") ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeIndirectVolatileIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeIndirectVolatileIR (mProperty_mTargetVarType, mProperty_mLLVMName, mProperty_mSourceValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeIndirectVolatileIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetVarType.printNonNullClassInstanceProperties ("mTargetVarType") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mSourceValue.printNonNullClassInstanceProperties ("mSourceValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @storeIndirectVolatileIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR ("storeIndirectVolatileIR",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_storeIndirectVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeIndirectVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeIndirectVolatileIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeIndirectVolatileIR GGS_storeIndirectVolatileIR::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_storeIndirectVolatileIR result ;
  const GGS_storeIndirectVolatileIR * p = (const GGS_storeIndirectVolatileIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeIndirectVolatileIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeIndirectVolatileIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varInstructionWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInstructionWithAssignmentAST::objectCompare (const GGS_varInstructionWithAssignmentAST & inOperand) const {
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

GGS_varInstructionWithAssignmentAST::GGS_varInstructionWithAssignmentAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST GGS_varInstructionWithAssignmentAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mVarName,
                      const GGS_lstring & in_mOptionalTypeName,
                      const GGS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_varInstructionWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_varInstructionWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->varInstructionWithAssignmentAST_init_21__21__21__21_ (in_mInstructionLocation, in_mVarName, in_mOptionalTypeName, in_mSourceExpression, inCompiler) ;
  const GGS_varInstructionWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::
varInstructionWithAssignmentAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mVarName,
                                                      const GGS_lstring & in_mOptionalTypeName,
                                                      const GGS_expressionAST & in_mSourceExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST::GGS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varInstructionWithAssignmentAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varInstructionWithAssignmentAST::setProperty_mVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varInstructionWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varInstructionWithAssignmentAST::setProperty_mOptionalTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_varInstructionWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varInstructionWithAssignmentAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInstructionWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mVarName,
                                                                            const GGS_lstring & in_mOptionalTypeName,
                                                                            const GGS_expressionAST & in_mSourceExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_varInstructionWithAssignmentAST::classDescriptor (void) const {
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

acPtr_class * cPtr_varInstructionWithAssignmentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mOptionalTypeName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @varInstructionWithAssignmentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ("varInstructionWithAssignmentAST",
                                                                                    & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST GGS_varInstructionWithAssignmentAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_varInstructionWithAssignmentAST result ;
  const GGS_varInstructionWithAssignmentAST * p = (const GGS_varInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInstructionWithAssignmentAST *> (p)) {
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

ComparisonResult GGS_varDeclarationInstructionAST::objectCompare (const GGS_varDeclarationInstructionAST & inOperand) const {
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

GGS_varDeclarationInstructionAST::GGS_varDeclarationInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varDeclarationInstructionAST GGS_varDeclarationInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mVarName,
                  const GGS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_varDeclarationInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_varDeclarationInstructionAST (inCompiler COMMA_THERE)) ;
  object->varDeclarationInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mVarName, in_mTypeName, inCompiler) ;
  const GGS_varDeclarationInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::
varDeclarationInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mVarName,
                                               const GGS_lstring & in_mTypeName,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST::GGS_varDeclarationInstructionAST (const cPtr_varDeclarationInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varDeclarationInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varDeclarationInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varDeclarationInstructionAST::setProperty_mVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varDeclarationInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varDeclarationInstructionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varDeclarationInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_varDeclarationInstructionAST::cPtr_varDeclarationInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varDeclarationInstructionAST::cPtr_varDeclarationInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_lstring & in_mVarName,
                                                                      const GGS_lstring & in_mTypeName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_varDeclarationInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_varDeclarationInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varDeclarationInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @varDeclarationInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST ("varDeclarationInstructionAST",
                                                                                 & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varDeclarationInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varDeclarationInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varDeclarationInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST GGS_varDeclarationInstructionAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_varDeclarationInstructionAST result ;
  const GGS_varDeclarationInstructionAST * p = (const GGS_varDeclarationInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varDeclarationInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varDeclarationInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeInfixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeInfixOperatorAST::objectCompare (const GGS_compileTimeInfixOperatorAST & inOperand) const {
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

GGS_compileTimeInfixOperatorAST::GGS_compileTimeInfixOperatorAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST GGS_compileTimeInfixOperatorAST::
init_21__21__21__21__21__21__21__21_ (const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                      const GGS_location & in_mInfixOperatorLocation,
                                      const GGS_lstring & in_mLeftOperandName,
                                      const GGS_lstring & in_mLeftTypeName,
                                      const GGS_lstring & in_mRightOperandName,
                                      const GGS_lstring & in_mRightTypeName,
                                      const GGS_ctExpressionAST & in_mExpression,
                                      const GGS_lstring & in_mResultTypeName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_compileTimeInfixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeInfixOperatorAST (inCompiler COMMA_THERE)) ;
  object->compileTimeInfixOperatorAST_init_21__21__21__21__21__21__21__21_ (in_mInfixOperator, in_mInfixOperatorLocation, in_mLeftOperandName, in_mLeftTypeName, in_mRightOperandName, in_mRightTypeName, in_mExpression, in_mResultTypeName, inCompiler) ;
  const GGS_compileTimeInfixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::
compileTimeInfixOperatorAST_init_21__21__21__21__21__21__21__21_ (const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                  const GGS_location & in_mInfixOperatorLocation,
                                                                  const GGS_lstring & in_mLeftOperandName,
                                                                  const GGS_lstring & in_mLeftTypeName,
                                                                  const GGS_lstring & in_mRightOperandName,
                                                                  const GGS_lstring & in_mRightTypeName,
                                                                  const GGS_ctExpressionAST & in_mExpression,
                                                                  const GGS_lstring & in_mResultTypeName,
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

GGS_compileTimeInfixOperatorAST::GGS_compileTimeInfixOperatorAST (const cPtr_compileTimeInfixOperatorAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimeInfixOperatorEnumeration () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mInfixOperator (const GGS_compileTimeInfixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_compileTimeInfixOperatorAST::readProperty_mInfixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mInfixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mInfixOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mInfixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorAST::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mLeftOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorAST::readProperty_mLeftTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mLeftTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mLeftTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mLeftTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorAST::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mRightOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorAST::readProperty_mRightTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mRightTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mRightTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mRightTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compileTimeInfixOperatorAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mResultTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixOperatorAST class
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

cPtr_compileTimeInfixOperatorAST::cPtr_compileTimeInfixOperatorAST (const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                    const GGS_location & in_mInfixOperatorLocation,
                                                                    const GGS_lstring & in_mLeftOperandName,
                                                                    const GGS_lstring & in_mLeftTypeName,
                                                                    const GGS_lstring & in_mRightOperandName,
                                                                    const GGS_lstring & in_mRightTypeName,
                                                                    const GGS_ctExpressionAST & in_mExpression,
                                                                    const GGS_lstring & in_mResultTypeName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_compileTimeInfixOperatorAST::classDescriptor (void) const {
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

acPtr_class * cPtr_compileTimeInfixOperatorAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixOperatorAST (mProperty_mInfixOperator, mProperty_mInfixOperatorLocation, mProperty_mLeftOperandName, mProperty_mLeftTypeName, mProperty_mRightOperandName, mProperty_mRightTypeName, mProperty_mExpression, mProperty_mResultTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @compileTimeInfixOperatorAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ("compileTimeInfixOperatorAST",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeInfixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeInfixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeInfixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST GGS_compileTimeInfixOperatorAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorAST result ;
  const GGS_compileTimeInfixOperatorAST * p = (const GGS_compileTimeInfixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeInfixOperatorAST *> (p)) {
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

ComparisonResult GGS_compileTimeInfixOperatorUsage::objectCompare (const GGS_compileTimeInfixOperatorUsage & inOperand) const {
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

GGS_compileTimeInfixOperatorUsage::GGS_compileTimeInfixOperatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixOperatorUsage::
init_21__21__21_ (const GGS_lstring & in_mLeftOperandName,
                  const GGS_lstring & in_mRightOperandName,
                  const GGS_ctExpressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_compileTimeInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->compileTimeInfixOperatorUsage_init_21__21__21_ (in_mLeftOperandName, in_mRightOperandName, in_mExpression, inCompiler) ;
  const GGS_compileTimeInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::
compileTimeInfixOperatorUsage_init_21__21__21_ (const GGS_lstring & in_mLeftOperandName,
                                                const GGS_lstring & in_mRightOperandName,
                                                const GGS_ctExpressionAST & in_mExpression,
                                                Compiler * /* inCompiler */) {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage::GGS_compileTimeInfixOperatorUsage (const cPtr_compileTimeInfixOperatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorUsage::setProperty_mLeftOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorUsage::setProperty_mRightOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compileTimeInfixOperatorUsage::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorUsage::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorUsage::cPtr_compileTimeInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorUsage::cPtr_compileTimeInfixOperatorUsage (const GGS_lstring & in_mLeftOperandName,
                                                                        const GGS_lstring & in_mRightOperandName,
                                                                        const GGS_ctExpressionAST & in_mExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mExpression () {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeInfixOperatorUsage::classDescriptor (void) const {
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

acPtr_class * cPtr_compileTimeInfixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixOperatorUsage (mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @compileTimeInfixOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ("compileTimeInfixOperatorUsage",
                                                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorUsage result ;
  const GGS_compileTimeInfixOperatorUsage * p = (const GGS_compileTimeInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@compileTimeInfixOperatorUsage eval'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::method_eval (const GGS_objectIR constinArgument_inLeftOperand,
                                                      const GGS_objectIR constinArgument_inRightOperand,
                                                      GGS_bigint & outArgument_outResult,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_10610 ;
  GGS_omnibusType joker_10594_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_10594_1, var_leftValue_10610, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 273)) ;
  GGS_bigint var_rightValue_10677 ;
  GGS_omnibusType joker_10661_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_10661_1, var_rightValue_10677, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 274)) ;
  GGS_ctMap var_varMap_10702 = GGS_ctMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeInfixOperatorUsage temp_0 = this ;
  var_varMap_10702.setter_insertKey (temp_0.readProperty_mLeftOperandName (), var_leftValue_10610, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 276)) ;
  }
  {
  const GGS_compileTimeInfixOperatorUsage temp_1 = this ;
  var_varMap_10702.setter_insertKey (temp_1.readProperty_mRightOperandName (), var_rightValue_10677, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 277)) ;
  }
  const GGS_compileTimeInfixOperatorUsage temp_2 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_2.readProperty_mExpression ().ptr (), var_varMap_10702, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 278)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (cPtr_compileTimeInfixOperatorUsage * inObject,
                               const GGS_objectIR constin_inLeftOperand,
                               const GGS_objectIR constin_inRightOperand,
                               GGS_bigint & out_outResult,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_compileTimeInfixOperatorUsage) ;
    inObject->method_eval (constin_inLeftOperand, constin_inRightOperand, out_outResult, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @compileTimeInfixInfEqualOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeInfixInfEqualOperatorUsage::objectCompare (const GGS_compileTimeInfixInfEqualOperatorUsage & inOperand) const {
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

GGS_compileTimeInfixInfEqualOperatorUsage::GGS_compileTimeInfixInfEqualOperatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage::
init_21__21_ (const GGS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
              const GGS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_compileTimeInfixInfEqualOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeInfixInfEqualOperatorUsage (inCompiler COMMA_THERE)) ;
  object->compileTimeInfixInfEqualOperatorUsage_init_21__21_ (in_mEqualOperatorUsage, in_mLessThanOperatorUsage, inCompiler) ;
  const GGS_compileTimeInfixInfEqualOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixInfEqualOperatorUsage::
compileTimeInfixInfEqualOperatorUsage_init_21__21_ (const GGS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                    const GGS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage,
                                                    Compiler * /* inCompiler */) {
  mProperty_mEqualOperatorUsage = in_mEqualOperatorUsage ;
  mProperty_mLessThanOperatorUsage = in_mLessThanOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage::GGS_compileTimeInfixInfEqualOperatorUsage (const cPtr_compileTimeInfixInfEqualOperatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage::readProperty_mEqualOperatorUsage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimeInfixOperatorUsage () ;
  }else{
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    return p->mProperty_mEqualOperatorUsage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixInfEqualOperatorUsage::setProperty_mEqualOperatorUsage (const GGS_compileTimeInfixOperatorUsage & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    p->mProperty_mEqualOperatorUsage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage::readProperty_mLessThanOperatorUsage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimeInfixOperatorUsage () ;
  }else{
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    return p->mProperty_mLessThanOperatorUsage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixInfEqualOperatorUsage::setProperty_mLessThanOperatorUsage (const GGS_compileTimeInfixOperatorUsage & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    p->mProperty_mLessThanOperatorUsage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixInfEqualOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixInfEqualOperatorUsage::cPtr_compileTimeInfixInfEqualOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mEqualOperatorUsage (),
mProperty_mLessThanOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixInfEqualOperatorUsage::cPtr_compileTimeInfixInfEqualOperatorUsage (const GGS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                                                        const GGS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mEqualOperatorUsage (),
mProperty_mLessThanOperatorUsage () {
  mProperty_mEqualOperatorUsage = in_mEqualOperatorUsage ;
  mProperty_mLessThanOperatorUsage = in_mLessThanOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeInfixInfEqualOperatorUsage::classDescriptor (void) const {
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

acPtr_class * cPtr_compileTimeInfixInfEqualOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixInfEqualOperatorUsage (mProperty_mEqualOperatorUsage, mProperty_mLessThanOperatorUsage, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @compileTimeInfixInfEqualOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ("compileTimeInfixInfEqualOperatorUsage",
                                                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeInfixInfEqualOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeInfixInfEqualOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeInfixInfEqualOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixInfEqualOperatorUsage result ;
  const GGS_compileTimeInfixInfEqualOperatorUsage * p = (const GGS_compileTimeInfixInfEqualOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeInfixInfEqualOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixInfEqualOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @isrDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_isrDeclarationAST::objectCompare (const GGS_isrDeclarationAST & inOperand) const {
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

GGS_isrDeclarationAST::GGS_isrDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_isrDeclarationAST GGS_isrDeclarationAST::
init_21__21__21__21__21_ (const GGS_lstring & in_mISRName,
                          const GGS_mode & in_mMode,
                          const GGS_lstring & in_mDriverName,
                          const GGS_instructionListAST & in_mISRInstructionList,
                          const GGS_location & in_mEndOfISRDeclaration,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_isrDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_isrDeclarationAST (inCompiler COMMA_THERE)) ;
  object->isrDeclarationAST_init_21__21__21__21__21_ (in_mISRName, in_mMode, in_mDriverName, in_mISRInstructionList, in_mEndOfISRDeclaration, inCompiler) ;
  const GGS_isrDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::
isrDeclarationAST_init_21__21__21__21__21_ (const GGS_lstring & in_mISRName,
                                            const GGS_mode & in_mMode,
                                            const GGS_lstring & in_mDriverName,
                                            const GGS_instructionListAST & in_mISRInstructionList,
                                            const GGS_location & in_mEndOfISRDeclaration,
                                            Compiler * /* inCompiler */) {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
  mProperty_mISRInstructionList = in_mISRInstructionList ;
  mProperty_mEndOfISRDeclaration = in_mEndOfISRDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST::GGS_isrDeclarationAST (const cPtr_isrDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_isrDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_isrDeclarationAST::readProperty_mISRName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mISRName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_isrDeclarationAST::setProperty_mISRName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mISRName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_isrDeclarationAST::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mode () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_isrDeclarationAST::setProperty_mMode (const GGS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_isrDeclarationAST::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_isrDeclarationAST::setProperty_mDriverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_isrDeclarationAST::readProperty_mISRInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mISRInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_isrDeclarationAST::setProperty_mISRInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mISRInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_isrDeclarationAST::readProperty_mEndOfISRDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mEndOfISRDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_isrDeclarationAST::setProperty_mEndOfISRDeclaration (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mEndOfISRDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @isrDeclarationAST class
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

cPtr_isrDeclarationAST::cPtr_isrDeclarationAST (const GGS_lstring & in_mISRName,
                                                const GGS_mode & in_mMode,
                                                const GGS_lstring & in_mDriverName,
                                                const GGS_instructionListAST & in_mISRInstructionList,
                                                const GGS_location & in_mEndOfISRDeclaration,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_isrDeclarationAST::classDescriptor (void) const {
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

acPtr_class * cPtr_isrDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_isrDeclarationAST (mProperty_mISRName, mProperty_mMode, mProperty_mDriverName, mProperty_mISRInstructionList, mProperty_mEndOfISRDeclaration, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @isrDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_isrDeclarationAST ("isrDeclarationAST",
                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_isrDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_isrDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_isrDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST GGS_isrDeclarationAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_isrDeclarationAST result ;
  const GGS_isrDeclarationAST * p = (const GGS_isrDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_isrDeclarationAST *> (p)) {
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

ComparisonResult GGS_decoratedISRDeclaration::objectCompare (const GGS_decoratedISRDeclaration & inOperand) const {
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

GGS_decoratedISRDeclaration::GGS_decoratedISRDeclaration (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedISRDeclaration GGS_decoratedISRDeclaration::
init_21__21__21_ (const GGS_lstring & in_mISRName,
                  const GGS_mode & in_mMode,
                  const GGS_lstring & in_mDriverName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_decoratedISRDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedISRDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedISRDeclaration_init_21__21__21_ (in_mISRName, in_mMode, in_mDriverName, inCompiler) ;
  const GGS_decoratedISRDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedISRDeclaration::
decoratedISRDeclaration_init_21__21__21_ (const GGS_lstring & in_mISRName,
                                          const GGS_mode & in_mMode,
                                          const GGS_lstring & in_mDriverName,
                                          Compiler * /* inCompiler */) {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration::GGS_decoratedISRDeclaration (const cPtr_decoratedISRDeclaration * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedISRDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedISRDeclaration::readProperty_mISRName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mISRName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedISRDeclaration::setProperty_mISRName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mISRName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_decoratedISRDeclaration::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mode () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedISRDeclaration::setProperty_mMode (const GGS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedISRDeclaration::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedISRDeclaration::setProperty_mDriverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedISRDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedISRDeclaration::cPtr_decoratedISRDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mDriverName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedISRDeclaration::cPtr_decoratedISRDeclaration (const GGS_lstring & in_mISRName,
                                                            const GGS_mode & in_mMode,
                                                            const GGS_lstring & in_mDriverName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mDriverName () {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_decoratedISRDeclaration::classDescriptor (void) const {
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

acPtr_class * cPtr_decoratedISRDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedISRDeclaration (mProperty_mISRName, mProperty_mMode, mProperty_mDriverName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @decoratedISRDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration ("decoratedISRDeclaration",
                                                                            & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedISRDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedISRDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedISRDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration GGS_decoratedISRDeclaration::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_decoratedISRDeclaration result ;
  const GGS_decoratedISRDeclaration * p = (const GGS_decoratedISRDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedISRDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedISRDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @registerInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerInExpressionAST::objectCompare (const GGS_registerInExpressionAST & inOperand) const {
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

GGS_registerInExpressionAST::GGS_registerInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_registerInExpressionAST GGS_registerInExpressionAST::
init_21__21_ (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
              const GGS_lstring & in_mFieldName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_registerInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_registerInExpressionAST (inCompiler COMMA_THERE)) ;
  object->registerInExpressionAST_init_21__21_ (in_mControlRegisterLValue, in_mFieldName, inCompiler) ;
  const GGS_registerInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::
registerInExpressionAST_init_21__21_ (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                      const GGS_lstring & in_mFieldName,
                                      Compiler * /* inCompiler */) {
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mFieldName = in_mFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST::GGS_registerInExpressionAST (const cPtr_registerInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_registerInExpressionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterLValueAST () ;
  }else{
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerInExpressionAST::setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_registerInExpressionAST::readProperty_mFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    return p->mProperty_mFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerInExpressionAST::setProperty_mFieldName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    p->mProperty_mFieldName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @registerInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_registerInExpressionAST::cPtr_registerInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mFieldName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_registerInExpressionAST::cPtr_registerInExpressionAST (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                            const GGS_lstring & in_mFieldName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mFieldName () {
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mFieldName = in_mFieldName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_registerInExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_registerInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_registerInExpressionAST (mProperty_mControlRegisterLValue, mProperty_mFieldName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @registerInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerInExpressionAST ("registerInExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST GGS_registerInExpressionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_registerInExpressionAST result ;
  const GGS_registerInExpressionAST * p = (const GGS_registerInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @binaryOperationIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binaryOperationIR::objectCompare (const GGS_binaryOperationIR & inOperand) const {
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

GGS_binaryOperationIR::GGS_binaryOperationIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_binaryOperationIR GGS_binaryOperationIR::
init_21__21__21__21__21__21_ (const GGS_objectIR & in_mTarget,
                              const GGS_omnibusType & in_mOperandType,
                              const GGS_objectIR & in_mLeft,
                              const GGS_llvmBinaryOperation & in_mOperation,
                              const GGS_objectIR & in_mRight,
                              const GGS_location & in_mLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_binaryOperationIR * object = nullptr ;
  macroMyNew (object, cPtr_binaryOperationIR (inCompiler COMMA_THERE)) ;
  object->binaryOperationIR_init_21__21__21__21__21__21_ (in_mTarget, in_mOperandType, in_mLeft, in_mOperation, in_mRight, in_mLocation, inCompiler) ;
  const GGS_binaryOperationIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::
binaryOperationIR_init_21__21__21__21__21__21_ (const GGS_objectIR & in_mTarget,
                                                const GGS_omnibusType & in_mOperandType,
                                                const GGS_objectIR & in_mLeft,
                                                const GGS_llvmBinaryOperation & in_mOperation,
                                                const GGS_objectIR & in_mRight,
                                                const GGS_location & in_mLocation,
                                                Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperandType = in_mOperandType ;
  mProperty_mLeft = in_mLeft ;
  mProperty_mOperation = in_mOperation ;
  mProperty_mRight = in_mRight ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperationIR::GGS_binaryOperationIR (const cPtr_binaryOperationIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperationIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_binaryOperationIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mTarget (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_binaryOperationIR::readProperty_mOperandType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mOperandType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mOperandType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mOperandType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_binaryOperationIR::readProperty_mLeft (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mLeft ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mLeft (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mLeft = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_binaryOperationIR::readProperty_mOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmBinaryOperation () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mOperation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mOperation (const GGS_llvmBinaryOperation & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mOperation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_binaryOperationIR::readProperty_mRight (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mRight ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mRight (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mRight = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_binaryOperationIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @binaryOperationIR class
//--------------------------------------------------------------------------------------------------

cPtr_binaryOperationIR::cPtr_binaryOperationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mOperandType (),
mProperty_mLeft (),
mProperty_mOperation (),
mProperty_mRight (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_binaryOperationIR::cPtr_binaryOperationIR (const GGS_objectIR & in_mTarget,
                                                const GGS_omnibusType & in_mOperandType,
                                                const GGS_objectIR & in_mLeft,
                                                const GGS_llvmBinaryOperation & in_mOperation,
                                                const GGS_objectIR & in_mRight,
                                                const GGS_location & in_mLocation,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mOperandType (),
mProperty_mLeft (),
mProperty_mOperation (),
mProperty_mRight (),
mProperty_mLocation () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperandType = in_mOperandType ;
  mProperty_mLeft = in_mLeft ;
  mProperty_mOperation = in_mOperation ;
  mProperty_mRight = in_mRight ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_binaryOperationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

void cPtr_binaryOperationIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@binaryOperationIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperandType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_binaryOperationIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binaryOperationIR (mProperty_mTarget, mProperty_mOperandType, mProperty_mLeft, mProperty_mOperation, mProperty_mRight, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binaryOperationIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mOperandType.printNonNullClassInstanceProperties ("mOperandType") ;
    mProperty_mLeft.printNonNullClassInstanceProperties ("mLeft") ;
    mProperty_mOperation.printNonNullClassInstanceProperties ("mOperation") ;
    mProperty_mRight.printNonNullClassInstanceProperties ("mRight") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @binaryOperationIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperationIR ("binaryOperationIR",
                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binaryOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binaryOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binaryOperationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperationIR GGS_binaryOperationIR::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_binaryOperationIR result ;
  const GGS_binaryOperationIR * p = (const GGS_binaryOperationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binaryOperationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@binaryOperationIR enterCodeForOverflowOperation'
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::method_enterCodeForOverflowOperation (const GGS_string constinArgument_inOperation,
                                                                   const GGS_bigint constinArgument_inPanicCode,
                                                                   GGS_string & ioArgument_ioLLVMcode,
                                                                   const GGS_generationContext constinArgument_inGenerationContext,
                                                                   GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperationIR temp_0 = this ;
  GGS_string var_llvmType_2050 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mOperandType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)) ;
  const GGS_binaryOperationIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GGS_string (".r = call {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType_2050, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GGS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GGS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType_2050, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)) ;
  const GGS_binaryOperationIR temp_2 = this ;
  const GGS_binaryOperationIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_llvmType_2050, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (var_llvmType_2050, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)) ;
  const GGS_binaryOperationIR temp_4 = this ;
  const GGS_binaryOperationIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_4.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GGS_string (".hasOvf = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_llvmType_2050, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GGS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (extensionGetter_llvmName (temp_5.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GGS_string (".r, 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)) ;
  GGS_string var_labelName_2491 = GGS_string ("label.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)) ;
  const GGS_binaryOperationIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_6.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GGS_string (".hasOvf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2491, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GGS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2491, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GGS_string (".noovf\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelName_2491.add_operation (GGS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)) ;
  const GGS_binaryOperationIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_7.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)) ;
  const GGS_binaryOperationIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (temp_8.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelName_2491.add_operation (GGS_string (".noovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)) ;
  const GGS_binaryOperationIR temp_9 = this ;
  const GGS_binaryOperationIR temp_10 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_9.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GGS_string (" = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (var_llvmType_2050, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GGS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GGS_string (".r, 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("{").add_operation (var_llvmType_2050, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GGS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GGS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (var_llvmType_2050, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2050, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GGS_string (" %a, "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2050, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GGS_string (" %b)"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForOverflowOperation (cPtr_binaryOperationIR * inObject,
                                                        const GGS_string constin_inOperation,
                                                        const GGS_bigint constin_inPanicCode,
                                                        GGS_string & io_ioLLVMcode,
                                                        const GGS_generationContext constin_inGenerationContext,
                                                        GGS_generationAdds & io_ioGenerationAdds,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    inObject->method_enterCodeForOverflowOperation (constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::method_enterCodeForDivisionWithZeroDivisorPanic (const GGS_string constinArgument_inOperation,
                                                                              const GGS_bigint constinArgument_inPanicCode,
                                                                              GGS_string & ioArgument_ioLLVMcode,
                                                                              const GGS_generationContext constinArgument_inGenerationContext,
                                                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperationIR temp_0 = this ;
  GGS_string var_llvmType_3803 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mOperandType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)) ;
  const GGS_binaryOperationIR temp_1 = this ;
  const GGS_binaryOperationIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GGS_string (".isZero = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (var_llvmType_3803, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)) ;
  GGS_string var_labelName_3974 = GGS_string ("label.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 115)) ;
  const GGS_binaryOperationIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_3.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GGS_string (".isZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName_3974, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GGS_string (".divideByZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName_3974, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GGS_string (".ok\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelName_3974.add_operation (GGS_string (".divideByZero:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)) ;
  const GGS_binaryOperationIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
  const GGS_binaryOperationIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (temp_5.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelName_3974.add_operation (GGS_string (".ok:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)) ;
  const GGS_binaryOperationIR temp_6 = this ;
  const GGS_binaryOperationIR temp_7 = this ;
  const GGS_binaryOperationIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_6.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (var_llvmType_3803, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (temp_8.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (cPtr_binaryOperationIR * inObject,
                                                                   const GGS_string constin_inOperation,
                                                                   const GGS_bigint constin_inPanicCode,
                                                                   GGS_string & io_ioLLVMcode,
                                                                   const GGS_generationContext constin_inGenerationContext,
                                                                   GGS_generationAdds & io_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    inObject->method_enterCodeForDivisionWithZeroDivisorPanic (constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @registerConstantExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerConstantExpressionAST::objectCompare (const GGS_registerConstantExpressionAST & inOperand) const {
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

GGS_registerConstantExpressionAST::GGS_registerConstantExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_registerConstantExpressionAST GGS_registerConstantExpressionAST::
init_21__21__21_ (const GGS_lstring & in_mRegisterGroupName,
                  const GGS_lstring & in_mRegisterName,
                  const GGS_registerIntegerFieldListAST & in_mFieldValues,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_registerConstantExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_registerConstantExpressionAST (inCompiler COMMA_THERE)) ;
  object->registerConstantExpressionAST_init_21__21__21_ (in_mRegisterGroupName, in_mRegisterName, in_mFieldValues, inCompiler) ;
  const GGS_registerConstantExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::
registerConstantExpressionAST_init_21__21__21_ (const GGS_lstring & in_mRegisterGroupName,
                                                const GGS_lstring & in_mRegisterName,
                                                const GGS_registerIntegerFieldListAST & in_mFieldValues,
                                                Compiler * /* inCompiler */) {
  mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mFieldValues = in_mFieldValues ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST::GGS_registerConstantExpressionAST (const cPtr_registerConstantExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerConstantExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_registerConstantExpressionAST::readProperty_mRegisterGroupName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mRegisterGroupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerConstantExpressionAST::setProperty_mRegisterGroupName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mRegisterGroupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_registerConstantExpressionAST::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerConstantExpressionAST::setProperty_mRegisterName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST GGS_registerConstantExpressionAST::readProperty_mFieldValues (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerIntegerFieldListAST () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mFieldValues ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerConstantExpressionAST::setProperty_mFieldValues (const GGS_registerIntegerFieldListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mFieldValues = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @registerConstantExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_registerConstantExpressionAST::cPtr_registerConstantExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mRegisterGroupName (),
mProperty_mRegisterName (),
mProperty_mFieldValues () {
}

//--------------------------------------------------------------------------------------------------

cPtr_registerConstantExpressionAST::cPtr_registerConstantExpressionAST (const GGS_lstring & in_mRegisterGroupName,
                                                                        const GGS_lstring & in_mRegisterName,
                                                                        const GGS_registerIntegerFieldListAST & in_mFieldValues,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mRegisterGroupName (),
mProperty_mRegisterName (),
mProperty_mFieldValues () {
  mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mFieldValues = in_mFieldValues ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_registerConstantExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_registerConstantExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_registerConstantExpressionAST (mProperty_mRegisterGroupName, mProperty_mRegisterName, mProperty_mFieldValues, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @registerConstantExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST ("registerConstantExpressionAST",
                                                                                  & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerConstantExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerConstantExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerConstantExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST GGS_registerConstantExpressionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_registerConstantExpressionAST result ;
  const GGS_registerConstantExpressionAST * p = (const GGS_registerConstantExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerConstantExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerConstantExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @fixedSizeArrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_fixedSizeArrayTypeDeclarationAST::objectCompare (const GGS_fixedSizeArrayTypeDeclarationAST & inOperand) const {
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

GGS_fixedSizeArrayTypeDeclarationAST::GGS_fixedSizeArrayTypeDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST GGS_fixedSizeArrayTypeDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mFixedSizeArrayType,
                      const GGS_lstring & in_mElementTypeName,
                      const GGS_expressionAST & in_mSizeExpression,
                      const GGS_location & in_mSizeExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_fixedSizeArrayTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_fixedSizeArrayTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->fixedSizeArrayTypeDeclarationAST_init_21__21__21__21_ (in_mFixedSizeArrayType, in_mElementTypeName, in_mSizeExpression, in_mSizeExpressionLocation, inCompiler) ;
  const GGS_fixedSizeArrayTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::
fixedSizeArrayTypeDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mFixedSizeArrayType,
                                                       const GGS_lstring & in_mElementTypeName,
                                                       const GGS_expressionAST & in_mSizeExpression,
                                                       const GGS_location & in_mSizeExpressionLocation,
                                                       Compiler * /* inCompiler */) {
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mSizeExpressionLocation = in_mSizeExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST::GGS_fixedSizeArrayTypeDeclarationAST (const cPtr_fixedSizeArrayTypeDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fixedSizeArrayTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_fixedSizeArrayTypeDeclarationAST::readProperty_mFixedSizeArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayTypeDeclarationAST::setProperty_mFixedSizeArrayType (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_fixedSizeArrayTypeDeclarationAST::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayTypeDeclarationAST::setProperty_mElementTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_fixedSizeArrayTypeDeclarationAST::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayTypeDeclarationAST::setProperty_mSizeExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_fixedSizeArrayTypeDeclarationAST::readProperty_mSizeExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mSizeExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayTypeDeclarationAST::setProperty_mSizeExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mSizeExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @fixedSizeArrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayTypeDeclarationAST::cPtr_fixedSizeArrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementTypeName (),
mProperty_mSizeExpression (),
mProperty_mSizeExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayTypeDeclarationAST::cPtr_fixedSizeArrayTypeDeclarationAST (const GGS_lstring & in_mFixedSizeArrayType,
                                                                              const GGS_lstring & in_mElementTypeName,
                                                                              const GGS_expressionAST & in_mSizeExpression,
                                                                              const GGS_location & in_mSizeExpressionLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementTypeName (),
mProperty_mSizeExpression (),
mProperty_mSizeExpressionLocation () {
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mSizeExpressionLocation = in_mSizeExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_fixedSizeArrayTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ;
}

void cPtr_fixedSizeArrayTypeDeclarationAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@fixedSizeArrayTypeDeclarationAST:") ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_fixedSizeArrayTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_fixedSizeArrayTypeDeclarationAST (mProperty_mFixedSizeArrayType, mProperty_mElementTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_fixedSizeArrayTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFixedSizeArrayType.printNonNullClassInstanceProperties ("mFixedSizeArrayType") ;
    mProperty_mElementTypeName.printNonNullClassInstanceProperties ("mElementTypeName") ;
    mProperty_mSizeExpression.printNonNullClassInstanceProperties ("mSizeExpression") ;
    mProperty_mSizeExpressionLocation.printNonNullClassInstanceProperties ("mSizeExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @fixedSizeArrayTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ("fixedSizeArrayTypeDeclarationAST",
                                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixedSizeArrayTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixedSizeArrayTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixedSizeArrayTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST GGS_fixedSizeArrayTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayTypeDeclarationAST result ;
  const GGS_fixedSizeArrayTypeDeclarationAST * p = (const GGS_fixedSizeArrayTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixedSizeArrayTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @userLLVMStaticArrayTypeDefinitionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_userLLVMStaticArrayTypeDefinitionIR::objectCompare (const GGS_userLLVMStaticArrayTypeDefinitionIR & inOperand) const {
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

GGS_userLLVMStaticArrayTypeDefinitionIR::GGS_userLLVMStaticArrayTypeDefinitionIR (void) :
GGS_userLLVMTypeDefinitionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR GGS_userLLVMStaticArrayTypeDefinitionIR::
init_21__21__21_ (const GGS_string & in_mLLVMDefinedTypeName,
                  const GGS_omnibusType & in_mElementType,
                  const GGS_bigint & in_mSize,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_userLLVMStaticArrayTypeDefinitionIR * object = nullptr ;
  macroMyNew (object, cPtr_userLLVMStaticArrayTypeDefinitionIR (inCompiler COMMA_THERE)) ;
  object->userLLVMStaticArrayTypeDefinitionIR_init_21__21__21_ (in_mLLVMDefinedTypeName, in_mElementType, in_mSize, inCompiler) ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMStaticArrayTypeDefinitionIR::
userLLVMStaticArrayTypeDefinitionIR_init_21__21__21_ (const GGS_string & in_mLLVMDefinedTypeName,
                                                      const GGS_omnibusType & in_mElementType,
                                                      const GGS_bigint & in_mSize,
                                                      Compiler * /* inCompiler */) {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR::GGS_userLLVMStaticArrayTypeDefinitionIR (const cPtr_userLLVMStaticArrayTypeDefinitionIR * inSourcePtr) :
GGS_userLLVMTypeDefinitionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_userLLVMStaticArrayTypeDefinitionIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMStaticArrayTypeDefinitionIR::setProperty_mElementType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_userLLVMStaticArrayTypeDefinitionIR::readProperty_mSize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    return p->mProperty_mSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMStaticArrayTypeDefinitionIR::setProperty_mSize (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    p->mProperty_mSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @userLLVMStaticArrayTypeDefinitionIR class
//--------------------------------------------------------------------------------------------------

cPtr_userLLVMStaticArrayTypeDefinitionIR::cPtr_userLLVMStaticArrayTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (inCompiler COMMA_THERE),
mProperty_mElementType (),
mProperty_mSize () {
}

//--------------------------------------------------------------------------------------------------

cPtr_userLLVMStaticArrayTypeDefinitionIR::cPtr_userLLVMStaticArrayTypeDefinitionIR (const GGS_string & in_mLLVMDefinedTypeName,
                                                                                    const GGS_omnibusType & in_mElementType,
                                                                                    const GGS_bigint & in_mSize,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (in_mLLVMDefinedTypeName, inCompiler COMMA_THERE),
mProperty_mElementType (),
mProperty_mSize () {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_userLLVMStaticArrayTypeDefinitionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;
}

void cPtr_userLLVMStaticArrayTypeDefinitionIR::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@userLLVMStaticArrayTypeDefinitionIR:") ;
  mProperty_mLLVMDefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_userLLVMStaticArrayTypeDefinitionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_userLLVMStaticArrayTypeDefinitionIR (mProperty_mLLVMDefinedTypeName, mProperty_mElementType, mProperty_mSize, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_userLLVMStaticArrayTypeDefinitionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_userLLVMTypeDefinitionIR::printNonNullClassInstanceProperties () ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mSize.printNonNullClassInstanceProperties ("mSize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @userLLVMStaticArrayTypeDefinitionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ("userLLVMStaticArrayTypeDefinitionIR",
                                                                                        & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMStaticArrayTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMStaticArrayTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMStaticArrayTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR GGS_userLLVMStaticArrayTypeDefinitionIR::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_userLLVMStaticArrayTypeDefinitionIR result ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR * p = (const GGS_userLLVMStaticArrayTypeDefinitionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMStaticArrayTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMStaticArrayTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @fixedSizeArrayAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_fixedSizeArrayAssignmentOperatorUsage::objectCompare (const GGS_fixedSizeArrayAssignmentOperatorUsage & inOperand) const {
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

GGS_fixedSizeArrayAssignmentOperatorUsage::GGS_fixedSizeArrayAssignmentOperatorUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage GGS_fixedSizeArrayAssignmentOperatorUsage::
init_21__21__21_ (const GGS_omnibusType & in_mElementType,
                  const GGS_uint & in_mArraySize,
                  const GGS_string & in_mAssignValueToElements_5F_functionName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_fixedSizeArrayAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_fixedSizeArrayAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->fixedSizeArrayAssignmentOperatorUsage_init_21__21__21_ (in_mElementType, in_mArraySize, in_mAssignValueToElements_5F_functionName, inCompiler) ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayAssignmentOperatorUsage::
fixedSizeArrayAssignmentOperatorUsage_init_21__21__21_ (const GGS_omnibusType & in_mElementType,
                                                        const GGS_uint & in_mArraySize,
                                                        const GGS_string & in_mAssignValueToElements_5F_functionName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
  mProperty_mAssignValueToElements_5F_functionName = in_mAssignValueToElements_5F_functionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage::GGS_fixedSizeArrayAssignmentOperatorUsage (const cPtr_fixedSizeArrayAssignmentOperatorUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayAssignmentOperatorUsage::setProperty_mElementType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mArraySize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mArraySize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayAssignmentOperatorUsage::setProperty_mArraySize (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mAssignValueToElements_5F_functionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mAssignValueToElements_5F_functionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayAssignmentOperatorUsage::setProperty_mAssignValueToElements_5F_functionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mAssignValueToElements_5F_functionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @fixedSizeArrayAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayAssignmentOperatorUsage::cPtr_fixedSizeArrayAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mElementType (),
mProperty_mArraySize (),
mProperty_mAssignValueToElements_5F_functionName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayAssignmentOperatorUsage::cPtr_fixedSizeArrayAssignmentOperatorUsage (const GGS_omnibusType & in_mElementType,
                                                                                        const GGS_uint & in_mArraySize,
                                                                                        const GGS_string & in_mAssignValueToElements_5F_functionName,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mElementType (),
mProperty_mArraySize (),
mProperty_mAssignValueToElements_5F_functionName () {
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
  mProperty_mAssignValueToElements_5F_functionName = in_mAssignValueToElements_5F_functionName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_fixedSizeArrayAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ;
}

void cPtr_fixedSizeArrayAssignmentOperatorUsage::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@fixedSizeArrayAssignmentOperatorUsage:") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignValueToElements_5F_functionName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_fixedSizeArrayAssignmentOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_fixedSizeArrayAssignmentOperatorUsage (mProperty_mElementType, mProperty_mArraySize, mProperty_mAssignValueToElements_5F_functionName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_fixedSizeArrayAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mArraySize.printNonNullClassInstanceProperties ("mArraySize") ;
    mProperty_mAssignValueToElements_5F_functionName.printNonNullClassInstanceProperties ("mAssignValueToElements_functionName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @fixedSizeArrayAssignmentOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ("fixedSizeArrayAssignmentOperatorUsage",
                                                                                          & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixedSizeArrayAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixedSizeArrayAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixedSizeArrayAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage GGS_fixedSizeArrayAssignmentOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayAssignmentOperatorUsage result ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage * p = (const GGS_fixedSizeArrayAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixedSizeArrayAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignRepeatedValueToFixedSizeArrayElementsFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::objectCompare (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inOperand) const {
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

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                     const GGS_bool & in_isRequired,
                                                     const GGS_bool & in_warnsIfUnused,
                                                     const GGS_omnibusType & in_mFixedSizeArrayType,
                                                     const GGS_omnibusType & in_mElementType,
                                                     const GGS_uint & in_mArraySize,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (inCompiler COMMA_THERE)) ;
  object->assignRepeatedValueToFixedSizeArrayElementsFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFixedSizeArrayType, in_mElementType, in_mArraySize, inCompiler) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::
assignRepeatedValueToFixedSizeArrayElementsFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                                           const GGS_bool & in_isRequired,
                                                                                                           const GGS_bool & in_warnsIfUnused,
                                                                                                           const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                                                           const GGS_omnibusType & in_mElementType,
                                                                                                           const GGS_uint & in_mArraySize,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mFixedSizeArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setProperty_mFixedSizeArrayType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setProperty_mElementType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mArraySize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mArraySize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setProperty_mArraySize (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignRepeatedValueToFixedSizeArrayElementsFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementType (),
mProperty_mArraySize () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                                                                        const GGS_bool & in_isRequired,
                                                                                                                        const GGS_bool & in_warnsIfUnused,
                                                                                                                        const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                                                                        const GGS_omnibusType & in_mElementType,
                                                                                                                        const GGS_uint & in_mArraySize,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementType (),
mProperty_mArraySize () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@assignRepeatedValueToFixedSizeArrayElementsFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFixedSizeArrayType, mProperty_mElementType, mProperty_mArraySize, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFixedSizeArrayType.printNonNullClassInstanceProperties ("mFixedSizeArrayType") ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mArraySize.printNonNullClassInstanceProperties ("mArraySize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @assignRepeatedValueToFixedSizeArrayElementsFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR",
                                                                                                          & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @staticArrayTypeAssignFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticArrayTypeAssignFunctionIR::objectCompare (const GGS_staticArrayTypeAssignFunctionIR & inOperand) const {
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

GGS_staticArrayTypeAssignFunctionIR::GGS_staticArrayTypeAssignFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR GGS_staticArrayTypeAssignFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_omnibusType & in_mFixedSizeArrayType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_staticArrayTypeAssignFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_staticArrayTypeAssignFunctionIR (inCompiler COMMA_THERE)) ;
  object->staticArrayTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFixedSizeArrayType, inCompiler) ;
  const GGS_staticArrayTypeAssignFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_staticArrayTypeAssignFunctionIR::
staticArrayTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                             const GGS_bool & in_isRequired,
                                                                             const GGS_bool & in_warnsIfUnused,
                                                                             const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR::GGS_staticArrayTypeAssignFunctionIR (const cPtr_staticArrayTypeAssignFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticArrayTypeAssignFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_staticArrayTypeAssignFunctionIR::readProperty_mFixedSizeArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_staticArrayTypeAssignFunctionIR * p = (cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticArrayTypeAssignFunctionIR::setProperty_mFixedSizeArrayType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticArrayTypeAssignFunctionIR * p = (cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @staticArrayTypeAssignFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_staticArrayTypeAssignFunctionIR::cPtr_staticArrayTypeAssignFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_staticArrayTypeAssignFunctionIR::cPtr_staticArrayTypeAssignFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                            const GGS_bool & in_isRequired,
                                                                            const GGS_bool & in_warnsIfUnused,
                                                                            const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_staticArrayTypeAssignFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;
}

void cPtr_staticArrayTypeAssignFunctionIR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@staticArrayTypeAssignFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_staticArrayTypeAssignFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_staticArrayTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFixedSizeArrayType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_staticArrayTypeAssignFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFixedSizeArrayType.printNonNullClassInstanceProperties ("mFixedSizeArrayType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @staticArrayTypeAssignFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ("staticArrayTypeAssignFunctionIR",
                                                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticArrayTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticArrayTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticArrayTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR GGS_staticArrayTypeAssignFunctionIR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_staticArrayTypeAssignFunctionIR result ;
  const GGS_staticArrayTypeAssignFunctionIR * p = (const GGS_staticArrayTypeAssignFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticArrayTypeAssignFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayTypeAssignFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticEntityMap::GGS_staticEntityMap (void) :
mProperty_mStaticStringMap (),
mProperty_mGlobalStructuredConstantList () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticEntityMap::GGS_staticEntityMap (const GGS_staticEntityMap & inSource) :
mProperty_mStaticStringMap (inSource.mProperty_mStaticStringMap),
mProperty_mGlobalStructuredConstantList (inSource.mProperty_mGlobalStructuredConstantList) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticEntityMap & GGS_staticEntityMap::operator = (const GGS_staticEntityMap & inSource) {
  mProperty_mStaticStringMap = inSource.mProperty_mStaticStringMap ;
  mProperty_mGlobalStructuredConstantList = inSource.mProperty_mGlobalStructuredConstantList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticEntityMap GGS_staticEntityMap::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticEntityMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticEntityMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mStaticStringMap = GGS_staticStringMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalStructuredConstantList = GGS_globalStructuredConstantList::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticEntityMap::GGS_staticEntityMap (const GGS_staticStringMap & inOperand0,
                                          const GGS_globalStructuredConstantList & inOperand1) :
mProperty_mStaticStringMap (inOperand0),
mProperty_mGlobalStructuredConstantList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticEntityMap::isValid (void) const {
  return mProperty_mStaticStringMap.isValid () && mProperty_mGlobalStructuredConstantList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticEntityMap::drop (void) {
  mProperty_mStaticStringMap.drop () ;
  mProperty_mGlobalStructuredConstantList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticEntityMap::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticEntityMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStaticStringMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalStructuredConstantList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @staticEntityMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticEntityMap ("staticEntityMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticEntityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticEntityMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticEntityMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticEntityMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticEntityMap GGS_staticEntityMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_staticEntityMap result ;
  const GGS_staticEntityMap * p = (const GGS_staticEntityMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticEntityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticEntityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationContext::GGS_generationContext (void) :
mProperty_mPanicCodeLLVMType (),
mProperty_mPanicLineLLVMType (),
mProperty_mNopInstructionInLLVM (),
mProperty_mGlobalTaskVariableList (),
mProperty_mAvailableInterruptMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_generationContext::GGS_generationContext (const GGS_generationContext & inSource) :
mProperty_mPanicCodeLLVMType (inSource.mProperty_mPanicCodeLLVMType),
mProperty_mPanicLineLLVMType (inSource.mProperty_mPanicLineLLVMType),
mProperty_mNopInstructionInLLVM (inSource.mProperty_mNopInstructionInLLVM),
mProperty_mGlobalTaskVariableList (inSource.mProperty_mGlobalTaskVariableList),
mProperty_mAvailableInterruptMap (inSource.mProperty_mAvailableInterruptMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_generationContext & GGS_generationContext::operator = (const GGS_generationContext & inSource) {
  mProperty_mPanicCodeLLVMType = inSource.mProperty_mPanicCodeLLVMType ;
  mProperty_mPanicLineLLVMType = inSource.mProperty_mPanicLineLLVMType ;
  mProperty_mNopInstructionInLLVM = inSource.mProperty_mNopInstructionInLLVM ;
  mProperty_mGlobalTaskVariableList = inSource.mProperty_mGlobalTaskVariableList ;
  mProperty_mAvailableInterruptMap = inSource.mProperty_mAvailableInterruptMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_generationContext GGS_generationContext::init_21__21__21__21__21_ (const GGS_omnibusType & in_mPanicCodeLLVMType,
                                                                       const GGS_omnibusType & in_mPanicLineLLVMType,
                                                                       const GGS_string & in_mNopInstructionInLLVM,
                                                                       const GGS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                                                       const GGS_availableInterruptMap & in_mAvailableInterruptMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPanicCodeLLVMType = in_mPanicCodeLLVMType ;
  result.mProperty_mPanicLineLLVMType = in_mPanicLineLLVMType ;
  result.mProperty_mNopInstructionInLLVM = in_mNopInstructionInLLVM ;
  result.mProperty_mGlobalTaskVariableList = in_mGlobalTaskVariableList ;
  result.mProperty_mAvailableInterruptMap = in_mAvailableInterruptMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_generationContext::GGS_generationContext (const GGS_omnibusType & inOperand0,
                                              const GGS_omnibusType & inOperand1,
                                              const GGS_string & inOperand2,
                                              const GGS_globalTaskVariableList & inOperand3,
                                              const GGS_availableInterruptMap & inOperand4) :
mProperty_mPanicCodeLLVMType (inOperand0),
mProperty_mPanicLineLLVMType (inOperand1),
mProperty_mNopInstructionInLLVM (inOperand2),
mProperty_mGlobalTaskVariableList (inOperand3),
mProperty_mAvailableInterruptMap (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_generationContext::isValid (void) const {
  return mProperty_mPanicCodeLLVMType.isValid () && mProperty_mPanicLineLLVMType.isValid () && mProperty_mNopInstructionInLLVM.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mAvailableInterruptMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationContext::drop (void) {
  mProperty_mPanicCodeLLVMType.drop () ;
  mProperty_mPanicLineLLVMType.drop () ;
  mProperty_mNopInstructionInLLVM.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationContext::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @generationContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPanicCodeLLVMType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLineLLVMType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNopInstructionInLLVM.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @generationContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generationContext ("generationContext",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_generationContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generationContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generationContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationContext GGS_generationContext::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_generationContext result ;
  const GGS_generationContext * p = (const GGS_generationContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generationContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GGS_LValueAST inObject,
                                                            GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_LValueAST temp_0 = inObject ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_0.readProperty_mOperand (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 99)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValue'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValue (const GGS_LValueAST inObject,
                                    const GGS_omnibusType constinArgument_inSelfType,
                                    const GGS_bool constinArgument_inIsAddressOf,
                                    const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                    const GGS_semanticContext constinArgument_inContext,
                                    const GGS_mode constinArgument_inMode,
                                    GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                    GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                    GGS_allocaList & ioArgument_ioAllocaList,
                                    GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                    GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_LValueAST temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("lvalue.galgas", 140)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_LValueAST temp_3 = inObject ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GGS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 141)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          GGS_bool test_6 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("lvalue.galgas", 142)) COMMA_SOURCE_FILE ("lvalue.galgas", 142)).operator_not (SOURCE_FILE ("lvalue.galgas", 142)) ;
          if (GalgasBool::boolTrue == test_6.boolEnum ()) {
            test_6 = constinArgument_inIsAddressOf.operator_not (SOURCE_FILE ("lvalue.galgas", 142)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            const GGS_LValueAST temp_7 = inObject ;
            GenericArray <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (temp_7.readProperty_mIdentifier ().readProperty_location (), GGS_string ("cannot mutate properties, current method is not declared with @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)), fixItArray8  COMMA_SOURCE_FILE ("lvalue.galgas", 143)) ;
            outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_5) {
          {
          const GGS_LValueAST temp_9 = inObject ;
          routine_analyzeSelfLValue_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_9.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 147)) ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_valuedObject var_entity_6602 ;
    const GGS_LValueAST temp_10 = inObject ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_10.readProperty_mIdentifier (), var_entity_6602, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 162)) ;
    switch (var_entity_6602.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      {
        GGS_omnibusType extractedValue_6643__0 ;
        var_entity_6602.getAssociatedValuesFor_task (extractedValue_6643__0) ;
        const GGS_LValueAST temp_11 = inObject ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a task has no value"), fixItArray12  COMMA_SOURCE_FILE ("lvalue.galgas", 165)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      {
        GGS_omnibusType extractedValue_6746__0 ;
        GGS_bool extractedValue_6748__1 ;
        var_entity_6602.getAssociatedValuesFor_driver (extractedValue_6746__0, extractedValue_6748__1) ;
        const GGS_LValueAST temp_13 = inObject ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a driver has no value"), fixItArray14  COMMA_SOURCE_FILE ("lvalue.galgas", 167)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      {
        GGS_objectIR extractedValue_6861__0 ;
        var_entity_6602.getAssociatedValuesFor_globalConstant (extractedValue_6861__0) ;
        const GGS_LValueAST temp_15 = inObject ;
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global constant cannot be written"), fixItArray16  COMMA_SOURCE_FILE ("lvalue.galgas", 169)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_6988__0 ;
        GGS_lstring extractedValue_6988__1 ;
        GGS_bool extractedValue_6988__2 ;
        var_entity_6602.getAssociatedValuesFor_localConstant (extractedValue_6988__0, extractedValue_6988__1, extractedValue_6988__2) ;
        const GGS_LValueAST temp_17 = inObject ;
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a local constant cannot be written"), fixItArray18  COMMA_SOURCE_FILE ("lvalue.galgas", 171)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      {
        GGS_omnibusType extractedValue_7119__0 ;
        GGS_lstring extractedValue_7119__1 ;
        var_entity_6602.getAssociatedValuesFor_globalSyncInstance (extractedValue_7119__0, extractedValue_7119__1) ;
        const GGS_LValueAST temp_19 = inObject ;
        GenericArray <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global sync instance is not allowed here"), fixItArray20  COMMA_SOURCE_FILE ("lvalue.galgas", 173)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_7265_variableType_0 ;
        GGS_lstring extractedValue_7287_omnibusName_1 ;
        var_entity_6602.getAssociatedValuesFor_localVariable (extractedValue_7265_variableType_0, extractedValue_7287_omnibusName_1) ;
        {
        const GGS_LValueAST temp_21 = inObject ;
        const GGS_LValueAST temp_22 = inObject ;
        routine_analyzeVariableInLValue_3F_self_3F_readAccess_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F_variableName_3F_llvmName_3F_type_3F__21_ (constinArgument_inSelfType, constinArgument_inIsAddressOf, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_21.readProperty_mIdentifier (), function_llvmNameForLocalVariable (extractedValue_7287_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 187)), extractedValue_7265_variableType_0, temp_22.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 175)) ;
        }
      }
      break ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @literalIntegerInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalIntegerInExpressionAST::objectCompare (const GGS_literalIntegerInExpressionAST & inOperand) const {
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

GGS_literalIntegerInExpressionAST::GGS_literalIntegerInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalIntegerInExpressionAST GGS_literalIntegerInExpressionAST::
init_21_ (const GGS_lbigint & in_mLiteralInteger,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalIntegerInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalIntegerInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalIntegerInExpressionAST_init_21_ (in_mLiteralInteger, inCompiler) ;
  const GGS_literalIntegerInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::
literalIntegerInExpressionAST_init_21_ (const GGS_lbigint & in_mLiteralInteger,
                                        Compiler * /* inCompiler */) {
  mProperty_mLiteralInteger = in_mLiteralInteger ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST::GGS_literalIntegerInExpressionAST (const cPtr_literalIntegerInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntegerInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_literalIntegerInExpressionAST::readProperty_mLiteralInteger (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_literalIntegerInExpressionAST * p = (cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    return p->mProperty_mLiteralInteger ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_literalIntegerInExpressionAST::setProperty_mLiteralInteger (const GGS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalIntegerInExpressionAST * p = (cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    p->mProperty_mLiteralInteger = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalIntegerInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalIntegerInExpressionAST::cPtr_literalIntegerInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInteger () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalIntegerInExpressionAST::cPtr_literalIntegerInExpressionAST (const GGS_lbigint & in_mLiteralInteger,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInteger () {
  mProperty_mLiteralInteger = in_mLiteralInteger ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalIntegerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

void cPtr_literalIntegerInExpressionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@literalIntegerInExpressionAST:") ;
  mProperty_mLiteralInteger.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalIntegerInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalIntegerInExpressionAST (mProperty_mLiteralInteger, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalIntegerInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInteger.printNonNullClassInstanceProperties ("mLiteralInteger") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalIntegerInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ("literalIntegerInExpressionAST",
                                                                                  & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalIntegerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalIntegerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalIntegerInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST GGS_literalIntegerInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_literalIntegerInExpressionAST result ;
  const GGS_literalIntegerInExpressionAST * p = (const GGS_literalIntegerInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalIntegerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @letInstructionWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_letInstructionWithAssignmentAST::objectCompare (const GGS_letInstructionWithAssignmentAST & inOperand) const {
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

GGS_letInstructionWithAssignmentAST::GGS_letInstructionWithAssignmentAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST GGS_letInstructionWithAssignmentAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mConstantName,
                      const GGS_lstring & in_mOptionalTypeName,
                      const GGS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_letInstructionWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_letInstructionWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->letInstructionWithAssignmentAST_init_21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mOptionalTypeName, in_mSourceExpression, inCompiler) ;
  const GGS_letInstructionWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_letInstructionWithAssignmentAST::
letInstructionWithAssignmentAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mConstantName,
                                                      const GGS_lstring & in_mOptionalTypeName,
                                                      const GGS_expressionAST & in_mSourceExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST::GGS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_letInstructionWithAssignmentAST::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_letInstructionWithAssignmentAST::setProperty_mConstantName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_letInstructionWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_letInstructionWithAssignmentAST::setProperty_mOptionalTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_letInstructionWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_letInstructionWithAssignmentAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @letInstructionWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mConstantName,
                                                                            const GGS_lstring & in_mOptionalTypeName,
                                                                            const GGS_expressionAST & in_mSourceExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_letInstructionWithAssignmentAST::classDescriptor (void) const {
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

acPtr_class * cPtr_letInstructionWithAssignmentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_letInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mOptionalTypeName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @letInstructionWithAssignmentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ("letInstructionWithAssignmentAST",
                                                                                    & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_letInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_letInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_letInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST GGS_letInstructionWithAssignmentAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_letInstructionWithAssignmentAST result ;
  const GGS_letInstructionWithAssignmentAST * p = (const GGS_letInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_letInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getUniversalPropertyReferenceIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getUniversalPropertyReferenceIR::objectCompare (const GGS_getUniversalPropertyReferenceIR & inOperand) const {
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

GGS_getUniversalPropertyReferenceIR::GGS_getUniversalPropertyReferenceIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR GGS_getUniversalPropertyReferenceIR::
init_21__21__21__21__21_ (const GGS_omnibusType & in_mType,
                          const GGS_string & in_mLLVMName,
                          const GGS_string & in_mElementLLVMName,
                          const GGS_uint & in_mPropertyIndex,
                          const GGS_string & in_mPropertyName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_getUniversalPropertyReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_getUniversalPropertyReferenceIR (inCompiler COMMA_THERE)) ;
  object->getUniversalPropertyReferenceIR_init_21__21__21__21__21_ (in_mType, in_mLLVMName, in_mElementLLVMName, in_mPropertyIndex, in_mPropertyName, inCompiler) ;
  const GGS_getUniversalPropertyReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getUniversalPropertyReferenceIR::
getUniversalPropertyReferenceIR_init_21__21__21__21__21_ (const GGS_omnibusType & in_mType,
                                                          const GGS_string & in_mLLVMName,
                                                          const GGS_string & in_mElementLLVMName,
                                                          const GGS_uint & in_mPropertyIndex,
                                                          const GGS_string & in_mPropertyName,
                                                          Compiler * /* inCompiler */) {
  mProperty_mType = in_mType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mElementLLVMName = in_mElementLLVMName ;
  mProperty_mPropertyIndex = in_mPropertyIndex ;
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR::GGS_getUniversalPropertyReferenceIR (const cPtr_getUniversalPropertyReferenceIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalPropertyReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_getUniversalPropertyReferenceIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalPropertyReferenceIR::setProperty_mType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getUniversalPropertyReferenceIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalPropertyReferenceIR::setProperty_mLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getUniversalPropertyReferenceIR::readProperty_mElementLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mElementLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalPropertyReferenceIR::setProperty_mElementLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mElementLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_getUniversalPropertyReferenceIR::readProperty_mPropertyIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mPropertyIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalPropertyReferenceIR::setProperty_mPropertyIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mPropertyIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getUniversalPropertyReferenceIR::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalPropertyReferenceIR::setProperty_mPropertyName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getUniversalPropertyReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_getUniversalPropertyReferenceIR::cPtr_getUniversalPropertyReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mType (),
mProperty_mLLVMName (),
mProperty_mElementLLVMName (),
mProperty_mPropertyIndex (),
mProperty_mPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getUniversalPropertyReferenceIR::cPtr_getUniversalPropertyReferenceIR (const GGS_omnibusType & in_mType,
                                                                            const GGS_string & in_mLLVMName,
                                                                            const GGS_string & in_mElementLLVMName,
                                                                            const GGS_uint & in_mPropertyIndex,
                                                                            const GGS_string & in_mPropertyName,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mType (),
mProperty_mLLVMName (),
mProperty_mElementLLVMName (),
mProperty_mPropertyIndex (),
mProperty_mPropertyName () {
  mProperty_mType = in_mType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mElementLLVMName = in_mElementLLVMName ;
  mProperty_mPropertyIndex = in_mPropertyIndex ;
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_getUniversalPropertyReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

void cPtr_getUniversalPropertyReferenceIR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@getUniversalPropertyReferenceIR:") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getUniversalPropertyReferenceIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getUniversalPropertyReferenceIR (mProperty_mType, mProperty_mLLVMName, mProperty_mElementLLVMName, mProperty_mPropertyIndex, mProperty_mPropertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getUniversalPropertyReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mElementLLVMName.printNonNullClassInstanceProperties ("mElementLLVMName") ;
    mProperty_mPropertyIndex.printNonNullClassInstanceProperties ("mPropertyIndex") ;
    mProperty_mPropertyName.printNonNullClassInstanceProperties ("mPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @getUniversalPropertyReferenceIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ("getUniversalPropertyReferenceIR",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getUniversalPropertyReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getUniversalPropertyReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getUniversalPropertyReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR GGS_getUniversalPropertyReferenceIR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_getUniversalPropertyReferenceIR result ;
  const GGS_getUniversalPropertyReferenceIR * p = (const GGS_getUniversalPropertyReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getUniversalPropertyReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalPropertyReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typedConstantCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typedConstantCallAST::objectCompare (const GGS_typedConstantCallAST & inOperand) const {
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

GGS_typedConstantCallAST::GGS_typedConstantCallAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typedConstantCallAST GGS_typedConstantCallAST::
init_21__21__21_ (const GGS_lstring & in_mOptionalTypeName,
                  const GGS_lstring & in_mConstructorName,
                  const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_typedConstantCallAST * object = nullptr ;
  macroMyNew (object, cPtr_typedConstantCallAST (inCompiler COMMA_THERE)) ;
  object->typedConstantCallAST_init_21__21__21_ (in_mOptionalTypeName, in_mConstructorName, in_mAccessList, inCompiler) ;
  const GGS_typedConstantCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::
typedConstantCallAST_init_21__21__21_ (const GGS_lstring & in_mOptionalTypeName,
                                       const GGS_lstring & in_mConstructorName,
                                       const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                                       Compiler * /* inCompiler */) {
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mConstructorName = in_mConstructorName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST::GGS_typedConstantCallAST (const cPtr_typedConstantCallAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typedConstantCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typedConstantCallAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typedConstantCallAST::setProperty_mOptionalTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typedConstantCallAST::readProperty_mConstructorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mConstructorName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typedConstantCallAST::setProperty_mConstructorName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mConstructorName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST GGS_typedConstantCallAST::readProperty_mAccessList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_primaryInExpressionAccessListAST () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mAccessList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typedConstantCallAST::setProperty_mAccessList (const GGS_primaryInExpressionAccessListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mAccessList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typedConstantCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mOptionalTypeName (),
mProperty_mConstructorName (),
mProperty_mAccessList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (const GGS_lstring & in_mOptionalTypeName,
                                                      const GGS_lstring & in_mConstructorName,
                                                      const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mOptionalTypeName (),
mProperty_mConstructorName (),
mProperty_mAccessList () {
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mConstructorName = in_mConstructorName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_typedConstantCallAST::classDescriptor (void) const {
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

acPtr_class * cPtr_typedConstantCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typedConstantCallAST (mProperty_mOptionalTypeName, mProperty_mConstructorName, mProperty_mAccessList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @typedConstantCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typedConstantCallAST ("typedConstantCallAST",
                                                                         & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typedConstantCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typedConstantCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typedConstantCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST GGS_typedConstantCallAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_typedConstantCallAST result ;
  const GGS_typedConstantCallAST * p = (const GGS_typedConstantCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typedConstantCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedConstantCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syncToolInstanceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syncToolInstanceDeclarationAST::objectCompare (const GGS_syncToolInstanceDeclarationAST & inOperand) const {
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

GGS_syncToolInstanceDeclarationAST::GGS_syncToolInstanceDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST GGS_syncToolInstanceDeclarationAST::
init_21__21__21_ (const GGS_lstring & in_mSyncTypeName,
                  const GGS_lstring & in_mSyncInstanceName,
                  const GGS_expressionAST & in_mSourceExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_syncToolInstanceDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_syncToolInstanceDeclarationAST (inCompiler COMMA_THERE)) ;
  object->syncToolInstanceDeclarationAST_init_21__21__21_ (in_mSyncTypeName, in_mSyncInstanceName, in_mSourceExpression, inCompiler) ;
  const GGS_syncToolInstanceDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::
syncToolInstanceDeclarationAST_init_21__21__21_ (const GGS_lstring & in_mSyncTypeName,
                                                 const GGS_lstring & in_mSyncInstanceName,
                                                 const GGS_expressionAST & in_mSourceExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mSyncTypeName = in_mSyncTypeName ;
  mProperty_mSyncInstanceName = in_mSyncInstanceName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST::GGS_syncToolInstanceDeclarationAST (const cPtr_syncToolInstanceDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncToolInstanceDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syncToolInstanceDeclarationAST::readProperty_mSyncTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSyncTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncToolInstanceDeclarationAST::setProperty_mSyncTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSyncTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syncToolInstanceDeclarationAST::readProperty_mSyncInstanceName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSyncInstanceName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncToolInstanceDeclarationAST::setProperty_mSyncInstanceName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSyncInstanceName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_syncToolInstanceDeclarationAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncToolInstanceDeclarationAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncToolInstanceDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_syncToolInstanceDeclarationAST::cPtr_syncToolInstanceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncTypeName (),
mProperty_mSyncInstanceName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syncToolInstanceDeclarationAST::cPtr_syncToolInstanceDeclarationAST (const GGS_lstring & in_mSyncTypeName,
                                                                          const GGS_lstring & in_mSyncInstanceName,
                                                                          const GGS_expressionAST & in_mSourceExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncTypeName (),
mProperty_mSyncInstanceName (),
mProperty_mSourceExpression () {
  mProperty_mSyncTypeName = in_mSyncTypeName ;
  mProperty_mSyncInstanceName = in_mSyncInstanceName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_syncToolInstanceDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;
}

void cPtr_syncToolInstanceDeclarationAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@syncToolInstanceDeclarationAST:") ;
  mProperty_mSyncTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyncInstanceName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syncToolInstanceDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncToolInstanceDeclarationAST (mProperty_mSyncTypeName, mProperty_mSyncInstanceName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syncToolInstanceDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSyncTypeName.printNonNullClassInstanceProperties ("mSyncTypeName") ;
    mProperty_mSyncInstanceName.printNonNullClassInstanceProperties ("mSyncInstanceName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syncToolInstanceDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ("syncToolInstanceDeclarationAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncToolInstanceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncToolInstanceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncToolInstanceDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST GGS_syncToolInstanceDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syncToolInstanceDeclarationAST result ;
  const GGS_syncToolInstanceDeclarationAST * p = (const GGS_syncToolInstanceDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncToolInstanceDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncToolInstanceDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedSyncInstance reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedSyncInstance::objectCompare (const GGS_decoratedSyncInstance & inOperand) const {
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

GGS_decoratedSyncInstance::GGS_decoratedSyncInstance (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedSyncInstance GGS_decoratedSyncInstance::
init_21__21_ (const GGS_lstring & in_mSyncInstanceName,
              const GGS_objectIR & in_mExpressionGeneratedCode,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedSyncInstance * object = nullptr ;
  macroMyNew (object, cPtr_decoratedSyncInstance (inCompiler COMMA_THERE)) ;
  object->decoratedSyncInstance_init_21__21_ (in_mSyncInstanceName, in_mExpressionGeneratedCode, inCompiler) ;
  const GGS_decoratedSyncInstance result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedSyncInstance::
decoratedSyncInstance_init_21__21_ (const GGS_lstring & in_mSyncInstanceName,
                                    const GGS_objectIR & in_mExpressionGeneratedCode,
                                    Compiler * /* inCompiler */) {
  mProperty_mSyncInstanceName = in_mSyncInstanceName ;
  mProperty_mExpressionGeneratedCode = in_mExpressionGeneratedCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance::GGS_decoratedSyncInstance (const cPtr_decoratedSyncInstance * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedSyncInstance) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedSyncInstance::readProperty_mSyncInstanceName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    return p->mProperty_mSyncInstanceName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedSyncInstance::setProperty_mSyncInstanceName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    p->mProperty_mSyncInstanceName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_decoratedSyncInstance::readProperty_mExpressionGeneratedCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    return p->mProperty_mExpressionGeneratedCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedSyncInstance::setProperty_mExpressionGeneratedCode (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    p->mProperty_mExpressionGeneratedCode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedSyncInstance class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedSyncInstance::cPtr_decoratedSyncInstance (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mSyncInstanceName (),
mProperty_mExpressionGeneratedCode () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedSyncInstance::cPtr_decoratedSyncInstance (const GGS_lstring & in_mSyncInstanceName,
                                                        const GGS_objectIR & in_mExpressionGeneratedCode,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mSyncInstanceName (),
mProperty_mExpressionGeneratedCode () {
  mProperty_mSyncInstanceName = in_mSyncInstanceName ;
  mProperty_mExpressionGeneratedCode = in_mExpressionGeneratedCode ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_decoratedSyncInstance::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance ;
}

void cPtr_decoratedSyncInstance::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedSyncInstance:") ;
  mProperty_mSyncInstanceName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionGeneratedCode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedSyncInstance::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedSyncInstance (mProperty_mSyncInstanceName, mProperty_mExpressionGeneratedCode, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedSyncInstance::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mSyncInstanceName.printNonNullClassInstanceProperties ("mSyncInstanceName") ;
    mProperty_mExpressionGeneratedCode.printNonNullClassInstanceProperties ("mExpressionGeneratedCode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @decoratedSyncInstance generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedSyncInstance ("decoratedSyncInstance",
                                                                          & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedSyncInstance::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedSyncInstance::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedSyncInstance (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance GGS_decoratedSyncInstance::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedSyncInstance result ;
  const GGS_decoratedSyncInstance * p = (const GGS_decoratedSyncInstance *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedSyncInstance *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedSyncInstance", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element::GGS_globalSyncInstanceMapIR_2E_element (void) :
mProperty_lkey (),
mProperty_mInitialValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element::GGS_globalSyncInstanceMapIR_2E_element (const GGS_globalSyncInstanceMapIR_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInitialValue (inSource.mProperty_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element & GGS_globalSyncInstanceMapIR_2E_element::operator = (const GGS_globalSyncInstanceMapIR_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInitialValue = inSource.mProperty_mInitialValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element GGS_globalSyncInstanceMapIR_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_objectIR & in_mInitialValue,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitialValue = in_mInitialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element::GGS_globalSyncInstanceMapIR_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitialValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalSyncInstanceMapIR_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitialValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalSyncInstanceMapIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @globalSyncInstanceMapIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element ("globalSyncInstanceMapIR.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalSyncInstanceMapIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalSyncInstanceMapIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalSyncInstanceMapIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element GGS_globalSyncInstanceMapIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR_2E_element result ;
  const GGS_globalSyncInstanceMapIR_2E_element * p = (const GGS_globalSyncInstanceMapIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalSyncInstanceMapIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (void) :
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
mProperty_mTypeConstantMap (),
mProperty_mTypeConstructorMap (),
mProperty_mTypePropertySetterMap (),
mProperty_mTypePropertyGetterMap (),
mProperty_mAvailableInterruptMap (),
mProperty_mInfixOperatorMap (),
mProperty_mPrefixOperatorMap (),
mProperty_mAssignmentOperatorMap (),
mProperty_mImplicitConversionToBooleanMap (),
mProperty_mTaskMap (),
mProperty_mGlobalTaskVariableList (),
mProperty_mValuedObjectMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_semanticContext & inSource) :
mProperty_mTargetParameters (inSource.mProperty_mTargetParameters),
mProperty_mPanicCodeType (inSource.mProperty_mPanicCodeType),
mProperty_mPanicLineType (inSource.mProperty_mPanicLineType),
mProperty_mPanicSetupRoutinePriorityMap (inSource.mProperty_mPanicSetupRoutinePriorityMap),
mProperty_mPanicLoopRoutinePriorityMap (inSource.mProperty_mPanicLoopRoutinePriorityMap),
mProperty_mRoutineMap (inSource.mProperty_mRoutineMap),
mProperty_mGuardMap (inSource.mProperty_mGuardMap),
mProperty_mControlRegisterGroupMap (inSource.mProperty_mControlRegisterGroupMap),
mProperty_mGlobalConstantMap (inSource.mProperty_mGlobalConstantMap),
mProperty_mGlobalSyncInstanceMap (inSource.mProperty_mGlobalSyncInstanceMap),
mProperty_mStaticListMap (inSource.mProperty_mStaticListMap),
mProperty_mRequiredRoutineSet (inSource.mProperty_mRequiredRoutineSet),
mProperty_mTypeMap (inSource.mProperty_mTypeMap),
mProperty_mTypeConstantMap (inSource.mProperty_mTypeConstantMap),
mProperty_mTypeConstructorMap (inSource.mProperty_mTypeConstructorMap),
mProperty_mTypePropertySetterMap (inSource.mProperty_mTypePropertySetterMap),
mProperty_mTypePropertyGetterMap (inSource.mProperty_mTypePropertyGetterMap),
mProperty_mAvailableInterruptMap (inSource.mProperty_mAvailableInterruptMap),
mProperty_mInfixOperatorMap (inSource.mProperty_mInfixOperatorMap),
mProperty_mPrefixOperatorMap (inSource.mProperty_mPrefixOperatorMap),
mProperty_mAssignmentOperatorMap (inSource.mProperty_mAssignmentOperatorMap),
mProperty_mImplicitConversionToBooleanMap (inSource.mProperty_mImplicitConversionToBooleanMap),
mProperty_mTaskMap (inSource.mProperty_mTaskMap),
mProperty_mGlobalTaskVariableList (inSource.mProperty_mGlobalTaskVariableList),
mProperty_mValuedObjectMap (inSource.mProperty_mValuedObjectMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext & GGS_semanticContext::operator = (const GGS_semanticContext & inSource) {
  mProperty_mTargetParameters = inSource.mProperty_mTargetParameters ;
  mProperty_mPanicCodeType = inSource.mProperty_mPanicCodeType ;
  mProperty_mPanicLineType = inSource.mProperty_mPanicLineType ;
  mProperty_mPanicSetupRoutinePriorityMap = inSource.mProperty_mPanicSetupRoutinePriorityMap ;
  mProperty_mPanicLoopRoutinePriorityMap = inSource.mProperty_mPanicLoopRoutinePriorityMap ;
  mProperty_mRoutineMap = inSource.mProperty_mRoutineMap ;
  mProperty_mGuardMap = inSource.mProperty_mGuardMap ;
  mProperty_mControlRegisterGroupMap = inSource.mProperty_mControlRegisterGroupMap ;
  mProperty_mGlobalConstantMap = inSource.mProperty_mGlobalConstantMap ;
  mProperty_mGlobalSyncInstanceMap = inSource.mProperty_mGlobalSyncInstanceMap ;
  mProperty_mStaticListMap = inSource.mProperty_mStaticListMap ;
  mProperty_mRequiredRoutineSet = inSource.mProperty_mRequiredRoutineSet ;
  mProperty_mTypeMap = inSource.mProperty_mTypeMap ;
  mProperty_mTypeConstantMap = inSource.mProperty_mTypeConstantMap ;
  mProperty_mTypeConstructorMap = inSource.mProperty_mTypeConstructorMap ;
  mProperty_mTypePropertySetterMap = inSource.mProperty_mTypePropertySetterMap ;
  mProperty_mTypePropertyGetterMap = inSource.mProperty_mTypePropertyGetterMap ;
  mProperty_mAvailableInterruptMap = inSource.mProperty_mAvailableInterruptMap ;
  mProperty_mInfixOperatorMap = inSource.mProperty_mInfixOperatorMap ;
  mProperty_mPrefixOperatorMap = inSource.mProperty_mPrefixOperatorMap ;
  mProperty_mAssignmentOperatorMap = inSource.mProperty_mAssignmentOperatorMap ;
  mProperty_mImplicitConversionToBooleanMap = inSource.mProperty_mImplicitConversionToBooleanMap ;
  mProperty_mTaskMap = inSource.mProperty_mTaskMap ;
  mProperty_mGlobalTaskVariableList = inSource.mProperty_mGlobalTaskVariableList ;
  mProperty_mValuedObjectMap = inSource.mProperty_mValuedObjectMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mTargetParameters = GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("context.galgas", 9)), GGS__32_lstringlist::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 11)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 12)), GGS_uint (uint32_t (0U)), GGS_bool (false), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 15)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 15)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 16)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 16)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 17)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 18)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 18)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 19)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 19)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 20)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 20)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 21)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 21)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 22)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 22)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 23)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 24)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 24)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 25)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 26)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 27)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 28)), GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 32)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 33)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 34)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 35)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 35)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 36)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 37)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 38)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 39)), inCompiler COMMA_HERE) ;
  mProperty_mPanicCodeType = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("context.galgas", 43)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string ("<<unknown>>"), GGS_typeKind::class_func_void (SOURCE_FILE ("context.galgas", 46)), GGS_string ("<<unknown>>"), inCompiler COMMA_HERE) ;
  mProperty_mPanicLineType = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("context.galgas", 50)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string ("<<unknown>>"), GGS_typeKind::class_func_void (SOURCE_FILE ("context.galgas", 53)), GGS_string ("<<unknown>>"), inCompiler COMMA_HERE) ;
  mProperty_mPanicSetupRoutinePriorityMap = GGS_panicRoutinePriorityMap::init (inCompiler COMMA_HERE) ;
  mProperty_mPanicLoopRoutinePriorityMap = GGS_panicRoutinePriorityMap::init (inCompiler COMMA_HERE) ;
  mProperty_mRoutineMap = GGS_routineMapForContext::init (inCompiler COMMA_HERE) ;
  mProperty_mGuardMap = GGS_guardMapForContext::init (inCompiler COMMA_HERE) ;
  mProperty_mControlRegisterGroupMap = GGS_controlRegisterGroupMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalConstantMap = GGS_globalConstantMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalSyncInstanceMap = GGS_globalSyncInstanceMap::init (inCompiler COMMA_HERE) ;
  mProperty_mStaticListMap = GGS_staticlistMap::init (inCompiler COMMA_HERE) ;
  mProperty_mRequiredRoutineSet = GGS_stringset::init (inCompiler COMMA_HERE) ;
  mProperty_mTypeMap = GGS_unifiedTypeMap::init (inCompiler COMMA_HERE) ;
  mProperty_mTypeConstantMap = GGS_typeConstantMap::init (inCompiler COMMA_HERE) ;
  mProperty_mTypeConstructorMap = GGS_typeConstructorMap::init (inCompiler COMMA_HERE) ;
  mProperty_mTypePropertySetterMap = GGS_typePropertySetterMap::init (inCompiler COMMA_HERE) ;
  mProperty_mTypePropertyGetterMap = GGS_typePropertyGetterMap::init (inCompiler COMMA_HERE) ;
  mProperty_mAvailableInterruptMap = GGS_availableInterruptMap::init (inCompiler COMMA_HERE) ;
  mProperty_mInfixOperatorMap = GGS_infixOperatorMap::init (inCompiler COMMA_HERE) ;
  mProperty_mPrefixOperatorMap = GGS_prefixOperatorMap::init (inCompiler COMMA_HERE) ;
  mProperty_mAssignmentOperatorMap = GGS_assignmentOperatorMap::init (inCompiler COMMA_HERE) ;
  mProperty_mImplicitConversionToBooleanMap = GGS_implicitConversionToBooleanMap::init (inCompiler COMMA_HERE) ;
  mProperty_mTaskMap = GGS_taskMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalTaskVariableList = GGS_globalTaskVariableList::init (inCompiler COMMA_HERE) ;
  mProperty_mValuedObjectMap = GGS_universalValuedObjectMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_targetParameters & inOperand0,
                                          const GGS_omnibusType & inOperand1,
                                          const GGS_omnibusType & inOperand2,
                                          const GGS_panicRoutinePriorityMap & inOperand3,
                                          const GGS_panicRoutinePriorityMap & inOperand4,
                                          const GGS_routineMapForContext & inOperand5,
                                          const GGS_guardMapForContext & inOperand6,
                                          const GGS_controlRegisterGroupMap & inOperand7,
                                          const GGS_globalConstantMap & inOperand8,
                                          const GGS_globalSyncInstanceMap & inOperand9,
                                          const GGS_staticlistMap & inOperand10,
                                          const GGS_stringset & inOperand11,
                                          const GGS_unifiedTypeMap & inOperand12,
                                          const GGS_typeConstantMap & inOperand13,
                                          const GGS_typeConstructorMap & inOperand14,
                                          const GGS_typePropertySetterMap & inOperand15,
                                          const GGS_typePropertyGetterMap & inOperand16,
                                          const GGS_availableInterruptMap & inOperand17,
                                          const GGS_infixOperatorMap & inOperand18,
                                          const GGS_prefixOperatorMap & inOperand19,
                                          const GGS_assignmentOperatorMap & inOperand20,
                                          const GGS_implicitConversionToBooleanMap & inOperand21,
                                          const GGS_taskMap & inOperand22,
                                          const GGS_globalTaskVariableList & inOperand23,
                                          const GGS_universalValuedObjectMap & inOperand24) :
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
mProperty_mTypeConstantMap (inOperand13),
mProperty_mTypeConstructorMap (inOperand14),
mProperty_mTypePropertySetterMap (inOperand15),
mProperty_mTypePropertyGetterMap (inOperand16),
mProperty_mAvailableInterruptMap (inOperand17),
mProperty_mInfixOperatorMap (inOperand18),
mProperty_mPrefixOperatorMap (inOperand19),
mProperty_mAssignmentOperatorMap (inOperand20),
mProperty_mImplicitConversionToBooleanMap (inOperand21),
mProperty_mTaskMap (inOperand22),
mProperty_mGlobalTaskVariableList (inOperand23),
mProperty_mValuedObjectMap (inOperand24) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticContext::isValid (void) const {
  return mProperty_mTargetParameters.isValid () && mProperty_mPanicCodeType.isValid () && mProperty_mPanicLineType.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mRoutineMap.isValid () && mProperty_mGuardMap.isValid () && mProperty_mControlRegisterGroupMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mStaticListMap.isValid () && mProperty_mRequiredRoutineSet.isValid () && mProperty_mTypeMap.isValid () && mProperty_mTypeConstantMap.isValid () && mProperty_mTypeConstructorMap.isValid () && mProperty_mTypePropertySetterMap.isValid () && mProperty_mTypePropertyGetterMap.isValid () && mProperty_mAvailableInterruptMap.isValid () && mProperty_mInfixOperatorMap.isValid () && mProperty_mPrefixOperatorMap.isValid () && mProperty_mAssignmentOperatorMap.isValid () && mProperty_mImplicitConversionToBooleanMap.isValid () && mProperty_mTaskMap.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mValuedObjectMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::drop (void) {
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
  mProperty_mTypeConstantMap.drop () ;
  mProperty_mTypeConstructorMap.drop () ;
  mProperty_mTypePropertySetterMap.drop () ;
  mProperty_mTypePropertyGetterMap.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
  mProperty_mInfixOperatorMap.drop () ;
  mProperty_mPrefixOperatorMap.drop () ;
  mProperty_mAssignmentOperatorMap.drop () ;
  mProperty_mImplicitConversionToBooleanMap.drop () ;
  mProperty_mTaskMap.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mValuedObjectMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicCodeType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLineType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGuardMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterGroupMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticListMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredRoutineSet.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeConstantMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeConstructorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypePropertySetterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypePropertyGetterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInfixOperatorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPrefixOperatorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssignmentOperatorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mImplicitConversionToBooleanMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValuedObjectMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticContext result ;
  const GGS_semanticContext * p = (const GGS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext insertGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGetter (GGS_semanticContext & ioObject,
                                   const GGS_lstring constinArgument_inTypeName,
                                   const GGS_lstring constinArgument_inGetterName,
                                   const GGS_propertyVisibility constinArgument_inVisibility,
                                   const GGS_propertyGetterKind constinArgument_inAccess,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_semanticContext temp_1 = ioObject ;
    GGS_typePropertyGetterMap_2E_element var_entry_6648 = temp_1.readProperty_mTypePropertyGetterMap ().readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mTypePropertyGetterMap ().readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      {
      var_entry_6648.mProperty_mGetterMap.setter_insertKey (constinArgument_inGetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 179)) ;
      }
      {
      ioObject.mProperty_mTypePropertyGetterMap.setter_replaceKey (var_entry_6648, inCompiler COMMA_SOURCE_FILE ("context.galgas", 180)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_propertyGetterMap var_getterMap_6878 = GGS_propertyGetterMap::init (inCompiler COMMA_HERE) ;
    {
    var_getterMap_6878.setter_insertKey (constinArgument_inGetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 183)) ;
    }
    {
    ioObject.mProperty_mTypePropertyGetterMap.setter_insertKey (constinArgument_inTypeName, var_getterMap_6878, inCompiler COMMA_SOURCE_FILE ("context.galgas", 184)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@semanticContext propertyGetterMap'
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap extensionGetter_propertyGetterMap (const GGS_semanticContext & inObject,
                                                         const GGS_omnibusType & constinArgument_inType,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterMap result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_semanticContext temp_1 = inObject ;
    const GGS_typePropertyGetterMap_2E_element var_entry_7593 = temp_1.readProperty_mTypePropertyGetterMap ().readSubscript__3F_ (constinArgument_inType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mTypePropertyGetterMap ().readSubscript__3F_ (constinArgument_inType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      result_result = var_entry_7593.readProperty_mGetterMap () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_propertyGetterMap::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext addComputedPropertyGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addComputedPropertyGetter (GGS_semanticContext & ioObject,
                                                const GGS_lstring constinArgument_inTypeName,
                                                const GGS_string constinArgument_inLLVMBaseTypeName,
                                                const GGS_lstring constinArgument_inPropertyName,
                                                const GGS_mode constinArgument_inMode,
                                                const GGS_propertyVisibility constinArgument_inVisibility,
                                                const GGS_unifiedTypeMapEntry constinArgument_inResultTypeProxy,
                                                GGS_lstring & outArgument_outRoutineLLVMName,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GGS_propertyGetterMap var_getterMap_8258 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_semanticContext temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mTypePropertyGetterMap ().getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("context.galgas", 217)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_semanticContext temp_2 = ioObject ;
      temp_2.readProperty_mTypePropertyGetterMap ().method_searchKey (constinArgument_inTypeName, var_getterMap_8258, inCompiler COMMA_SOURCE_FILE ("context.galgas", 218)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_getterMap_8258 = GGS_propertyGetterMap::init (inCompiler COMMA_HERE) ;
  }
  outArgument_outRoutineLLVMName = GGS_lstring::init_21__21_ (function_getterLLVMName (constinArgument_inLLVMBaseTypeName, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 222)), constinArgument_inPropertyName.readProperty_location (), inCompiler COMMA_HERE) ;
  GGS_routineLLVMNameDict var_modeDictionary_8536 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 223)) ;
  {
  var_getterMap_8258.setter_insertKey (constinArgument_inPropertyName, constinArgument_inVisibility, GGS_propertyGetterKind::class_func_computedProperty (constinArgument_inResultTypeProxy, var_modeDictionary_8536  COMMA_SOURCE_FILE ("context.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 224)) ;
  }
  {
  ioObject.mProperty_mTypePropertyGetterMap.setter_insertOrReplace (constinArgument_inTypeName, var_getterMap_8258 COMMA_SOURCE_FILE ("context.galgas", 229)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext insertPropertySetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertPropertySetter (GGS_semanticContext & ioObject,
                                           const GGS_lstring constinArgument_inTypeName,
                                           const GGS_lstring constinArgument_inSetterName,
                                           const GGS_propertyVisibility constinArgument_inVisibility,
                                           const GGS_propertySetterKind constinArgument_inAccess,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_semanticContext temp_1 = ioObject ;
    GGS_typePropertySetterMap_2E_element var_entry_10760 = temp_1.readProperty_mTypePropertySetterMap ().readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mTypePropertySetterMap ().readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      {
      var_entry_10760.mProperty_mSetterMap.setter_insertKey (constinArgument_inSetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 276)) ;
      }
      {
      ioObject.mProperty_mTypePropertySetterMap.setter_replaceKey (var_entry_10760, inCompiler COMMA_SOURCE_FILE ("context.galgas", 277)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_propertySetterMap var_setterMap_10989 = GGS_propertySetterMap::init (inCompiler COMMA_HERE) ;
    {
    var_setterMap_10989.setter_insertKey (constinArgument_inSetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 280)) ;
    }
    {
    ioObject.mProperty_mTypePropertySetterMap.setter_insertKey (constinArgument_inTypeName, var_setterMap_10989, inCompiler COMMA_SOURCE_FILE ("context.galgas", 281)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@semanticContext propertySetterMap'
//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap extensionGetter_propertySetterMap (const GGS_semanticContext & inObject,
                                                         const GGS_omnibusType & constinArgument_inType,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_semanticContext temp_1 = inObject ;
    const GGS_typePropertySetterMap_2E_element var_entry_11704 = temp_1.readProperty_mTypePropertySetterMap ().readSubscript__3F_ (constinArgument_inType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mTypePropertySetterMap ().readSubscript__3F_ (constinArgument_inType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      result_result = var_entry_11704.readProperty_mSetterMap () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_propertySetterMap::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@staticEntityMap findOrAddStaticString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_findOrAddStaticString (GGS_staticEntityMap & ioObject,
                                            const GGS_string constinArgument_inString,
                                            GGS_uint & outArgument_outIndex,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndex.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_staticEntityMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mStaticStringMap ().getter_hasKey (constinArgument_inString COMMA_SOURCE_FILE ("context.galgas", 347)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_staticEntityMap temp_2 = ioObject ;
      temp_2.readProperty_mStaticStringMap ().method_searchKey (constinArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 348)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 348)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_staticEntityMap temp_3 = ioObject ;
    outArgument_outIndex = temp_3.readProperty_mStaticStringMap ().getter_count (SOURCE_FILE ("context.galgas", 350)) ;
    {
    ioObject.mProperty_mStaticStringMap.setter_insertKey (constinArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 351)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 351)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@semanticContext booleanType'
//--------------------------------------------------------------------------------------------------

GGS_omnibusType extensionGetter_booleanType (const GGS_semanticContext & inObject,
                                             const GGS_location &,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  const GGS_semanticContext temp_0 = inObject ;
  extensionMethod_searchType (temp_0.readProperty_mTypeMap (), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 380)).getter_nowhere (SOURCE_FILE ("context.galgas", 380)), result_result, inCompiler COMMA_SOURCE_FILE ("context.galgas", 380)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct::GGS_intermediateCodeStruct (void) :
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

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct::GGS_intermediateCodeStruct (const GGS_intermediateCodeStruct & inSource) :
mProperty_mStaticEntityMap (inSource.mProperty_mStaticEntityMap),
mProperty_mInterruptMapIR (inSource.mProperty_mInterruptMapIR),
mProperty_mExternProcedureMapIR (inSource.mProperty_mExternProcedureMapIR),
mProperty_mPanicSetupListIR (inSource.mProperty_mPanicSetupListIR),
mProperty_mPanicLoopListIR (inSource.mProperty_mPanicLoopListIR),
mProperty_mTaskMapIR (inSource.mProperty_mTaskMapIR),
mProperty_mGlobalTaskVariableList (inSource.mProperty_mGlobalTaskVariableList),
mProperty_mMaxBranchOfOnInstructions (inSource.mProperty_mMaxBranchOfOnInstructions),
mProperty_mTargetParameters (inSource.mProperty_mTargetParameters),
mProperty_mDriverList (inSource.mProperty_mDriverList),
mProperty_mStaticArrayMapForIntermediate (inSource.mProperty_mStaticArrayMapForIntermediate),
mProperty_mGlobalSyncInstanceMap (inSource.mProperty_mGlobalSyncInstanceMap),
mProperty_mControlRegisterGroupArrayList (inSource.mProperty_mControlRegisterGroupArrayList),
mProperty_mRoutineListIR (inSource.mProperty_mRoutineListIR) {
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct & GGS_intermediateCodeStruct::operator = (const GGS_intermediateCodeStruct & inSource) {
  mProperty_mStaticEntityMap = inSource.mProperty_mStaticEntityMap ;
  mProperty_mInterruptMapIR = inSource.mProperty_mInterruptMapIR ;
  mProperty_mExternProcedureMapIR = inSource.mProperty_mExternProcedureMapIR ;
  mProperty_mPanicSetupListIR = inSource.mProperty_mPanicSetupListIR ;
  mProperty_mPanicLoopListIR = inSource.mProperty_mPanicLoopListIR ;
  mProperty_mTaskMapIR = inSource.mProperty_mTaskMapIR ;
  mProperty_mGlobalTaskVariableList = inSource.mProperty_mGlobalTaskVariableList ;
  mProperty_mMaxBranchOfOnInstructions = inSource.mProperty_mMaxBranchOfOnInstructions ;
  mProperty_mTargetParameters = inSource.mProperty_mTargetParameters ;
  mProperty_mDriverList = inSource.mProperty_mDriverList ;
  mProperty_mStaticArrayMapForIntermediate = inSource.mProperty_mStaticArrayMapForIntermediate ;
  mProperty_mGlobalSyncInstanceMap = inSource.mProperty_mGlobalSyncInstanceMap ;
  mProperty_mControlRegisterGroupArrayList = inSource.mProperty_mControlRegisterGroupArrayList ;
  mProperty_mRoutineListIR = inSource.mProperty_mRoutineListIR ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_intermediateCodeStruct GGS_intermediateCodeStruct::init (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_intermediateCodeStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_intermediateCodeStruct::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mStaticEntityMap = GGS_staticEntityMap::init (inCompiler COMMA_HERE) ;
  mProperty_mInterruptMapIR = GGS_interruptMapIR::init (inCompiler COMMA_HERE) ;
  mProperty_mExternProcedureMapIR = GGS_externProcedureMapIR::init (inCompiler COMMA_HERE) ;
GGS_panicSortedListIR temp_0 = GGS_panicSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 11)) ;
  mProperty_mPanicSetupListIR = temp_0 ;
GGS_panicSortedListIR temp_1 = GGS_panicSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 12)) ;
  mProperty_mPanicLoopListIR = temp_1 ;
  mProperty_mTaskMapIR = GGS_taskMapIR::init (inCompiler COMMA_HERE) ;
GGS_globalTaskVariableList temp_2 = GGS_globalTaskVariableList::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 14)) ;
  mProperty_mGlobalTaskVariableList = temp_2 ;
  mProperty_mMaxBranchOfOnInstructions = GGS_uint (uint32_t (0U)) ;
GGS__32_lstringlist temp_3 = GGS__32_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 18)) ;
GGS_lstringlist temp_4 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 37)) ;
GGS_lstringlist temp_5 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 38)) ;
GGS_lstringlist temp_6 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 39)) ;
  mProperty_mTargetParameters = GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 17)), temp_3, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 19)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 20)), GGS_uint (uint32_t (0U)), GGS_bool (false), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 23)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 23)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 24)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 24)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 25)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 26)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 26)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 27)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 27)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 28)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 28)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 29)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 29)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 30)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 30)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 31)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 32)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 32)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 33)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 34)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 35)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 36)), temp_4, temp_5, temp_6, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 40)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 41)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 42)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 43)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 43)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 44)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 45)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 46)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 47)), inCompiler COMMA_HERE) ;
GGS_driverListIR temp_7 = GGS_driverListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 49)) ;
  mProperty_mDriverList = temp_7 ;
  mProperty_mStaticArrayMapForIntermediate = GGS_staticListInvokedFunctionSetMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalSyncInstanceMap = GGS_globalSyncInstanceMapIR::init (inCompiler COMMA_HERE) ;
GGS_controlRegisterGroupArrayList temp_8 = GGS_controlRegisterGroupArrayList::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 52)) ;
  mProperty_mControlRegisterGroupArrayList = temp_8 ;
GGS_routineListIR temp_9 = GGS_routineListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 53)) ;
  mProperty_mRoutineListIR = temp_9 ;
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct::GGS_intermediateCodeStruct (const GGS_staticEntityMap & inOperand0,
                                                        const GGS_interruptMapIR & inOperand1,
                                                        const GGS_externProcedureMapIR & inOperand2,
                                                        const GGS_panicSortedListIR & inOperand3,
                                                        const GGS_panicSortedListIR & inOperand4,
                                                        const GGS_taskMapIR & inOperand5,
                                                        const GGS_globalTaskVariableList & inOperand6,
                                                        const GGS_uint & inOperand7,
                                                        const GGS_targetParameters & inOperand8,
                                                        const GGS_driverListIR & inOperand9,
                                                        const GGS_staticListInvokedFunctionSetMap & inOperand10,
                                                        const GGS_globalSyncInstanceMapIR & inOperand11,
                                                        const GGS_controlRegisterGroupArrayList & inOperand12,
                                                        const GGS_routineListIR & inOperand13) :
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

//--------------------------------------------------------------------------------------------------

bool GGS_intermediateCodeStruct::isValid (void) const {
  return mProperty_mStaticEntityMap.isValid () && mProperty_mInterruptMapIR.isValid () && mProperty_mExternProcedureMapIR.isValid () && mProperty_mPanicSetupListIR.isValid () && mProperty_mPanicLoopListIR.isValid () && mProperty_mTaskMapIR.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mMaxBranchOfOnInstructions.isValid () && mProperty_mTargetParameters.isValid () && mProperty_mDriverList.isValid () && mProperty_mStaticArrayMapForIntermediate.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mControlRegisterGroupArrayList.isValid () && mProperty_mRoutineListIR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_intermediateCodeStruct::drop (void) {
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

//--------------------------------------------------------------------------------------------------

void GGS_intermediateCodeStruct::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @intermediateCodeStruct:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStaticEntityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInterruptMapIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExternProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicSetupListIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLoopListIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskMapIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMaxBranchOfOnInstructions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticArrayMapForIntermediate.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterGroupArrayList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineListIR.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @intermediateCodeStruct generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct GGS_intermediateCodeStruct::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_intermediateCodeStruct result ;
  const GGS_intermediateCodeStruct * p = (const GGS_intermediateCodeStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_intermediateCodeStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("intermediateCodeStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

