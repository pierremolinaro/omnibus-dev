#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externProcedureMapIR llvmPrototypeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR /* inObject */,
                                              GALGAS_string & /* ioArgument_ioLLVMcode */,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_isrDeclarationAST_2D_weak::objectCompare (const GALGAS_isrDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_isrDeclarationAST_2D_weak::GALGAS_isrDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_isrDeclarationAST_2D_weak & GALGAS_isrDeclarationAST_2D_weak::operator = (const GALGAS_isrDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_isrDeclarationAST_2D_weak::GALGAS_isrDeclarationAST_2D_weak (const GALGAS_isrDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_isrDeclarationAST_2D_weak GALGAS_isrDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_isrDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_isrDeclarationAST GALGAS_isrDeclarationAST_2D_weak::bang_isrDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_isrDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_isrDeclarationAST) ;
      result = GALGAS_isrDeclarationAST ((cPtr_isrDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @isrDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_isrDeclarationAST_2D_weak ("isrDeclarationAST-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_isrDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_isrDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_isrDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_isrDeclarationAST_2D_weak GALGAS_isrDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationAST_2D_weak result ;
  const GALGAS_isrDeclarationAST_2D_weak * p = (const GALGAS_isrDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_isrDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedISRDeclaration_2D_weak::objectCompare (const GALGAS_decoratedISRDeclaration_2D_weak & inOperand) const {
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

GALGAS_decoratedISRDeclaration_2D_weak::GALGAS_decoratedISRDeclaration_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration_2D_weak & GALGAS_decoratedISRDeclaration_2D_weak::operator = (const GALGAS_decoratedISRDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration_2D_weak::GALGAS_decoratedISRDeclaration_2D_weak (const GALGAS_decoratedISRDeclaration & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration_2D_weak GALGAS_decoratedISRDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_decoratedISRDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration GALGAS_decoratedISRDeclaration_2D_weak::bang_decoratedISRDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedISRDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedISRDeclaration) ;
      result = GALGAS_decoratedISRDeclaration ((cPtr_decoratedISRDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @decoratedISRDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration_2D_weak ("decoratedISRDeclaration-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedISRDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedISRDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedISRDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedISRDeclaration_2D_weak GALGAS_decoratedISRDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedISRDeclaration_2D_weak result ;
  const GALGAS_decoratedISRDeclaration_2D_weak * p = (const GALGAS_decoratedISRDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedISRDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedISRDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_interruptMapIR::cMapElement_interruptMapIR (const GALGAS_interruptMapIR_2D_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSelfType (inValue.mProperty_mSelfType),
mProperty_mDriverName (inValue.mProperty_mDriverName),
mProperty_mMode (inValue.mProperty_mMode) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_interruptMapIR::cMapElement_interruptMapIR (const GALGAS_lstring & inKey,
                                                        const GALGAS_omnibusType & in_mSelfType,
                                                        const GALGAS_string & in_mDriverName,
                                                        const GALGAS_mode & in_mMode
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSelfType (in_mSelfType),
mProperty_mDriverName (in_mDriverName),
mProperty_mMode (in_mMode) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_interruptMapIR::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_interruptMapIR::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_interruptMapIR (mProperty_lkey, mProperty_mSelfType, mProperty_mDriverName, mProperty_mMode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_interruptMapIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelfType" ":") ;
  mProperty_mSelfType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDriverName" ":") ;
  mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMode" ":") ;
  mProperty_mMode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_interruptMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_interruptMapIR * operand = (cMapElement_interruptMapIR *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSelfType.objectCompare (operand->mProperty_mSelfType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDriverName.objectCompare (operand->mProperty_mDriverName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mMode.objectCompare (operand->mProperty_mMode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR::GALGAS_interruptMapIR (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR::GALGAS_interruptMapIR (const GALGAS_interruptMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR & GALGAS_interruptMapIR::operator = (const GALGAS_interruptMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR GALGAS_interruptMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR GALGAS_interruptMapIR::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR GALGAS_interruptMapIR::class_func_mapWithMapToOverride (const GALGAS_interruptMapIR & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR GALGAS_interruptMapIR::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_interruptMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR::enterElement (const GALGAS_interruptMapIR_2D_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_interruptMapIR (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@interruptMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_omnibusType & inArgument0,
                                                 const GALGAS_string & inArgument1,
                                                 const GALGAS_mode & inArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_interruptMapIR (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@interruptMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR GALGAS_interruptMapIR::add_operation (const GALGAS_interruptMapIR & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_interruptMapIR result = *this ;
  cEnumerator_interruptMapIR enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSelfType (HERE), enumerator.current_mDriverName (HERE), enumerator.current_mMode (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_omnibusType inArgument0,
                                              GALGAS_string inArgument1,
                                              GALGAS_mode inArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_interruptMapIR (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_interruptMapIR::getter_mSelfTypeForKey (const GALGAS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mSelfType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_interruptMapIR::getter_mDriverNameForKey (const GALGAS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_interruptMapIR::getter_mModeForKey (const GALGAS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_mode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR::setter_setMSelfTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                       GALGAS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mSelfType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR::setter_setMDriverNameForKey (GALGAS_string inAttributeValue,
                                                         GALGAS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mDriverName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR::setter_setMModeForKey (GALGAS_mode inAttributeValue,
                                                   GALGAS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mMode = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_interruptMapIR * GALGAS_interruptMapIR::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * result = (cMapElement_interruptMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_interruptMapIR) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_interruptMapIR::cEnumerator_interruptMapIR (const GALGAS_interruptMapIR & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element cEnumerator_interruptMapIR::current (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return GALGAS_interruptMapIR_2D_element (p->mProperty_lkey, p->mProperty_mSelfType, p->mProperty_mDriverName, p->mProperty_mMode) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_interruptMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_interruptMapIR::current_mSelfType (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mSelfType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_interruptMapIR::current_mDriverName (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode cEnumerator_interruptMapIR::current_mMode (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mMode ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_interruptMapIR::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_omnibusType & outArgument0,
                                                GALGAS_string & outArgument1,
                                                GALGAS_mode & outArgument2) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    outArgument0 = p->mProperty_mSelfType ;
    outArgument1 = p->mProperty_mDriverName ;
    outArgument2 = p->mProperty_mMode ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @interruptMapIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR ("interruptMapIR",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_interruptMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_interruptMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR GALGAS_interruptMapIR::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  const GALGAS_interruptMapIR * p = (const GALGAS_interruptMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_interruptMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@interruptMapIR interruptCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_interruptCodeGeneration (const GALGAS_interruptMapIR inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              GALGAS_string & ioArgument_ioAScode,
                                              const GALGAS_string constinArgument_inUndefinedInterruptString,
                                              const GALGAS_string constinArgument_inXTRInterruptHandlerString,
                                              const GALGAS_generationContext constinArgument_inGenerationContext,
                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 163)) ;
  GALGAS_stringset var_definedInterrupts_7242 = temp_0 ;
  const GALGAS_interruptMapIR temp_1 = inObject ;
  cEnumerator_interruptMapIR enumerator_7285 (temp_1, EnumerationOrder::up) ;
  while (enumerator_7285.hasCurrentObject ()) {
    var_definedInterrupts_7242.addAssign_operation (enumerator_7285.current (HERE).readProperty_lkey ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)) ;
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_7285.current (HERE).readProperty_mMode ().objectCompare (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 166)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = function_llvmNameForServiceInterrupt (enumerator_7285.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 167)).readProperty_string () ;
    }else if (kBoolFalse == test_3) {
      temp_2 = function_llvmNameForSectionInterrupt (enumerator_7285.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)) ;
    }
    GALGAS_string var_interruptImplementationName_7349 = temp_2 ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_interruptImplementationName_7349, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_interruptImplementationName_7349, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)) ;
    GALGAS_string var_varName_7755 = function_llvmNameForGlobalVariable (enumerator_7285.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 174)) ;
    GALGAS_string var_llvmTypeName_7824 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7285.current (HERE).readProperty_mSelfType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 175)) ;
    GALGAS_string var_driverLLVMBaseTypeName_7911 = enumerator_7285.current (HERE).readProperty_mSelfType ().readProperty_llvmBaseTypeName () ;
    GALGAS_routineFormalArgumentListAST temp_4 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
    GALGAS_lstring var_isrRoutineMangledName_7981 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_7911, enumerator_7285.current (HERE).readProperty_lkey (), temp_4, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
    GALGAS_string var_isrRoutineLLVMName_8086 = function_llvmNameForFunction (var_isrRoutineMangledName_7981.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_isrRoutineLLVMName_8086, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (var_llvmTypeName_7824, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (var_varName_7755, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 182)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 183)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_7285.current (HERE).readProperty_mMode ().objectCompare (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 185)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_interruptHandlerName_8423 = function_llvmNameForServiceInterrupt (enumerator_7285.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 186)).readProperty_string () ;
        GALGAS_string var_isrName_8508 = function_llvmNameForSectionInterrupt (enumerator_7285.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 187)) ;
        GALGAS_string var_s_31__8580 = constinArgument_inXTRInterruptHandlerString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), var_isrName_8508, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 188)) ;
        GALGAS_string var_s_32__8674 = var_s_31__8580.getter_stringByReplacingStringByString (GALGAS_string ("!HANDLER!"), var_interruptHandlerName_8423, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 189)) ;
        ioArgument_ioAScode.plusAssign_operation(var_s_32__8674, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 190)) ;
      }
    }
    enumerator_7285.gotoNextObject () ;
  }
  cEnumerator_availableInterruptMap enumerator_8849 (constinArgument_inGenerationContext.readProperty_mAvailableInterruptMap (), EnumerationOrder::up) ;
  while (enumerator_8849.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_definedInterrupts_7242.getter_hasKey (enumerator_8849.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-isr.galgas", 195)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 195)).boolEnum () ;
      if (kBoolTrue == test_6) {
        switch (enumerator_8849.current_mInterruptionPanicCode (HERE).enumValue ()) {
        case GALGAS_interruptionPanicCode::kNotBuilt:
          break ;
        case GALGAS_interruptionPanicCode::kEnum_noCode:
          {
            GALGAS_string var_s_9020 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionInterrupt (enumerator_8849.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 198)) ;
            ioArgument_ioAScode.plusAssign_operation(var_s_9020, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 199)) ;
          }
          break ;
        case GALGAS_interruptionPanicCode::kEnum_code:
          {
            const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_9890 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_8849.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
            const GALGAS_lbigint extractedValue_9186_value = extractPtr_9890->mAssociatedValue0 ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
              if (kBoolTrue == test_7) {
                GALGAS_string var_s_9274 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionInterrupt (enumerator_8849.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 202)) ;
                ioArgument_ioAScode.plusAssign_operation(var_s_9274, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 203)) ;
              }
            }
            if (kBoolFalse == test_7) {
              GALGAS_string var_name_9443 = function_llvmNameForSectionInterrupt (enumerator_8849.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 205)) ;
              ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic code for ").add_operation (var_name_9443, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)) ;
              ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_name_9443, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)).add_operation (GALGAS_string (" noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)) ;
              ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.isr (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (extractedValue_9186_value.readProperty_bigint ().getter_string (SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)) ;
              ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)) ;
              ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)) ;
            }
          }
          break ;
        }
      }
    }
    enumerator_8849.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_guardKind_convenienceGuard::cEnumAssociatedValues_guardKind_convenienceGuard (const GALGAS_callInstructionAST inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_guardKind_convenienceGuard::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_guardKind_convenienceGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardKind_convenienceGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardKind_convenienceGuard *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind::GALGAS_guardKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind GALGAS_guardKind::class_func_baseGuard (UNUSED_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  result.mEnum = kEnum_baseGuard ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind GALGAS_guardKind::class_func_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_convenienceGuard ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_guardKind_convenienceGuard (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardKind::method_convenienceGuard (GALGAS_callInstructionAST & outAssociatedValue0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_convenienceGuard) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @guardKind convenienceGuard invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardKind_convenienceGuard * ptr = (const cEnumAssociatedValues_guardKind_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardKind::optional_baseGuard () const {
  const bool ok = mEnum == kEnum_baseGuard ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardKind::optional_convenienceGuard (GALGAS_callInstructionAST & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_convenienceGuard ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_guardKind_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_guardKind [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardKind::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardKind::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_convenienceGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardKind::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardKind [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guardKind::objectCompare (const GALGAS_guardKind & inOperand) const {
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
//     @guardKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKind ("guardKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind GALGAS_guardKind::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  const GALGAS_guardKind * p = (const GALGAS_guardKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guardDeclarationAST_2D_weak::objectCompare (const GALGAS_guardDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_guardDeclarationAST_2D_weak::GALGAS_guardDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST_2D_weak & GALGAS_guardDeclarationAST_2D_weak::operator = (const GALGAS_guardDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST_2D_weak::GALGAS_guardDeclarationAST_2D_weak (const GALGAS_guardDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST_2D_weak GALGAS_guardDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_guardDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST GALGAS_guardDeclarationAST_2D_weak::bang_guardDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_guardDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_guardDeclarationAST) ;
      result = GALGAS_guardDeclarationAST ((cPtr_guardDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationAST_2D_weak ("guardDeclarationAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardDeclarationAST_2D_weak GALGAS_guardDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guardDeclarationAST_2D_weak result ;
  const GALGAS_guardDeclarationAST_2D_weak * p = (const GALGAS_guardDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedGuardDeclaration_2D_weak::objectCompare (const GALGAS_decoratedGuardDeclaration_2D_weak & inOperand) const {
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

GALGAS_decoratedGuardDeclaration_2D_weak::GALGAS_decoratedGuardDeclaration_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration_2D_weak & GALGAS_decoratedGuardDeclaration_2D_weak::operator = (const GALGAS_decoratedGuardDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration_2D_weak::GALGAS_decoratedGuardDeclaration_2D_weak (const GALGAS_decoratedGuardDeclaration & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration_2D_weak GALGAS_decoratedGuardDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_decoratedGuardDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration GALGAS_decoratedGuardDeclaration_2D_weak::bang_decoratedGuardDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedGuardDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedGuardDeclaration) ;
      result = GALGAS_decoratedGuardDeclaration ((cPtr_decoratedGuardDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @decoratedGuardDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2D_weak ("decoratedGuardDeclaration-weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedGuardDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedGuardDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedGuardDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedGuardDeclaration_2D_weak GALGAS_decoratedGuardDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedGuardDeclaration_2D_weak result ;
  const GALGAS_decoratedGuardDeclaration_2D_weak * p = (const GALGAS_decoratedGuardDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedGuardDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedGuardDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (const GALGAS_allocaList inAssociatedValue0,
                                                                                                                            const GALGAS_instructionListIR inAssociatedValue1,
                                                                                                                            const GALGAS_string inAssociatedValue2,
                                                                                                                            const GALGAS_procCallEffectiveParameterListIR inAssociatedValue3
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *> (inOperand) ;
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

GALGAS_guardKindGenerationIR::GALGAS_guardKindGenerationIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::class_func_baseGuard (UNUSED_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  result.mEnum = kEnum_baseGuard ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::class_func_convenienceGuard (const GALGAS_allocaList & inAssociatedValue0,
                                                                                        const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                        const GALGAS_string & inAssociatedValue2,
                                                                                        const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_convenienceGuard ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardKindGenerationIR::method_convenienceGuard (GALGAS_allocaList & outAssociatedValue0,
                                                            GALGAS_instructionListIR & outAssociatedValue1,
                                                            GALGAS_string & outAssociatedValue2,
                                                            GALGAS_procCallEffectiveParameterListIR & outAssociatedValue3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_convenienceGuard) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    String s ;
    s.appendCString ("method @guardKindGenerationIR convenienceGuard invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * ptr = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardKindGenerationIR::optional_baseGuard () const {
  const bool ok = mEnum == kEnum_baseGuard ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardKindGenerationIR::optional_convenienceGuard (GALGAS_allocaList & outAssociatedValue0,
                                                              GALGAS_instructionListIR & outAssociatedValue1,
                                                              GALGAS_string & outAssociatedValue2,
                                                              GALGAS_procCallEffectiveParameterListIR & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_convenienceGuard ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_guardKindGenerationIR [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardKindGenerationIR::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardKindGenerationIR::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_convenienceGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardKindGenerationIR::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardKindGenerationIR: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardKindGenerationIR [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guardKindGenerationIR::objectCompare (const GALGAS_guardKindGenerationIR & inOperand) const {
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
//     @guardKindGenerationIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKindGenerationIR ("guardKindGenerationIR",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardKindGenerationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKindGenerationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardKindGenerationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKindGenerationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  const GALGAS_guardKindGenerationIR * p = (const GALGAS_guardKindGenerationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardKindGenerationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKindGenerationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guardUserRoutineIR_2D_weak::objectCompare (const GALGAS_guardUserRoutineIR_2D_weak & inOperand) const {
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

GALGAS_guardUserRoutineIR_2D_weak::GALGAS_guardUserRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR_2D_weak & GALGAS_guardUserRoutineIR_2D_weak::operator = (const GALGAS_guardUserRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR_2D_weak::GALGAS_guardUserRoutineIR_2D_weak (const GALGAS_guardUserRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR_2D_weak GALGAS_guardUserRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_guardUserRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR GALGAS_guardUserRoutineIR_2D_weak::bang_guardUserRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_guardUserRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_guardUserRoutineIR) ;
      result = GALGAS_guardUserRoutineIR ((cPtr_guardUserRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardUserRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR_2D_weak ("guardUserRoutineIR-weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardUserRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardUserRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardUserRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardUserRoutineIR_2D_weak GALGAS_guardUserRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardUserRoutineIR_2D_weak result ;
  const GALGAS_guardUserRoutineIR_2D_weak * p = (const GALGAS_guardUserRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardUserRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardUserRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@allocaList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_allocaList : public cCollectionElement {
  public: GALGAS_allocaList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_allocaList (const GALGAS_string & in_mVarLLVMName,
                                         const GALGAS_omnibusType & in_mLLVMType,
                                         const GALGAS_bool & in_mFormalInputArgument
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_allocaList (const GALGAS_allocaList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_allocaList::cCollectionElement_allocaList (const GALGAS_string & in_mVarLLVMName,
                                                              const GALGAS_omnibusType & in_mLLVMType,
                                                              const GALGAS_bool & in_mFormalInputArgument
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarLLVMName, in_mLLVMType, in_mFormalInputArgument) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_allocaList::cCollectionElement_allocaList (const GALGAS_allocaList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mVarLLVMName, inElement.mProperty_mLLVMType, inElement.mProperty_mFormalInputArgument) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_allocaList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_allocaList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_allocaList (mObject.mProperty_mVarLLVMName, mObject.mProperty_mLLVMType, mObject.mProperty_mFormalInputArgument COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_allocaList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mVarLLVMName" ":") ;
  mObject.mProperty_mVarLLVMName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLLVMType" ":") ;
  mObject.mProperty_mLLVMType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalInputArgument" ":") ;
  mObject.mProperty_mFormalInputArgument.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_allocaList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_allocaList * operand = (cCollectionElement_allocaList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_allocaList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList::GALGAS_allocaList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList::GALGAS_allocaList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_allocaList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_allocaList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_allocaList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_allocaList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::enterElement (const GALGAS_allocaList_2D_element & inValue,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_allocaList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_allocaList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                               const GALGAS_omnibusType & inOperand1,
                                                               const GALGAS_bool & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_allocaList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_allocaList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_allocaList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_string & in_mVarLLVMName,
                                                   const GALGAS_omnibusType & in_mLLVMType,
                                                   const GALGAS_bool & in_mFormalInputArgument
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_allocaList * p = nullptr ;
  macroMyNew (p, cCollectionElement_allocaList (in_mVarLLVMName,
                                                in_mLLVMType,
                                                in_mFormalInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::addAssign_operation (const GALGAS_string & inOperand0,
                                             const GALGAS_omnibusType & inOperand1,
                                             const GALGAS_bool & inOperand2
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::setter_append (const GALGAS_string inOperand0,
                                       const GALGAS_omnibusType inOperand1,
                                       const GALGAS_bool inOperand2,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                              const GALGAS_omnibusType inOperand1,
                                              const GALGAS_bool inOperand2,
                                              const GALGAS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_allocaList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                              GALGAS_omnibusType & outOperand1,
                                              GALGAS_bool & outOperand2,
                                              const GALGAS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_allocaList) ;
        outOperand0 = p->mObject.mProperty_mVarLLVMName ;
        outOperand1 = p->mObject.mProperty_mLLVMType ;
        outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
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

void GALGAS_allocaList::setter_popFirst (GALGAS_string & outOperand0,
                                         GALGAS_omnibusType & outOperand1,
                                         GALGAS_bool & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::setter_popLast (GALGAS_string & outOperand0,
                                        GALGAS_omnibusType & outOperand1,
                                        GALGAS_bool & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::method_first (GALGAS_string & outOperand0,
                                      GALGAS_omnibusType & outOperand1,
                                      GALGAS_bool & outOperand2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::method_last (GALGAS_string & outOperand0,
                                     GALGAS_omnibusType & outOperand1,
                                     GALGAS_bool & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_allocaList::add_operation (const GALGAS_allocaList & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_allocaList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_allocaList::getter_subListWithRange (const GALGAS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_allocaList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_allocaList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::plusAssign_operation (const GALGAS_allocaList inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::setter_setMVarLLVMNameAtIndex (GALGAS_string inOperand,
                                                       GALGAS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mVarLLVMName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_allocaList::getter_mVarLLVMNameAtIndex (const GALGAS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mVarLLVMName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::setter_setMLLVMTypeAtIndex (GALGAS_omnibusType inOperand,
                                                    GALGAS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLLVMType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_allocaList::getter_mLLVMTypeAtIndex (const GALGAS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mLLVMType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList::setter_setMFormalInputArgumentAtIndex (GALGAS_bool inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalInputArgument = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_allocaList::getter_mFormalInputArgumentAtIndex (const GALGAS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mFormalInputArgument ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_allocaList::cEnumerator_allocaList (const GALGAS_allocaList & inEnumeratedObject,
                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element cEnumerator_allocaList::current (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_allocaList::current_mVarLLVMName (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mVarLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_allocaList::current_mLLVMType (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mLLVMType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_allocaList::current_mFormalInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mFormalInputArgument ;
}




//--------------------------------------------------------------------------------------------------
//
//     @allocaList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList ("allocaList",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_allocaList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_allocaList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allocaList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_allocaList::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allocaList result ;
  const GALGAS_allocaList * p = (const GALGAS_allocaList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_allocaList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@instructionListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_instructionListIR : public cCollectionElement {
  public: GALGAS_instructionListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_instructionListIR (const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_instructionListIR (const GALGAS_instructionListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_instructionListIR::cCollectionElement_instructionListIR (const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListIR::cCollectionElement_instructionListIR (const GALGAS_instructionListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_instructionListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionGeneration" ":") ;
  mObject.mProperty_mInstructionGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_instructionListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListIR * operand = (cCollectionElement_instructionListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR::GALGAS_instructionListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR::GALGAS_instructionListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_instructionListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_instructionListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListIR::enterElement (const GALGAS_instructionListIR_2D_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_instructionListIR::class_func_listWithValue (const GALGAS_abstractInstructionIR & inOperand0
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_instructionListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListIR (in_mInstructionGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListIR::addAssign_operation (const GALGAS_abstractInstructionIR & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListIR::setter_append (const GALGAS_abstractInstructionIR inOperand0,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListIR::setter_insertAtIndex (const GALGAS_abstractInstructionIR inOperand0,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
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

void GALGAS_instructionListIR::setter_removeAtIndex (GALGAS_abstractInstructionIR & outOperand0,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
        outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
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

void GALGAS_instructionListIR::setter_popFirst (GALGAS_abstractInstructionIR & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListIR::setter_popLast (GALGAS_abstractInstructionIR & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListIR::method_first (GALGAS_abstractInstructionIR & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListIR::method_last (GALGAS_abstractInstructionIR & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_instructionListIR::add_operation (const GALGAS_instructionListIR & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListIR::plusAssign_operation (const GALGAS_instructionListIR inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListIR::setter_setMInstructionGenerationAtIndex (GALGAS_abstractInstructionIR inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInstructionIR GALGAS_instructionListIR::getter_mInstructionGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  GALGAS_abstractInstructionIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    result = p->mObject.mProperty_mInstructionGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_instructionListIR::cEnumerator_instructionListIR (const GALGAS_instructionListIR & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR_2D_element cEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractInstructionIR cEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject.mProperty_mInstructionGeneration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @instructionListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR ("instructionListIR",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_instructionListIR::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  const GALGAS_instructionListIR * p = (const GALGAS_instructionListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instructionListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guardImplementationRoutineIR_2D_weak::objectCompare (const GALGAS_guardImplementationRoutineIR_2D_weak & inOperand) const {
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

GALGAS_guardImplementationRoutineIR_2D_weak::GALGAS_guardImplementationRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR_2D_weak & GALGAS_guardImplementationRoutineIR_2D_weak::operator = (const GALGAS_guardImplementationRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR_2D_weak::GALGAS_guardImplementationRoutineIR_2D_weak (const GALGAS_guardImplementationRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR_2D_weak GALGAS_guardImplementationRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_guardImplementationRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR GALGAS_guardImplementationRoutineIR_2D_weak::bang_guardImplementationRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_guardImplementationRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_guardImplementationRoutineIR) ;
      result = GALGAS_guardImplementationRoutineIR ((cPtr_guardImplementationRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardImplementationRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2D_weak ("guardImplementationRoutineIR-weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardImplementationRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardImplementationRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardImplementationRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardImplementationRoutineIR_2D_weak GALGAS_guardImplementationRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guardImplementationRoutineIR_2D_weak result ;
  const GALGAS_guardImplementationRoutineIR_2D_weak * p = (const GALGAS_guardImplementationRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardImplementationRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardImplementationRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode::GALGAS_procFormalArgumentPassingMode (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::class_func_input (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_input ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::class_func_output (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_output ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::class_func_inputOutput (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_inputOutput ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_procFormalArgumentPassingMode::optional_input () const {
  const bool ok = mEnum == kEnum_input ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_procFormalArgumentPassingMode::optional_output () const {
  const bool ok = mEnum == kEnum_output ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_procFormalArgumentPassingMode::optional_inputOutput () const {
  const bool ok = mEnum == kEnum_inputOutput ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_procFormalArgumentPassingMode [4] = {
  "(not built)",
  "input",
  "output",
  "inputOutput"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isInputOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_inputOutput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procFormalArgumentPassingMode::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @procFormalArgumentPassingMode: ") ;
  ioString.appendCString (gEnumNameArrayFor_procFormalArgumentPassingMode [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_procFormalArgumentPassingMode::objectCompare (const GALGAS_procFormalArgumentPassingMode & inOperand) const {
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
//     @procFormalArgumentPassingMode generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ("procFormalArgumentPassingMode",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procFormalArgumentPassingMode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procFormalArgumentPassingMode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentPassingMode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  const GALGAS_procFormalArgumentPassingMode * p = (const GALGAS_procFormalArgumentPassingMode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procFormalArgumentPassingMode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentPassingMode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@procFormalArgumentPassingMode formalPassingModeString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_formalPassingModeString (const GALGAS_procFormalArgumentPassingMode & inObject,
                                                       Compiler *
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_input:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
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
//Extension Getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_requiredActualPassingModeForSelector (const GALGAS_procFormalArgumentPassingMode & inObject,
                                                                    const GALGAS_string & constinArgument_inSelector,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_input:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inSelector.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(constinArgument_inSelector.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 39)) ;
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@routineTypedSignature typedString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_typedString (const GALGAS_routineTypedSignature & inObject,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("(") ;
  const GALGAS_routineTypedSignature temp_0 = inObject ;
  cEnumerator_routineTypedSignature enumerator_5082 (temp_0, EnumerationOrder::up) ;
  while (enumerator_5082.hasCurrentObject ()) {
    result_result.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5082.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (enumerator_5082.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (extensionGetter_key (enumerator_5082.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)) ;
    enumerator_5082.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 140)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@routineTypedSignature mangledName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring extensionGetter_mangledName (const GALGAS_routineTypedSignature & inObject,
                                            const GALGAS_string & constinArgument_inReceiverTypeName,
                                            const GALGAS_lstring & constinArgument_inFunctionName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_5509 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_5509.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 151)) ;
    }
  }
  var_s_5509.plusAssign_operation(constinArgument_inFunctionName.readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 153)) ;
  const GALGAS_routineTypedSignature temp_1 = inObject ;
  cEnumerator_routineTypedSignature enumerator_5670 (temp_1, EnumerationOrder::up) ;
  while (enumerator_5670.hasCurrentObject ()) {
    var_s_5509.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5670.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)).add_operation (enumerator_5670.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)) ;
    enumerator_5670.gotoNextObject () ;
  }
  var_s_5509.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 157)) ;
  result_result = GALGAS_lstring::init_21__21_ (var_s_5509, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@routineFormalArgumentListAST routineSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring extensionGetter_routineSignature (const GALGAS_routineFormalArgumentListAST & inObject,
                                                 const GALGAS_location & constinArgument_inRoutineNameLocation,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_key_8098 = GALGAS_string ("(") ;
  const GALGAS_routineFormalArgumentListAST temp_0 = inObject ;
  cEnumerator_routineFormalArgumentListAST enumerator_8152 (temp_0, EnumerationOrder::up) ;
  while (enumerator_8152.hasCurrentObject ()) {
    var_key_8098.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_8152.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)).add_operation (enumerator_8152.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)) ;
    enumerator_8152.gotoNextObject () ;
  }
  var_key_8098.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 208)) ;
  result_result = GALGAS_lstring::init_21__21_ (var_key_8098, constinArgument_inRoutineNameLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Class for element of '@effectiveArgumentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_effectiveArgumentListAST : public cCollectionElement {
  public: GALGAS_effectiveArgumentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_effectiveArgumentListAST (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                       const GALGAS_lstring & in_mSelector
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_effectiveArgumentListAST (const GALGAS_effectiveArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_effectiveArgumentListAST::cCollectionElement_effectiveArgumentListAST (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                                          const GALGAS_lstring & in_mSelector
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterKind, in_mSelector) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_effectiveArgumentListAST::cCollectionElement_effectiveArgumentListAST (const GALGAS_effectiveArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_effectiveArgumentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEffectiveParameterKind" ":") ;
  mObject.mProperty_mEffectiveParameterKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_effectiveArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_effectiveArgumentListAST * operand = (cCollectionElement_effectiveArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_effectiveArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST::GALGAS_effectiveArgumentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST::GALGAS_effectiveArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_effectiveArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_effectiveArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::enterElement (const GALGAS_effectiveArgumentListAST_2D_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::class_func_listWithValue (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                           const GALGAS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_effectiveArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_effectiveArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                 const GALGAS_lstring & in_mSelector
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_effectiveArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_effectiveArgumentListAST (in_mEffectiveParameterKind,
                                                              in_mSelector COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::addAssign_operation (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                           const GALGAS_lstring & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::setter_append (const GALGAS_effectiveArgumentPassingModeAST inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::setter_insertAtIndex (const GALGAS_effectiveArgumentPassingModeAST inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_effectiveArgumentListAST::setter_removeAtIndex (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
        outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
        outOperand1 = p->mObject.mProperty_mSelector ;
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

void GALGAS_effectiveArgumentListAST::setter_popFirst (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::setter_popLast (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::method_first (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::method_last (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::add_operation (const GALGAS_effectiveArgumentListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result = GALGAS_effectiveArgumentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result = GALGAS_effectiveArgumentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result = GALGAS_effectiveArgumentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::plusAssign_operation (const GALGAS_effectiveArgumentListAST inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::setter_setMEffectiveParameterKindAtIndex (GALGAS_effectiveArgumentPassingModeAST inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEffectiveParameterKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentListAST::getter_mEffectiveParameterKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    result = p->mObject.mProperty_mEffectiveParameterKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_effectiveArgumentListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_effectiveArgumentListAST::cEnumerator_effectiveArgumentListAST (const GALGAS_effectiveArgumentListAST & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element cEnumerator_effectiveArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST cEnumerator_effectiveArgumentListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject.mProperty_mEffectiveParameterKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_effectiveArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}




//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST ("effectiveArgumentListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST result ;
  const GALGAS_effectiveArgumentListAST * p = (const GALGAS_effectiveArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@decoratedRegularRoutineList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_decoratedRegularRoutineList : public cCollectionElement {
  public: GALGAS_decoratedRegularRoutineList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_decoratedRegularRoutineList (const GALGAS_lstring & in_receiverTypeName,
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
                                                          const GALGAS_lstring & in_returnTypeName
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_decoratedRegularRoutineList (const GALGAS_decoratedRegularRoutineList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_decoratedRegularRoutineList::cCollectionElement_decoratedRegularRoutineList (const GALGAS_lstring & in_receiverTypeName,
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
                                                                                                const GALGAS_lstring & in_returnTypeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_receiverTypeName, in_mode, in_isRequired, in_routineKind, in_warnIfUnused, in_exportedRoutine, in_routineAttributes, in_routineMangledLLVMName, in_formalArgumentList, in_warningOnUnusedArgs, in_mInstructionList, in_mEndOfRoutineDeclaration, in_returnTypeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_decoratedRegularRoutineList::cCollectionElement_decoratedRegularRoutineList (const GALGAS_decoratedRegularRoutineList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_receiverTypeName, inElement.mProperty_mode, inElement.mProperty_isRequired, inElement.mProperty_routineKind, inElement.mProperty_warnIfUnused, inElement.mProperty_exportedRoutine, inElement.mProperty_routineAttributes, inElement.mProperty_routineMangledLLVMName, inElement.mProperty_formalArgumentList, inElement.mProperty_warningOnUnusedArgs, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfRoutineDeclaration, inElement.mProperty_returnTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_decoratedRegularRoutineList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_decoratedRegularRoutineList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_decoratedRegularRoutineList (mObject.mProperty_receiverTypeName, mObject.mProperty_mode, mObject.mProperty_isRequired, mObject.mProperty_routineKind, mObject.mProperty_warnIfUnused, mObject.mProperty_exportedRoutine, mObject.mProperty_routineAttributes, mObject.mProperty_routineMangledLLVMName, mObject.mProperty_formalArgumentList, mObject.mProperty_warningOnUnusedArgs, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineDeclaration, mObject.mProperty_returnTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_decoratedRegularRoutineList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("receiverTypeName" ":") ;
  mObject.mProperty_receiverTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mode" ":") ;
  mObject.mProperty_mode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("isRequired" ":") ;
  mObject.mProperty_isRequired.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("routineKind" ":") ;
  mObject.mProperty_routineKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("warnIfUnused" ":") ;
  mObject.mProperty_warnIfUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("exportedRoutine" ":") ;
  mObject.mProperty_exportedRoutine.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("routineAttributes" ":") ;
  mObject.mProperty_routineAttributes.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("routineMangledLLVMName" ":") ;
  mObject.mProperty_routineMangledLLVMName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("formalArgumentList" ":") ;
  mObject.mProperty_formalArgumentList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("warningOnUnusedArgs" ":") ;
  mObject.mProperty_warningOnUnusedArgs.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfRoutineDeclaration" ":") ;
  mObject.mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("returnTypeName" ":") ;
  mObject.mProperty_returnTypeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_decoratedRegularRoutineList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_decoratedRegularRoutineList * operand = (cCollectionElement_decoratedRegularRoutineList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_decoratedRegularRoutineList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList::GALGAS_decoratedRegularRoutineList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList::GALGAS_decoratedRegularRoutineList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList GALGAS_decoratedRegularRoutineList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedRegularRoutineList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList GALGAS_decoratedRegularRoutineList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedRegularRoutineList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::enterElement (const GALGAS_decoratedRegularRoutineList_2D_element & inValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_decoratedRegularRoutineList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList GALGAS_decoratedRegularRoutineList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
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
                                                                                                 const GALGAS_lstring & inOperand12
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRegularRoutineList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid ()) {
    result = GALGAS_decoratedRegularRoutineList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_decoratedRegularRoutineList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_receiverTypeName,
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
                                                                    const GALGAS_lstring & in_returnTypeName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = nullptr ;
  macroMyNew (p, cCollectionElement_decoratedRegularRoutineList (in_receiverTypeName,
                                                                 in_mode,
                                                                 in_isRequired,
                                                                 in_routineKind,
                                                                 in_warnIfUnused,
                                                                 in_exportedRoutine,
                                                                 in_routineAttributes,
                                                                 in_routineMangledLLVMName,
                                                                 in_formalArgumentList,
                                                                 in_warningOnUnusedArgs,
                                                                 in_mInstructionList,
                                                                 in_mEndOfRoutineDeclaration,
                                                                 in_returnTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::addAssign_operation (const GALGAS_lstring & inOperand0,
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
                                                              const GALGAS_lstring & inOperand12
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_decoratedRegularRoutineList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_append (const GALGAS_lstring inOperand0,
                                                        const GALGAS_mode inOperand1,
                                                        const GALGAS_bool inOperand2,
                                                        const GALGAS_routineKind inOperand3,
                                                        const GALGAS_bool inOperand4,
                                                        const GALGAS_bool inOperand5,
                                                        const GALGAS_routineAttributes inOperand6,
                                                        const GALGAS_lstring inOperand7,
                                                        const GALGAS_routineFormalArgumentListAST inOperand8,
                                                        const GALGAS_bool inOperand9,
                                                        const GALGAS_instructionListAST inOperand10,
                                                        const GALGAS_location inOperand11,
                                                        const GALGAS_lstring inOperand12,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_decoratedRegularRoutineList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_mode inOperand1,
                                                               const GALGAS_bool inOperand2,
                                                               const GALGAS_routineKind inOperand3,
                                                               const GALGAS_bool inOperand4,
                                                               const GALGAS_bool inOperand5,
                                                               const GALGAS_routineAttributes inOperand6,
                                                               const GALGAS_lstring inOperand7,
                                                               const GALGAS_routineFormalArgumentListAST inOperand8,
                                                               const GALGAS_bool inOperand9,
                                                               const GALGAS_instructionListAST inOperand10,
                                                               const GALGAS_location inOperand11,
                                                               const GALGAS_lstring inOperand12,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_decoratedRegularRoutineList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12 COMMA_THERE)) ;
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

void GALGAS_decoratedRegularRoutineList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_mode & outOperand1,
                                                               GALGAS_bool & outOperand2,
                                                               GALGAS_routineKind & outOperand3,
                                                               GALGAS_bool & outOperand4,
                                                               GALGAS_bool & outOperand5,
                                                               GALGAS_routineAttributes & outOperand6,
                                                               GALGAS_lstring & outOperand7,
                                                               GALGAS_routineFormalArgumentListAST & outOperand8,
                                                               GALGAS_bool & outOperand9,
                                                               GALGAS_instructionListAST & outOperand10,
                                                               GALGAS_location & outOperand11,
                                                               GALGAS_lstring & outOperand12,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        outOperand8.drop () ;
        outOperand9.drop () ;
        outOperand10.drop () ;
        outOperand11.drop () ;
        outOperand12.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
        outOperand0 = p->mObject.mProperty_receiverTypeName ;
        outOperand1 = p->mObject.mProperty_mode ;
        outOperand2 = p->mObject.mProperty_isRequired ;
        outOperand3 = p->mObject.mProperty_routineKind ;
        outOperand4 = p->mObject.mProperty_warnIfUnused ;
        outOperand5 = p->mObject.mProperty_exportedRoutine ;
        outOperand6 = p->mObject.mProperty_routineAttributes ;
        outOperand7 = p->mObject.mProperty_routineMangledLLVMName ;
        outOperand8 = p->mObject.mProperty_formalArgumentList ;
        outOperand9 = p->mObject.mProperty_warningOnUnusedArgs ;
        outOperand10 = p->mObject.mProperty_mInstructionList ;
        outOperand11 = p->mObject.mProperty_mEndOfRoutineDeclaration ;
        outOperand12 = p->mObject.mProperty_returnTypeName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
      outOperand11.drop () ;
      outOperand12.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_mode & outOperand1,
                                                          GALGAS_bool & outOperand2,
                                                          GALGAS_routineKind & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          GALGAS_bool & outOperand5,
                                                          GALGAS_routineAttributes & outOperand6,
                                                          GALGAS_lstring & outOperand7,
                                                          GALGAS_routineFormalArgumentListAST & outOperand8,
                                                          GALGAS_bool & outOperand9,
                                                          GALGAS_instructionListAST & outOperand10,
                                                          GALGAS_location & outOperand11,
                                                          GALGAS_lstring & outOperand12,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    outOperand0 = p->mObject.mProperty_receiverTypeName ;
    outOperand1 = p->mObject.mProperty_mode ;
    outOperand2 = p->mObject.mProperty_isRequired ;
    outOperand3 = p->mObject.mProperty_routineKind ;
    outOperand4 = p->mObject.mProperty_warnIfUnused ;
    outOperand5 = p->mObject.mProperty_exportedRoutine ;
    outOperand6 = p->mObject.mProperty_routineAttributes ;
    outOperand7 = p->mObject.mProperty_routineMangledLLVMName ;
    outOperand8 = p->mObject.mProperty_formalArgumentList ;
    outOperand9 = p->mObject.mProperty_warningOnUnusedArgs ;
    outOperand10 = p->mObject.mProperty_mInstructionList ;
    outOperand11 = p->mObject.mProperty_mEndOfRoutineDeclaration ;
    outOperand12 = p->mObject.mProperty_returnTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_mode & outOperand1,
                                                         GALGAS_bool & outOperand2,
                                                         GALGAS_routineKind & outOperand3,
                                                         GALGAS_bool & outOperand4,
                                                         GALGAS_bool & outOperand5,
                                                         GALGAS_routineAttributes & outOperand6,
                                                         GALGAS_lstring & outOperand7,
                                                         GALGAS_routineFormalArgumentListAST & outOperand8,
                                                         GALGAS_bool & outOperand9,
                                                         GALGAS_instructionListAST & outOperand10,
                                                         GALGAS_location & outOperand11,
                                                         GALGAS_lstring & outOperand12,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    outOperand0 = p->mObject.mProperty_receiverTypeName ;
    outOperand1 = p->mObject.mProperty_mode ;
    outOperand2 = p->mObject.mProperty_isRequired ;
    outOperand3 = p->mObject.mProperty_routineKind ;
    outOperand4 = p->mObject.mProperty_warnIfUnused ;
    outOperand5 = p->mObject.mProperty_exportedRoutine ;
    outOperand6 = p->mObject.mProperty_routineAttributes ;
    outOperand7 = p->mObject.mProperty_routineMangledLLVMName ;
    outOperand8 = p->mObject.mProperty_formalArgumentList ;
    outOperand9 = p->mObject.mProperty_warningOnUnusedArgs ;
    outOperand10 = p->mObject.mProperty_mInstructionList ;
    outOperand11 = p->mObject.mProperty_mEndOfRoutineDeclaration ;
    outOperand12 = p->mObject.mProperty_returnTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_mode & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       GALGAS_routineKind & outOperand3,
                                                       GALGAS_bool & outOperand4,
                                                       GALGAS_bool & outOperand5,
                                                       GALGAS_routineAttributes & outOperand6,
                                                       GALGAS_lstring & outOperand7,
                                                       GALGAS_routineFormalArgumentListAST & outOperand8,
                                                       GALGAS_bool & outOperand9,
                                                       GALGAS_instructionListAST & outOperand10,
                                                       GALGAS_location & outOperand11,
                                                       GALGAS_lstring & outOperand12,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    outOperand0 = p->mObject.mProperty_receiverTypeName ;
    outOperand1 = p->mObject.mProperty_mode ;
    outOperand2 = p->mObject.mProperty_isRequired ;
    outOperand3 = p->mObject.mProperty_routineKind ;
    outOperand4 = p->mObject.mProperty_warnIfUnused ;
    outOperand5 = p->mObject.mProperty_exportedRoutine ;
    outOperand6 = p->mObject.mProperty_routineAttributes ;
    outOperand7 = p->mObject.mProperty_routineMangledLLVMName ;
    outOperand8 = p->mObject.mProperty_formalArgumentList ;
    outOperand9 = p->mObject.mProperty_warningOnUnusedArgs ;
    outOperand10 = p->mObject.mProperty_mInstructionList ;
    outOperand11 = p->mObject.mProperty_mEndOfRoutineDeclaration ;
    outOperand12 = p->mObject.mProperty_returnTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_mode & outOperand1,
                                                      GALGAS_bool & outOperand2,
                                                      GALGAS_routineKind & outOperand3,
                                                      GALGAS_bool & outOperand4,
                                                      GALGAS_bool & outOperand5,
                                                      GALGAS_routineAttributes & outOperand6,
                                                      GALGAS_lstring & outOperand7,
                                                      GALGAS_routineFormalArgumentListAST & outOperand8,
                                                      GALGAS_bool & outOperand9,
                                                      GALGAS_instructionListAST & outOperand10,
                                                      GALGAS_location & outOperand11,
                                                      GALGAS_lstring & outOperand12,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    outOperand0 = p->mObject.mProperty_receiverTypeName ;
    outOperand1 = p->mObject.mProperty_mode ;
    outOperand2 = p->mObject.mProperty_isRequired ;
    outOperand3 = p->mObject.mProperty_routineKind ;
    outOperand4 = p->mObject.mProperty_warnIfUnused ;
    outOperand5 = p->mObject.mProperty_exportedRoutine ;
    outOperand6 = p->mObject.mProperty_routineAttributes ;
    outOperand7 = p->mObject.mProperty_routineMangledLLVMName ;
    outOperand8 = p->mObject.mProperty_formalArgumentList ;
    outOperand9 = p->mObject.mProperty_warningOnUnusedArgs ;
    outOperand10 = p->mObject.mProperty_mInstructionList ;
    outOperand11 = p->mObject.mProperty_mEndOfRoutineDeclaration ;
    outOperand12 = p->mObject.mProperty_returnTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList GALGAS_decoratedRegularRoutineList::add_operation (const GALGAS_decoratedRegularRoutineList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedRegularRoutineList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList GALGAS_decoratedRegularRoutineList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedRegularRoutineList result = GALGAS_decoratedRegularRoutineList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList GALGAS_decoratedRegularRoutineList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedRegularRoutineList result = GALGAS_decoratedRegularRoutineList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList GALGAS_decoratedRegularRoutineList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedRegularRoutineList result = GALGAS_decoratedRegularRoutineList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::plusAssign_operation (const GALGAS_decoratedRegularRoutineList inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setReceiverTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_receiverTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedRegularRoutineList::getter_receiverTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_receiverTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setModeAtIndex (GALGAS_mode inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_decoratedRegularRoutineList::getter_modeAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_mode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_mode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setIsRequiredAtIndex (GALGAS_bool inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_isRequired = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_decoratedRegularRoutineList::getter_isRequiredAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_isRequired ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setRoutineKindAtIndex (GALGAS_routineKind inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_routineKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_decoratedRegularRoutineList::getter_routineKindAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_routineKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_routineKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setWarnIfUnusedAtIndex (GALGAS_bool inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_warnIfUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_decoratedRegularRoutineList::getter_warnIfUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_warnIfUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setExportedRoutineAtIndex (GALGAS_bool inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_exportedRoutine = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_decoratedRegularRoutineList::getter_exportedRoutineAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_exportedRoutine ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setRoutineAttributesAtIndex (GALGAS_routineAttributes inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_routineAttributes = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_decoratedRegularRoutineList::getter_routineAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_routineAttributes result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_routineAttributes ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setRoutineMangledLLVMNameAtIndex (GALGAS_lstring inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_routineMangledLLVMName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedRegularRoutineList::getter_routineMangledLLVMNameAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_routineMangledLLVMName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setFormalArgumentListAtIndex (GALGAS_routineFormalArgumentListAST inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_formalArgumentList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_decoratedRegularRoutineList::getter_formalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_formalArgumentList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setWarningOnUnusedArgsAtIndex (GALGAS_bool inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_warningOnUnusedArgs = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_decoratedRegularRoutineList::getter_warningOnUnusedArgsAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_warningOnUnusedArgs ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setMInstructionListAtIndex (GALGAS_instructionListAST inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_decoratedRegularRoutineList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setMEndOfRoutineDeclarationAtIndex (GALGAS_location inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfRoutineDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_decoratedRegularRoutineList::getter_mEndOfRoutineDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_mEndOfRoutineDeclaration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRegularRoutineList::setter_setReturnTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_returnTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedRegularRoutineList::getter_returnTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_returnTypeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_decoratedRegularRoutineList::cEnumerator_decoratedRegularRoutineList (const GALGAS_decoratedRegularRoutineList & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList_2D_element cEnumerator_decoratedRegularRoutineList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_decoratedRegularRoutineList::current_receiverTypeName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_receiverTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode cEnumerator_decoratedRegularRoutineList::current_mode (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_mode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_decoratedRegularRoutineList::current_isRequired (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_isRequired ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind cEnumerator_decoratedRegularRoutineList::current_routineKind (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_routineKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_decoratedRegularRoutineList::current_warnIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_warnIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_decoratedRegularRoutineList::current_exportedRoutine (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_exportedRoutine ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes cEnumerator_decoratedRegularRoutineList::current_routineAttributes (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_routineAttributes ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_decoratedRegularRoutineList::current_routineMangledLLVMName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_routineMangledLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST cEnumerator_decoratedRegularRoutineList::current_formalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_formalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_decoratedRegularRoutineList::current_warningOnUnusedArgs (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_warningOnUnusedArgs ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST cEnumerator_decoratedRegularRoutineList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_decoratedRegularRoutineList::current_mEndOfRoutineDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_mEndOfRoutineDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_decoratedRegularRoutineList::current_returnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_returnTypeName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @decoratedRegularRoutineList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList ("decoratedRegularRoutineList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedRegularRoutineList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRegularRoutineList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedRegularRoutineList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRegularRoutineList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRegularRoutineList GALGAS_decoratedRegularRoutineList::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRegularRoutineList result ;
  const GALGAS_decoratedRegularRoutineList * p = (const GALGAS_decoratedRegularRoutineList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedRegularRoutineList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRegularRoutineList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes::GALGAS_routineAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes::GALGAS_routineAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (0) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::class_func_none (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (0) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::class_func_all (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (uint64_t (0x3)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::class_func_mutatingRoutine (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (uint64_t (1) << 0) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::class_func_guard (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (uint64_t (1) << 1) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineAttributes::objectCompare (const GALGAS_routineAttributes & inOperand) const {
   ComparisonResult result = ComparisonResult::invalid ;
   if (mIsValid && inOperand.mIsValid) {
     result = ComparisonResult::operandEqual ;
     if (mFlags < inOperand.mFlags) {
       result = ComparisonResult::firstOperandLowerThanSecond ;
     }else if (mFlags > inOperand.mFlags) {
       result = ComparisonResult::firstOperandGreaterThanSecond ;
     }
   }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineAttributes::isValid (void) const {
  return mIsValid ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::operator_or (const GALGAS_routineAttributes & inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_routineAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::operator_and (const GALGAS_routineAttributes & inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_routineAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::operator_xor (const GALGAS_routineAttributes & inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_routineAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::substract_operation (const GALGAS_routineAttributes & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_routineAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAttributes result ;
  if (mIsValid) {
    result = GALGAS_routineAttributes (((uint64_t) 0x3) ^ mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAttributes::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<boolset @routineAttributes:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    if ((mFlags & ((uint64_t) 1) << 0) != 0) {
      ioString.appendCString (" mutatingRoutine") ;
    }
    if ((mFlags & ((uint64_t) 1) << 1) != 0) {
      ioString.appendCString (" guard") ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineAttributes::getter_none (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineAttributes::getter_all (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == uint64_t (0x3)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineAttributes::getter_mutatingRoutine (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & (uint64_t (1) << 0)) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineAttributes::getter_guard (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & (uint64_t (1) << 1)) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineAttributes generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAttributes ("routineAttributes",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAttributes ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineAttributes (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAttributes GALGAS_routineAttributes::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineAttributes result ;
  const GALGAS_routineAttributes * p = (const GALGAS_routineAttributes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList routineSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_routineSemanticAnalysis (const GALGAS_decoratedRegularRoutineList inObject,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_decoratedRegularRoutineList temp_0 = inObject ;
  cEnumerator_decoratedRegularRoutineList enumerator_1529 (temp_0, EnumerationOrder::up) ;
  while (enumerator_1529.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_1529.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 29)) ;
    enumerator_1529.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@allocaList generateAllocaList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAllocaList (const GALGAS_allocaList inObject,
                                         GALGAS_string & ioArgument_ioLLVMcode,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_allocaList temp_0 = inObject ;
  cEnumerator_allocaList enumerator_4724 (temp_0, EnumerationOrder::up) ;
  while (enumerator_4724.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_4724.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4724.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)) ;
    enumerator_4724.gotoNextObject () ;
  }
  const GALGAS_allocaList temp_1 = inObject ;
  cEnumerator_allocaList enumerator_4867 (temp_1, EnumerationOrder::up) ;
  while (enumerator_4867.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GALGAS_bool test_3 = enumerator_4867.current_mLLVMType (HERE).readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("regular-routine-analysis.galgas", 125)) ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = enumerator_4867.current_mFormalInputArgument (HERE).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 125)) ;
      }
      test_2 = test_3.boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- init dynamic array type '").add_operation (enumerator_4867.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 126)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 126)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4867.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (GALGAS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4867.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (enumerator_4867.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (GALGAS_string (" ; init ARC value\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)) ;
      }
    }
    enumerator_4867.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_regularRoutineIR_2D_weak::objectCompare (const GALGAS_regularRoutineIR_2D_weak & inOperand) const {
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

GALGAS_regularRoutineIR_2D_weak::GALGAS_regularRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR_2D_weak & GALGAS_regularRoutineIR_2D_weak::operator = (const GALGAS_regularRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR_2D_weak::GALGAS_regularRoutineIR_2D_weak (const GALGAS_regularRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR_2D_weak GALGAS_regularRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_regularRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR GALGAS_regularRoutineIR_2D_weak::bang_regularRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_regularRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_regularRoutineIR) ;
      result = GALGAS_regularRoutineIR ((cPtr_regularRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @regularRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularRoutineIR_2D_weak ("regularRoutineIR-weak",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_regularRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_regularRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularRoutineIR_2D_weak GALGAS_regularRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_regularRoutineIR_2D_weak result ;
  const GALGAS_regularRoutineIR_2D_weak * p = (const GALGAS_regularRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_regularRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@mode string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_mode & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_userMode:
    {
      result_result = GALGAS_string ("user") ;
    }
    break ;
  case GALGAS_mode::kEnum_safeUserMode:
    {
      result_result = GALGAS_string ("safe user") ;
    }
    break ;
  case GALGAS_mode::kEnum_sectionMode:
    {
      result_result = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_mode::kEnum_safeSectionMode:
    {
      result_result = GALGAS_string ("safe section") ;
    }
    break ;
  case GALGAS_mode::kEnum_serviceMode:
    {
      result_result = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_mode::kEnum_safeServiceMode:
    {
      result_result = GALGAS_string ("safe service") ;
    }
    break ;
  case GALGAS_mode::kEnum_primitiveMode:
    {
      result_result = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_mode::kEnum_safePrimitiveMode:
    {
      result_result = GALGAS_string ("safe primitive") ;
    }
    break ;
  case GALGAS_mode::kEnum_guardMode:
    {
      result_result = GALGAS_string ("guard") ;
    }
    break ;
  case GALGAS_mode::kEnum_safeGuardMode:
    {
      result_result = GALGAS_string ("safe guard") ;
    }
    break ;
  case GALGAS_mode::kEnum_panicMode:
    {
      result_result = GALGAS_string ("panic") ;
    }
    break ;
  case GALGAS_mode::kEnum_bootMode:
    {
      result_result = GALGAS_string ("boot") ;
    }
    break ;
  case GALGAS_mode::kEnum_startupMode:
    {
      result_result = GALGAS_string ("startup") ;
    }
    break ;
  case GALGAS_mode::kEnum_anyMode:
    {
      result_result = GALGAS_string ("any") ;
    }
    break ;
  case GALGAS_mode::kEnum_anySafeMode:
    {
      result_result = GALGAS_string ("any safe") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@mode isSafe'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isSafe (const GALGAS_mode & inObject,
                                    Compiler *
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_userMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeUserMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_sectionMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeSectionMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_serviceMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeServiceMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_primitiveMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_mode::kEnum_safePrimitiveMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_guardMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeGuardMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_panicMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_bootMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_startupMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_anyMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_mode::kEnum_anySafeMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@mode routineLLVMDictionaryForFunction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForFunction (const GALGAS_mode & inObject,
                                                                             const GALGAS_string & constinArgument_inRoutineNameForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineLLVMNameDict result_result ; // Returned variable
  GALGAS_routineLLVMNameDict temp_0 = GALGAS_routineLLVMNameDict::init (inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 72)) ;
  const GALGAS_mode temp_1 = inObject ;
  temp_0.enterElement (GALGAS_routineLLVMNameDict_2D_element::init_21__21_ (temp_1, constinArgument_inRoutineNameForGeneration, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 72)) ;
  result_result = temp_0 ;
  const GALGAS_mode temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_serviceMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 75)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 75)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 76)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 76)) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeServiceMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 78)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 78)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 79)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 79)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 80)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 80)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 81)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 81)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 82)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 82)) ;
    }
    break ;
  case GALGAS_mode::kEnum_sectionMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 84)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 84)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 85)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 85)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 86)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 86)) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeSectionMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 88)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 88)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 89)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 89)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 90)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 90)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 91)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 91)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 92)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 92)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 93)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 93)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 94)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 94)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_startupMode (SOURCE_FILE ("logical-modes.galgas", 95)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 95)) ;
    }
    break ;
  case GALGAS_mode::kEnum_guardMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 97)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 97)) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeGuardMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 99)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 99)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 100)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 100)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 101)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 101)) ;
    }
    break ;
  case GALGAS_mode::kEnum_safePrimitiveMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 103)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 103)) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeUserMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 105)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 105)) ;
    }
    break ;
  case GALGAS_mode::kEnum_anySafeMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_anyMode (SOURCE_FILE ("logical-modes.galgas", 107)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 107)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 108)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 108)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeSectionMode (SOURCE_FILE ("logical-modes.galgas", 109)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 109)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 110)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 110)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 111)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 111)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 112)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 112)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 113)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 113)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 114)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 114)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 115)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 115)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_panicMode (SOURCE_FILE ("logical-modes.galgas", 116)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 116)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_startupMode (SOURCE_FILE ("logical-modes.galgas", 117)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 117)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeUserMode (SOURCE_FILE ("logical-modes.galgas", 118)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 118)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 119)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 119)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_bootMode (SOURCE_FILE ("logical-modes.galgas", 120)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 120)) ;
    }
    break ;
  case GALGAS_mode::kEnum_anyMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 122)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 122)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 123)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 123)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 124)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 124)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 125)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 125)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 126)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 126)) ;
    }
    break ;
  case GALGAS_mode::kEnum_userMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_anyMode (SOURCE_FILE ("logical-modes.galgas", 128)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 128)) ;
    }
    break ;
  case GALGAS_mode::kEnum_bootMode:
  case GALGAS_mode::kEnum_panicMode:
  case GALGAS_mode::kEnum_primitiveMode:
  case GALGAS_mode::kEnum_startupMode:
    {
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@mode routineLLVMDictionaryForSystemRoutine'
//
//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForSystemRoutine (const GALGAS_mode & inObject,
                                                                                  const GALGAS_string & constinArgument_inUserRoutineNameForGeneration,
                                                                                  const GALGAS_string & constinArgument_inImplementationRoutineNameForGeneration,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineLLVMNameDict result_result ; // Returned variable
  GALGAS_routineLLVMNameDict temp_0 = GALGAS_routineLLVMNameDict::init (inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 140)) ;
  const GALGAS_mode temp_1 = inObject ;
  temp_0.enterElement (GALGAS_routineLLVMNameDict_2D_element::init_21__21_ (temp_1, constinArgument_inImplementationRoutineNameForGeneration, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 140)) ;
  result_result = temp_0 ;
  result_result.addAssign_operation (GALGAS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 141)), constinArgument_inUserRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 141)) ;
  const GALGAS_mode temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_serviceMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 144)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 144)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 145)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 145)) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeServiceMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 147)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 147)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 148)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 148)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 149)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 149)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 150)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 150)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 151)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 151)) ;
    }
    break ;
  case GALGAS_mode::kEnum_sectionMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 153)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 153)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 154)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 154)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 155)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 155)) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeSectionMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 157)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 157)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 158)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 158)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 159)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 159)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 160)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 160)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 161)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 161)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 162)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 162)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 163)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 163)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_startupMode (SOURCE_FILE ("logical-modes.galgas", 164)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 164)) ;
    }
    break ;
  case GALGAS_mode::kEnum_guardMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 166)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 166)) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeGuardMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 168)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 168)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 169)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 169)) ;
      result_result.addAssign_operation (GALGAS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 170)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 170)) ;
    }
    break ;
  case GALGAS_mode::kEnum_safePrimitiveMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 172)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 172)) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeUserMode:
    {
      result_result.addAssign_operation (GALGAS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 174)), constinArgument_inUserRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 174)) ;
    }
    break ;
  case GALGAS_mode::kEnum_anyMode:
  case GALGAS_mode::kEnum_anySafeMode:
  case GALGAS_mode::kEnum_bootMode:
  case GALGAS_mode::kEnum_panicMode:
  case GALGAS_mode::kEnum_primitiveMode:
  case GALGAS_mode::kEnum_startupMode:
  case GALGAS_mode::kEnum_userMode:
    {
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_panicAST_2D_weak::objectCompare (const GALGAS_panicAST_2D_weak & inOperand) const {
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

GALGAS_panicAST_2D_weak::GALGAS_panicAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicAST_2D_weak & GALGAS_panicAST_2D_weak::operator = (const GALGAS_panicAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicAST_2D_weak::GALGAS_panicAST_2D_weak (const GALGAS_panicAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicAST_2D_weak GALGAS_panicAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_panicAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicAST GALGAS_panicAST_2D_weak::bang_panicAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_panicAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_panicAST) ;
      result = GALGAS_panicAST ((cPtr_panicAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicAST_2D_weak ("panicAST-weak",
                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicAST_2D_weak GALGAS_panicAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_panicAST_2D_weak result ;
  const GALGAS_panicAST_2D_weak * p = (const GALGAS_panicAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedPanicRoutine_2D_weak::objectCompare (const GALGAS_decoratedPanicRoutine_2D_weak & inOperand) const {
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

GALGAS_decoratedPanicRoutine_2D_weak::GALGAS_decoratedPanicRoutine_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine_2D_weak & GALGAS_decoratedPanicRoutine_2D_weak::operator = (const GALGAS_decoratedPanicRoutine & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine_2D_weak::GALGAS_decoratedPanicRoutine_2D_weak (const GALGAS_decoratedPanicRoutine & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine_2D_weak GALGAS_decoratedPanicRoutine_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_decoratedPanicRoutine_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine_2D_weak::bang_decoratedPanicRoutine_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedPanicRoutine result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedPanicRoutine) ;
      result = GALGAS_decoratedPanicRoutine ((cPtr_decoratedPanicRoutine *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @decoratedPanicRoutine-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine_2D_weak ("decoratedPanicRoutine-weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedPanicRoutine_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedPanicRoutine_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedPanicRoutine_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedPanicRoutine_2D_weak GALGAS_decoratedPanicRoutine_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedPanicRoutine_2D_weak result ;
  const GALGAS_decoratedPanicRoutine_2D_weak * p = (const GALGAS_decoratedPanicRoutine_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedPanicRoutine_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedPanicRoutine-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@panicSortedListIR' sorted list
//
//--------------------------------------------------------------------------------------------------

class cSortedListElement_panicSortedListIR : public cSortedListElement {
  public: GALGAS_panicSortedListIR_2D_element mObject ;

//--- Constructors
  public: cSortedListElement_panicSortedListIR (const GALGAS_bigint & in_mPriority
                                                COMMA_LOCATION_ARGS) ;

  public: cSortedListElement_panicSortedListIR (const GALGAS_panicSortedListIR_2D_element & inObject
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual ComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//--------------------------------------------------------------------------------------------------

cSortedListElement_panicSortedListIR::cSortedListElement_panicSortedListIR (const GALGAS_bigint & in_mPriority
                                                                            COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mPriority) {
}

//--------------------------------------------------------------------------------------------------

cSortedListElement_panicSortedListIR::
cSortedListElement_panicSortedListIR (const GALGAS_panicSortedListIR_2D_element & inObject
                                      COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (inObject) {
}

//--------------------------------------------------------------------------------------------------

bool cSortedListElement_panicSortedListIR::isValid (void) const {
  return mObject.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_panicSortedListIR::copy (void) {
  cSortedListElement * result = nullptr ;
  macroMyNew (result, cSortedListElement_panicSortedListIR (mObject.mProperty_mPriority COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cSortedListElement_panicSortedListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPriority" ":") ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cSortedListElement_panicSortedListIR::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_panicSortedListIR * operand = (cSortedListElement_panicSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_panicSortedListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR::GALGAS_panicSortedListIR (void) :
AC_GALGAS_sortedlist () {
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicSortedListIR::enterElement (const GALGAS_panicSortedListIR_2D_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_panicSortedListIR (inValue COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cSortedListElement_panicSortedListIR::compareForSorting (const cSortedListElement * inOperand) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cSortedListElement_panicSortedListIR * operand = (const cSortedListElement_panicSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_panicSortedListIR) ;
  if (result == ComparisonResult::operandEqual) {
    result = mObject.mProperty_mPriority.objectCompare (operand->mObject.mProperty_mPriority) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR GALGAS_panicSortedListIR::class_func_emptySortedList (LOCATION_ARGS) {
  GALGAS_panicSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR GALGAS_panicSortedListIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_panicSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR GALGAS_panicSortedListIR::class_func_sortedListWithValue (const GALGAS_bigint & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_panicSortedListIR result = class_func_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_panicSortedListIR (inOperand0 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicSortedListIR::addAssign_operation (const GALGAS_bigint & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_panicSortedListIR (inOperand0 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicSortedListIR::setter_insert (const GALGAS_bigint inOperand0,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_panicSortedListIR (inOperand0 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicSortedListIR::plusAssign_operation (const GALGAS_panicSortedListIR inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicSortedListIR::setter_popSmallest (GALGAS_bigint & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicSortedListIR * p = (cSortedListElement_panicSortedListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mPriority ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicSortedListIR::setter_popGreatest (GALGAS_bigint & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicSortedListIR * p = (cSortedListElement_panicSortedListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mPriority ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicSortedListIR::method_smallest (GALGAS_bigint & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicSortedListIR * p = (cSortedListElement_panicSortedListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mPriority ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicSortedListIR::method_greatest (GALGAS_bigint & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicSortedListIR * p = (cSortedListElement_panicSortedListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mPriority ;
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_panicSortedListIR::cEnumerator_panicSortedListIR (const GALGAS_panicSortedListIR & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR_2D_element cEnumerator_panicSortedListIR::current (LOCATION_ARGS) const {
  const cSortedListElement_panicSortedListIR * p = (const cSortedListElement_panicSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicSortedListIR) ;
  return p->mObject ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_panicSortedListIR::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_panicSortedListIR * p = (const cSortedListElement_panicSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicSortedListIR) ;
  return p->mObject.mProperty_mPriority ;
}



//--------------------------------------------------------------------------------------------------
//
//     @panicSortedListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicSortedListIR ("panicSortedListIR",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicSortedListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicSortedListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR GALGAS_panicSortedListIR::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_panicSortedListIR result ;
  const GALGAS_panicSortedListIR * p = (const GALGAS_panicSortedListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicSortedListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicSortedListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_fileSpecificPanicRoutineIR_2D_weak::objectCompare (const GALGAS_fileSpecificPanicRoutineIR_2D_weak & inOperand) const {
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

GALGAS_fileSpecificPanicRoutineIR_2D_weak::GALGAS_fileSpecificPanicRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR_2D_weak & GALGAS_fileSpecificPanicRoutineIR_2D_weak::operator = (const GALGAS_fileSpecificPanicRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR_2D_weak::GALGAS_fileSpecificPanicRoutineIR_2D_weak (const GALGAS_fileSpecificPanicRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR_2D_weak GALGAS_fileSpecificPanicRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_fileSpecificPanicRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR GALGAS_fileSpecificPanicRoutineIR_2D_weak::bang_fileSpecificPanicRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_fileSpecificPanicRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fileSpecificPanicRoutineIR) ;
      result = GALGAS_fileSpecificPanicRoutineIR ((cPtr_fileSpecificPanicRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fileSpecificPanicRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR_2D_weak ("fileSpecificPanicRoutineIR-weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fileSpecificPanicRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fileSpecificPanicRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileSpecificPanicRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileSpecificPanicRoutineIR_2D_weak GALGAS_fileSpecificPanicRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fileSpecificPanicRoutineIR_2D_weak result ;
  const GALGAS_fileSpecificPanicRoutineIR_2D_weak * p = (const GALGAS_fileSpecificPanicRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fileSpecificPanicRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileSpecificPanicRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_universalModePanicRoutineIR_2D_weak::objectCompare (const GALGAS_universalModePanicRoutineIR_2D_weak & inOperand) const {
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

GALGAS_universalModePanicRoutineIR_2D_weak::GALGAS_universalModePanicRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR_2D_weak & GALGAS_universalModePanicRoutineIR_2D_weak::operator = (const GALGAS_universalModePanicRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR_2D_weak::GALGAS_universalModePanicRoutineIR_2D_weak (const GALGAS_universalModePanicRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR_2D_weak GALGAS_universalModePanicRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_universalModePanicRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR GALGAS_universalModePanicRoutineIR_2D_weak::bang_universalModePanicRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_universalModePanicRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_universalModePanicRoutineIR) ;
      result = GALGAS_universalModePanicRoutineIR ((cPtr_universalModePanicRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @universalModePanicRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR_2D_weak ("universalModePanicRoutineIR-weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_universalModePanicRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalModePanicRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_universalModePanicRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalModePanicRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalModePanicRoutineIR_2D_weak GALGAS_universalModePanicRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_universalModePanicRoutineIR_2D_weak result ;
  const GALGAS_universalModePanicRoutineIR_2D_weak * p = (const GALGAS_universalModePanicRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_universalModePanicRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalModePanicRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sectionModePanicRoutineIR_2D_weak::objectCompare (const GALGAS_sectionModePanicRoutineIR_2D_weak & inOperand) const {
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

GALGAS_sectionModePanicRoutineIR_2D_weak::GALGAS_sectionModePanicRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR_2D_weak & GALGAS_sectionModePanicRoutineIR_2D_weak::operator = (const GALGAS_sectionModePanicRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR_2D_weak::GALGAS_sectionModePanicRoutineIR_2D_weak (const GALGAS_sectionModePanicRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR_2D_weak GALGAS_sectionModePanicRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_sectionModePanicRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR GALGAS_sectionModePanicRoutineIR_2D_weak::bang_sectionModePanicRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sectionModePanicRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sectionModePanicRoutineIR) ;
      result = GALGAS_sectionModePanicRoutineIR ((cPtr_sectionModePanicRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sectionModePanicRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR_2D_weak ("sectionModePanicRoutineIR-weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sectionModePanicRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionModePanicRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sectionModePanicRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionModePanicRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionModePanicRoutineIR_2D_weak GALGAS_sectionModePanicRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sectionModePanicRoutineIR_2D_weak result ;
  const GALGAS_sectionModePanicRoutineIR_2D_weak * p = (const GALGAS_sectionModePanicRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sectionModePanicRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionModePanicRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctExpressionAST::cPtr_ctExpressionAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctExpressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_ctExpressionAST::objectCompare (const GALGAS_ctExpressionAST & inOperand) const {
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

GALGAS_ctExpressionAST::GALGAS_ctExpressionAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST::GALGAS_ctExpressionAST (const cPtr_ctExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @ctExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctExpressionAST::cPtr_ctExpressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @ctExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctExpressionAST ("ctExpressionAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_ctExpressionAST::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ctExpressionAST result ;
  const GALGAS_ctExpressionAST * p = (const GALGAS_ctExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeConvertToBooleanAST_2D_weak::objectCompare (const GALGAS_compileTimeConvertToBooleanAST_2D_weak & inOperand) const {
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

GALGAS_compileTimeConvertToBooleanAST_2D_weak::GALGAS_compileTimeConvertToBooleanAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST_2D_weak & GALGAS_compileTimeConvertToBooleanAST_2D_weak::operator = (const GALGAS_compileTimeConvertToBooleanAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST_2D_weak::GALGAS_compileTimeConvertToBooleanAST_2D_weak (const GALGAS_compileTimeConvertToBooleanAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST_2D_weak GALGAS_compileTimeConvertToBooleanAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeConvertToBooleanAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST GALGAS_compileTimeConvertToBooleanAST_2D_weak::bang_compileTimeConvertToBooleanAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeConvertToBooleanAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeConvertToBooleanAST) ;
      result = GALGAS_compileTimeConvertToBooleanAST ((cPtr_compileTimeConvertToBooleanAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeConvertToBooleanAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST_2D_weak ("compileTimeConvertToBooleanAST-weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeConvertToBooleanAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeConvertToBooleanAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeConvertToBooleanAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeConvertToBooleanAST_2D_weak GALGAS_compileTimeConvertToBooleanAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeConvertToBooleanAST_2D_weak result ;
  const GALGAS_compileTimeConvertToBooleanAST_2D_weak * p = (const GALGAS_compileTimeConvertToBooleanAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeConvertToBooleanAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeConvertToBooleanAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@llvmGenerationInstructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_llvmGenerationInstructionList : public cCollectionElement {
  public: GALGAS_llvmGenerationInstructionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_llvmGenerationInstructionList (const GALGAS_abstractLLVMInstruction & in_mInstruction
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmGenerationInstructionList (const GALGAS_llvmGenerationInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_llvmGenerationInstructionList::cCollectionElement_llvmGenerationInstructionList (const GALGAS_abstractLLVMInstruction & in_mInstruction
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmGenerationInstructionList::cCollectionElement_llvmGenerationInstructionList (const GALGAS_llvmGenerationInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_llvmGenerationInstructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_llvmGenerationInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_llvmGenerationInstructionList * operand = (cCollectionElement_llvmGenerationInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_llvmGenerationInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList::GALGAS_llvmGenerationInstructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList::GALGAS_llvmGenerationInstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmGenerationInstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_llvmGenerationInstructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmGenerationInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_llvmGenerationInstructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionList::enterElement (const GALGAS_llvmGenerationInstructionList_2D_element & inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmGenerationInstructionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmGenerationInstructionList::class_func_listWithValue (const GALGAS_abstractLLVMInstruction & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_llvmGenerationInstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_llvmGenerationInstructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_abstractLLVMInstruction & in_mInstruction
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmGenerationInstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmGenerationInstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionList::addAssign_operation (const GALGAS_abstractLLVMInstruction & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmGenerationInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionList::setter_append (const GALGAS_abstractLLVMInstruction inOperand0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmGenerationInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionList::setter_insertAtIndex (const GALGAS_abstractLLVMInstruction inOperand0,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_llvmGenerationInstructionList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_llvmGenerationInstructionList::setter_removeAtIndex (GALGAS_abstractLLVMInstruction & outOperand0,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_llvmGenerationInstructionList * p = (cCollectionElement_llvmGenerationInstructionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
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

void GALGAS_llvmGenerationInstructionList::setter_popFirst (GALGAS_abstractLLVMInstruction & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionList * p = (cCollectionElement_llvmGenerationInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionList::setter_popLast (GALGAS_abstractLLVMInstruction & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionList * p = (cCollectionElement_llvmGenerationInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionList::method_first (GALGAS_abstractLLVMInstruction & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionList * p = (cCollectionElement_llvmGenerationInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionList::method_last (GALGAS_abstractLLVMInstruction & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionList * p = (cCollectionElement_llvmGenerationInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmGenerationInstructionList::add_operation (const GALGAS_llvmGenerationInstructionList & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmGenerationInstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionList result = GALGAS_llvmGenerationInstructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmGenerationInstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionList result = GALGAS_llvmGenerationInstructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmGenerationInstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionList result = GALGAS_llvmGenerationInstructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionList::plusAssign_operation (const GALGAS_llvmGenerationInstructionList inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionList::setter_setMInstructionAtIndex (GALGAS_abstractLLVMInstruction inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmGenerationInstructionList * p = (cCollectionElement_llvmGenerationInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction GALGAS_llvmGenerationInstructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionList * p = (cCollectionElement_llvmGenerationInstructionList *) attributes.ptr () ;
  GALGAS_abstractLLVMInstruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_llvmGenerationInstructionList::cEnumerator_llvmGenerationInstructionList (const GALGAS_llvmGenerationInstructionList & inEnumeratedObject,
                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList_2D_element cEnumerator_llvmGenerationInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_llvmGenerationInstructionList * p = (const cCollectionElement_llvmGenerationInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction cEnumerator_llvmGenerationInstructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_llvmGenerationInstructionList * p = (const cCollectionElement_llvmGenerationInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList ("llvmGenerationInstructionList",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmGenerationInstructionList::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList result ;
  const GALGAS_llvmGenerationInstructionList * p = (const GALGAS_llvmGenerationInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenerationInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmConvertToBooleanAST_2D_weak::objectCompare (const GALGAS_llvmConvertToBooleanAST_2D_weak & inOperand) const {
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

GALGAS_llvmConvertToBooleanAST_2D_weak::GALGAS_llvmConvertToBooleanAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST_2D_weak & GALGAS_llvmConvertToBooleanAST_2D_weak::operator = (const GALGAS_llvmConvertToBooleanAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST_2D_weak::GALGAS_llvmConvertToBooleanAST_2D_weak (const GALGAS_llvmConvertToBooleanAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST_2D_weak GALGAS_llvmConvertToBooleanAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmConvertToBooleanAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST GALGAS_llvmConvertToBooleanAST_2D_weak::bang_llvmConvertToBooleanAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmConvertToBooleanAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmConvertToBooleanAST) ;
      result = GALGAS_llvmConvertToBooleanAST ((cPtr_llvmConvertToBooleanAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmConvertToBooleanAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST_2D_weak ("llvmConvertToBooleanAST-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmConvertToBooleanAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmConvertToBooleanAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmConvertToBooleanAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmConvertToBooleanAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmConvertToBooleanAST_2D_weak GALGAS_llvmConvertToBooleanAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmConvertToBooleanAST_2D_weak result ;
  const GALGAS_llvmConvertToBooleanAST_2D_weak * p = (const GALGAS_llvmConvertToBooleanAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmConvertToBooleanAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmConvertToBooleanAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_implicitBooleanConversionResult_compileTime::cEnumAssociatedValues_implicitBooleanConversionResult_compileTime (const GALGAS_bool inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_implicitBooleanConversionResult_compileTime::description (String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_implicitBooleanConversionResult_compileTime::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * ptr = dynamic_cast<const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable::cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable (const GALGAS_string inAssociatedValue0
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable::description (String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * ptr = dynamic_cast<const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitBooleanConversionResult::GALGAS_implicitBooleanConversionResult (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitBooleanConversionResult GALGAS_implicitBooleanConversionResult::class_func_compileTime (const GALGAS_bool & inAssociatedValue0
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_implicitBooleanConversionResult result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_compileTime ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_implicitBooleanConversionResult_compileTime (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitBooleanConversionResult GALGAS_implicitBooleanConversionResult::class_func_llvmVariable (const GALGAS_string & inAssociatedValue0
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_implicitBooleanConversionResult result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_llvmVariable ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitBooleanConversionResult::method_compileTime (GALGAS_bool & outAssociatedValue0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_compileTime) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @implicitBooleanConversionResult compileTime invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * ptr = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitBooleanConversionResult::method_llvmVariable (GALGAS_string & outAssociatedValue0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmVariable) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @implicitBooleanConversionResult llvmVariable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * ptr = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_implicitBooleanConversionResult::optional_compileTime (GALGAS_bool & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_compileTime ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_implicitBooleanConversionResult::optional_llvmVariable (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_llvmVariable ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_implicitBooleanConversionResult [3] = {
  "(not built)",
  "compileTime",
  "llvmVariable"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_implicitBooleanConversionResult::getter_isCompileTime (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_compileTime == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_implicitBooleanConversionResult::getter_isLlvmVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmVariable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitBooleanConversionResult::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<enum @implicitBooleanConversionResult: ") ;
  ioString.appendCString (gEnumNameArrayFor_implicitBooleanConversionResult [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_implicitBooleanConversionResult::objectCompare (const GALGAS_implicitBooleanConversionResult & inOperand) const {
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
//     @implicitBooleanConversionResult generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult ("implicitBooleanConversionResult",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implicitBooleanConversionResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitBooleanConversionResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implicitBooleanConversionResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicitBooleanConversionResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitBooleanConversionResult GALGAS_implicitBooleanConversionResult::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_implicitBooleanConversionResult result ;
  const GALGAS_implicitBooleanConversionResult * p = (const GALGAS_implicitBooleanConversionResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_implicitBooleanConversionResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitBooleanConversionResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@implicitBooleanConversionResult llvmName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_llvmName (const GALGAS_implicitBooleanConversionResult & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_implicitBooleanConversionResult temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_9303 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_9262_value = extractPtr_9303->mAssociatedValue0 ;
      GALGAS_bigint temp_1 ;
      const enumGalgasBool test_2 = extractedValue_9262_value.boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 191)) ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 191)) ;
      }
      result_result = temp_1.getter_string (SOURCE_FILE ("convert-to-boolean.galgas", 191)) ;
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * extractPtr_9353 = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_9336_name = extractPtr_9353->mAssociatedValue0 ;
      result_result = extractedValue_9336_name ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractImplicitConverterToBoolean generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateConvertToBooleanCode (cPtr_abstractImplicitConverterToBoolean * inObject,
                                                       const GALGAS_objectIR constin_inReceiverOperand,
                                                       const GALGAS_location constin_inErrorLocation,
                                                       GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                       GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                       GALGAS_allocaList & io_ioAllocaList,
                                                       GALGAS_implicitBooleanConversionResult & out_outResult,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResult.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractImplicitConverterToBoolean) ;
    inObject->method_generateConvertToBooleanCode (constin_inReceiverOperand, constin_inErrorLocation, io_ioTemporaries, io_ioInstructionGenerationList, io_ioAllocaList, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeImplicitConverterToBoolean_2D_weak::objectCompare (const GALGAS_compileTimeImplicitConverterToBoolean_2D_weak & inOperand) const {
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

GALGAS_compileTimeImplicitConverterToBoolean_2D_weak::GALGAS_compileTimeImplicitConverterToBoolean_2D_weak (void) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean_2D_weak & GALGAS_compileTimeImplicitConverterToBoolean_2D_weak::operator = (const GALGAS_compileTimeImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean_2D_weak::GALGAS_compileTimeImplicitConverterToBoolean_2D_weak (const GALGAS_compileTimeImplicitConverterToBoolean & inSource) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean_2D_weak GALGAS_compileTimeImplicitConverterToBoolean_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeImplicitConverterToBoolean_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean GALGAS_compileTimeImplicitConverterToBoolean_2D_weak::bang_compileTimeImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeImplicitConverterToBoolean) ;
      result = GALGAS_compileTimeImplicitConverterToBoolean ((cPtr_compileTimeImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeImplicitConverterToBoolean-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean_2D_weak ("compileTimeImplicitConverterToBoolean-weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeImplicitConverterToBoolean_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeImplicitConverterToBoolean_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeImplicitConverterToBoolean_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeImplicitConverterToBoolean_2D_weak GALGAS_compileTimeImplicitConverterToBoolean_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeImplicitConverterToBoolean_2D_weak result ;
  const GALGAS_compileTimeImplicitConverterToBoolean_2D_weak * p = (const GALGAS_compileTimeImplicitConverterToBoolean_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeImplicitConverterToBoolean_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeImplicitConverterToBoolean-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmImplicitConverterToBoolean_2D_weak::objectCompare (const GALGAS_llvmImplicitConverterToBoolean_2D_weak & inOperand) const {
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

GALGAS_llvmImplicitConverterToBoolean_2D_weak::GALGAS_llvmImplicitConverterToBoolean_2D_weak (void) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean_2D_weak & GALGAS_llvmImplicitConverterToBoolean_2D_weak::operator = (const GALGAS_llvmImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean_2D_weak::GALGAS_llvmImplicitConverterToBoolean_2D_weak (const GALGAS_llvmImplicitConverterToBoolean & inSource) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean_2D_weak GALGAS_llvmImplicitConverterToBoolean_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmImplicitConverterToBoolean_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean GALGAS_llvmImplicitConverterToBoolean_2D_weak::bang_llvmImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmImplicitConverterToBoolean) ;
      result = GALGAS_llvmImplicitConverterToBoolean ((cPtr_llvmImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmImplicitConverterToBoolean-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean_2D_weak ("llvmImplicitConverterToBoolean-weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmImplicitConverterToBoolean_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmImplicitConverterToBoolean_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmImplicitConverterToBoolean_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmImplicitConverterToBoolean_2D_weak GALGAS_llvmImplicitConverterToBoolean_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_llvmImplicitConverterToBoolean_2D_weak result ;
  const GALGAS_llvmImplicitConverterToBoolean_2D_weak * p = (const GALGAS_llvmImplicitConverterToBoolean_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmImplicitConverterToBoolean_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmImplicitConverterToBoolean-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@implicitConversionToBooleanMap generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateConvertToBooleanCode (const GALGAS_implicitConversionToBooleanMap inObject,
                                                   const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                   const GALGAS_location constinArgument_inErrorLocation,
                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                   GALGAS_implicitBooleanConversionResult & outArgument_outResult,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  GALGAS_lstring var_key_13213 = GALGAS_lstring::init_21__21_ (extensionGetter_omnibusTypeDescriptionName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 284)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  GALGAS_abstractImplicitConverterToBoolean var_converter_13328 ;
  const GALGAS_implicitConversionToBooleanMap temp_0 = inObject ;
  temp_0.method_searchKey (var_key_13213, var_converter_13328, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 285)) ;
  callExtensionMethod_generateConvertToBooleanCode ((cPtr_abstractImplicitConverterToBoolean *) var_converter_13328.ptr (), constinArgument_inReceiverOperand, constinArgument_inErrorLocation, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 286)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_expressionAST_2D_weak::objectCompare (const GALGAS_expressionAST_2D_weak & inOperand) const {
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

GALGAS_expressionAST_2D_weak::GALGAS_expressionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST_2D_weak & GALGAS_expressionAST_2D_weak::operator = (const GALGAS_expressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST_2D_weak::GALGAS_expressionAST_2D_weak (const GALGAS_expressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST_2D_weak GALGAS_expressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_expressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_expressionAST_2D_weak::bang_expressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expressionAST) ;
      result = GALGAS_expressionAST ((cPtr_expressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @expressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionAST_2D_weak ("expressionAST-weak",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST_2D_weak GALGAS_expressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionAST_2D_weak result ;
  const GALGAS_expressionAST_2D_weak * p = (const GALGAS_expressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_expressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (cPtr_expressionAST * inObject,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    inObject->method_noteExpressionTypesInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpression (cPtr_expressionAST * inObject,
                                            const GALGAS_omnibusType constin_inSelfType,
                                            const GALGAS_routineAttributes constin_inRoutineAttributes,
                                            const GALGAS_omnibusType constin_inTargetType,
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
//--- Drop output arguments
  out_outResult.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    inObject->method_analyzeExpression (constin_inSelfType, constin_inRoutineAttributes, constin_inTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_convertExpressionAST_2D_weak::objectCompare (const GALGAS_convertExpressionAST_2D_weak & inOperand) const {
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

GALGAS_convertExpressionAST_2D_weak::GALGAS_convertExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST_2D_weak & GALGAS_convertExpressionAST_2D_weak::operator = (const GALGAS_convertExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST_2D_weak::GALGAS_convertExpressionAST_2D_weak (const GALGAS_convertExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST_2D_weak GALGAS_convertExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_convertExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST GALGAS_convertExpressionAST_2D_weak::bang_convertExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_convertExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_convertExpressionAST) ;
      result = GALGAS_convertExpressionAST ((cPtr_convertExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @convertExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertExpressionAST_2D_weak ("convertExpressionAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_convertExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_convertExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_convertExpressionAST_2D_weak GALGAS_convertExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_convertExpressionAST_2D_weak result ;
  const GALGAS_convertExpressionAST_2D_weak * p = (const GALGAS_convertExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_convertExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractInstructionIR::cPtr_abstractInstructionIR (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractInstructionIR::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_abstractInstructionIR::objectCompare (const GALGAS_abstractInstructionIR & inOperand) const {
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

GALGAS_abstractInstructionIR::GALGAS_abstractInstructionIR (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInstructionIR::GALGAS_abstractInstructionIR (const cPtr_abstractInstructionIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_abstractInstructionIR::cPtr_abstractInstructionIR (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInstructionIR ("abstractInstructionIR",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInstructionIR GALGAS_abstractInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractInstructionIR result ;
  const GALGAS_abstractInstructionIR * p = (const GALGAS_abstractInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractInstructionIR_2D_weak::objectCompare (const GALGAS_abstractInstructionIR_2D_weak & inOperand) const {
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

GALGAS_abstractInstructionIR_2D_weak::GALGAS_abstractInstructionIR_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInstructionIR_2D_weak & GALGAS_abstractInstructionIR_2D_weak::operator = (const GALGAS_abstractInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInstructionIR_2D_weak::GALGAS_abstractInstructionIR_2D_weak (const GALGAS_abstractInstructionIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInstructionIR_2D_weak GALGAS_abstractInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInstructionIR GALGAS_abstractInstructionIR_2D_weak::bang_abstractInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractInstructionIR) ;
      result = GALGAS_abstractInstructionIR ((cPtr_abstractInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak ("abstractInstructionIR-weak",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInstructionIR_2D_weak GALGAS_abstractInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractInstructionIR_2D_weak result ;
  const GALGAS_abstractInstructionIR_2D_weak * p = (const GALGAS_abstractInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extendExpressionAST_2D_weak::objectCompare (const GALGAS_extendExpressionAST_2D_weak & inOperand) const {
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

GALGAS_extendExpressionAST_2D_weak::GALGAS_extendExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST_2D_weak & GALGAS_extendExpressionAST_2D_weak::operator = (const GALGAS_extendExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST_2D_weak::GALGAS_extendExpressionAST_2D_weak (const GALGAS_extendExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST_2D_weak GALGAS_extendExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_extendExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST GALGAS_extendExpressionAST_2D_weak::bang_extendExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extendExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extendExpressionAST) ;
      result = GALGAS_extendExpressionAST ((cPtr_extendExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendExpressionAST_2D_weak ("extendExpressionAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendExpressionAST_2D_weak GALGAS_extendExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extendExpressionAST_2D_weak result ;
  const GALGAS_extendExpressionAST_2D_weak * p = (const GALGAS_extendExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extendExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_truncateExpressionAST_2D_weak::objectCompare (const GALGAS_truncateExpressionAST_2D_weak & inOperand) const {
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

GALGAS_truncateExpressionAST_2D_weak::GALGAS_truncateExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST_2D_weak & GALGAS_truncateExpressionAST_2D_weak::operator = (const GALGAS_truncateExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST_2D_weak::GALGAS_truncateExpressionAST_2D_weak (const GALGAS_truncateExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST_2D_weak GALGAS_truncateExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_truncateExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST_2D_weak::bang_truncateExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_truncateExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_truncateExpressionAST) ;
      result = GALGAS_truncateExpressionAST ((cPtr_truncateExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @truncateExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateExpressionAST_2D_weak ("truncateExpressionAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_truncateExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_truncateExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateExpressionAST_2D_weak GALGAS_truncateExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_truncateExpressionAST_2D_weak result ;
  const GALGAS_truncateExpressionAST_2D_weak * p = (const GALGAS_truncateExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_truncateExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @truncateInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_truncateInstructionIR::cPtr_truncateInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_truncateInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_truncateInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_truncateInstructionIR * p = (const cPtr_truncateInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_truncateInstructionIR::objectCompare (const GALGAS_truncateInstructionIR & inOperand) const {
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

GALGAS_truncateInstructionIR::GALGAS_truncateInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_truncateInstructionIR GALGAS_truncateInstructionIR::
init_21__21_ (const GALGAS_objectIR & in_mTarget,
              const GALGAS_objectIR & in_mOperand,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_truncateInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_truncateInstructionIR (inCompiler COMMA_THERE)) ;
  object->truncateInstructionIR_init_21__21_ (in_mTarget, in_mOperand, inCompiler) ;
  const GALGAS_truncateInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_truncateInstructionIR::
truncateInstructionIR_init_21__21_ (const GALGAS_objectIR & in_mTarget,
                                    const GALGAS_objectIR & in_mOperand,
                                    Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR::GALGAS_truncateInstructionIR (const cPtr_truncateInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR GALGAS_truncateInstructionIR::class_func_new (const GALGAS_objectIR & in_mTarget,
                                                                           const GALGAS_objectIR & in_mOperand
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_truncateInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_truncateInstructionIR (in_mTarget, in_mOperand COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_truncateInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_truncateInstructionIR::setProperty_mTarget (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_truncateInstructionIR::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_truncateInstructionIR::setProperty_mOperand (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @truncateInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_truncateInstructionIR::cPtr_truncateInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                        const GALGAS_objectIR & in_mOperand
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (),
mProperty_mOperand () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_truncateInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateInstructionIR ;
}

void cPtr_truncateInstructionIR::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@truncateInstructionIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_truncateInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_truncateInstructionIR (mProperty_mTarget, mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @truncateInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateInstructionIR ("truncateInstructionIR",
                                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_truncateInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_truncateInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR GALGAS_truncateInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_truncateInstructionIR result ;
  const GALGAS_truncateInstructionIR * p = (const GALGAS_truncateInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_truncateInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_truncateInstructionIR_2D_weak::objectCompare (const GALGAS_truncateInstructionIR_2D_weak & inOperand) const {
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

GALGAS_truncateInstructionIR_2D_weak::GALGAS_truncateInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR_2D_weak & GALGAS_truncateInstructionIR_2D_weak::operator = (const GALGAS_truncateInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR_2D_weak::GALGAS_truncateInstructionIR_2D_weak (const GALGAS_truncateInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR_2D_weak GALGAS_truncateInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_truncateInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR GALGAS_truncateInstructionIR_2D_weak::bang_truncateInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_truncateInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_truncateInstructionIR) ;
      result = GALGAS_truncateInstructionIR ((cPtr_truncateInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @truncateInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateInstructionIR_2D_weak ("truncateInstructionIR-weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_truncateInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_truncateInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR_2D_weak GALGAS_truncateInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_truncateInstructionIR_2D_weak result ;
  const GALGAS_truncateInstructionIR_2D_weak * p = (const GALGAS_truncateInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_truncateInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_addressofControlRegisterAST_2D_weak::objectCompare (const GALGAS_addressofControlRegisterAST_2D_weak & inOperand) const {
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

GALGAS_addressofControlRegisterAST_2D_weak::GALGAS_addressofControlRegisterAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofControlRegisterAST_2D_weak & GALGAS_addressofControlRegisterAST_2D_weak::operator = (const GALGAS_addressofControlRegisterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofControlRegisterAST_2D_weak::GALGAS_addressofControlRegisterAST_2D_weak (const GALGAS_addressofControlRegisterAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofControlRegisterAST_2D_weak GALGAS_addressofControlRegisterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_addressofControlRegisterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofControlRegisterAST GALGAS_addressofControlRegisterAST_2D_weak::bang_addressofControlRegisterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_addressofControlRegisterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addressofControlRegisterAST) ;
      result = GALGAS_addressofControlRegisterAST ((cPtr_addressofControlRegisterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @addressofControlRegisterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofControlRegisterAST_2D_weak ("addressofControlRegisterAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addressofControlRegisterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addressofControlRegisterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofControlRegisterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofControlRegisterAST_2D_weak GALGAS_addressofControlRegisterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_addressofControlRegisterAST_2D_weak result ;
  const GALGAS_addressofControlRegisterAST_2D_weak * p = (const GALGAS_addressofControlRegisterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_addressofControlRegisterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofControlRegisterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_addressofExpressionAST_2D_weak::objectCompare (const GALGAS_addressofExpressionAST_2D_weak & inOperand) const {
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

GALGAS_addressofExpressionAST_2D_weak::GALGAS_addressofExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofExpressionAST_2D_weak & GALGAS_addressofExpressionAST_2D_weak::operator = (const GALGAS_addressofExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofExpressionAST_2D_weak::GALGAS_addressofExpressionAST_2D_weak (const GALGAS_addressofExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofExpressionAST_2D_weak GALGAS_addressofExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_addressofExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST_2D_weak::bang_addressofExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_addressofExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addressofExpressionAST) ;
      result = GALGAS_addressofExpressionAST ((cPtr_addressofExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @addressofExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofExpressionAST_2D_weak ("addressofExpressionAST-weak",
                                                                                      & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addressofExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addressofExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofExpressionAST_2D_weak GALGAS_addressofExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_addressofExpressionAST_2D_weak result ;
  const GALGAS_addressofExpressionAST_2D_weak * p = (const GALGAS_addressofExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_addressofExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_addressofInstructionIR_2D_weak::objectCompare (const GALGAS_addressofInstructionIR_2D_weak & inOperand) const {
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

GALGAS_addressofInstructionIR_2D_weak::GALGAS_addressofInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofInstructionIR_2D_weak & GALGAS_addressofInstructionIR_2D_weak::operator = (const GALGAS_addressofInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofInstructionIR_2D_weak::GALGAS_addressofInstructionIR_2D_weak (const GALGAS_addressofInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofInstructionIR_2D_weak GALGAS_addressofInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_addressofInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofInstructionIR GALGAS_addressofInstructionIR_2D_weak::bang_addressofInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_addressofInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addressofInstructionIR) ;
      result = GALGAS_addressofInstructionIR ((cPtr_addressofInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @addressofInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR_2D_weak ("addressofInstructionIR-weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addressofInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addressofInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_addressofInstructionIR_2D_weak GALGAS_addressofInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_addressofInstructionIR_2D_weak result ;
  const GALGAS_addressofInstructionIR_2D_weak * p = (const GALGAS_addressofInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_addressofInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sizeofExpressionAST_2D_weak::objectCompare (const GALGAS_sizeofExpressionAST_2D_weak & inOperand) const {
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

GALGAS_sizeofExpressionAST_2D_weak::GALGAS_sizeofExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST_2D_weak & GALGAS_sizeofExpressionAST_2D_weak::operator = (const GALGAS_sizeofExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST_2D_weak::GALGAS_sizeofExpressionAST_2D_weak (const GALGAS_sizeofExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST_2D_weak GALGAS_sizeofExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_sizeofExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST_2D_weak::bang_sizeofExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sizeofExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sizeofExpressionAST) ;
      result = GALGAS_sizeofExpressionAST ((cPtr_sizeofExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sizeofExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofExpressionAST_2D_weak ("sizeofExpressionAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sizeofExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sizeofExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofExpressionAST_2D_weak GALGAS_sizeofExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sizeofExpressionAST_2D_weak result ;
  const GALGAS_sizeofExpressionAST_2D_weak * p = (const GALGAS_sizeofExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sizeofExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sizeofTypeAST_2D_weak::objectCompare (const GALGAS_sizeofTypeAST_2D_weak & inOperand) const {
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

GALGAS_sizeofTypeAST_2D_weak::GALGAS_sizeofTypeAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST_2D_weak & GALGAS_sizeofTypeAST_2D_weak::operator = (const GALGAS_sizeofTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST_2D_weak::GALGAS_sizeofTypeAST_2D_weak (const GALGAS_sizeofTypeAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST_2D_weak GALGAS_sizeofTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_sizeofTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST_2D_weak::bang_sizeofTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sizeofTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sizeofTypeAST) ;
      result = GALGAS_sizeofTypeAST ((cPtr_sizeofTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sizeofTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofTypeAST_2D_weak ("sizeofTypeAST-weak",
                                                                             & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sizeofTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sizeofTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofTypeAST_2D_weak GALGAS_sizeofTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sizeofTypeAST_2D_weak result ;
  const GALGAS_sizeofTypeAST_2D_weak * p = (const GALGAS_sizeofTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sizeofTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sizeofInstructionIR_2D_weak::objectCompare (const GALGAS_sizeofInstructionIR_2D_weak & inOperand) const {
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

GALGAS_sizeofInstructionIR_2D_weak::GALGAS_sizeofInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR_2D_weak & GALGAS_sizeofInstructionIR_2D_weak::operator = (const GALGAS_sizeofInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR_2D_weak::GALGAS_sizeofInstructionIR_2D_weak (const GALGAS_sizeofInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR_2D_weak GALGAS_sizeofInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_sizeofInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR_2D_weak::bang_sizeofInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sizeofInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sizeofInstructionIR) ;
      result = GALGAS_sizeofInstructionIR ((cPtr_sizeofInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sizeofInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofInstructionIR_2D_weak ("sizeofInstructionIR-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sizeofInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sizeofInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sizeofInstructionIR_2D_weak GALGAS_sizeofInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sizeofInstructionIR_2D_weak result ;
  const GALGAS_sizeofInstructionIR_2D_weak * p = (const GALGAS_sizeofInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sizeofInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@primaryInExpressionAccessListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_primaryInExpressionAccessListAST : public cCollectionElement {
  public: GALGAS_primaryInExpressionAccessListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_primaryInExpressionAccessListAST (const GALGAS_primaryInExpressionAccessAST & in_mAccess
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_primaryInExpressionAccessListAST (const GALGAS_primaryInExpressionAccessListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_primaryInExpressionAccessListAST::cCollectionElement_primaryInExpressionAccessListAST (const GALGAS_primaryInExpressionAccessAST & in_mAccess
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAccess) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_primaryInExpressionAccessListAST::cCollectionElement_primaryInExpressionAccessListAST (const GALGAS_primaryInExpressionAccessListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAccess) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_primaryInExpressionAccessListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_primaryInExpressionAccessListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_primaryInExpressionAccessListAST (mObject.mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_primaryInExpressionAccessListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAccess" ":") ;
  mObject.mProperty_mAccess.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_primaryInExpressionAccessListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_primaryInExpressionAccessListAST * operand = (cCollectionElement_primaryInExpressionAccessListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_primaryInExpressionAccessListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST::GALGAS_primaryInExpressionAccessListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST::GALGAS_primaryInExpressionAccessListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_primaryInExpressionAccessListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_primaryInExpressionAccessListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessListAST::enterElement (const GALGAS_primaryInExpressionAccessListAST_2D_element & inValue,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_primaryInExpressionAccessListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::class_func_listWithValue (const GALGAS_primaryInExpressionAccessAST & inOperand0
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_primaryInExpressionAccessListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_primaryInExpressionAccessListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_primaryInExpressionAccessAST & in_mAccess
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_primaryInExpressionAccessListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_primaryInExpressionAccessListAST (in_mAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessListAST::addAssign_operation (const GALGAS_primaryInExpressionAccessAST & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_primaryInExpressionAccessListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessListAST::setter_append (const GALGAS_primaryInExpressionAccessAST inOperand0,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_primaryInExpressionAccessListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessListAST::setter_insertAtIndex (const GALGAS_primaryInExpressionAccessAST inOperand0,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_primaryInExpressionAccessListAST (inOperand0 COMMA_THERE)) ;
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

void GALGAS_primaryInExpressionAccessListAST::setter_removeAtIndex (GALGAS_primaryInExpressionAccessAST & outOperand0,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
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

void GALGAS_primaryInExpressionAccessListAST::setter_popFirst (GALGAS_primaryInExpressionAccessAST & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessListAST::setter_popLast (GALGAS_primaryInExpressionAccessAST & outOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessListAST::method_first (GALGAS_primaryInExpressionAccessAST & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessListAST::method_last (GALGAS_primaryInExpressionAccessAST & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::add_operation (const GALGAS_primaryInExpressionAccessListAST & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result = GALGAS_primaryInExpressionAccessListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result = GALGAS_primaryInExpressionAccessListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result = GALGAS_primaryInExpressionAccessListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessListAST::plusAssign_operation (const GALGAS_primaryInExpressionAccessListAST inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessListAST::setter_setMAccessAtIndex (GALGAS_primaryInExpressionAccessAST inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAccess = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessListAST::getter_mAccessAtIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
  GALGAS_primaryInExpressionAccessAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    result = p->mObject.mProperty_mAccess ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_primaryInExpressionAccessListAST::cEnumerator_primaryInExpressionAccessListAST (const GALGAS_primaryInExpressionAccessListAST & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST_2D_element cEnumerator_primaryInExpressionAccessListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_primaryInExpressionAccessListAST * p = (const cCollectionElement_primaryInExpressionAccessListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST cEnumerator_primaryInExpressionAccessListAST::current_mAccess (LOCATION_ARGS) const {
  const cCollectionElement_primaryInExpressionAccessListAST * p = (const cCollectionElement_primaryInExpressionAccessListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
  return p->mObject.mProperty_mAccess ;
}




//--------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAccessListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST ("primaryInExpressionAccessListAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAccessListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListAST result ;
  const GALGAS_primaryInExpressionAccessListAST * p = (const GALGAS_primaryInExpressionAccessListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primaryInExpressionAccessListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typedConstantCallAST_2D_weak::objectCompare (const GALGAS_typedConstantCallAST_2D_weak & inOperand) const {
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

GALGAS_typedConstantCallAST_2D_weak::GALGAS_typedConstantCallAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST_2D_weak & GALGAS_typedConstantCallAST_2D_weak::operator = (const GALGAS_typedConstantCallAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST_2D_weak::GALGAS_typedConstantCallAST_2D_weak (const GALGAS_typedConstantCallAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST_2D_weak GALGAS_typedConstantCallAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_typedConstantCallAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST_2D_weak::bang_typedConstantCallAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typedConstantCallAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typedConstantCallAST) ;
      result = GALGAS_typedConstantCallAST ((cPtr_typedConstantCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typedConstantCallAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedConstantCallAST_2D_weak ("typedConstantCallAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typedConstantCallAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typedConstantCallAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedConstantCallAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedConstantCallAST_2D_weak GALGAS_typedConstantCallAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCallAST_2D_weak result ;
  const GALGAS_typedConstantCallAST_2D_weak * p = (const GALGAS_typedConstantCallAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typedConstantCallAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedConstantCallAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionAST::cPtr_ifExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mIfExpression (),
mProperty_mIfExpressionEndLocation (),
mProperty_mThenExpression (),
mProperty_mThenExpressionEndLocation (),
mProperty_mElseExpression (),
mProperty_mElseExpressionEndLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIfExpression.printNonNullClassInstanceProperties ("mIfExpression") ;
    mProperty_mIfExpressionEndLocation.printNonNullClassInstanceProperties ("mIfExpressionEndLocation") ;
    mProperty_mThenExpression.printNonNullClassInstanceProperties ("mThenExpression") ;
    mProperty_mThenExpressionEndLocation.printNonNullClassInstanceProperties ("mThenExpressionEndLocation") ;
    mProperty_mElseExpression.printNonNullClassInstanceProperties ("mElseExpression") ;
    mProperty_mElseExpressionEndLocation.printNonNullClassInstanceProperties ("mElseExpressionEndLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ifExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIfExpression.objectCompare (p->mProperty_mIfExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIfExpressionEndLocation.objectCompare (p->mProperty_mIfExpressionEndLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mThenExpression.objectCompare (p->mProperty_mThenExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mThenExpressionEndLocation.objectCompare (p->mProperty_mThenExpressionEndLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElseExpression.objectCompare (p->mProperty_mElseExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElseExpressionEndLocation.objectCompare (p->mProperty_mElseExpressionEndLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ifExpressionAST::objectCompare (const GALGAS_ifExpressionAST & inOperand) const {
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

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::
init_21__21__21__21__21__21_ (const GALGAS_expressionAST & in_mIfExpression,
                              const GALGAS_location & in_mIfExpressionEndLocation,
                              const GALGAS_expressionAST & in_mThenExpression,
                              const GALGAS_location & in_mThenExpressionEndLocation,
                              const GALGAS_expressionAST & in_mElseExpression,
                              const GALGAS_location & in_mElseExpressionEndLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_ifExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifExpressionAST (inCompiler COMMA_THERE)) ;
  object->ifExpressionAST_init_21__21__21__21__21__21_ (in_mIfExpression, in_mIfExpressionEndLocation, in_mThenExpression, in_mThenExpressionEndLocation, in_mElseExpression, in_mElseExpressionEndLocation, inCompiler) ;
  const GALGAS_ifExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::
ifExpressionAST_init_21__21__21__21__21__21_ (const GALGAS_expressionAST & in_mIfExpression,
                                              const GALGAS_location & in_mIfExpressionEndLocation,
                                              const GALGAS_expressionAST & in_mThenExpression,
                                              const GALGAS_location & in_mThenExpressionEndLocation,
                                              const GALGAS_expressionAST & in_mElseExpression,
                                              const GALGAS_location & in_mElseExpressionEndLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mIfExpressionEndLocation = in_mIfExpressionEndLocation ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mThenExpressionEndLocation = in_mThenExpressionEndLocation ;
  mProperty_mElseExpression = in_mElseExpression ;
  mProperty_mElseExpressionEndLocation = in_mElseExpressionEndLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::class_func_new (const GALGAS_expressionAST & in_mIfExpression,
                                                               const GALGAS_location & in_mIfExpressionEndLocation,
                                                               const GALGAS_expressionAST & in_mThenExpression,
                                                               const GALGAS_location & in_mThenExpressionEndLocation,
                                                               const GALGAS_expressionAST & in_mElseExpression,
                                                               const GALGAS_location & in_mElseExpressionEndLocation
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ifExpressionAST (in_mIfExpression, in_mIfExpressionEndLocation, in_mThenExpression, in_mThenExpressionEndLocation, in_mElseExpression, in_mElseExpressionEndLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_ifExpressionAST::readProperty_mIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setProperty_mIfExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mIfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifExpressionAST::readProperty_mIfExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mIfExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setProperty_mIfExpressionEndLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mIfExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_ifExpressionAST::readProperty_mThenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mThenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setProperty_mThenExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mThenExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifExpressionAST::readProperty_mThenExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mThenExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setProperty_mThenExpressionEndLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mThenExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_ifExpressionAST::readProperty_mElseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mElseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setProperty_mElseExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mElseExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifExpressionAST::readProperty_mElseExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mElseExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setProperty_mElseExpressionEndLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mElseExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionAST::cPtr_ifExpressionAST (const GALGAS_expressionAST & in_mIfExpression,
                                            const GALGAS_location & in_mIfExpressionEndLocation,
                                            const GALGAS_expressionAST & in_mThenExpression,
                                            const GALGAS_location & in_mThenExpressionEndLocation,
                                            const GALGAS_expressionAST & in_mElseExpression,
                                            const GALGAS_location & in_mElseExpressionEndLocation
                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mIfExpression (),
mProperty_mIfExpressionEndLocation (),
mProperty_mThenExpression (),
mProperty_mThenExpressionEndLocation (),
mProperty_mElseExpression (),
mProperty_mElseExpressionEndLocation () {
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mIfExpressionEndLocation = in_mIfExpressionEndLocation ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mThenExpressionEndLocation = in_mThenExpressionEndLocation ;
  mProperty_mElseExpression = in_mElseExpression ;
  mProperty_mElseExpressionEndLocation = in_mElseExpressionEndLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

void cPtr_ifExpressionAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@ifExpressionAST:") ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIfExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifExpressionAST (mProperty_mIfExpression, mProperty_mIfExpressionEndLocation, mProperty_mThenExpression, mProperty_mThenExpressionEndLocation, mProperty_mElseExpression, mProperty_mElseExpressionEndLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST ("ifExpressionAST",
                                                                       & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  const GALGAS_ifExpressionAST * p = (const GALGAS_ifExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifExpressionAST_2D_weak::objectCompare (const GALGAS_ifExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ifExpressionAST_2D_weak::GALGAS_ifExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST_2D_weak & GALGAS_ifExpressionAST_2D_weak::operator = (const GALGAS_ifExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST_2D_weak::GALGAS_ifExpressionAST_2D_weak (const GALGAS_ifExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST_2D_weak GALGAS_ifExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ifExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST GALGAS_ifExpressionAST_2D_weak::bang_ifExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifExpressionAST) ;
      result = GALGAS_ifExpressionAST ((cPtr_ifExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST_2D_weak ("ifExpressionAST-weak",
                                                                               & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST_2D_weak GALGAS_ifExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST_2D_weak result ;
  const GALGAS_ifExpressionAST_2D_weak * p = (const GALGAS_ifExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @booleanShortCircuitAndOperatorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_booleanShortCircuitAndOperatorExpressionAST::cPtr_booleanShortCircuitAndOperatorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_booleanShortCircuitAndOperatorExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_booleanShortCircuitAndOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_booleanShortCircuitAndOperatorExpressionAST::objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionAST & inOperand) const {
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

GALGAS_booleanShortCircuitAndOperatorExpressionAST::GALGAS_booleanShortCircuitAndOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::
init_21__21__21_ (const GALGAS_expressionAST & in_mLeftExpression,
                  const GALGAS_location & in_mOperatorLocation,
                  const GALGAS_expressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_booleanShortCircuitAndOperatorExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_booleanShortCircuitAndOperatorExpressionAST (inCompiler COMMA_THERE)) ;
  object->booleanShortCircuitAndOperatorExpressionAST_init_21__21__21_ (in_mLeftExpression, in_mOperatorLocation, in_mRightExpression, inCompiler) ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::
booleanShortCircuitAndOperatorExpressionAST_init_21__21__21_ (const GALGAS_expressionAST & in_mLeftExpression,
                                                              const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_expressionAST & in_mRightExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST::GALGAS_booleanShortCircuitAndOperatorExpressionAST (const cPtr_booleanShortCircuitAndOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::class_func_new (const GALGAS_expressionAST & in_mLeftExpression,
                                                                                                                       const GALGAS_location & in_mOperatorLocation,
                                                                                                                       const GALGAS_expressionAST & in_mRightExpression
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_booleanShortCircuitAndOperatorExpressionAST (in_mLeftExpression, in_mOperatorLocation, in_mRightExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_booleanShortCircuitAndOperatorExpressionAST::setProperty_mLeftExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_booleanShortCircuitAndOperatorExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_booleanShortCircuitAndOperatorExpressionAST::setProperty_mOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_booleanShortCircuitAndOperatorExpressionAST::setProperty_mRightExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @booleanShortCircuitAndOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_booleanShortCircuitAndOperatorExpressionAST::cPtr_booleanShortCircuitAndOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                                                                                    const GALGAS_location & in_mOperatorLocation,
                                                                                                    const GALGAS_expressionAST & in_mRightExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_booleanShortCircuitAndOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;
}

void cPtr_booleanShortCircuitAndOperatorExpressionAST::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@booleanShortCircuitAndOperatorExpressionAST:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_booleanShortCircuitAndOperatorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_booleanShortCircuitAndOperatorExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @booleanShortCircuitAndOperatorExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ("booleanShortCircuitAndOperatorExpressionAST",
                                                                                                   & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_booleanShortCircuitAndOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_booleanShortCircuitAndOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanShortCircuitAndOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionAST result ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST * p = (const GALGAS_booleanShortCircuitAndOperatorExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_booleanShortCircuitAndOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanShortCircuitAndOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak::objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak & inOperand) const {
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

GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak::GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak & GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak::operator = (const GALGAS_booleanShortCircuitAndOperatorExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak::GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak (const GALGAS_booleanShortCircuitAndOperatorExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak::bang_booleanShortCircuitAndOperatorExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_booleanShortCircuitAndOperatorExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
      result = GALGAS_booleanShortCircuitAndOperatorExpressionAST ((cPtr_booleanShortCircuitAndOperatorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @booleanShortCircuitAndOperatorExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak ("booleanShortCircuitAndOperatorExpressionAST-weak",
                                                                                                           & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak result ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak * p = (const GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanShortCircuitAndOperatorExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@integerSliceFieldListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_integerSliceFieldListAST : public cCollectionElement {
  public: GALGAS_integerSliceFieldListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_integerSliceFieldListAST (const GALGAS_lstring & in_mSliceWidth,
                                                       const GALGAS_expressionAST & in_mExpression,
                                                       const GALGAS_location & in_mExpressionLocation
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_integerSliceFieldListAST (const GALGAS_integerSliceFieldListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_integerSliceFieldListAST::cCollectionElement_integerSliceFieldListAST (const GALGAS_lstring & in_mSliceWidth,
                                                                                          const GALGAS_expressionAST & in_mExpression,
                                                                                          const GALGAS_location & in_mExpressionLocation
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSliceWidth, in_mExpression, in_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_integerSliceFieldListAST::cCollectionElement_integerSliceFieldListAST (const GALGAS_integerSliceFieldListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSliceWidth, inElement.mProperty_mExpression, inElement.mProperty_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_integerSliceFieldListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_integerSliceFieldListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_integerSliceFieldListAST (mObject.mProperty_mSliceWidth, mObject.mProperty_mExpression, mObject.mProperty_mExpressionLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_integerSliceFieldListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSliceWidth" ":") ;
  mObject.mProperty_mSliceWidth.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpressionLocation" ":") ;
  mObject.mProperty_mExpressionLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_integerSliceFieldListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_integerSliceFieldListAST * operand = (cCollectionElement_integerSliceFieldListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_integerSliceFieldListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST::GALGAS_integerSliceFieldListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST::GALGAS_integerSliceFieldListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST GALGAS_integerSliceFieldListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_integerSliceFieldListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST GALGAS_integerSliceFieldListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_integerSliceFieldListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::enterElement (const GALGAS_integerSliceFieldListAST_2D_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_integerSliceFieldListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST GALGAS_integerSliceFieldListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                           const GALGAS_expressionAST & inOperand1,
                                                                                           const GALGAS_location & inOperand2
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_integerSliceFieldListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_integerSliceFieldListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mSliceWidth,
                                                                 const GALGAS_expressionAST & in_mExpression,
                                                                 const GALGAS_location & in_mExpressionLocation
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_integerSliceFieldListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_integerSliceFieldListAST (in_mSliceWidth,
                                                              in_mExpression,
                                                              in_mExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_expressionAST & inOperand1,
                                                           const GALGAS_location & inOperand2
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_integerSliceFieldListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::setter_append (const GALGAS_lstring inOperand0,
                                                     const GALGAS_expressionAST inOperand1,
                                                     const GALGAS_location inOperand2,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_integerSliceFieldListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_expressionAST inOperand1,
                                                            const GALGAS_location inOperand2,
                                                            const GALGAS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_integerSliceFieldListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_integerSliceFieldListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_expressionAST & outOperand1,
                                                            GALGAS_location & outOperand2,
                                                            const GALGAS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
        outOperand0 = p->mObject.mProperty_mSliceWidth ;
        outOperand1 = p->mObject.mProperty_mExpression ;
        outOperand2 = p->mObject.mProperty_mExpressionLocation ;
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

void GALGAS_integerSliceFieldListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_expressionAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_expressionAST & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_expressionAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_expressionAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST GALGAS_integerSliceFieldListAST::add_operation (const GALGAS_integerSliceFieldListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_integerSliceFieldListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST GALGAS_integerSliceFieldListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_integerSliceFieldListAST result = GALGAS_integerSliceFieldListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST GALGAS_integerSliceFieldListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_integerSliceFieldListAST result = GALGAS_integerSliceFieldListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST GALGAS_integerSliceFieldListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_integerSliceFieldListAST result = GALGAS_integerSliceFieldListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::plusAssign_operation (const GALGAS_integerSliceFieldListAST inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::setter_setMSliceWidthAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSliceWidth = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_integerSliceFieldListAST::getter_mSliceWidthAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    result = p->mObject.mProperty_mSliceWidth ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::setter_setMExpressionAtIndex (GALGAS_expressionAST inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_integerSliceFieldListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST::setter_setMExpressionLocationAtIndex (GALGAS_location inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpressionLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_integerSliceFieldListAST::getter_mExpressionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    result = p->mObject.mProperty_mExpressionLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_integerSliceFieldListAST::cEnumerator_integerSliceFieldListAST (const GALGAS_integerSliceFieldListAST & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element cEnumerator_integerSliceFieldListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_integerSliceFieldListAST * p = (const cCollectionElement_integerSliceFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_integerSliceFieldListAST::current_mSliceWidth (LOCATION_ARGS) const {
  const cCollectionElement_integerSliceFieldListAST * p = (const cCollectionElement_integerSliceFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
  return p->mObject.mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST cEnumerator_integerSliceFieldListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_integerSliceFieldListAST * p = (const cCollectionElement_integerSliceFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_integerSliceFieldListAST::current_mExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_integerSliceFieldListAST * p = (const cCollectionElement_integerSliceFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
  return p->mObject.mProperty_mExpressionLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @integerSliceFieldListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST ("integerSliceFieldListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerSliceFieldListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceFieldListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerSliceFieldListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerSliceFieldListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST GALGAS_integerSliceFieldListAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST result ;
  const GALGAS_integerSliceFieldListAST * p = (const GALGAS_integerSliceFieldListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerSliceFieldListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceFieldListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_integerSliceExpressionAST_2D_weak::objectCompare (const GALGAS_integerSliceExpressionAST_2D_weak & inOperand) const {
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

GALGAS_integerSliceExpressionAST_2D_weak::GALGAS_integerSliceExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST_2D_weak & GALGAS_integerSliceExpressionAST_2D_weak::operator = (const GALGAS_integerSliceExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST_2D_weak::GALGAS_integerSliceExpressionAST_2D_weak (const GALGAS_integerSliceExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST_2D_weak GALGAS_integerSliceExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_integerSliceExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST_2D_weak::bang_integerSliceExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_integerSliceExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerSliceExpressionAST) ;
      result = GALGAS_integerSliceExpressionAST ((cPtr_integerSliceExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @integerSliceExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST_2D_weak ("integerSliceExpressionAST-weak",
                                                                                         & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerSliceExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerSliceExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerSliceExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceExpressionAST_2D_weak GALGAS_integerSliceExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceExpressionAST_2D_weak result ;
  const GALGAS_integerSliceExpressionAST_2D_weak * p = (const GALGAS_integerSliceExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerSliceExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_literalIntegerInExpressionAST_2D_weak::objectCompare (const GALGAS_literalIntegerInExpressionAST_2D_weak & inOperand) const {
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

GALGAS_literalIntegerInExpressionAST_2D_weak::GALGAS_literalIntegerInExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST_2D_weak & GALGAS_literalIntegerInExpressionAST_2D_weak::operator = (const GALGAS_literalIntegerInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST_2D_weak::GALGAS_literalIntegerInExpressionAST_2D_weak (const GALGAS_literalIntegerInExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST_2D_weak GALGAS_literalIntegerInExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST_2D_weak::bang_literalIntegerInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalIntegerInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalIntegerInExpressionAST) ;
      result = GALGAS_literalIntegerInExpressionAST ((cPtr_literalIntegerInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @literalIntegerInExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST_2D_weak ("literalIntegerInExpressionAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalIntegerInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalIntegerInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntegerInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntegerInExpressionAST_2D_weak GALGAS_literalIntegerInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST_2D_weak result ;
  const GALGAS_literalIntegerInExpressionAST_2D_weak * p = (const GALGAS_literalIntegerInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalIntegerInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_literalStringInExpressionAST_2D_weak::objectCompare (const GALGAS_literalStringInExpressionAST_2D_weak & inOperand) const {
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

GALGAS_literalStringInExpressionAST_2D_weak::GALGAS_literalStringInExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST_2D_weak & GALGAS_literalStringInExpressionAST_2D_weak::operator = (const GALGAS_literalStringInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST_2D_weak::GALGAS_literalStringInExpressionAST_2D_weak (const GALGAS_literalStringInExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST_2D_weak GALGAS_literalStringInExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST_2D_weak::bang_literalStringInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalStringInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringInExpressionAST) ;
      result = GALGAS_literalStringInExpressionAST ((cPtr_literalStringInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @literalStringInExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST_2D_weak ("literalStringInExpressionAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalStringInExpressionAST_2D_weak GALGAS_literalStringInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST_2D_weak result ;
  const GALGAS_literalStringInExpressionAST_2D_weak * p = (const GALGAS_literalStringInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalStringInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalBooleanInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBooleanInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_literalBooleanInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_literalBooleanInExpressionAST * p = (const cPtr_literalBooleanInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_literalBooleanInExpressionAST::objectCompare (const GALGAS_literalBooleanInExpressionAST & inOperand) const {
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

GALGAS_literalBooleanInExpressionAST::GALGAS_literalBooleanInExpressionAST (void) :
GALGAS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST::
init_21_ (const GALGAS_bool & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalBooleanInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalBooleanInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalBooleanInExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GALGAS_literalBooleanInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::
literalBooleanInExpressionAST_init_21_ (const GALGAS_bool & in_mValue,
                                        Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST::GALGAS_literalBooleanInExpressionAST (const cPtr_literalBooleanInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBooleanInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST::class_func_new (const GALGAS_bool & in_mValue
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalBooleanInExpressionAST (in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_literalBooleanInExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_literalBooleanInExpressionAST::setProperty_mValue (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBooleanInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (const GALGAS_bool & in_mValue
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalBooleanInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

void cPtr_literalBooleanInExpressionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBooleanInExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalBooleanInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBooleanInExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalBooleanInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ("literalBooleanInExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalBooleanInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalBooleanInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBooleanInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionAST result ;
  const GALGAS_literalBooleanInExpressionAST * p = (const GALGAS_literalBooleanInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalBooleanInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_literalBooleanInExpressionAST_2D_weak::objectCompare (const GALGAS_literalBooleanInExpressionAST_2D_weak & inOperand) const {
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

GALGAS_literalBooleanInExpressionAST_2D_weak::GALGAS_literalBooleanInExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST_2D_weak & GALGAS_literalBooleanInExpressionAST_2D_weak::operator = (const GALGAS_literalBooleanInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST_2D_weak::GALGAS_literalBooleanInExpressionAST_2D_weak (const GALGAS_literalBooleanInExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST_2D_weak GALGAS_literalBooleanInExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST_2D_weak::bang_literalBooleanInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalBooleanInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalBooleanInExpressionAST) ;
      result = GALGAS_literalBooleanInExpressionAST ((cPtr_literalBooleanInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @literalBooleanInExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2D_weak ("literalBooleanInExpressionAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalBooleanInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalBooleanInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBooleanInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST_2D_weak GALGAS_literalBooleanInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionAST_2D_weak result ;
  const GALGAS_literalBooleanInExpressionAST_2D_weak * p = (const GALGAS_literalBooleanInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalBooleanInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_registerInExpressionAST_2D_weak::objectCompare (const GALGAS_registerInExpressionAST_2D_weak & inOperand) const {
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

GALGAS_registerInExpressionAST_2D_weak::GALGAS_registerInExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST_2D_weak & GALGAS_registerInExpressionAST_2D_weak::operator = (const GALGAS_registerInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST_2D_weak::GALGAS_registerInExpressionAST_2D_weak (const GALGAS_registerInExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST_2D_weak GALGAS_registerInExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_registerInExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST GALGAS_registerInExpressionAST_2D_weak::bang_registerInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_registerInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_registerInExpressionAST) ;
      result = GALGAS_registerInExpressionAST ((cPtr_registerInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerInExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerInExpressionAST_2D_weak ("registerInExpressionAST-weak",
                                                                                       & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerInExpressionAST_2D_weak GALGAS_registerInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerInExpressionAST_2D_weak result ;
  const GALGAS_registerInExpressionAST_2D_weak * p = (const GALGAS_registerInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@registerIntegerFieldListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_registerIntegerFieldListAST : public cCollectionElement {
  public: GALGAS_registerIntegerFieldListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_registerIntegerFieldListAST (const GALGAS_lstring & in_mFieldName,
                                                          const GALGAS_expressionAST & in_mExpression,
                                                          const GALGAS_location & in_mExpressionLocation
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_registerIntegerFieldListAST (const GALGAS_registerIntegerFieldListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_registerIntegerFieldListAST::cCollectionElement_registerIntegerFieldListAST (const GALGAS_lstring & in_mFieldName,
                                                                                                const GALGAS_expressionAST & in_mExpression,
                                                                                                const GALGAS_location & in_mExpressionLocation
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldName, in_mExpression, in_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_registerIntegerFieldListAST::cCollectionElement_registerIntegerFieldListAST (const GALGAS_registerIntegerFieldListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFieldName, inElement.mProperty_mExpression, inElement.mProperty_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_registerIntegerFieldListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_registerIntegerFieldListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_registerIntegerFieldListAST (mObject.mProperty_mFieldName, mObject.mProperty_mExpression, mObject.mProperty_mExpressionLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_registerIntegerFieldListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFieldName" ":") ;
  mObject.mProperty_mFieldName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpressionLocation" ":") ;
  mObject.mProperty_mExpressionLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_registerIntegerFieldListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_registerIntegerFieldListAST * operand = (cCollectionElement_registerIntegerFieldListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_registerIntegerFieldListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST::GALGAS_registerIntegerFieldListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST::GALGAS_registerIntegerFieldListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerIntegerFieldListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_registerIntegerFieldListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::enterElement (const GALGAS_registerIntegerFieldListAST_2D_element & inValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                 const GALGAS_expressionAST & inOperand1,
                                                                                                 const GALGAS_location & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerIntegerFieldListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_registerIntegerFieldListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFieldName,
                                                                    const GALGAS_expressionAST & in_mExpression,
                                                                    const GALGAS_location & in_mExpressionLocation
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_registerIntegerFieldListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (in_mFieldName,
                                                                 in_mExpression,
                                                                 in_mExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_expressionAST & inOperand1,
                                                              const GALGAS_location & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::setter_append (const GALGAS_lstring inOperand0,
                                                        const GALGAS_expressionAST inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_expressionAST inOperand1,
                                                               const GALGAS_location inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_registerIntegerFieldListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_expressionAST & outOperand1,
                                                               GALGAS_location & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
        outOperand0 = p->mObject.mProperty_mFieldName ;
        outOperand1 = p->mObject.mProperty_mExpression ;
        outOperand2 = p->mObject.mProperty_mExpressionLocation ;
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

void GALGAS_registerIntegerFieldListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_expressionAST & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_expressionAST & outOperand1,
                                                         GALGAS_location & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_expressionAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_expressionAST & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::add_operation (const GALGAS_registerIntegerFieldListAST & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result = GALGAS_registerIntegerFieldListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result = GALGAS_registerIntegerFieldListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result = GALGAS_registerIntegerFieldListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::plusAssign_operation (const GALGAS_registerIntegerFieldListAST inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::setter_setMFieldNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFieldName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerIntegerFieldListAST::getter_mFieldNameAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    result = p->mObject.mProperty_mFieldName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::setter_setMExpressionAtIndex (GALGAS_expressionAST inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_registerIntegerFieldListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST::setter_setMExpressionLocationAtIndex (GALGAS_location inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpressionLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_registerIntegerFieldListAST::getter_mExpressionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    result = p->mObject.mProperty_mExpressionLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_registerIntegerFieldListAST::cEnumerator_registerIntegerFieldListAST (const GALGAS_registerIntegerFieldListAST & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element cEnumerator_registerIntegerFieldListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_registerIntegerFieldListAST::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject.mProperty_mFieldName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST cEnumerator_registerIntegerFieldListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_registerIntegerFieldListAST::current_mExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject.mProperty_mExpressionLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @registerIntegerFieldListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST ("registerIntegerFieldListAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerIntegerFieldListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST result ;
  const GALGAS_registerIntegerFieldListAST * p = (const GALGAS_registerIntegerFieldListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerIntegerFieldListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_registerConstantExpressionAST_2D_weak::objectCompare (const GALGAS_registerConstantExpressionAST_2D_weak & inOperand) const {
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

GALGAS_registerConstantExpressionAST_2D_weak::GALGAS_registerConstantExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST_2D_weak & GALGAS_registerConstantExpressionAST_2D_weak::operator = (const GALGAS_registerConstantExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST_2D_weak::GALGAS_registerConstantExpressionAST_2D_weak (const GALGAS_registerConstantExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST_2D_weak GALGAS_registerConstantExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST_2D_weak::bang_registerConstantExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_registerConstantExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_registerConstantExpressionAST) ;
      result = GALGAS_registerConstantExpressionAST ((cPtr_registerConstantExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerConstantExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST_2D_weak ("registerConstantExpressionAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerConstantExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerConstantExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerConstantExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerConstantExpressionAST_2D_weak GALGAS_registerConstantExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST_2D_weak result ;
  const GALGAS_registerConstantExpressionAST_2D_weak * p = (const GALGAS_registerConstantExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerConstantExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerConstantExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_primaryInExpressionAccessAST_property::cEnumAssociatedValues_primaryInExpressionAccessAST_property (const GALGAS_lstring inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_primaryInExpressionAccessAST_property::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_property * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_property *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice::cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice (const GALGAS_lbigint inAssociatedValue0,
                                                                                                                                  const GALGAS_lbigint inAssociatedValue1
                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *> (inOperand) ;
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

cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess::cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess (const GALGAS_expressionAST inAssociatedValue0,
                                                                                                                                const GALGAS_location inAssociatedValue1,
                                                                                                                                const GALGAS_bool inAssociatedValue2
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *> (inOperand) ;
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

cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall::cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall (const GALGAS_lstring inAssociatedValue0,
                                                                                                                          const GALGAS_effectiveArgumentListAST inAssociatedValue1,
                                                                                                                          const GALGAS_location inAssociatedValue2
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *> (inOperand) ;
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

GALGAS_primaryInExpressionAccessAST::GALGAS_primaryInExpressionAccessAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessAST::class_func_property (const GALGAS_lstring & inAssociatedValue0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_primaryInExpressionAccessAST_property (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessAST::class_func_integerSlice (const GALGAS_lbigint & inAssociatedValue0,
                                                                                                  const GALGAS_lbigint & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_integerSlice ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessAST::class_func_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                 const GALGAS_location & inAssociatedValue1,
                                                                                                 const GALGAS_bool & inAssociatedValue2
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_arrayAccess ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessAST::class_func_funcCall (const GALGAS_lstring & inAssociatedValue0,
                                                                                              const GALGAS_effectiveArgumentListAST & inAssociatedValue1,
                                                                                              const GALGAS_location & inAssociatedValue2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_funcCall ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST::method_property (GALGAS_lstring & outAssociatedValue0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @primaryInExpressionAccessAST property invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_primaryInExpressionAccessAST_property * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST::method_integerSlice (GALGAS_lbigint & outAssociatedValue0,
                                                               GALGAS_lbigint & outAssociatedValue1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_integerSlice) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @primaryInExpressionAccessAST integerSlice invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST::method_arrayAccess (GALGAS_expressionAST & outAssociatedValue0,
                                                              GALGAS_location & outAssociatedValue1,
                                                              GALGAS_bool & outAssociatedValue2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayAccess) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @primaryInExpressionAccessAST arrayAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST::method_funcCall (GALGAS_lstring & outAssociatedValue0,
                                                           GALGAS_effectiveArgumentListAST & outAssociatedValue1,
                                                           GALGAS_location & outAssociatedValue2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_funcCall) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @primaryInExpressionAccessAST funcCall invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST::optional_property (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_property ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST::optional_integerSlice (GALGAS_lbigint & outAssociatedValue0,
                                                                 GALGAS_lbigint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_integerSlice ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST::optional_arrayAccess (GALGAS_expressionAST & outAssociatedValue0,
                                                                GALGAS_location & outAssociatedValue1,
                                                                GALGAS_bool & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_arrayAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST::optional_funcCall (GALGAS_lstring & outAssociatedValue0,
                                                             GALGAS_effectiveArgumentListAST & outAssociatedValue1,
                                                             GALGAS_location & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_funcCall ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_primaryInExpressionAccessAST [5] = {
  "(not built)",
  "property",
  "integerSlice",
  "arrayAccess",
  "funcCall"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_primaryInExpressionAccessAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_primaryInExpressionAccessAST::getter_isIntegerSlice (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_integerSlice == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_primaryInExpressionAccessAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_primaryInExpressionAccessAST::getter_isFuncCall (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_funcCall == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @primaryInExpressionAccessAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_primaryInExpressionAccessAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_primaryInExpressionAccessAST::objectCompare (const GALGAS_primaryInExpressionAccessAST & inOperand) const {
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
//     @primaryInExpressionAccessAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST ("primaryInExpressionAccessAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST result ;
  const GALGAS_primaryInExpressionAccessAST * p = (const GALGAS_primaryInExpressionAccessAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primaryInExpressionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_primaryInExpressionAST_2D_weak::objectCompare (const GALGAS_primaryInExpressionAST_2D_weak & inOperand) const {
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

GALGAS_primaryInExpressionAST_2D_weak::GALGAS_primaryInExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST_2D_weak & GALGAS_primaryInExpressionAST_2D_weak::operator = (const GALGAS_primaryInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST_2D_weak::GALGAS_primaryInExpressionAST_2D_weak (const GALGAS_primaryInExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST_2D_weak GALGAS_primaryInExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_primaryInExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST_2D_weak::bang_primaryInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_primaryInExpressionAST) ;
      result = GALGAS_primaryInExpressionAST ((cPtr_primaryInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAST_2D_weak ("primaryInExpressionAST-weak",
                                                                                      & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAST_2D_weak GALGAS_primaryInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAST_2D_weak result ;
  const GALGAS_primaryInExpressionAST_2D_weak * p = (const GALGAS_primaryInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primaryInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_standaloneFunctionInExpressionAST_2D_weak::objectCompare (const GALGAS_standaloneFunctionInExpressionAST_2D_weak & inOperand) const {
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

GALGAS_standaloneFunctionInExpressionAST_2D_weak::GALGAS_standaloneFunctionInExpressionAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST_2D_weak & GALGAS_standaloneFunctionInExpressionAST_2D_weak::operator = (const GALGAS_standaloneFunctionInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST_2D_weak::GALGAS_standaloneFunctionInExpressionAST_2D_weak (const GALGAS_standaloneFunctionInExpressionAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST_2D_weak GALGAS_standaloneFunctionInExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_standaloneFunctionInExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST_2D_weak::bang_standaloneFunctionInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_standaloneFunctionInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_standaloneFunctionInExpressionAST) ;
      result = GALGAS_standaloneFunctionInExpressionAST ((cPtr_standaloneFunctionInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @standaloneFunctionInExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2D_weak ("standaloneFunctionInExpressionAST-weak",
                                                                                                 & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_standaloneFunctionInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_standaloneFunctionInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standaloneFunctionInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneFunctionInExpressionAST_2D_weak GALGAS_standaloneFunctionInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_standaloneFunctionInExpressionAST_2D_weak result ;
  const GALGAS_standaloneFunctionInExpressionAST_2D_weak * p = (const GALGAS_standaloneFunctionInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_standaloneFunctionInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneFunctionInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@functionCallEffectiveParameterListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_functionCallEffectiveParameterListAST : public cCollectionElement {
  public: GALGAS_functionCallEffectiveParameterListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_functionCallEffectiveParameterListAST (const GALGAS_lstring & in_mSelector,
                                                                    const GALGAS_expressionAST & in_mExpression
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_functionCallEffectiveParameterListAST (const GALGAS_functionCallEffectiveParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_functionCallEffectiveParameterListAST::cCollectionElement_functionCallEffectiveParameterListAST (const GALGAS_lstring & in_mSelector,
                                                                                                                    const GALGAS_expressionAST & in_mExpression
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_functionCallEffectiveParameterListAST::cCollectionElement_functionCallEffectiveParameterListAST (const GALGAS_functionCallEffectiveParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelector, inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_functionCallEffectiveParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_functionCallEffectiveParameterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_functionCallEffectiveParameterListAST (mObject.mProperty_mSelector, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_functionCallEffectiveParameterListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_functionCallEffectiveParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionCallEffectiveParameterListAST * operand = (cCollectionElement_functionCallEffectiveParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionCallEffectiveParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST::GALGAS_functionCallEffectiveParameterListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST::GALGAS_functionCallEffectiveParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST GALGAS_functionCallEffectiveParameterListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionCallEffectiveParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST GALGAS_functionCallEffectiveParameterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_functionCallEffectiveParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::enterElement (const GALGAS_functionCallEffectiveParameterListAST_2D_element & inValue,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_functionCallEffectiveParameterListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST GALGAS_functionCallEffectiveParameterListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                     const GALGAS_expressionAST & inOperand1
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionCallEffectiveParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_functionCallEffectiveParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_lstring & in_mSelector,
                                                                              const GALGAS_expressionAST & in_mExpression
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_functionCallEffectiveParameterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_functionCallEffectiveParameterListAST (in_mSelector,
                                                                           in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_expressionAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_functionCallEffectiveParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::setter_append (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_expressionAST inOperand1,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_functionCallEffectiveParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                         const GALGAS_expressionAST inOperand1,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_functionCallEffectiveParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_functionCallEffectiveParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                         GALGAS_expressionAST & outOperand1,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_functionCallEffectiveParameterListAST * p = (cCollectionElement_functionCallEffectiveParameterListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
        outOperand0 = p->mObject.mProperty_mSelector ;
        outOperand1 = p->mObject.mProperty_mExpression ;
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

void GALGAS_functionCallEffectiveParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                    GALGAS_expressionAST & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterListAST * p = (cCollectionElement_functionCallEffectiveParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                   GALGAS_expressionAST & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterListAST * p = (cCollectionElement_functionCallEffectiveParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                                 GALGAS_expressionAST & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterListAST * p = (cCollectionElement_functionCallEffectiveParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                                GALGAS_expressionAST & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterListAST * p = (cCollectionElement_functionCallEffectiveParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST GALGAS_functionCallEffectiveParameterListAST::add_operation (const GALGAS_functionCallEffectiveParameterListAST & inOperand,
                                                                                                          Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST GALGAS_functionCallEffectiveParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterListAST result = GALGAS_functionCallEffectiveParameterListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST GALGAS_functionCallEffectiveParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterListAST result = GALGAS_functionCallEffectiveParameterListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST GALGAS_functionCallEffectiveParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterListAST result = GALGAS_functionCallEffectiveParameterListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::plusAssign_operation (const GALGAS_functionCallEffectiveParameterListAST inOperand,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_functionCallEffectiveParameterListAST * p = (cCollectionElement_functionCallEffectiveParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionCallEffectiveParameterListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterListAST * p = (cCollectionElement_functionCallEffectiveParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST::setter_setMExpressionAtIndex (GALGAS_expressionAST inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_functionCallEffectiveParameterListAST * p = (cCollectionElement_functionCallEffectiveParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_functionCallEffectiveParameterListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterListAST * p = (cCollectionElement_functionCallEffectiveParameterListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_functionCallEffectiveParameterListAST::cEnumerator_functionCallEffectiveParameterListAST (const GALGAS_functionCallEffectiveParameterListAST & inEnumeratedObject,
                                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element cEnumerator_functionCallEffectiveParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_functionCallEffectiveParameterListAST * p = (const cCollectionElement_functionCallEffectiveParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_functionCallEffectiveParameterListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_functionCallEffectiveParameterListAST * p = (const cCollectionElement_functionCallEffectiveParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST cEnumerator_functionCallEffectiveParameterListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_functionCallEffectiveParameterListAST * p = (const cCollectionElement_functionCallEffectiveParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @functionCallEffectiveParameterListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST ("functionCallEffectiveParameterListAST",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST GALGAS_functionCallEffectiveParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST result ;
  const GALGAS_functionCallEffectiveParameterListAST * p = (const GALGAS_functionCallEffectiveParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionCallEffectiveParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_constructorCallAST_2D_weak::objectCompare (const GALGAS_constructorCallAST_2D_weak & inOperand) const {
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

GALGAS_constructorCallAST_2D_weak::GALGAS_constructorCallAST_2D_weak (void) :
GALGAS_expressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST_2D_weak & GALGAS_constructorCallAST_2D_weak::operator = (const GALGAS_constructorCallAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST_2D_weak::GALGAS_constructorCallAST_2D_weak (const GALGAS_constructorCallAST & inSource) :
GALGAS_expressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST_2D_weak GALGAS_constructorCallAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_constructorCallAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST GALGAS_constructorCallAST_2D_weak::bang_constructorCallAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_constructorCallAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_constructorCallAST) ;
      result = GALGAS_constructorCallAST ((cPtr_constructorCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorCallAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorCallAST_2D_weak ("constructorCallAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_expressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorCallAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorCallAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorCallAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorCallAST_2D_weak GALGAS_constructorCallAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_constructorCallAST_2D_weak result ;
  const GALGAS_constructorCallAST_2D_weak * p = (const GALGAS_constructorCallAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorCallAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorCallAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration::GALGAS_compileTimeInfixOperatorEnumeration (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_lessThan (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_lessThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseAndOp (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_bitWiseAndOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_bitWiseOrOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseXorOp (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_bitWiseXorOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_addOp (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_addOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_subOp (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_subOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_mulOp (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_mulOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_divOp (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_divOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_modOp (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_modOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_divNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_divNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_moduloNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_moduloNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_leftShift (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_leftShift ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::class_func_rightShift (UNUSED_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = kEnum_rightShift ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_lessThan () const {
  const bool ok = mEnum == kEnum_lessThan ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_bitWiseAndOp () const {
  const bool ok = mEnum == kEnum_bitWiseAndOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_bitWiseOrOp () const {
  const bool ok = mEnum == kEnum_bitWiseOrOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_bitWiseXorOp () const {
  const bool ok = mEnum == kEnum_bitWiseXorOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_addOp () const {
  const bool ok = mEnum == kEnum_addOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_subOp () const {
  const bool ok = mEnum == kEnum_subOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_mulOp () const {
  const bool ok = mEnum == kEnum_mulOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_divOp () const {
  const bool ok = mEnum == kEnum_divOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_modOp () const {
  const bool ok = mEnum == kEnum_modOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_divNoOvf () const {
  const bool ok = mEnum == kEnum_divNoOvf ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_moduloNoOvf () const {
  const bool ok = mEnum == kEnum_moduloNoOvf ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_leftShift () const {
  const bool ok = mEnum == kEnum_leftShift ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_compileTimeInfixOperatorEnumeration::optional_rightShift () const {
  const bool ok = mEnum == kEnum_rightShift ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_compileTimeInfixOperatorEnumeration [15] = {
  "(not built)",
  "equal",
  "lessThan",
  "bitWiseAndOp",
  "bitWiseOrOp",
  "bitWiseXorOp",
  "addOp",
  "subOp",
  "mulOp",
  "divOp",
  "modOp",
  "divNoOvf",
  "moduloNoOvf",
  "leftShift",
  "rightShift"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isLessThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lessThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isBitWiseAndOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseAndOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isBitWiseOrOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseOrOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isBitWiseXorOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseXorOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isAddOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isSubOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isMulOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isDivOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isModOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isDivNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isModuloNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_moduloNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isLeftShift (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_leftShift == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_compileTimeInfixOperatorEnumeration::getter_isRightShift (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rightShift == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_compileTimeInfixOperatorEnumeration::description (String & ioString,
                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @compileTimeInfixOperatorEnumeration: ") ;
  ioString.appendCString (gEnumNameArrayFor_compileTimeInfixOperatorEnumeration [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeInfixOperatorEnumeration::objectCompare (const GALGAS_compileTimeInfixOperatorEnumeration & inOperand) const {
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
//     @compileTimeInfixOperatorEnumeration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorEnumeration ("compileTimeInfixOperatorEnumeration",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeInfixOperatorEnumeration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorEnumeration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeInfixOperatorEnumeration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeInfixOperatorEnumeration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_compileTimeInfixOperatorEnumeration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorEnumeration result ;
  const GALGAS_compileTimeInfixOperatorEnumeration * p = (const GALGAS_compileTimeInfixOperatorEnumeration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeInfixOperatorEnumeration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorEnumeration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@compileTimeInfixOperatorEnumeration string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_compileTimeInfixOperatorEnumeration & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_compileTimeInfixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_compileTimeInfixOperatorEnumeration::kNotBuilt:
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_equal:
    {
      result_result = GALGAS_string ("==") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_lessThan:
    {
      result_result = GALGAS_string ("<") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseAndOp:
    {
      result_result = GALGAS_string ("&") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseOrOp:
    {
      result_result = GALGAS_string ("|") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseXorOp:
    {
      result_result = GALGAS_string ("^") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_addOp:
    {
      result_result = GALGAS_string ("+") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_subOp:
    {
      result_result = GALGAS_string ("-") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_mulOp:
    {
      result_result = GALGAS_string ("*") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_divOp:
    {
      result_result = GALGAS_string ("/") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_divNoOvf:
    {
      result_result = GALGAS_string ("!&") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_modOp:
    {
      result_result = GALGAS_string ("%") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_moduloNoOvf:
    {
      result_result = GALGAS_string ("!%") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_leftShift:
    {
      result_result = GALGAS_string ("<<") ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_rightShift:
    {
      result_result = GALGAS_string (">>") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@compileTimeInfixOperatorEnumeration omnibusInfixOperator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator extensionGetter_omnibusInfixOperator (const GALGAS_compileTimeInfixOperatorEnumeration & inObject,
                                                                  Compiler *
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result_result ; // Returned variable
  const GALGAS_compileTimeInfixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_compileTimeInfixOperatorEnumeration::kNotBuilt:
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_equal:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 50)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_lessThan:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 51)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseAndOp:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 52)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseOrOp:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 53)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseXorOp:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 54)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_addOp:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 55)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_subOp:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 56)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_mulOp:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 57)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_divOp:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 58)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_divNoOvf:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 59)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_modOp:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 60)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_moduloNoOvf:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 61)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_leftShift:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 62)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_rightShift:
    {
      result_result = GALGAS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 63)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeInfixOperatorAST_2D_weak::objectCompare (const GALGAS_compileTimeInfixOperatorAST_2D_weak & inOperand) const {
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

GALGAS_compileTimeInfixOperatorAST_2D_weak::GALGAS_compileTimeInfixOperatorAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST_2D_weak & GALGAS_compileTimeInfixOperatorAST_2D_weak::operator = (const GALGAS_compileTimeInfixOperatorAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST_2D_weak::GALGAS_compileTimeInfixOperatorAST_2D_weak (const GALGAS_compileTimeInfixOperatorAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST_2D_weak GALGAS_compileTimeInfixOperatorAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST GALGAS_compileTimeInfixOperatorAST_2D_weak::bang_compileTimeInfixOperatorAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeInfixOperatorAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeInfixOperatorAST) ;
      result = GALGAS_compileTimeInfixOperatorAST ((cPtr_compileTimeInfixOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixOperatorAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST_2D_weak ("compileTimeInfixOperatorAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeInfixOperatorAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeInfixOperatorAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeInfixOperatorAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorAST_2D_weak GALGAS_compileTimeInfixOperatorAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorAST_2D_weak result ;
  const GALGAS_compileTimeInfixOperatorAST_2D_weak * p = (const GALGAS_compileTimeInfixOperatorAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeInfixOperatorAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeInfixOperatorUsage_2D_weak::objectCompare (const GALGAS_compileTimeInfixOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_compileTimeInfixOperatorUsage_2D_weak::GALGAS_compileTimeInfixOperatorUsage_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage_2D_weak & GALGAS_compileTimeInfixOperatorUsage_2D_weak::operator = (const GALGAS_compileTimeInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage_2D_weak::GALGAS_compileTimeInfixOperatorUsage_2D_weak (const GALGAS_compileTimeInfixOperatorUsage & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage_2D_weak GALGAS_compileTimeInfixOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage GALGAS_compileTimeInfixOperatorUsage_2D_weak::bang_compileTimeInfixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeInfixOperatorUsage) ;
      result = GALGAS_compileTimeInfixOperatorUsage ((cPtr_compileTimeInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage_2D_weak ("compileTimeInfixOperatorUsage-weak",
                                                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeInfixOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeInfixOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeInfixOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorUsage_2D_weak GALGAS_compileTimeInfixOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixOperatorUsage_2D_weak result ;
  const GALGAS_compileTimeInfixOperatorUsage_2D_weak * p = (const GALGAS_compileTimeInfixOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeInfixOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak::objectCompare (const GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak::GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak & GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak::operator = (const GALGAS_compileTimeInfixInfEqualOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak::GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak (const GALGAS_compileTimeInfixInfEqualOperatorUsage & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak::bang_compileTimeInfixInfEqualOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeInfixInfEqualOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
      result = GALGAS_compileTimeInfixInfEqualOperatorUsage ((cPtr_compileTimeInfixInfEqualOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixInfEqualOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak ("compileTimeInfixInfEqualOperatorUsage-weak",
                                                                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak result ;
  const GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak * p = (const GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixInfEqualOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator::GALGAS_omnibusInfixOperator (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_lessThan (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_lessThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_infEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_infEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_bitWiseAndOp (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_bitWiseAndOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_bitWiseOrOp (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_bitWiseOrOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_bitWiseXorOp (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_bitWiseXorOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_addOp (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_addOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_addOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_addOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_subOp (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_subOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_subOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_subOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_mulOp (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_mulOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_mulOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_mulOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_divOp (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_divOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_divOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_divOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_modOp (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_modOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_modOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_modOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_leftShiftOp (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_leftShiftOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::class_func_rightShiftOp (UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  result.mEnum = kEnum_rightShiftOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_lessThan () const {
  const bool ok = mEnum == kEnum_lessThan ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_infEqual () const {
  const bool ok = mEnum == kEnum_infEqual ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_bitWiseAndOp () const {
  const bool ok = mEnum == kEnum_bitWiseAndOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_bitWiseOrOp () const {
  const bool ok = mEnum == kEnum_bitWiseOrOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_bitWiseXorOp () const {
  const bool ok = mEnum == kEnum_bitWiseXorOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_addOp () const {
  const bool ok = mEnum == kEnum_addOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_addOpNoOvf () const {
  const bool ok = mEnum == kEnum_addOpNoOvf ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_subOp () const {
  const bool ok = mEnum == kEnum_subOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_subOpNoOvf () const {
  const bool ok = mEnum == kEnum_subOpNoOvf ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_mulOp () const {
  const bool ok = mEnum == kEnum_mulOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_mulOpNoOvf () const {
  const bool ok = mEnum == kEnum_mulOpNoOvf ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_divOp () const {
  const bool ok = mEnum == kEnum_divOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_divOpNoOvf () const {
  const bool ok = mEnum == kEnum_divOpNoOvf ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_modOp () const {
  const bool ok = mEnum == kEnum_modOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_modOpNoOvf () const {
  const bool ok = mEnum == kEnum_modOpNoOvf ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_leftShiftOp () const {
  const bool ok = mEnum == kEnum_leftShiftOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusInfixOperator::optional_rightShiftOp () const {
  const bool ok = mEnum == kEnum_rightShiftOp ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_omnibusInfixOperator [19] = {
  "(not built)",
  "equal",
  "lessThan",
  "infEqual",
  "bitWiseAndOp",
  "bitWiseOrOp",
  "bitWiseXorOp",
  "addOp",
  "addOpNoOvf",
  "subOp",
  "subOpNoOvf",
  "mulOp",
  "mulOpNoOvf",
  "divOp",
  "divOpNoOvf",
  "modOp",
  "modOpNoOvf",
  "leftShiftOp",
  "rightShiftOp"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isLessThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lessThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isInfEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_infEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isBitWiseAndOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseAndOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isBitWiseOrOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseOrOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isBitWiseXorOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseXorOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isAddOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isAddOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isSubOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isSubOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isMulOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isMulOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isDivOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isDivOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isModOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isModOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isLeftShiftOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_leftShiftOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusInfixOperator::getter_isRightShiftOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rightShiftOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_omnibusInfixOperator::description (String & ioString,
                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @omnibusInfixOperator: ") ;
  ioString.appendCString (gEnumNameArrayFor_omnibusInfixOperator [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_omnibusInfixOperator::objectCompare (const GALGAS_omnibusInfixOperator & inOperand) const {
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
//     @omnibusInfixOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperator ("omnibusInfixOperator",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusInfixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusInfixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusInfixOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperator GALGAS_omnibusInfixOperator::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperator result ;
  const GALGAS_omnibusInfixOperator * p = (const GALGAS_omnibusInfixOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_omnibusInfixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@genericFormalParameterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_genericFormalParameterList : public cCollectionElement {
  public: GALGAS_genericFormalParameterList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_genericFormalParameterList (const GALGAS_genericFormalParameter & in_mParameter
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_genericFormalParameterList (const GALGAS_genericFormalParameterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_genericFormalParameterList::cCollectionElement_genericFormalParameterList (const GALGAS_genericFormalParameter & in_mParameter
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_genericFormalParameterList::cCollectionElement_genericFormalParameterList (const GALGAS_genericFormalParameterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_genericFormalParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_genericFormalParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_genericFormalParameterList (mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_genericFormalParameterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameter" ":") ;
  mObject.mProperty_mParameter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_genericFormalParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_genericFormalParameterList * operand = (cCollectionElement_genericFormalParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_genericFormalParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList::GALGAS_genericFormalParameterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList::GALGAS_genericFormalParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_genericFormalParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_genericFormalParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_genericFormalParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_genericFormalParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameterList::enterElement (const GALGAS_genericFormalParameterList_2D_element & inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_genericFormalParameterList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_genericFormalParameterList::class_func_listWithValue (const GALGAS_genericFormalParameter & inOperand0
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_genericFormalParameterList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_genericFormalParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_genericFormalParameterList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_genericFormalParameter & in_mParameter
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_genericFormalParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_genericFormalParameterList (in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameterList::addAssign_operation (const GALGAS_genericFormalParameter & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_genericFormalParameterList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameterList::setter_append (const GALGAS_genericFormalParameter inOperand0,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_genericFormalParameterList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameterList::setter_insertAtIndex (const GALGAS_genericFormalParameter inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_genericFormalParameterList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_genericFormalParameterList::setter_removeAtIndex (GALGAS_genericFormalParameter & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_genericFormalParameterList * p = (cCollectionElement_genericFormalParameterList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_genericFormalParameterList) ;
        outOperand0 = p->mObject.mProperty_mParameter ;
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

void GALGAS_genericFormalParameterList::setter_popFirst (GALGAS_genericFormalParameter & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_genericFormalParameterList * p = (cCollectionElement_genericFormalParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_genericFormalParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameterList::setter_popLast (GALGAS_genericFormalParameter & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_genericFormalParameterList * p = (cCollectionElement_genericFormalParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_genericFormalParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameterList::method_first (GALGAS_genericFormalParameter & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_genericFormalParameterList * p = (cCollectionElement_genericFormalParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_genericFormalParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameterList::method_last (GALGAS_genericFormalParameter & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_genericFormalParameterList * p = (cCollectionElement_genericFormalParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_genericFormalParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_genericFormalParameterList::add_operation (const GALGAS_genericFormalParameterList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_genericFormalParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_genericFormalParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_genericFormalParameterList result = GALGAS_genericFormalParameterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_genericFormalParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_genericFormalParameterList result = GALGAS_genericFormalParameterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_genericFormalParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_genericFormalParameterList result = GALGAS_genericFormalParameterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameterList::plusAssign_operation (const GALGAS_genericFormalParameterList inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameterList::setter_setMParameterAtIndex (GALGAS_genericFormalParameter inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_genericFormalParameterList * p = (cCollectionElement_genericFormalParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_genericFormalParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter GALGAS_genericFormalParameterList::getter_mParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_genericFormalParameterList * p = (cCollectionElement_genericFormalParameterList *) attributes.ptr () ;
  GALGAS_genericFormalParameter result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_genericFormalParameterList) ;
    result = p->mObject.mProperty_mParameter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_genericFormalParameterList::cEnumerator_genericFormalParameterList (const GALGAS_genericFormalParameterList & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList_2D_element cEnumerator_genericFormalParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_genericFormalParameterList * p = (const cCollectionElement_genericFormalParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_genericFormalParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter cEnumerator_genericFormalParameterList::current_mParameter (LOCATION_ARGS) const {
  const cCollectionElement_genericFormalParameterList * p = (const cCollectionElement_genericFormalParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_genericFormalParameterList) ;
  return p->mObject.mProperty_mParameter ;
}




//--------------------------------------------------------------------------------------------------
//
//     @genericFormalParameterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameterList ("genericFormalParameterList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericFormalParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericFormalParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericFormalParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_genericFormalParameterList::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_genericFormalParameterList result ;
  const GALGAS_genericFormalParameterList * p = (const GALGAS_genericFormalParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericFormalParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmInfixOperatorAST_2D_weak::objectCompare (const GALGAS_llvmInfixOperatorAST_2D_weak & inOperand) const {
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

GALGAS_llvmInfixOperatorAST_2D_weak::GALGAS_llvmInfixOperatorAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST_2D_weak & GALGAS_llvmInfixOperatorAST_2D_weak::operator = (const GALGAS_llvmInfixOperatorAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST_2D_weak::GALGAS_llvmInfixOperatorAST_2D_weak (const GALGAS_llvmInfixOperatorAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST_2D_weak GALGAS_llvmInfixOperatorAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmInfixOperatorAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST GALGAS_llvmInfixOperatorAST_2D_weak::bang_llvmInfixOperatorAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmInfixOperatorAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmInfixOperatorAST) ;
      result = GALGAS_llvmInfixOperatorAST ((cPtr_llvmInfixOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmInfixOperatorAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorAST_2D_weak ("llvmInfixOperatorAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmInfixOperatorAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmInfixOperatorAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmInfixOperatorAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorAST_2D_weak GALGAS_llvmInfixOperatorAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmInfixOperatorAST_2D_weak result ;
  const GALGAS_llvmInfixOperatorAST_2D_weak * p = (const GALGAS_llvmInfixOperatorAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmInfixOperatorAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInfixOperatorAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmInfixOperatorUsage_2D_weak::objectCompare (const GALGAS_llvmInfixOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_llvmInfixOperatorUsage_2D_weak::GALGAS_llvmInfixOperatorUsage_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage_2D_weak & GALGAS_llvmInfixOperatorUsage_2D_weak::operator = (const GALGAS_llvmInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage_2D_weak::GALGAS_llvmInfixOperatorUsage_2D_weak (const GALGAS_llvmInfixOperatorUsage & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage_2D_weak GALGAS_llvmInfixOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmInfixOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage GALGAS_llvmInfixOperatorUsage_2D_weak::bang_llvmInfixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmInfixOperatorUsage) ;
      result = GALGAS_llvmInfixOperatorUsage ((cPtr_llvmInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmInfixOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2D_weak ("llvmInfixOperatorUsage-weak",
                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmInfixOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmInfixOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmInfixOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInfixOperatorUsage_2D_weak GALGAS_llvmInfixOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_llvmInfixOperatorUsage_2D_weak result ;
  const GALGAS_llvmInfixOperatorUsage_2D_weak * p = (const GALGAS_llvmInfixOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmInfixOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInfixOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmInlineInfixOperatorUsage_2D_weak::objectCompare (const GALGAS_llvmInlineInfixOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_llvmInlineInfixOperatorUsage_2D_weak::GALGAS_llvmInlineInfixOperatorUsage_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage_2D_weak & GALGAS_llvmInlineInfixOperatorUsage_2D_weak::operator = (const GALGAS_llvmInlineInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage_2D_weak::GALGAS_llvmInlineInfixOperatorUsage_2D_weak (const GALGAS_llvmInlineInfixOperatorUsage & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage_2D_weak GALGAS_llvmInlineInfixOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmInlineInfixOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage GALGAS_llvmInlineInfixOperatorUsage_2D_weak::bang_llvmInlineInfixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmInlineInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmInlineInfixOperatorUsage) ;
      result = GALGAS_llvmInlineInfixOperatorUsage ((cPtr_llvmInlineInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmInlineInfixOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage_2D_weak ("llvmInlineInfixOperatorUsage-weak",
                                                                                            & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmInlineInfixOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmInlineInfixOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmInlineInfixOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmInlineInfixOperatorUsage_2D_weak GALGAS_llvmInlineInfixOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmInlineInfixOperatorUsage_2D_weak result ;
  const GALGAS_llvmInlineInfixOperatorUsage_2D_weak * p = (const GALGAS_llvmInlineInfixOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmInlineInfixOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInlineInfixOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

